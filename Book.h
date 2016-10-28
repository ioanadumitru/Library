#pragma once
#include <string>
#include<iostream>
#include"Utils.h"
using namespace std;

class Book
{
	string title;
	string author;
	string bookCode;
	bool state;
public:
	Book();
	Book(string t, string a);
	void SetBookCode(string code);
	string GetBookCode();
	bool GetStatus();
	void SetStatus(bool s);
	void PrintBook();
	string GetBookName();
	string GetBookAuthor();
	friend ostream& operator<<(ostream &out, const Book &b) 
	{
		cout << b.author << " " << b.title<<" " << b.bookCode << endl;
		return out;
	}
};