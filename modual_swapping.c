l#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swaping \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}