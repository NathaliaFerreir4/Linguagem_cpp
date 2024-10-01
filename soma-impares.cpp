#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, troca, soma, i;

    cout <<"Digite dois numeros\n";
    cin >> x;
    cin >> y;

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }    

    soma = 0;
    for ( int i = x+1 ; i < y; i++)
    {
        if (i %2 != 0){
            soma = soma + i;
        }
    }
    
    cout <<"A soma dos numeros impares: " << soma;

    return 0;
}