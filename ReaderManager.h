#pragma once
#include"Reader.h"
#include<vector>

class ReaderManager
{
	vector<Reader> readers;
	static ReaderManager *instance;
	ReaderManager()
	{

	}
	ReaderManager(const ReaderManager &);
public:
	void AddReader(Reader r)
	{
		readers.push_back(r);
	}
	bool IsReader(string code)
	{
		for (auto it = readers.begin(); it != readers.end(); it++)
			if (it->GetCode() == code)
				return true;
		return false;
	}
	Reader* GetReader(string code)
	{
		for (int it = 0; it < readers.size(); it++)
			if (readers[it].GetCode() == code)
				return &readers[it];
		return NULL;
	}
	static ReaderManager* GetInstance();
	~ReaderManager();
};

