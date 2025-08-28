#include <stdio.h>
int main() {
    float s1, s2, s3;
    printf("Enter Three Marks\n ");
    printf("Enter Marks:");
    scanf("%f", &s1);
    printf("Enter Marks:");
    scanf("%f", &s2);
    printf("Enter Marks:");
    scanf("%f", &s3);
    float total = s1 + s2 + s3;
    float avg = total / 3;
    printf("Total = %f\n", total);
    printf("Average = %f\n", avg);
    return 0;
}

