#include "sum1.h"
#include "diff.h"
#include "mult.h"
#include "power.h"
#include <stdio.h>
#include <stdlib.h>
	
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char opsymb;
	if(argc == 4) {
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		opsymb = argv[2][0];
		printf("%c\n", opsymb);
		if(opsymb == '+') {
			result = sum(num1, num2);
			printf("The sum is %d\n\n", result);
		}
		if(opsymb == '-') {
			result = diff(num1, num2);
			printf("The difference is %d\n\n", result);
		}
		if(opsymb == '*') {
			result = mult(num1, num2);
			printf("The product is %d\n\n", result);
		}
		if(opsymb == '^') {
			result = power(num1, num2);
			printf("The 1st number to the power of the 2nd is %d\n\n", result);
		}
	}
	return 0;
}
