/**
 * @file bill.c
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<math.h>
#include"electrical.h"

float total=0;

/**
 * @brief This function is to calculate monthly bill of house
 * 
 */
void perform_bill()
{ 
     float cost,price;
   int num;
    printf("########  Monthly Home electricity billing ###########\n");
    printf("  Enter the appliances quantity and  if not there press 0\n");
    printf("  How many television you have \t");

    scanf("%d",&num);
    if(num!=0)
        television(num);

  printf("  How many ceiling Fan you have \t");

    scanf("%d",&num);
    if(num!=0)
        fan(num);

    printf("  How many fridge are there\t");
    scanf("%d",&num);
    if(num!=0)
        fridge(num);

         printf("  How many AC's are there\t");
    scanf("%d",&num);
    if(num!=0)
        ac(num);

         printf("  How many tubelights are there\t");
    scanf("%d",&num);
    if(num!=0)
        tubelight(num);
        printf("  How many Washing machine are there\t");
    scanf("%d",&num);
    if(num!=0)
        washingmachine(num);

        char respon;
        printf("  DO u have anyother appliances at home if yes press y else n\t");
        scanf("%s",&respon);
        if(respon=='y')
        {
            int othap;
            printf("How many other appliances u have\t");
            scanf("%d",&othap);
            otherappliances(&othap);
        }
        printf("\n   Enter the price of 1 unit in your state\t");
        scanf("%f",&price);
        cost=(total/1000)*price*30;


 printf(" Approximate montly bill is %0.2f",cost);

}

/**
 * @brief Calculates the unit consumed by Tv
 * 
 * @param tv1 
 */

void television(int tv1)
{
    struct appliances tv[9];
tv[0].watt=0;
tv[1].watt=40;
tv[2].watt=50;
tv[3].watt=60;
tv[4].watt=80;
tv[5].watt=100;
tv[9].watt=0;

 printf("Select the Tv in your home and press the no to select and if not present in the list press' 9 ' and add the details\n");

    printf(" 1-24 inch LED tv\n 2-32 inch LED tv\n 3-37 inch LED tv\n 4-42 inch LED tv\n 5-50 inch LED tv\n ");
    int opt,i;
for(i=1;i<=tv1;i++)
{
    printf("Enter the option for tv\t");
    scanf("%d",&opt);

    if(opt==9)
    {
        char tvname[20];
        printf("Enter the wattage of our tv\t");
        scanf("%f",&tv[opt].watt);

    }
    printf("Enter the average hours tv %d is On\t",i);
    scanf("%f",&tv[opt].hours);
    total=total+tv[opt].watt*tv[opt].hours;


}

}

/**
 * @brief Calculates the unit consumed by Fan
 * 
 * @param fan1 
 */
void fan(int fan1)
{   struct appliances fan[5];
    fan[0].watt=0;
    fan[1].watt=75;
    fan[2].watt=70;
    fan[3].watt=56;
    fan[4].watt=32;
    fan[5].watt=48;
    printf("Select the ceiling Fan in your home .press the no to select and if not present in the list press' 9 ' and add the details\n");

   printf("1-havells\n 2-Crompton \n 3-Bajaj\n 4-Usha\n 5-orient\n ");
    int opt,i;
    for(i=1;i<=fan1;i++)
{
    printf("Enter the option for fan\t");
    scanf("%d",&opt);
     if(opt==9)
    {

        printf("Enter the wattage of this fan\t");
        scanf("%f",&fan[opt].watt);
    }
    printf("Enter the average hours fan %d is On\t",i);
    scanf("%f",&fan[opt].hours);
    total=total+fan[opt].watt*fan[opt].hours;


}

}

/**
 * @brief Gets the wattage and average hours in day fridge is on and  Calculates the unit consumed by Fridge
 * 
 * @param fri 
 */
void fridge(int fri)
{
    struct appliances fridge1[9];
    int i;
    for(i=0;i<fri;i++)
    {

        printf("Enter the wattage of Fridge %d\t",i+1);
        scanf("%f",&fridge1[i].watt);
        printf("Enter the average hours fridge %d is On\t",i+1);
        scanf("%f",&fridge1[i].hours);
        total=total+fridge1[i].watt*fridge1[i].hours;
    }

}

/**
 * @brief Gets the wattage and average hours in day AC is on and  Calculates the unit consumed by AC
 * 
 * @param ac1 
 */
void ac(int ac1)
{

    struct appliances AC[9];
    int i;
    for(i=0;i<ac1;i++)
    {

        printf("Enter the wattage of Air Conditioner %d\t",i+1);
        scanf("%f",&AC[i].watt);
        printf("Enter the average hours AC %d is On\t",i+1);
        scanf("%f",&AC[i].hours);
        total=total+AC[i].watt*AC[i].hours;
    }

}

/**
 * @brief Gets the quantity , wattage and average hours in day tubelight is on and  Calculates the unit consumed by it.
 * 
 * @param tl 
 */
void tubelight(int tl)
{
    struct appliances tube[9];
    char rsp;
    if(tl!=1)
    {

    printf("Is rating of all tubelight same ? if yes press y else n \t");
    scanf("%s",&rsp);
    if(rsp=='y')
    {
        printf("Enter he wattage of tubelight\t");
        scanf("%f",&tube[0].watt);
        printf("Enter the average hours all the tubeliht is on\t");
        scanf("%f",&tube[0].hours);
        total=total+(tl*tube[0].watt*tube[0].hours);

    }

        goto down;
    }
    int i;
    for(i=0;i<tl;i++)
    {

        printf("Enter the wattage of tube light -%d\t",i+1);
        scanf("%f",&tube[i].watt);
        printf("Enter the average hours tube light%d is On\t",i+1);
        scanf("%f",&tube[i].hours);
        total=total+tube[i].watt*tube[i].hours;
    }
    down:
        printf("\n");
}

/**
 * @brief Gets the wattage and average hours in day washingmachine is on and  Calculates the unit consumed by it.
 * 
 * @param wash 
 */
void washingmachine(int wash)
{
    struct appliances wash1[9];
    int i;
    for(i=0;i<wash;i++)
    {

        printf("Enter the wattage of Washing Machine  %d\t",i+1);
        scanf("%f",&wash1[i].watt);
        printf("Enter the average hours Washing machine %d is On\t",i+1);
        scanf("%f",&wash1[i].hours);
        total=total+wash1[i].watt*wash1[i].hours;
    }

}

/**
 * @brief This function is to add anyother appliances there at home and get its wattage and average hours it's on.
 * 
 * @param num1 
 */
void otherappliances(int *num1)
{
    struct appliances others[*num1];
    int j;
    for(j=0;j<*num1;j++)
    {

        printf("Enter the name of appliance\t");
        scanf("%s",&others[j].name);
        printf("Enter the wattage of %s\t",others[j].name);
        scanf("%f",&others[j].watt);
        printf("Enter the average hours Washing machine %d is On\t",j+1);
        scanf("%f",&others[j].hours);
        total=total+others[j].watt*others[j].hours;

    }

}
