#include "Reader.h"
#include"Utils.h"
Reader::Reader()
{
	firstName = " ";
	surName = " ";
	readerCode = "";
}

Reader::Reader(string f, string s, string c)
{
	firstName = f;
	surName = s;
	readerCode = c;
}

Reader::Reader(string firstName, string lastName)
{
	this->firstName = firstName;
	this->surName = lastName;
	readerCode = Utils::GenerateRandomCode(65, 122, 10);
}

void Reader::SetCode(string code)
{
	readerCode = code;
}

string Reader::GetCode()
{
	return readerCode;
}

void Reader::PrintReader()
{
	cout << firstName << " " << surName << " " << readerCode << endl;
}
