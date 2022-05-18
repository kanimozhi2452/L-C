#include<stdio.h>
int main()
{
    int km,meter,feet,inches,centimeter;
    //Getting Input
    printf("Enter the Distance between Two Cities");
    scanf("%d",&km);
    
       //Formula calculation
       meter = km * 1000;
feet = km * 3280.84;
inches = km * 39370.1;
centimeter = km * 100000;
//printing
printf("\n Meter=%d \n Feets= %d \n inches=%d \n centimeter=%d",meter,feet,inches,centimeter);
getch();
return 0;
}
