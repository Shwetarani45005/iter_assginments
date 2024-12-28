#include <stdio.h>

int main(void)
{
    int num_employees;

    // Prompt for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Initialize variables for total payroll and average pay
    double total_payroll = 0.0;

    for (int i = 0; i < num_employees; i++) {
        int id_no, h_w_r, n_o_h;

        // Prompt user to enter employee data
        printf("\nEnter the employee ID, hourly wage rate, and hours worked in a week for employee %d:\n", i + 1);
        scanf("%d %d %d", &id_no, &h_w_r, &n_o_h);

        // Calculate total pay based on hours worked
        double total_pay;
        if (n_o_h > 40) {
            total_pay = h_w_r * 40 + (n_o_h - 40) * 1.5 * h_w_r;
        } else {
            total_pay = h_w_r * n_o_h;
        }

        // Calculate net pay after tax deduction
        double net_pay = total_pay - (total_pay * 3.625 / 100);

        // Output individual employee's net pay
        printf("Employee ID: %d, Net Pay: %.2f\n", id_no, net_pay);

        // Accumulate total payroll
        total_payroll += net_pay;
    }

    // Calculate and display the average pay
    double average_pay = total_payroll / num_employees;
    printf("\nTotal Payroll: %.2f\n", total_payroll);
    printf("Average Pay: %.2f\n", average_pay);

    return 0;
}
