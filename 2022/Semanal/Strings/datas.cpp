#include <bits/stdc++.h>

using namespace std;

void slip(string& entrada,vector<int>& data)
{
    int aux = 0; string ajuda;

    for(int i = 0; i<entrada.size();i++)
    {
        if(entrada[i] == '-')
        {
            data[aux] = stoi(ajuda);
            aux++;
            ajuda = "";
        }
        else
        {
            ajuda += entrada[i];
        }
    }
    data[aux] = stoi(ajuda);
}
bool bissexto(int ano)
{
    return !(ano%4) && (ano%100);
}

int dias_do_mes(int mes)
{
    if (mes == 0) return 31;
    else if(mes == 2) return 28;
    else if(mes<7)
    {
       if(mes%2) return 31;
        else return 30;
    } 
    else 
    {
        if(mes%2) return 30;
        else return 31;
    }
}

int contar_dias(vector<int>&data_1,vector<int>&data_2)
{
    int retorno = 0;
    for(int i = 0;i<3;i++)
    {
        if(data_1[i] > data_2[i])
        {
            vector<int> aux = data_1;
            data_1 = data_2;
            data_2 = aux;
        }
    }

    int mes,ano,dia;
    
    for(ano = data_1[0]+1 ; ano < data_2[0];ano++)
    {
        if(bissexto(ano)) retorno += 366;
        else retorno += 365;
    }

    int parada = data_2[1];
    if( data_2[0] != data_1[0]) parada += 12;
    for(mes = data_1[1]+1 ; mes < parada;mes++)
    {
        retorno += dias_do_mes(mes%12);
    }
    if(bissexto(data_1[0]) && data_1[1]<2) retorno++;
    if(bissexto(data_2[0]) && data_2[1]>2) retorno++;
    
    if( data_2[0] != data_1[0])
    {
        if(data_1[1] != 2 && data_1[2] != 29) retorno += dias_do_mes(data_1[1]) - data_1[1];
        retorno +=  data_2[1];
    }
    else retorno +=abs(data_1[2] - data_2[2]);

    if(bissexto(data_1[0]) && data_1[1]==2 && data_1[2]<29) retorno++;

    return retorno;
}

int main()
{
    int tamanho,parada = 0;
        cin>>tamanho;
    while (parada<tamanho)
    {
        string entrada;
        vector<int> data_1(3);
            cin>>entrada;
            slip(entrada,data_1);

        vector<int> data_2(3);
            cin>>entrada;
            slip(entrada,data_2);

        cout<<contar_dias(data_1,data_2)<<endl;
        parada++;
    }

    return 0;
}