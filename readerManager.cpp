#include"ReaderManager.h"

ReaderManager* ReaderManager::instance = NULL;

ReaderManager* ReaderManager::GetInstance()
{
	if (instance == NULL)
		instance = new ReaderManager();
	return instance;
}

inline ReaderManager::~ReaderManager()
{
	delete instance;
}
