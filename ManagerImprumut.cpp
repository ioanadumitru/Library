#include "ManagerImprumut.h"

ManagerImprumut* ManagerImprumut::instance = NULL;

void ManagerImprumut::AdaugaFisaImprumut(FisaImprumut f)
{
	totalFise.push_back(f);
}

FisaImprumut ManagerImprumut::GetFisa(Reader r)
{
	for (auto it = totalFise.begin(); it != totalFise.end(); it++)
		if (it->GetReader() == r)
			return *it;
}
