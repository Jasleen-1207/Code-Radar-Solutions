// Your code here...
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d",&a,&b);
    c = a*b;
    if(c<0)
    printf("True");
    else if (c>0)
    printf("False");
    else if(a&&b==0)
    printf("True");
}