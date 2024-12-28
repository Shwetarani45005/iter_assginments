/*
PROBLEM: Finding the smallest, largest, average, range, and standard deviation of a collection of numbers.
ANALYSIS: To solve this problem, we need to input the number of values (N) in the collection, then input each value individually.
We need to find the smallest and largest values, compute the average, and accumulate the sum of squares of the numbers for calculating the standard deviation.
Additionally, we will calculate the range of values by subtracting the smallest value from the largest.
DATA REQUIREMENTS:
Problem Inputs:
  int n;            // number of values
  int numbers[n];   // array to hold each value in the collection
Problem Outputs:
  int smallest;     // smallest value in the collection
  int largest;      // largest value in the collection
  int range;        // range of values (largest - smallest)
  double average;   // average of the collection
  double std_dev;   // standard deviation of the collection
DESIGN:
INITIAL ALGORITHM:
  Step1. Prompt the user to input the number of values (N) and store it in 'n'.
  Step2. Loop through 'n' times, prompting the user to enter each value, and store these values in the 'numbers' array.
  Step3. Initialize 'smallest' and 'largest' to the first element of the 'numbers' array.
  Step4. For each number:
      - Update 'smallest' if the current number is less than 'smallest'.
      - Update 'largest' if the current number is greater than 'largest'.
      - Accumulate the sum of values for calculating the average.
      - Accumulate the sum of squares for calculating standard deviation.
  Step5. Calculate the average by dividing the sum of values by 'n'.
  Step6. Calculate the range by subtracting 'smallest' from 'largest'.
  Step7. Calculate the standard deviation using the formula: sqrt((sum_of_sq / n) - average * average).
  Step8. Display the smallest, largest, average, range, and standard deviation.
IMPLEMENTATION:
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    // Step1: Input numbers
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    // Step2: Initialize variables
    int smallest = numbers[0];
    int largest = numbers[0];
    int sum = 0;
    int sum_of_sq = 0;

    // Step3: Process each number
    for (int i = 0; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        sum += numbers[i];
        sum_of_sq += numbers[i] * numbers[i];
    }

    // Step4: Calculate average, range, and standard deviation
    double average = (double)sum / n;
    int range = largest - smallest;
    double std_dev = sqrt((double)sum_of_sq / n - average * average);

    // Step5: Display results
    printf("The Smallest number is %d\n", smallest);
    printf("The Largest number is %d\n", largest);
    printf("The average of the collection is %.2f\n", average);
    printf("Range of values: %d\n", range);
    printf("The standard deviation is %.2f\n", std_dev);

    return 0;
}
