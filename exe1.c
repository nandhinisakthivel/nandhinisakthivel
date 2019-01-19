#include <stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive");
    }
    if(n<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    getch();
    
}

