#include <iostream>

using namespace std;

int main()
{
    cout << "Hola! Digita los tres números para comprobar si puede ser lados de un triangulo" << "\n";
    cout << "Primer número" << "\n";
    float uno;
    cin >> uno;
    
    cout << "Segundo número" << "\n";
    float segundo;
    cin >> segundo;
    cout << "Tercer número" << "\n";
    float tercero;
    cin >> tercero;
    //La instrucción \n es un salto de línea Mostrando los textos separados
    if( (uno*uno) + (segundo*segundo) == tercero*tercero ||  (uno*uno) + (tercero*tercero) == segundo*segundo ||  (tercero*tercero) + (segundo*segundo) == uno*uno)
    {
    cout << "Sí corresponde a los lados de un triangulo" << "\n";
    }
    else
    {
    cout << "No corresponde a los lados de un triangulo" << "\n";
    }
   return 0;
}