#include "Utils.h"

string Utils::GenerateRandomCode(int min, int max, int lenght)
{
	int n = 0;
	string code;
	while (n != lenght)
	{
		int nr = min + rand() % (max - min + 1);
		code.push_back((char)nr);
		n++;
	}
	return code;
}
