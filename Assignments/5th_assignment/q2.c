#include <stdio.h>

// Here we are defining the functions for the distances that are given in the question
#define moonPerigee 363104
#define moonApogee 405696
#define marsPerigee 54600000
#define marsApogee 401000000
#define venusPerigee 38000000
#define venusApogee 261000000

// This functions records the travel time to mars
void travelToMoon(int speed, float *minimumTime, float *maximumTime) {
    *minimumTime = moonPerigee / (float)speed;
    *maximumTime = moonApogee / (float)speed;
}

// This function records the travel time to Mars in hours
void travelToMars(int speed, float *minimumTime, float *maximumTime) {
    *minimumTime = marsPerigee / (float)speed;
    *maximumTime = marsApogee / (float)speed;
}

// This functions records the travel time to Venus in hours
void travelToVenus(int speed, float *minimumTime, float *maximumTime) {
    *minimumTime = venusPerigee / (float)speed;
    *maximumTime = venusApogee / (float)speed;
}

int main() {
    int option, speed;
    float minimumTime, maximumTime;

    do {
        // Present menu options
        printf("\nMenu:\n");
        printf("1. Are you traveling to the Moon?\n");
        printf("2. Are you traveling to Mars?\n");
        printf("3. Are you traveling to Venus?\n");
        printf("4. Or do you wan to exit program?\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter yout traveling speed here (km/h): ");
                scanf("%d", &speed);
                travelToMoon(speed, &minimumTime, &maximumTimeTime);
                printf("Minimum time to the Moon: %.2f hours\n", minimumTime);
                printf("Maximum time to the Moon: %.2f hours\n", maximumTime);
                break;
            case 2:
                printf("Enter traveling speed (km/h): ");
                scanf("%d", &speed);
                travelToMars(speed, &minimumTime, &maximumTime);
                printf("Minimum time to Mars: %.2f hours\n", minimumTime);
                printf("Maximum time to Mars: %.2f hours\n", maximumTime);
                break;
            case 3:
                printf("Enter traveling speed (km/h): ");
                scanf("%d", &speed);
                travelToVenus(speed, &minimumTime, &maximumTime);
                printf("Minimum time to Venus: %.2f hours\n", minimumTime);
                printf("Maximum time to Venus: %.2f hours\n", maximumTime);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("This is a invalid option. Please choose again\n");
        }
    } while (option != 4);

    return 0;
}
