#pragma once
#pragma once
#include<iostream>
using namespace std;

class Data
{
	int zi;
	int luna;
	int an;
	int luni[13];
	void initLuni()
	{
		luni[0] = 0;
		luni[1] = 31;
		luni[2] = 28;
		luni[3] = 31;
		luni[4] = 30;
		luni[5] = 31;
		luni[6] = 30;
		luni[7] = 31;
		luni[8] = 31;
		luni[9] = 30;
		luni[10] = 31;
		luni[11] = 30;
		luni[12] = 31;
	}

public:
	Data(int z, int l, int a)
	{
		zi = z;
		luna = l;
		an = a;
		initLuni();
	}
	Data* getData(int nrZile)
	{
		int l = luna;
		int a = an;
		int val = zi + nrZile - 1;

		if (luna == 2 && an % 4 == 0)
			luni[luna] += 1;

		if (val > luni[luna])
		{
			int dif = val - luni[luna];
			val = dif;
			l += 1;
			if (luna == 12)
			{
				a += 1;
				l = 1;
			}
		}
		return new Data(val, l, a);
	}
	void AfisareData()
	{
		cout << zi << " " << luna << " " << an << endl;
	}

	friend ostream& operator<<(ostream &out, const Data &d)
	{
		out << d.zi << " " << d.luna << " " << d.an << endl;
		return out;
	}
};
