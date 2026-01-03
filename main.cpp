#include <iostream>
using namespace std;

int llogaritNoten(int p);
int merrPiket();
bool validoPiket(int p);
void shfaqRezultatin(int n);

int main(){

  return 0;
}

int llogaritNoten(int p){
	if (p < 0) return false;
	return 5; 
}

int merrPiket(){
  int p;
  cout<<"Shkruani numrin e pikeve: ";
  cin>>p;
  return p;
}
bool validoPiket(int piket) {
    if (piket >= 0 && piket <= 100) {
        return true;
    }
    return false;
}

void shfaqRezultatin(int n){
	cout << "Nota juaj eshte: " << n << endl;
	if (nota == 5) {
		cout << "Rezultati: Ngel - Nota 5" << endl;
	}
	else {
		cout << "Rezultati: Kaloi - Nota " << n << endl;
	}
}
