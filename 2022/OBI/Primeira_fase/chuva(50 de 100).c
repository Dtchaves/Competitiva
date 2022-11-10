#include <stdio.h>
#include <stdlib.h>


int main (){

int *entrada,tamanho,soma,i,j,aux,salvar,contador = 0;

scanf("%i",&tamanho);
entrada = (int *) malloc(tamanho*sizeof (int));
scanf("%i",&soma);

for(i=0;i<tamanho;i++){
    scanf("%i",&entrada[i]);
}

for(i=0;i<tamanho;i++){
    for(j = tamanho - 1  ;j >= i ;j--){
            aux = j;
            salvar = 0;

            while(aux >= i){
                salvar += entrada[aux];
                aux--;
            }
            if (salvar == soma){
                contador++;
            }
    }
}
printf("%i",contador);

return 0;
}
