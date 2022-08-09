#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,s,i,saida = -1; // n é o menor
    int a,b,c,d,e;

    scanf("%i",&n);
    scanf("%i",&m);
    scanf("%i",&s);

    for (i = m; i >= n; i--)  {
        a = i/10000;
        b = (i/1000) - (10*a);
        c = (i/100) - (100*a) - (10*b);
        d = (i/10) - (1000*a) - (100*b) - (10*c);
        e = i - (10000*a) - (1000*b) - (100*c) - (10*d);

        if ( (a+b+c+d+e) == s){
            saida = i;
            break;
        }
    }
    printf("%i",saida);

return 0;
}
