#include<stdio.h>
#include<conio.h>
void main()
{
    char a[50];
    int i,n;
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("%c",a[i]); 
    }
    getch();
}
