#include <stdio.h>
#include <math.h>

int main() {
    const double LOW_FITNESS_VALUE = 0.55;
    const double MED_FITNESS_VALUE = 0.65;
    const double HIGH_FITNESS_VALUE = 0.8;

    char gender;
    int age, resting_hr;
    char fitness_level;

    printf("Enter your gender (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your resting heart rate: ");
    scanf("%d", &resting_hr);

    printf("Enter your fitness level (L for low, M for medium, H for high): ");
    scanf(" %c", &fitness_level);

    double MHR, VALUE;
    int THR;

    if (gender == 'M') {
        MHR = 203.7 / (1 + exp(0.033 * (age - 104.3)));
    } else if (gender == 'F') {
        MHR = 190.2 / (1 + exp(0.0453 * (age - 107.5)));
    } else {
        printf("Invalid gender input.\n");
        return 1;
    }

    switch (fitness_level) {
        case 'L':
            VALUE = LOW_FITNESS_VALUE;
            break;
        case 'M':
            VALUE = MED_FITNESS_VALUE;
            break;
        case 'H':
            VALUE = HIGH_FITNESS_VALUE;
            break;
        default:
            printf("Invalid fitness level input.\n");
            return 1;
    }

    THR = round((MHR - resting_hr) * VALUE + resting_hr);

    printf("Your training heart rate is: %d\n", THR);

    return 0;
}