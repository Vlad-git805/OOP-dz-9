#include "Book.h"

Book::Book() : name(""), author(""), publishing(""), year(0), rating(0) {}

Book::Book(string name, string author, string publishing, int year, int rating) 
{
	this->name = name;
	this->author = author;
	this->publishing = publishing;
	this->year = year;
	this->rating = rating;
}

void Book::PringInfo()const
{
	cout << "Name: " << name << ";\t Author: " << author << ";\t Publishing: " << publishing << ";\t Year: " << year << ";\t Rating" << rating <<";"<< endl;
}

const string Book::GetName() const
{
	return this->name;
}

const string Book::GetAuthor() const
{
	return this->author;
}

const string Book::GetPublishing() const
{
	return this->publishing;
}

const int Book::GetYear() const
{
	return this->year;
}

const int Book::GetRating()const
{
	return this->rating;
}

Book & Book::operator=(const Book & other)
{
	if (this == &other)
		return *this;

	name = other.name;
	author = other.author;
	publishing = other.publishing;
	year = other.year;
	rating = other.rating;
	return *this;
}

Book::~Book()
{
}
