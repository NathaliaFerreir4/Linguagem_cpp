#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome1, nome2;
    double idade1, idade2, media, soma;

    cout <<"Nome da 1a pessoa: ";
    getline(cin, nome1);
    cout <<"Idade: ";
    cin >> idade1;

    cout <<"Nome da 2a pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout <<"Idade: \n";
    cin >> idade2;

    soma = idade1 + idade2;
    media = soma / 2;

    cout <<" A media das idades de " << nome1 << " e " << nome2 << " e de " << media;

    return 0;
}