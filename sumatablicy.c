#include <stdio.h>
int main(){
int tab[4];
printf("podaj wartosc pierwsza:");
scanf("%d", &tab[0]);
printf("podaj wartosc druga:");
scanf("%d", &tab[1]);
printf("podaj wartosc trzecia:");
scanf("%d", &tab[2]);
printf("podaj wartosc czwarta:");
scanf("%d", &tab[3]);
printf("podaj wartosc piata:");
scanf("%d", &tab[4]);
int i;
int suma=0;
for(i=0;i<5;i++){
	suma=suma+tab[i];
}
	printf("suma elementow tablicy wynosi: %d", suma);
}
