#include<stdio.h>  
int main()  
{  
    int amount, temporary_var=0;    
    printf("Enter amount\n");  
    scanf("%d",&amount);    
    temporary_var=amount / 100;  
    amount=amount - (temporary_var*100);   
    printf("%d x 100 = %d\n", temporary_var, (temporary_var*100));    
    temp=amount / 50;  
    amount=amount - (temporary_var*50);    
    printf("%d x 50 = %d\n", temporary_var, (temporary_var*50));    
    temp=amount / 10;  
    amount=amount - (temporary_var*10);    
    printf("%d x 10 = %d\n", temporary_var, (temporary_var*10));   
    temp=amount / 5;  
    amount=amount - (temporary_var*5);    
    printf("%d x 5 = %d\n", temporary_var, (temporary_var*5));    
    temp=amount / 2;  
    amount=amount - (temp*2);    
    printf("%d x 2 = %d\n", temp, (temp*2));    
    temporary_var=amount / 1;  
    amount=amount - (temp*1);    
    printf("%d x 1 = %d\n", temporary_var, (temporary_var*1));  
  getch();
    return 0;  
}  
