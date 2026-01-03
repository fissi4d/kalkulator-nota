#include <iostream>
using namespace std;

int llogaritNoten(int p);
int merrPiket();

int main()
{

	return 0;
}

int llogaritNoten(int p)
{
	if (p < 50)
	{
		return 5;
	}
	else if (p < 60)
	{
		return 6;
	}
	else if (p < 70)
	{
		return 7;
	}
	else if (p < 80)
	{
		return 8;
	}
	else if (p < 90)
	{
		return 9;
	}
	else
	{
		return 10;
	}
}

int merrPiket()
{
	return 0;
}
