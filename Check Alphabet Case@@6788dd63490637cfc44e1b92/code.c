// Your code here...
#include <stdio.h>
int main(){
    char i;
    scanf("%c",&i);
    if(i<=65 && i>=90)
    printf("Uppercase");
    else if (i>=97 && i<=122)
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}