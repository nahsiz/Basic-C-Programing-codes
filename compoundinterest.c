// Compound interest

#include <stdio.h>
#include <math.h> // for pow() function

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Taking input from user
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    // Compound Interest Formula
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("\nCompound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
