#include <stdio.h>
int main()
     {
   int num1, num2;
   while(1) 
   {
 
   char operation;
   printf("select operation\n");
   scanf("%c", &operation);
   printf("enter two numbers:\n");
   scanf("%d %d", &num1, &num2);
   switch (operation)
   {
     case 'a':
             printf("addition %d\n", num1+num2);
             break;

     case 's':
             printf("substraction %d\n", num1-num2);
             break;


     case 'm':
             printf("muiltiplication %d\n", num1*num2);
             break;

     case 'd':
             printf("division %d\n", num1/num2);
             break;

     case 'e':
	     printf("exit menu \n");
	     return 0;

   }  /* is used to close switch case*/
  return 0;
    } /* is used to close the while case*/
 }

