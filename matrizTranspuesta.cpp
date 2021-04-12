//Matriz transpuesta: cambiar las filas a columnas y viceverza
#include <iostream>


using namespace std;

int main(){
    int a[3][3], b[3][3], n = 3;

    for (int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++){
            cout << "Ingresa los valores de la matriz [" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }
   

    for (int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }
    
    cout << endl;

    //Imprime la matriz final a
    for (int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "**********************************************************" << endl;

    //Imprime la matriz final transpuesta b
    for (int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }



    system("pause");

    return 0;
}
