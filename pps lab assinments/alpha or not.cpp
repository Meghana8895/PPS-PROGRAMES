#include <stdio.h>

int main()
{ 
char ch;  
  
    printf("Enter a character\n");  
    scanf("%c", &ch);  
  
    (ch >= 97 && ch <= 122) ?  
    printf("Character entered is a lowercase English alphabet\n") :  
    printf("Character entered is not a lowercase English alphabet\n");  
    
    
return 0;

}
 
