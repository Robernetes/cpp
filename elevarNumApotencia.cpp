//Elevar un numero a un rango de potencias
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int num = 2;
	for(int i=1; i<=20; i++){
		cout<<"El numero "<<num<<" elevado a la potencia: "<<i<<" es: "<<pow(num,i)<<endl;
	}
	
    system("pause");
	return 0;
}
