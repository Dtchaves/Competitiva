#include <stdio.h>

int main () {
char v[6];
int i,contador = 0;

for (i = 0; i < 6; i++){
	do{
	scanf("%c",&v[i]);
	} while (v[i] != 'P' && v[i] != 'V');

	if ( v[i] == 'V'){
		contador++;
	}
}

if (contador == 0){
printf ("-1");
}
if (contador == 1 || contador == 2){
printf ("3");
}
if (contador == 3 || contador == 4){
printf ("2");
}
if (contador == 5 || contador == 6){
printf ("1");
}


return 0;
}







