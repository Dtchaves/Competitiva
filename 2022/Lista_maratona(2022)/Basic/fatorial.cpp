#include <bits/stdc++.h>

using namespace std;

long long int fatorial(int i)
{
    long long int aux = 1;
    while(i>0)
    {
        aux = aux*i;
        i--;
    }
return aux;
}


int main()
{
    long long int entrada;
    long long int teste = 1;
    while(cin>>entrada)
    {
        
        long long int fat;
        fat = fatorial(entrada);
        //cout<<fat<<endl;

        long long int keep = 0;
        while(keep == 0)
        {
            keep = fat%10;
            fat = fat/10;
        }

        cout<<"Instancia "<<teste<<endl<<keep<<endl<<endl;
        teste++;
    }

    return 0;
}