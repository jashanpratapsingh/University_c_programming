#include <stdio.h>

void normalize(double xi[], double normxi[], int count, double min, double max, double xlow, double xhigh) {
    int i;
    for (i = 0; i < count; i++) {
        normxi[i] = min + (xi[i] - xlow) * (max - min) / (xhigh - xlow);
    }
}

int main() {
    int count, i;
    double min, max, xlow, xhigh;
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf(" There was a Error while opening file.\n");
        return 1;
    }
    fscanf(fp, "%d %lf %lf", &count, &min, &max);
    double xi[count];
    for (i = 0; i < count; i++) {
        fscanf(fp, "%lf", &xi[i]);
    }
    fclose(fp);


    double normxi[count];
    xlow = xi[0];
    xhigh = xi[0]; 
    for (i = 1; i < count; i++) {
        if (xi[i] < xlow) xlow = xi[i];
        if (xi[i] > xhigh) xhigh = xi[i];
    }
    normalize(xi, normxi, count, min, max, xlow, xhigh);
    printf("Original   Normalized\n");
    for (i = 0; i < count; i++) {
        printf("%8.2lf   %10.2lf\n", xi[i], normxi[i]);
    }

    return 0;
}
