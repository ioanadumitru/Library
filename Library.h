#pragma once
#include"Book.h"
#include<vector>
#include<string>
using namespace std;

class Library
{
	vector<Book> books;
	static Library* instance;
	Library()
	{
		books.reserve(1000);
	}
	Library(const Library &);
	vector<Book> GetBookName(string name);
public:
	void AddBook(Book newBook)
	{
		books.push_back(newBook);
	}
	static Library* GetInstance();
	void PrintAvailableBooks(string authorName);
    void PrintAvailableBooks();
	~Library()
	{
		delete instance;
	}
};
