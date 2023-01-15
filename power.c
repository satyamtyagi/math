#include "power.h"

int power(int num1, int num2)

{
	int result, i;
	result=1;
	for(i=0; i<num2; i++) {
		result *= num1;
	}
	return result;
}
