#include <stdio.h>

int main()
{ 

    char c;
    int isDigit;  
   
    printf("Enter a Character\n");  
    scanf("%c", &c); 
     
    isDigit =  ((c >= '0') && (c <= '9'))? 1 : 0;  
     
    if(isDigit == 1)
        printf("%c is Decimal Digit Character\n", c);
    else
        printf("%c is Not a Digit Character\n", c);
return 0;

}
