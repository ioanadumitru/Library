#pragma once
#include<vector>
#include<iostream>
#include<set>
#include"Reader.h"
using namespace std;

class Algo
{
public:
	template <typename T>
	static void RemoveDuplicates(vector<T> &arr)
	{
		set<int> aset;
		for (int i = 0; i < arr.size(); i++)
		{
			aset.insert(arr[i]);
		}

		arr.clear();
		arr.reserve(aset.size());
		for (set<int>::iterator it = aset.begin(); it != aset.end(); it++)
			arr.push_back(*it);
	}

	template <typename T>
	static void InsertionSort(vector<T> &a)
	{
		for (int i = 1; i < a.size(); i++)
		{
			int k = i - 1;
			int p = i;
			while (k >= 0 && a[k]>a[p])
			{
				swap(a[k], a[p]);
				p = k;
				k--;
			}
		}
	}

	template <typename T>
	static int Min(int min, int max, const vector<T> a)
	{
		int m = min;
		for (int i = min; i < max; i++)
		{
			if (a[i] < a[m])
				m = i;
		}
		return m;
	}

	template <typename T>
	static void SelectionSort(vector<T> &a)
	{
		int n = a.size();
		int m = Algo::Min(0, n, a);
		swap(a[0], a[m]);

		for (int i = 1; i < n; i++)
		{
			m = Algo::Min(i, n, a);
			if(i!=m)
			swap(a[i], a[m]);
		}
	}

	template <typename T>
	static void PrintVector(const vector<T> &a) 
	{
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << " ";
		cout << endl;
	}

	template <typename T>
	static void PrintArray(const T *a, int size)
	{
		for (int i = 0; i < size; i++)
			cout << a[i] << " ";
		cout << endl;
	}


	template<typename T>
	static int Partition(int start, int end, vector<T> &a)
	{
		int i = start;
		for (int j = i; j < end - 1; j++)
		{
			if (a[j] <= a[end - 1])
			{
				swap(a[i], a[j]);
				++i;
			}
		}
		swap(a[i], a[end - 1]);
		return i;
	}

	template<typename T>
	static void QuickSort(int i, int j, vector<T> &a)
	{
		if (j-i>1)
		{
			int k = Partition(i, j, a);
			QuickSort(i, k, a);
			QuickSort(k+1, j, a);
		}
	}

};