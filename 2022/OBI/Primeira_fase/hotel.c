#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valordiaria,valora,diaentrada,i,aux;


    scanf("%i",&valordiaria);
    scanf("%i",&valora);
    scanf("%i",&diaentrada);

    aux = 32 - diaentrada;
    if (diaentrada<=15){
        i = aux*(valordiaria + ((diaentrada - 1)*valora));
    }
        else {
        i = aux*(valordiaria + (14*valora));
        }

    printf("%i",i);
return 0;
}
