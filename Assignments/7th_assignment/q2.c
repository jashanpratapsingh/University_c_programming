#include <stdio.h>
#include <math.h>

#define C 3.0e8         // Speed of light (m/s)
#define H 6.626e-34     // Planck constant (J-s)
#define K 1.38e-23      // Boltzmann constant (J/K)
#define START_LAMBDA 0.1e-6  // Start wavelength (m)
#define END_LAMBDA 3.0e-6    // End wavelength (m)
#define NUM_POINTS 100   // Number of data points

double planck(double lambda, double T) {
    double exp_term = exp((H * C) / (lambda * K * T));
    return (2 * H * pow(C, 2)) / (pow(lambda, 5) * (exp_term - 1));
}

int main() {
    double lambda, temp;
    FILE *fp;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (temp = 3000; temp <= 5000; temp += 1000) {
        for (lambda = START_LAMBDA; lambda <= END_LAMBDA; lambda += (END_LAMBDA - START_LAMBDA) / NUM_POINTS) {
            fprintf(fp, "%e\t%e\t%e\n", lambda, temp, planck(lambda, temp));
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    return 0;
}
