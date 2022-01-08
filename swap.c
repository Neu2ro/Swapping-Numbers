//Write a C Program to perform the swapping of 2 numbers without using a temporary variable.

#include <stdio.h>

void main()
{
    //Declaring 2 variables x & y
    int x, y;

    //Asking values from user
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);

    //Printing the values before swapping
    printf("Before swap x = %d y = %d \n", x, y);

    //Logic for swapping the two numbers
    x = x + y;     //Adding the numbers and saving them in x
    y = x - y;     //Subtracting y from x(having new value) to get the previous value of x
    x = x - y;     //Subtracting y(new value) from x(having value of x + y) to get the previous value of y

    //Printing the values after swapping
    printf("After swap x = %d y = %d", x, y);
}
