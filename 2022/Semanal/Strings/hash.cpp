#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tamanho;
    cin>>tamanho;
    vector<string> entrada(tamanho,"");

    for (int i = 0; i<tamanho;i++)
    {
        cin>>entrada[i];
    }
    sort(entrada.begin(),entrada.end());
    auto it = unique(entrada.begin(),entrada.end());
    if (it == entrada.end()) cout<<"A funcao eh boa."<<endl;
    else cout<<"A funcao nao eh boa."<<endl;

    return 0;
}