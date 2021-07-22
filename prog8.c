//Sum of digits of a number
#include<stdio.h>
int main(){
    int n,t,sum=0,r;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+r;
        t=t/10;
        
    }
 printf("sum is %d",sum);    
}
