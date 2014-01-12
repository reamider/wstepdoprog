#include <stdio.h>
int main()
{
    int i,c=0,d=0;
    for(i=0;i<=20;i++)
    {
    	printf("liczba %d\n" ,i);
        c=i*i;
        printf("kwadrat %d\n\n", c);
        d=i*i*i;
        printf("szescian %d\n\n", d);
    }
    return 0;
}
