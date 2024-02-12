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
    //switch
    printf("What formula do you want?\n");
    printf("[1= Circumference of the circle, 2= volume of the sphere] >");
    sacnf("%d", &option);
    switch(option) {
        case 1:
            printf("Enter the radius: ");
            scanf("%lf", &r);
            printf("The surface is: %lf\n", circ(r));
            break;
        case 2:
            printf("Enter the radius: ");
            scanf("%lf", &r);
            printf("The surface of the circle is: %lf\n", circ(r)
    }
    printf ("1=")       
    return(0);

}