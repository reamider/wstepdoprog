#include <stdio.h>
double zakres(double a){
	if(a>=-sqrt(2),a<=sqrt(2)){
		printf("liczba nalezy do zakresu");
	}
	else{
		printf("liczba nie nalezy do zakresu");
}
}
int main(){
	double a;
	double funkcja;
	printf("podaj liczbe:");
	scanf("%lf", &a);
	funkcja=zakres(a);
	printf("", funkcja);
	return 0;
}
