#include<stdio.h>
int main()
{
    int number,reverse_number=0,temp;
    printf("Enter the number to reverse");
    scanf("%d",&number);
    temp=n%10;
    n=n/10;
    rn=reverse_number+temp*10000;
    temp=number % 10;
    n=n/10;
    rn=reverse_number+temp*1000;
    temp=n%10;
    number=number/10;
    reverse_number=reverse_number+temp*100;
    temp=number%10;
    n=n/10;
    reverse_number=reverse_number+temp*10;
    temp=number%10;
    number=number/10;
    reverse_number=reverse_number+temp*1;
    printf("Number after Reversing=%d",reverse_number);
    getch();
    return 0;

}
