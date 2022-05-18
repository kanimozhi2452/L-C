#include<stdio.h>
int main()
{
     int physics, chemistry,biology,maths,cs,total=0,grade,clas;
     int percentage;
     printf("Enter Marks for 5 subjects");
     scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&cs);
     total=physics+chemistry+biology+maths+cs;
     percentage=(total/5);
     printf("\n############################################################################################ \n");
     printf("\t Marklist of student \n");
     printf("\t Physics=%d \n",physics);
     printf("\t Chemistry=%d \n",chemistry);
     printf("\t Biology=%d \n",biology);
     printf("\t Maths=%d \n",maths);
     printf("\t Computer Science=%d \n",cs);
     printf("\t Total Marks Obtained=%d \n",total);
     printf("\t Percentage=%d \n",percentage);
     if(percentage>=90)
     
         printf("\n Grade A");
     
     else if (percentage>=80)
     
         /* code */ printf("\n Grade B");
     
     else if (percentage>=70)
     
         /* code */ printf("\n Grade C");
     
     else if (percentage>=60)
     
         /* code */ printf("\n Grade D");
     
     else if (percentage>=50)
     
         /* code */printf("\n Grade E");
     
     else
     
         /* code */printf("\n Grade F");
     
     getch();
     return 0;



}
