#include <iostream>
using namespace std;

int llogaritNoten(int p);
int merrPiket();
bool validoPiket(int p);
void shfaqRezultatin(int n);

int main()
{
  int piket;
  int nota;

  cout<<"--- Llogaritesi i Notave ---"<<endl;

  piket = merrPiket();

  nota = 0;
  nota = llogaritNoten(piket);

	return 0;
}

int llogaritNoten(int p)
{
	if (p < 50)
	{
		return 5;
	}
	else if (p < 65)
	{
		return 6;
	}
	else if (p < 80)
	{
		return 7;
	}
	else if (p < 90)
	{
		return 8;
	}
	else if (p < 100)
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
	int p;
	cout << "Shkruani numrin e pikeve: ";
	cin >> p;
	return p;
}
bool validoPiket(int piket)
{
	if (piket >= 0 && piket <= 100)
	{
		return true;
	}
	return false;
}

void shfaqRezultatin(int n)
{
	cout << "Nota juaj eshte: " << n << endl;
	if (nota == 5)
	{
		cout << "Rezultati: Ngel - Nota 5" << endl;
	}
	else
	{
		cout << "Rezultati: Kaloi - Nota " << n << endl;
	}
}