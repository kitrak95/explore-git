#include "shunting-yard.h"
#include <stdio.h>
#include <string.h>

int main(int agrc, char *argv[]){
	double result;
	char input[100];

    scanf(" %s", input);
    Status response = shunting_yard(input, &result);
    if (response == OK)
        printf(": %d\n>> %f\n", response, result);
    else
        printf("Error %d\n", response);
	return 0;
}
