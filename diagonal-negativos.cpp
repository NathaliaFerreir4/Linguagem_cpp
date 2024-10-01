#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cont;

    cout <<"Qual a ordem da matriz? ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<"Elemento [" << i <<"," << j <<"]: ";
            cin >> matriz[i][j];
        }

    }   

    cout << "DIAGONAL PRINCIPAL DA MATRIZ: \n";
    for (int i = 0; i < n; i++)
    {
        cout << matriz[i][i] << " ";
    }
    
    cout << endl;

    cont = 0;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matriz[i][j] < 0){
                cont++;
            }
        }
    }

    cout <<"QUANTIDADE DE NEGATIVOS = " << cont << endl;

    return 0;
}