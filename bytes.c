#include<stdio.h>
int main()
{
   float bytes,h;
   printf("enter bytes:");
   scanf("%f", &h);
   float kb =h/1024;
   float mb =kb/1024;
   float gb =mb/1024;
   printf("kb=%f\nMb = %f\nGb =%f\n",kb,mb,gb);
    return 0;
}
