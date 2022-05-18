#include<stdio.h>
int main()
{
    int input[100];
    int i,j,size_array,temporary_var;
    printf("enter the total size of the array");
    scanf("%d",&size_array);
    printf("\n enter the array values to sort");
    for(i=0;i<size_array;i++)
    {
        scanf("%d",&input[i]);       
    }
         for (i = 0; i < size_array; ++i) 
        {
             for (j = i + 1; j < n; ++j)
            {
                 if (input[i] > input[j]) 
                {
                     temporary_var =  input[i];
                    input[i] = input[j];
                    input[j] = b;
                 }
             }
         }
printf("\n The Values are");
     for(i=0;i<size_array;i++)
    {
        printf("\n %d",input[i]);       

    }
return 0;
}
