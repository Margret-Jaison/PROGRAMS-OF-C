//check whether a character is a vowel or consonant or punctuation or a symbol

#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
  if(ch>='a'&& ch<='z'||ch>='A'&& ch<='Z')
  {
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is vowel",ch);
        
    }
    else{
        printf("%c is conosants",ch);
    }
  }
  else{
  
       printf("neither vowel nor consonants");
      }
      
} 
