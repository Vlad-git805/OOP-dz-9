#include <iostream>
#include "Book.h"
#include "Library.h"
using namespace std;

int main()
{

	Book bk1("lol", "wtf", "pzdc", 1999, 150);
	Book bk2("mox", "qweqwe", "mdaa", 2005, 200);
	Book bk3("som", "ccccccc", "alo", 1500, 300);
	Book bk4("qwe", "vvvv", "alo", 123, 1);
	Book bk5("asd", "bbbbb", "alo", 4569, 2);
	Book bk6("zxc", "iiiiii", "alo", 5869, 123456);

	Library lb;
	lb.AddBook(bk3);
	lb.AddBook(bk1);
	lb.AddBook(bk2);
	lb.AddBook(bk4);
	lb.AddBook(bk5);
	lb.AddBook(bk6);

	lb.ShowBooks();
	cout << endl;
	lb.SortByName();
	lb.ShowBooks();
	cout << endl;
	lb.PrintByName_Part("qwe");
	system("pause");
	return 0;
}