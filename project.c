#include<stdio.h>
int main ()
{
   int option;
  int a,b;
  printf("ENTER A NUMBER = ");
  scanf("%d",&a);
  printf("ENTER B NUMBER = ");
  scanf("%d",&b);
   do
   {
       printf("1)ADDITION :\n ");
       printf("2)SUBTRACTION :\n ");
       printf("3)MULTIPLICATION :\n ");
       printf("4)DIVISION :\n ");
       printf("5)MODULES:\n ");
       printf("ENTER OPTION :");
       scanf("%d",&option);
     switch(option)
     {
        case 1:
        printf("ADDITION = %d\n",a+b);
        break;
        case 2:
        printf("SUBTRACTION = %d\n",a-b);
        break;
        case 3:
        printf("MULTIPLICATION = %d\n",a*b);
        break;
        case 4:
        printf("DIVISION = %d\n",a/b);
        break;
        case 5:
        printf("MODULES = %d\n",a%b);
        break;
        default:
        printf("INVALID NUMBER");
        break;

     }

   } while (option !=6);
   
    return 0;
}