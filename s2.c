#include<stdio.h>
#include<conio.h>
int main()
{
  int num,i;
  printf("Enter a number ");
  scanf("%d",&num);
  int size = log10(num) + 1;
  int *numArray = (int *)malloc(size * sizeof(int));
  for(i=0; i<size; i++)
  {
      numArray[i] = num % 10; num = num/10; 
      
  } 
    switch(numArray[i])
    {
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
            case 0:
              printf("Zero ");
              break;
    }
  }
  printf("\n");
}
