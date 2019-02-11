#include <stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a==0)
    {
        printf("zero");
    }
    if(a>0)
    {
        printf("positive");
    }
    else if(a<0)
    {
        printf("negative");
    }
    getch();
}
    
