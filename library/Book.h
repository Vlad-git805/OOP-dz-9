#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string name;
	string author;
	string publishing;
	int year;
	int rating;
public:
	Book();
	Book(string name, string author, string publishing, int year, int rating);
	void PringInfo()const;
	const string GetName() const;
	const string GetAuthor() const;
	const string GetPublishing() const;
	const int GetYear() const;
	const int GetRating() const;
	Book& operator=(const Book& other);
	~Book();

	friend class Library;
};

