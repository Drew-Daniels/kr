#include <stdio.h>

/*
    print Farenheit-Celsius table
    for fahr = 0, 20, ..., 300
*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Farenheit => Celsius Table\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("Celsius => Farenheit Table\n");
    /* Add logic here */
    int cLower, cUpper, cStep;
    cLower = 0;
    cUpper = 300;
    celsius = cLower;
    while (celsius <= cUpper) {
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%3.1f\t%6.0f\n", celsius, fahr);
        celsius = celsius + 20;
    }
}
