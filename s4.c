#include<stdio.h>
#include<conio.h>
void main()
{
 int n,count=0;
    printf("enter n");
    scanf("%d",&n);
    if(n!=0)
    {
        n=n/10;
        count++;
    }
        printf("%d",count);
    getch();
}
