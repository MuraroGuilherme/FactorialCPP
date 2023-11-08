#include <iostream>

using namespace std;


int main() {
	float numberReq;
	cout << "Insira o número desejado: ";
	cin >> numberReq;
	float i = 1;
	float fac = numberReq;
	float numberRep = numberReq;
	while (i < numberReq){
		cout << fac << "\n";
		fac = fac * (numberRep - 1);
		numberRep--;
		i++;
	}
	cout << fac << "\n";
	return 0;
}
