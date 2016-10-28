#include "Imprumut.h"

FisaImprumut::FisaImprumut(Reader r)
{
	this->r = r;
}

void FisaImprumut::ImprumutCarte(Book b, Data *d)
{
	b.SetStatus(false);
	carti.push_back(b);
	inceput = d;
	retur = inceput->getData(30);
}

void FisaImprumut::RestituireCarte(string code)
{
	for (auto it = carti.begin(); it != carti.end(); it++)
		if (it->GetBookCode() == code)
		{
			it->SetStatus(true);
			carti.erase(it);
		}
}
