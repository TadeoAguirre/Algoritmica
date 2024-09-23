#include <iostream>

using namespace std; //count (salida), cin (entrada), cerr (errores), clog (msg de log)

int main()
{
       float c, f;

       cout <<"Grados Celcius: ";
       cin >> c;

       f = ((c *9/5)+32);

       cout << c << "°C son igual a" << f << "°F" << endl;

       return 0;
}
