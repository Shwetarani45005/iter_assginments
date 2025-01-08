#include <stdio.h>

void calculate_square_root(double number, double *square_root)
{
    double last_guess = 1.0; // Initial guess
    double next_guess;

    do
    {

        next_guess = 0.5 * (last_guess + number / last_guess);

        if (fabs(next_guess - last_guess) < 0.005)
        {
            *square_root = next_guess;
            break;
        }

        last_guess = next_guess;
    } while (1);
}

int main()
{
    double number;
    double square_root;

    printf("Enter a number: ");
    scanf("%lf", &number);

    calculate_square_root(number, &square_root);

    printf("The square root of %.2f is %.4f\n", number, square_root);

    return 0;
}