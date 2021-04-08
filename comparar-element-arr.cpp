#include <ctype.h>
#include <iostream>
#include <cstring>
//#include <conio.h>  //For Windows
//#include <ncurses.h> //For Linux
#include <cstdlib>
#include <array>

using namespace std;

int main(){
    char newLetra[1] = {};
    array<char, 10> array1 = {};
    array<char, 10> array2 = {};

    for(int i = 0; i < array1.size(); i++){
        cout << "Ingresa el elemento " << i+1 << " del array-1: ";
        cin >> newLetra[i];
        newLetra[0] = toupper(0);
        array1[i] = newLetra[i];

        cout << "Ingresa el elemento " << i+1 << " del array-2: ";
        cin >> newLetra[i];
        newLetra[0] = toupper(0);
        array2[i] = newLetra[i];
    }

    for(auto x : array1)
        cout << x << endl;
    
    system("pause");
    return 0;
}
