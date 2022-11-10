#include <stdio.h>
#include <stdlib.h>

int main(){

    int **matriz,tamanho,i,linhazero,colunazero,j,soma = 0;

    scanf("%i",&tamanho);
    matriz = (int **) malloc (tamanho*sizeof (int *));

    for(j = 0; j <tamanho ;j++){
        matriz [j] = (int *) malloc (tamanho*sizeof(int));
    }



    for(i = 0; i <tamanho ;i++){
            for(j = 0; j <tamanho ;j++){
                 scanf("%i",&matriz[i][j]);
            }
    }

    for(i = 0; i <tamanho ;i++){
            for(j = 0; j <tamanho ;j++){
                 if(matriz[i][j] == 0){
                    linhazero = i;
                    colunazero = j;
                    break;
                 }

            }
    }

    if(linhazero - 1 == -1){
            for(j = 0; j <tamanho ;j++){
                soma += matriz[linhazero+1][j];
            }

    }
        else {
            for(j = 0; j <tamanho ;j++){
                soma += matriz[linhazero-1][j];
            }
        }

        for(j = 0; j <tamanho ;j++){
                soma -= matriz[linhazero][j];
            }


printf("%i\n%i\n%i",soma,linhazero+1,colunazero+1);

return 0;
}
