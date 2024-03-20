#include <stdio.h>
#include <stdbool.h>

int main () {
    int a = 30;
    double b = 10.5; //Here a double is a 64 bit number (8 bytes = 64 bits)
    float c = 10.5;//Here the number is 32 bit (4 byte = 32 bits)
    printf("%lu\n", sizeof(b)); //do not worry too much about the flag in the print statement like %lu because the compiler can help you out with that
    char d = 'a';
    char e[] = "char array"; //aka this is a string
    bool f = false;

    int zero = .9999999;
    printf("Zero is %d\n", zero); //This is example of a excplicit function

    int slices = 17;// Now this pizza problem will be example of a implicit function
    int people = 2;

    double slicesPerPerson = (double) slices / people; //8
    printf("%lf\n", slicesPerPerson);

    double test1 = (25/2) * 2; //24.00
    double test2 = (25/2) *2.0; //24.00

    double test3 = 25.0 / 2 * 2; //25.0;
    double test4 = (double) 25 / 2 * 2.0; // 25.0

    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);
    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);

    return 0;
}