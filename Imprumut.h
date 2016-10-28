#pragma once
#include"Reader.h"
#include"Book.h"
#include<vector>
#include"Date.h"
class FisaImprumut
{
	Reader r;
	vector<Book> carti;
	Data *inceput;
	Data *retur;
public:
	FisaImprumut(Reader r);
	void CreareFisa(Reader &r)
	{
		this->r = r;
	}

	Reader GetReader()
	{
		return r;
	}
	void PrintCartiImprumutate()
	{
		for (auto it = carti.begin(); it != carti.end(); it++)
		{
			cout << (*it);
		}
	}
	void ImprumutCarte(Book b, Data *d);
	void RestituireCarte(string code);
	friend ostream& operator<<(ostream &out, const FisaImprumut &f)
	{
		out << f.r << endl;
		out << *(f.inceput) << endl;
		//f.PrintCartiImprumutate();
		out << *f.retur << endl;
		return out;
	}
};