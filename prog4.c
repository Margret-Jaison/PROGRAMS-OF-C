#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(void)
{
 string s=get_string("enter your name");
printf("%s\n",s);


for(int i=strlen(s);i>=0;i--)
{
  printf("%c",s[i]);
}
printf("\n");

}
