#include <stdio.h>

float fahrenheit_to_celsius (int);

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahrenheit Celsius\n");
    printf("---------- -------\n");

    while (fahr <= upper) {
        celsius =  fahrenheit_to_celsius(fahr);
        printf("%-10.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fahrenheit_to_celsius (int fahr) {
    return 5.0 / 9.0 * (fahr - 32.0);
}
