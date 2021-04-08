
//Cuenta la cantidad de letras "e" y "s" que hay en la cadena ingresada

#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

int main(){
	char cadena[30];
	int cont2 = 0, cont1 = 0;
	cout<<"Ingresa el texto: "; cin.getline(cadena,30,'\n');
	for(int i = 0; cadena[i]; i++){
			if(cadena[i] == 'e')
				cont1++;
			if(cadena[i] == 's')
				cont2++;	
	}	
	
	cout<<"La cantidad de letras 's' es: "<<cont2<<endl;
	cout<<"La cantidad de letras 'e' es: "<<cont1<<endl;
	
    	
    system("pause");
	return 0;
}
