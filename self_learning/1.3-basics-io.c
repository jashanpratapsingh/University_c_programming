// there always a boilerplate code in C
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    
    int x = 50; 
    int y; //declaration
    y = 10; //intialization
    
    printf("%s World\n", "Hello"); //%s is used for writting a defined value
    
    printf("The value of x is %d\n", x); // %d is used whenever we want to print a value
    printf("X: %d, Y: %d\n", x, y);
    printf("Give me a radius: ");
    
    int radius;
    scanf("%d", &radius); //adress-of-operator (pointer)
    
    printf("You chose the value %d\n", radius);
    
    char name[20]; //character array of 20 characters. '\0' takes one spot
    printf("Enter your name: ");
    scanf("%19s", name);
    printf("Your name: %s\n", name);
    return 0;
}