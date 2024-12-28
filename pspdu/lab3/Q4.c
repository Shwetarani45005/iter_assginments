#include <stdio.h>

double fastfoodbillions(int year);

int main(void) {
    // Write a program that repeatedly prompts the user to enter a year after 2005
    int year = 10000;

    while (year > 2005) {
        printf("Enter a year after 2005 to get prediction or enter a year before 2005 to stop the program: ");
        scanf("%d", &year);

        if (year <= 2005) {
            printf("Program terminated.\n");
            break;
        }

        double prediction = fastfoodbillions(year);
        printf("Billions of dollars of fast food charges U.S. consumers will make in %d is %.2f\n", year, prediction);
    }

    return 0;
}

double fastfoodbillions(int year) {
    int t = year - 2005;
    double F = 33.2 + 16.8 * t;
    return F;
}
