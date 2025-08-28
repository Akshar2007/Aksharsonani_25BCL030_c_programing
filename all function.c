#include<stdio.h>
int main()
{
float a,b,c;
printf("enter two numbers:");
scanf("%f %f", &a,&b);
c = a+b;
printf("add=%f\n", c);
c = a-b;
printf("sub=%f\n",c);
c = a*b;
printf("multi=%f\n", c);
c = a/b;
printf("div=%f\n", c);
return 0;
}
