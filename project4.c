#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    // Celsius to Fahrenheit
    printf("enter temperature in Celsius: ");
      scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
          printf("In Fahrenheit: %.1f\n\n", fahrenheit);

    // Fahrenheit to Celsius
          printf("enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
      celsius = (fahrenheit - 32) * 5 / 9;
    printf("In Celsius: %.1f\n", celsius);

    return 0;
}
