#include "Terminal.h"

Terminal::Terminal(string code)
{
	ReaderManager *rm = ReaderManager::GetInstance();
	if (rm->IsReader(code))
	{
		Reader *r = rm->GetReader(code);
		cout << "Introduceti numele cartii sau numele autorului: " << endl;
		string input;
		cin >> input;
		Library *l = Library::GetInstance();
//		l->PrintAvailableBooks(input);
	}
}
