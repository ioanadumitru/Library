#include "Book.h"

Book::Book()
{
	title = "";
	author = "";
	bookCode = "";
	state = false;
}

Book::Book(string t, string a)
{
	title = t;
	author = a;
	state = false;
	bookCode = Utils::GenerateRandomCode(65, 122, 15);
}

void Book::SetBookCode(string code)
{
	bookCode = code;
}

string Book::GetBookCode()
{
	return bookCode;
}

bool Book::GetStatus()
{
	return state;
}

void Book::SetStatus(bool s)
{
	state = s;
}

void Book::PrintBook()
{
	if (!state)
		cout << author << " " << title << ", " << "Disponibil " << endl << "Cod carte: " << bookCode << endl;
}

string Book::GetBookName()
{
	return this->title;
}

string Book::GetBookAuthor()
{
	return author;
}
