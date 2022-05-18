int main()
{
    int basic,gross,dearness,house_rent;
    printf("Enter Basic Salary");
    scanf("%d",&basic);
    dearness=(basic*40)/100;
    house_rent=(basic*20)/100;
gross=basic+dearness+house_rent;
printf("\n Gross Salary=%d",gross);
    getch();
    return 0;
}
