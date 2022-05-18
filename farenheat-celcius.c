#include<stdio.h>
int main()
{
    int celcius,farenheat;
    printf("Enter Farenheat value");
    scanf("%d",&farenheat);
    celcius =(farenheat - 32)* 5 / 9;
    printf("Farenheat value =%d",celcius);
    getch();
    return 0;
}
