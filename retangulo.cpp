#include <bits/stdc++.h>

using namespace std;

int main(){

    double base, altura, area, diagonal, perimetro, raiz;

    cout <<"Base do retangulo: ";
    cin >> base;
    cout <<"Altura do retangulo:";
    cin >> altura;

    area = altura * base;
    perimetro =(2 * base) + (2 * altura);
    raiz = (base * base) + (altura * altura);
    diagonal = sqrt(raiz);
    
    cout <<"AREA = " << area << endl;
    cout <<"PERIMETRO = " << perimetro << endl;
    cout <<"DIAGONAL = " << diagonal << endl;


    return 0;
}