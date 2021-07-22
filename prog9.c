#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter the no to calculate factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("\n");
    
    printf("factorial is %d",fact);
}  
