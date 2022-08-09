#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
 
int main ()
{
    char entrance[1000];
    char keepC[1000],keepE[1000],keepU[1000],keepP[1000];
    int x,whichtype, size, counterC = 0, counterE = 0, counterU = 0, counterP = 0,sizekeep,compare1,compare2,counter,help;
    
    scanf("%s",entrance);
    size = strlen(entrance) - 1;
    //if (size >= 3 && size <= 158) {
        for(whichtype = 0; entrance[whichtype] != '\n'; whichtype++) {
    
            if (entrance[whichtype] =='C') {
                keepC[counterC] = entrance[whichtype - 2];
                keepC[counterC +1] = entrance[whichtype - 1];
                counterC += 2;
            
            }
            
            if (entrance[whichtype] =='E') {
                keepE[counterE] = entrance[whichtype - 2] ;
                keepE[counterE +1] = entrance[whichtype - 1];
                counterE+=2;
            
            }
            
            if (entrance[whichtype] =='U') {
                keepU[counterU] = entrance[whichtype - 2];
                keepU[counterU +1] = entrance[whichtype - 1];
                counterU+=2;
            
            }
            
            if (entrance[whichtype] =='P') {
                keepP[counterP] = entrance[whichtype - 2];
                keepP[counterP +1] = entrance[whichtype - 1];
                counterP+=2;
            
            }
        }
        
        keepC[counterC] = '\0';
        keepE[counterE] = '\0';
        keepU[counterU] = '\0';
        keepP[counterP] = '\0';

        sizekeep = strlen(keepC);
        counter = 0;
        x = 2;

        if(sizekeep > 26){
            printf("ERRO\n");
        }

            else {
                for(compare1 = 0; compare1 < sizekeep;compare1 += 2){
                    for(compare2 = x; compare2 < sizekeep;compare2 += 2){
                        if(keepC[compare1] == keepC[compare2] && keepC[compare1 + 1] == keepC[compare2 + 1]) {
                            counter++;

                        }
                    }
                    x+=2;
                }

                if(counter > 0) {
                    printf("ERRO\n");
                }
                    else {
                        printf("%i\n",13 - (sizekeep/2));
                            
                    }
            }
        
        sizekeep = strlen(keepE);
        counter = 0;
        x = 2;

        if(sizekeep > 26){
            printf("ERRO\n");
        }

            else {
                for(compare1 = 0; compare1 < sizekeep;compare1 += 2){
                    for(compare2 = x; compare2 < sizekeep;compare2 += 2){

                        if(keepE[compare1] == keepE[compare2] && keepE[compare1 + 1] == keepE[compare2 + 1]) {
                            counter++;
                        }
                    }
                    x+=2;
                }
                 
                if(counter > 0) {
                    printf("ERRO\n");
                }
                    else {
                        printf("%i\n",13 - (sizekeep/2));
                    }
            }

        sizekeep = strlen(keepU);
        counter = 0;
        x = 2;

        if(sizekeep > 26){
            printf("ERRO\n");
        }
            else {
                for(compare1 = 0; compare1 < sizekeep;compare1 += 2){
                    for(compare2 = x; compare2 < sizekeep;compare2 += 2){
                        if(keepU[compare1] == keepU[compare2] && keepU[compare1 + 1] == keepU[compare2 + 1]) {
                            counter++;
                        }
                    }
                    x+=2;
                }
                if(counter > 0) {
                    printf("ERRO\n");
                }
                    else {
                        printf("%i\n",13 - (sizekeep/2));
                    }
            }

        sizekeep = strlen(keepP);
        counter = 0;
        x = 2;

        if(sizekeep > 26){
            printf("ERRO\n");
        }

            else {
                for(compare1 = 0; compare1 < sizekeep;compare1 += 2){
                    for(compare2 = x; compare2 < sizekeep;compare2 += 2){
                        if(keepC[compare1] == keepP[compare2] && keepP[compare1 + 1] == keepP[compare2 + 1]) {
                            counter++;
                        }
                    }
                    x+=2;
                }
                if(counter > 0) {
                    printf("ERRO\n");
                }
                    else {
                        printf("%i\n",13 - (sizekeep/2));
                    }
            }
    //}

    return 0;
}
