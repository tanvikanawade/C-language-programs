#include<stdio.h>
void main ()
{
    int i=100;
    int* p=&i;

    printf("%d\n",i);
    printf("%d\n",&i);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    printf("%d\n",*(&i));
    printf("%d\n",sizeof(p));
    
}