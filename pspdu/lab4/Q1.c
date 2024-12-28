#include <stdio.h>

// Function to calculate the number of bills
void calcbill(int amount, int *f, int *tw, int *tn) {
    *f = amount / 50;
    amount %= 50;

    *tw = amount / 20;
    amount %= 20;

    *tn = amount / 10;
}

int main() {
    printf("Automatic Teller Machine\n");

    // Prompt user for the amount
    int amount;
    printf("Enter the amount desired (a multiple of 10 dollars): ");
    scanf("%d", &amount);


    // Variables to store the number of bills
    int no_of_fifty = 0, no_of_twenty = 0, no_of_tens = 0;

    // Calculate the number of bills
    calcbill(amount, &no_of_fifty, &no_of_twenty, &no_of_tens);

    // Display the result
    printf("The number of $50s, $20s, and $10s are: %d, %d, %d\n",
           no_of_fifty, no_of_twenty, no_of_tens);

    return 0;
}
