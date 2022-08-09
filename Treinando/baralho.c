#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main (){
char entrada [200],letras[4] = {'C','E','U','P'},auxiliar[100];
int i,j,c[4] = {0,0,0,0},aux,x,y,z;

scanf("%s",entrada);

if(strlen(entrada)<=156 && strlen(entrada)>=3){

	for (i = 0; i < 4; i ++){ //letras[4] = {'C','E','U','P'}
		aux = 0;
			for (j = 0; j < strlen(entrada); j ++){
				if(entrada[j] == letras [i]){
					auxiliar[aux] = entrada[j-2];
					auxiliar[aux + 1] = entrada[j-1];
					aux += 2;
					c[i]++;
				}
			}
		z = 2;
			for(x = 0; x < aux; x+=2){
				for(y = z; y < aux; y+=2){
					if(auxiliar[x] == auxiliar [y] && auxiliar[x+1] == auxiliar [y+1]){
						c[i] = -1;
						x = aux;						
						break;			
						
					}
				}	
			z+=2;
			}

	}

	for (i = 0; i< 4; i ++){
		if(c[i] < 0){
			printf("ERRO\n");
		}
			else{
				printf("%i\n",13 - c[i]);
			}

	}
}

return 0;
}



