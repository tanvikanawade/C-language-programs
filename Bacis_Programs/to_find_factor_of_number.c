#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    printf(":factors of numbers are\n",n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }
}