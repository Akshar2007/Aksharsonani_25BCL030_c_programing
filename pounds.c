
#include <stdio.h>
int main() {
float dollars;
printf("Enter Dollars: ");
scanf("%f", &dollars);
float rs = (dollars * 48);
printf("Rupees = %f\n", rs);
float pounds = (rs) / 70;
printf("Pounds = %f\n", pounds);
return 0;
}
