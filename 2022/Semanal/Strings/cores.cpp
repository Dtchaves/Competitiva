#include <bits/stdc++.h>

using namespace std;

int main()
{
    string entrada;
    cin>>entrada; 

    if (entrada=="amarela"||entrada=="azul"||entrada=="vermelha")      cout << "primaria"<<endl;
    else if (entrada=="laranja"||entrada=="verde"||entrada=="roxa")      cout << "secundaria"<<endl;
    else cout << "outra"<<endl;
}