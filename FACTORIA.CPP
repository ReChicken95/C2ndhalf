#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
randomize();
int arreglo1[10],arreglo[10],c,c1,mult;
clrscr();
for (c=0;c<10;c++){
arreglo[c]=random(10);
printf (" %d ",arreglo[c]);
}
for (c=0;c<10;c++){
mult=1 ;
if (arreglo[c]==0){
	 arreglo1[c]=1;
	 }
     else{
	for (c1=1;c1<=arreglo[c];c1++)
	 {
			mult=mult*c1;
         arreglo1[c]=mult;
			}
			 }
			}
			printf ("\nLos factoriales de cada uno son: ");
for (c=0;c<10;c++){
	printf ("\n%d",arreglo1[c]);
	}

getch();
}