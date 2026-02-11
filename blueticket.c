#include <stdio.h>
void main() {
    int a,b,c;
    printf("enter the value is a:");
    scanf("%d",&a);
    printf("enter the value is b:");
    scanf("%d",&b);
    printf("enter the value is c:");
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ac=a+c;
    if(ab==10 || bc==10 || ac==10)
    {
        printf("10");
    }
    else if(a>10 || b>10 || c>10)
    {
    printf("5");
    }
    else
    {
        printf("0");
    }
}