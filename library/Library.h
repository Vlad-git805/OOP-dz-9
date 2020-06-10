#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Library
{
private:
	Book * books;
	int bookscount;
public:
	Library();
	Library(const Library& other);
	void AddBook(const Book &b);
	void ShowBooks()const;
	void SortByName();
	void SortByYear();
	void SortByRating();
	void PrintByName(const string name)const;
	void PrintByAuthor(const string author)const;
	void PrintByPublishing(const string publishing)const;
	void PrintByYear(const int year)const;
	void PrintByRating(const int rating)const;
	void PrintByName_Part(const string part_name)const;
	void PrintByAuthor_Part(const string part_author)const;
	void PrintByPublishing_Part(const string part_Publishing)const;
	~Library();
};

