//write a program to implement calculator

#include <stdio.h>
int main()
     {
   int num1, num2;
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
   
   
   }
  return 0;
 }
	
