#include <stdio.h>

int main() {
	int num1=10, num2=5, i;
       printf("if-else condition\n");
	if (num1>num2) {
		printf("%d is greater than %d\n", num1, num2);
	}
	else if (num1<num2) {
		printf("%d is greater than %d\n", num2, num1);
	}
	else {
		printf("%d is equal to %d\n", num1, num2);
	}

	printf("for loop example\n");
	printf("count upto %d\n",num1);
	for (i=1; i<=num1; i++)
	{
	printf("%d\n",i);
	}
	return 0;
}





