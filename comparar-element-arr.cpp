#include <ctype.h>
#include <iostream>
#include <cstring>
//#include <conio.h>  //For Windows
//#include <ncurses.h> //For Linux
#include <cstdlib>
#include <array>
#include <iterator>

using namespace std;

int main(){
    char newLetra[1] = {};
    array<char, 10> array1 = {'A', 'A', 'A', 'A', 'Q', 'E', 'T', 'F', 'H', 'X'};
    array<char, 10> array2 = {'A', 'A', 'A', 'W', 'R', 'A', 'D', 'S', 'H', 'X'};
    array<char, 10> array3 = {};
    array<char, 10> array4 = {};
    char dato[1] = {};
    char salida[1] = {};
    cout << endl;
    bool yes = false;

    cout << "**************************************************" << endl;

    for (int i = 0; i < 10; i++) {
       for (int j = 0; j <= i; j++) {
           if(array1[i] == array2[j]){
                dato[0] = array1[i];
                if(dato[0] != array1[i+1]){
                    array3[i] = dato[0];
                    salida[0] = dato[0];
                    cout << salida[0] << endl;
                }
                
           }
       } 
    }



    cout << "**************************************************" << endl;

    for(auto x : array3)
        if(x != ' '){
            cout << x << endl;
        }

   
    system("pause");
    return 0;
}
