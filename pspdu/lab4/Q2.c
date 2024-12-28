#include <stdio.h>
#include <math.h>

// Function to determine the properties of the number
void info(int num, int *m, int *e_o, int *p) {
    // a. Is the value a multiple of 7, 11, or 13?
    *m = (num % 7 == 0 || num % 11 == 0 || num % 13 == 0) ? 1 : 0;

    // b. Is the sum of the digits odd or even?
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    *e_o = (sum % 2 == 0) ? 1 : 0;

    // c. Is the value a prime number?
    if (num <= 1) {
        *p = 0; // Not prime
        return;
    }
    *p = 1; // Assume prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            *p = 0; // Not prime
            break;
        }
    }
}

int main() {
    // Problem: Determine the following information about each value in a list of positive integers
    int n;
    printf("Enter the number of integers in the list: ");
    scanf("%d", &n);


    int list[n];
    printf("Enter the numbers (positive integers): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    // Process each number in the list
    printf("\nResults:\n");
    printf("Number\tMultiple of 7/11/13\tSum (Even=1/Odd=0)\tPrime (1=Yes/0=No)\n");
    for (int i = 0; i < n; i++) {
        int multiple = 0, e_o = 0, prime = 0;
        info(list[i], &multiple, &e_o, &prime);
        printf("%d\t%d\t\t\t%d\t\t\t%d\n", list[i], multiple, e_o, prime);
    }

    return 0;
}
