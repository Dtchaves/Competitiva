#include <bits/stdc++.h>

using namespace std;

bool primo(long long int entrada)
{

    for(long long int i = 2; i*i <= entrada;i++)
    {
        if (!(entrada%i)) return false;
    }

    return true;
}

int main()
{
    long long int entrada;
    cin>>entrada;

    if(primo(entrada))cout<<"sim";
    else cout<<"nao";

    return 0;
}