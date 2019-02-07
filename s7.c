#include<stdio.h>
#include<conio.h>
void  main()
{
     int n,m;
    scanf("%d %d",&n,&m);
    n=n+m;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}
