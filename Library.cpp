#include"Library.h"


Library* Library::instance = NULL;

Library* Library::GetInstance()
{
	if (instance == NULL)
		instance = new Library();

	return instance;
}

void Library::PrintAvailableBooks(string name)
{
	vector<Book> availabile(GetBookName(name));

	for (int i = 0; i < availabile.size(); i++)
		availabile[i].PrintBook();
}

vector<Book> Library::GetBookName(string name)
{
	vector<Book> b;
	for (int i = 0; i < books.size(); i++)
		if (books[i].GetBookAuthor() == name && books[i].GetStatus())
			b.push_back(books[i]);

	return b;
}

void Library::PrintAvailableBooks()
{
	for (auto it = books.begin(); it != books.end(); it++)
	{
		cout << (*it) << endl;
	}
}