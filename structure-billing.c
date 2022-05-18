// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct item_t
{
    char item_name[32];
    int item_cost;
}item;


int main() 
{

    int  i, itemcount = 0,totalcost = 0, if_repeat, repeat_count;
    item *cart[100];
    int  output[100];
    char itemvalue[20];
    char buffer[1024];
            
    printf("No. of items to collect: ");
    fgets(itemvalue,20,stdin);
    itemcount = atoi(itemvalue);
    printf("\nEnter item Details: \n");

    //Loop to collect items from the store
    for (i = 0; i < itemcount; i++)
    {
        cart[i] = (item *) malloc(sizeof(item));
        printf("\nEnter item name:");
        fgets(buffer, sizeof buffer, stdin);
        printf("\nEnter item cost:");
            
        strcpy(cart[i]->item_name, buffer);
        fgets(itemvalue, 20, stdin);
        cart[i]->item_cost = atoi(itemvalue);
        totalcost = totalcost + atoi(itemvalue);   
    }

     //Logic
    //Loop for logic
    if_repeat = -1;
    for (i = 0; i < itemcount; i++)
    {
        repeat_count = 1;
        for (int  j = i + 1; j < itemcount; j++ )
        {
            if (cart[i]->item_name == cart[j]->item_name)
            {
                repeat_count++;
                output[j] = if_repeat;
            }

        }
        if (output[i] != if_repeat)
            output[i] = repeat_count;

    } 
    
        //printing
    printf("1)");
    for(i = 0; i < itemcount; i++)
        printf("%s, %d\n", cart[i]->item_name, cart[i]->item_cost);
    printf("2) Total Cost:%d",totalcost);
    printf("\n 3)");

   for (i = 0; i < itemcount; i++)
   {
       if (output[i] != if_repeat)
           printf("%s %d", cart[i]->item_name, output[i]);
    }
    getch();
    return 0;
}
