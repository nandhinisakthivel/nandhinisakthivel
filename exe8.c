
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
            if(n%4==0||n%100==0||n%400==0)
            {
                printf("%d leapyear",n);
            }
            else
            {
                printf("%dnot",n);
            }
    
    getch();
    }
        
