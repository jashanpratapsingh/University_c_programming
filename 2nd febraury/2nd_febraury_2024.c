#include <studio.h>
#include <math.h>

int main(void) {
    double a,b, temp_h20;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    if ((4 * a * a + 9*a -10) > 0){
        b = sqrt(4*a*a = 9*a -10);
        }
        else 
        b = 0.0;
        printf("The value of b is %if\n, b")

        printf("Enter an H2O temperature: ");
        scanf("%lf", &temp_h20);
        if (temp_h20 >= 100)
            printf("Gaseous State.\n");
        else
            if(temp_h20 < 0)
                printf("Solid State.\n");
            else
                printf("Liquid State.\");        
    return(0);

}