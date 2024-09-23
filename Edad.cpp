#include <iostream>

using namespace std;

int main (){
    int ano, edad;

    cout << "Cual es tu año de nacimiento: " << endl;
    cin >> ano;

    edad = 2024 - ano;

    cout << "Tu edad es: " << edad << endl;
    return 0;
}