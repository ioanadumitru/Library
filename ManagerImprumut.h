#pragma once
#include"Imprumut.h"

class ManagerImprumut
{
	vector<FisaImprumut> totalFise;
	static ManagerImprumut *instance;
	ManagerImprumut()
	{

	}
	ManagerImprumut(const ManagerImprumut& m);
public:
	void AdaugaFisaImprumut(FisaImprumut f);
	FisaImprumut GetFisa(Reader r);
	static ManagerImprumut* GetInstance()
	{
		if (instance == NULL)
			return new ManagerImprumut();
		return instance;
	}
	~ManagerImprumut()
	{
		delete instance;
	}
};
