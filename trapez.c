#include <stdio.h>

void main(){
        int h;
        int a;
        printf("Podaj dlugosc podstawy gornej:");
        scanf("%d", &a);
        printf("Podaj wysokosc:");
        scanf("%d", &h);

        int i;
        for(i=0; i<h; i++){
                int j;
                for(j=0; j<i+a; j++){
                        printf("*");
                }
                printf("\n");
        }
}
