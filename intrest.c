#include<stdio.h>
int main()
{
    float P,R,N;
    printf("enter principal:");
    scanf("%f", &P);
    printf("enter rate:");
    scanf("%f", &R);
    printf("enter time:");
    scanf("%f", &N);
    printf("intrest =%F\n",P*R*N/100);
    return 0;
}
