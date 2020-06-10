#include "Library.h"

Library::Library() : books(nullptr), bookscount(0){}

Library::Library(const Library& other)
{
	this->bookscount = other.bookscount;
	this->books = new Book[bookscount];
	for (int i = 0; i < bookscount; i++)
	{
		this->books[i] = other.books[i];
	}
}

void Library::AddBook(const Book &b)
{
	Book *temp = new Book[bookscount + 1];
	for (int i = 0; i < bookscount; i++)
	{
		temp[i] = this->books[i];
	}
	temp[bookscount] = b;
	delete[]books;
	bookscount++;
	books = temp;
}

void Library::ShowBooks()const
{
	for (int i = 0; i < bookscount; i++)
	{
		books[i].PringInfo();
	}
}

void Library::SortByName()
{
	//Book tmp;
	int x = 0;
	for (int i = bookscount - 1; i >= x; i--)
	{
		for (int j = bookscount - 1; j >= x; j--)
		{
			if (books[j].GetName() < books[j - 1].GetName())
			{
				swap(books[j- 1], books[j]);
			}
		}
		x++;
	}
}

void Library::SortByYear()
{
	Book tmp;
	int x = 0;
	for (int i = bookscount - 1; i >= x; i--)
	{
		for (int j = bookscount - 1; j >= x; j--)
		{
			if (books[j].GetYear() < books[j - 1].GetYear())
			{
				swap(books[j - 1], books[j]);
			}
		}
		x++;
	}
}

void Library::SortByRating()
{
	Book tmp;
	int x = 0;
	for (int i = bookscount - 1; i >= x; i--)
	{
		for (int j = bookscount - 1; j >= x; j--)
		{
			if (books[j].GetRating() < books[j - 1].GetRating())
			{
				swap(books[j - 1], books[j]);
			}
		}
		x++;
	}
}

void Library::PrintByName(const string name) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetName() == name)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByAuthor(const string author) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetAuthor() == author)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByPublishing(const string publishing) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetPublishing() == publishing)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByYear(const int year) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetYear() == year)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByRating(const int rating) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetRating() == rating)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByName_Part(const string part_name) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetName().find(part_name) != string::npos)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByAuthor_Part(const string part_author) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetAuthor().find(part_author) != string::npos)
		{
			books[i].PringInfo();
		}
	}
}

void Library::PrintByPublishing_Part(const string part_Publishing) const
{
	for (int i = 0; i < bookscount; i++)
	{
		if (books[i].GetPublishing().find(part_Publishing) != string::npos)
		{
			books[i].PringInfo();
		}
	}
}

Library::~Library() 
{
	if (books != nullptr)
		delete[]books;
}
