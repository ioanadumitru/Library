#include<iostream>
#include"Library.h"
#include"ReaderManager.h"
#include"ManagerImprumut.h"
#include"Algo.h"
#include"Polimorfism.h"
int number = 45;

int main()
{
	Library *l = Library::GetInstance();
	Book p1("Introduction to c++", "Stan Costin");
	l->AddBook(p1);
	Book p2("How to program C++", "Deitel");
	l->AddBook(p2);
	Book p3("Java how to program", "Deitel");
	l->AddBook(p3);
	Book p4("C: How to program", "Deitel");
	l->AddBook(p4);

	p1.PrintBook();
	Reader r1("Ioana", "Dumitru");
	r1.PrintReader();

	l->PrintAvailableBooks();

	FisaImprumut f(r1);

	ManagerImprumut *m = ManagerImprumut::GetInstance();
	m->AdaugaFisaImprumut(f);
	FisaImprumut ft = m->GetFisa(r1);
	Data d1(24, 9, 2016);
	ft.ImprumutCarte(p2, &d1);
	
	cout << ft;
	ft.PrintCartiImprumutate();

	vector<int> luni;
	
	luni.push_back(31);
	luni.push_back(28);
	luni.push_back(31);
	luni.push_back(30);
	luni.push_back(31);
	luni.push_back(30);
	luni.push_back(31);
	luni.push_back(31);
	luni.push_back(30);
	luni.push_back(31);
	luni.push_back(30);
	luni.push_back(31);
	luni.push_back(0);

	Algo::QuickSort(0, luni.size(), luni);
	Algo::PrintVector<int>(luni);


	//Algo::InsertionSort(luni);
///	Algo::SelectionSort<int>(luni);
//	Algo::PrintVector<int>(luni);

	Reader r2("Ioana", "Stan");
	Reader r3("Costin", "Stan");
	Reader r4("Florentina", "Dumitru");
	Reader r5("Florentina", "Pascu");
	Reader r6("Alexandru", "Pascu");
	Reader r7("Camelia", "Stan");
	Reader r8("Iuliana", "Neacsu");
	Reader r9("Razvan", "Neacsu");
	vector<Reader> readers;
	readers.push_back(r1);
	readers.push_back(r2);
	readers.push_back(r3);
	readers.push_back(r5);
	readers.push_back(r4);
	
	readers.push_back(r6);
	readers.push_back(r7);
	readers.push_back(r8);
	readers.push_back(r9);

//	Algo::InsertionSort<Reader>(readers);
	Algo::PrintVector<Reader>(readers);

	Algo::QuickSort<Reader>(0, readers.size(), readers);
	Algo::PrintVector<Reader>(readers);
	
	vector<int> a = { 1, 1, 3, 7, 7, 8, 9, 9, 9, 10 }; 

	Algo::RemoveDuplicates<int>(a);
	Algo::PrintVector<int>(a);



	system("pause");
	return 0;
}