#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter First Integer = A: ");
    scanf("%d", &a);
     printf("Enter Second Integer = B: ");
    scanf("%d", &b);
    temp = a; a = b; b = temp;
    printf("After swap: A = %d, B = %d\n", a, b);
    return 0;
}

