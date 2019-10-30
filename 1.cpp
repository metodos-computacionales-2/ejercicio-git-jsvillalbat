#include <iostream>
#include <cmath>
using namespace std;

float perimetro (float radio,float pi);
float area(float radio,float pi);
float diametro(float radio);

int main()
{
    cout << "Hola! Digita el radio de tú circulo" << "\n";
    //La instrucción \n es un salto de línea Mostrando los textos separados
    float pi = 2*asin(1);
    float radio;
    cin >> radio;

   float p = perimetro(radio,pi);
   float a = area(radio,pi);
   float d = diametro(radio);

   cout << "Perimetro:  " << p << "\n";
    cout << "Área:  " << a << "\n";
 cout << "Diametro:  " << d << "\n";


   return 0;
}

float perimetro (float radio,float pi)
{
    return 2*pi*radio;
}

float area(float radio, float pi)
{
    return pi*radio*radio;
}

float diametro(float radio)
{
    return 2*radio;
}
