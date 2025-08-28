#include <stdio.h>
int main() {
    float gross;
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);
    float allowance = 0.10 * gross;
    float deduction = 0.03 * gross;
    float net = gross + allowance - deduction;
    printf("Net Salary = Gross + Allowance - Deduction = %f\n", net);
    return 0;
}
