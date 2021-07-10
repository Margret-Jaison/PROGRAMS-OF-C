// program to perform arithmetic operations
#include<stdio.h>
int main(){
    int n1, n2,add,sub,mul;
    float div;
    
    printf("enter 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    printf("sum is %d\n",add);
    sub=n1-n2;
    printf("difference is%d\n",sub);
    mul=n1*n2;
    printf("product is%d\n",mul);
    div=(float)n1/n2;
    printf("division is%.2f\n",div);
    
    
}
