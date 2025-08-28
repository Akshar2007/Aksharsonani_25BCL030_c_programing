#include <stdio.h>
int main() {
    float gross;
    printf("Enter Gross Amount: ");
    scanf("%f", &gross);
    float net = gross - 0.10 * gross;
    printf("Net Amount = Gross - Discount = %f\n", net);
    return 0;
}
