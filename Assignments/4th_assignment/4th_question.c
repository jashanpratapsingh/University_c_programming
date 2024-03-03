#include <stdio.h>
#include <math.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Oops! Unable to open the file.\n");
        return 1;
    }

    int employee_number, num_shifts;
    float base_wage_rate, hours_worked, total_hours, gross_pay;

    printf("Employee Number   Total Hours   Gross Pay\n");
    printf("-----------------------------------------\n");

    while (fscanf(file, "%d %d %f", &employee_number, &num_shifts, &base_wage_rate) == 3) {
        total_hours = 0;
        for (int i = 0; i < num_shifts; i++) {
            fscanf(file, "%f", &hours_worked);
            total_hours += hours_worked;
        }

        if (total_hours <= 15)
            gross_pay = total_hours * base_wage_rate;
        else if (total_hours <= 25)
            gross_pay = total_hours * base_wage_rate * 1.05;
        else
            gross_pay = total_hours * base_wage_rate * 1.10;

        gross_pay = roundf(gross_pay * 100) / 100;

        printf("%-16d%-14.2f%-10.2f\n", employee_number, total_hours, gross_pay);
    }

    fclose(file);
    return 0;
}