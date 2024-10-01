#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y;

    cout <<"Digite dois numeros: \n";
    cin >> x;
    cin >> y;

    while (x != y)
    {
      if (x < y){
        cout << "CRESCENTE!"<< endl;
      } else {
        cout <<"DECRESCENTE!" <<endl;
      } 

    cout <<"Digite dois numeros: \n";
    cin >> x;
    cin >> y;  
    }

    return 0;
}