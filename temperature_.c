#include <stdio.h>

int main() {
    float fahrenheit;
    
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float centigrade = (fahrenheit - 32) * 5 / 9;
    
    printf("Temperature in Fahrenheit: %.2f degree Celsius\n", centigrade);

    return 0;
}
