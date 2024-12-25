#include <stdio.h>

// Collaborator: MANOLIS GIALEDAKIS
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); 
    //prosthesi toy ";" sto telos

    // Calculating summary of numbers
    sum = num1 + num2; 
	//evala "+" anti gia "*"

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
	//allaxa to proto %s se %d

    return 0;
	//eva;a ena ";" sto telos
}