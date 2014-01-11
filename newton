#include <stdio.h>
int newton(int n,int k){
	if(k==0||k==n) return 1;
	else return newton(n-1,k)+newton(n-1,k-1);
}
int main(){
	int n;
	int k;
	int wynik;
	printf("podaj liczbe n:");
	scanf("%d", &n);
	printf("podaj liczbe k:");
	scanf("%d", &k);
	wynik=newton(n,k);
	printf("silnia wynosi: %d", wynik);
	return 0;
}
