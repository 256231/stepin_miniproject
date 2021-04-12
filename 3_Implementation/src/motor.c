#include<stdio.h>
#include<math.h>
#include"electrical.h"

void perform_motor()
{

     int option,option1;

    printf(" ASSESSING COST EFFECTIVENESS OF ENERGY EFFICIENT\n");
    printf("What type of motor currntly in use\n");
    printf("1.IE1\n 2.IE2 3.IE3 4.IE4\n Enter the option\t");
    scanf("%d",&option);
    
    if(option==4)
    {
        printf("Your motor is of high efficiency standatrd no change needed \n");
       
    }
    else
    {


    printf("Select the Kw rating of motor in use and press the no. accordingly\n");
    printf("1-3.7Kw 2- 7Kw 3 -11Kw 4- 15Kw 5- 30Kw 6- 45Kw 7-55Kw\t");
    scanf("%d",&option1);

      motorselection(option,option1);

      printf("\n On the basis of Finance availability Customer will decide from above option\n");
     

    }
}

void motorselection(int num1,int num2)
{
    
    float x,saving;
    float workhrs,workdays,tarrif;
    float extrainvt;
    float payback;

    printf("Enter the working hours per day and working days in a year of this motor respectively\t ");
    scanf("%f %f",&workhrs,&workdays);
    printf("Enter the tarrif(power rate per kwh\t");
    scanf("%f",&tarrif);


    switch(num1+1)
    {

    case 2:
        printf("If you select IE2 motor\n");
        x=((kilowat(num2)/motortable(num1,num2))-(kilowat(num2)/motortable(2,num2)));

        printf("Price of Motor=%0.1f\n",pricelist(2,num2));

        saving=x*workhrs*workdays*tarrif;
        printf("Saving per year is %0.2f\t",saving);
        extrainvt=pricelist(2,num2)-pricelist(num1,num2);
        printf("Extra investment= %0.2f\t",extrainvt);
        payback=(12*extrainvt)/saving;
        printf("Payback period is %0.1f months\t",payback);
    case 3:
        printf("\nIf you select IE3 motor\n");
        x=((kilowat(num2)/motortable(num1,num2))-(kilowat(num2)/motortable(3,num2)));
        printf("Price of Motor=%0.1f\n",pricelist(3,num2));
        saving=x*workhrs*workdays*tarrif;
        printf("Saving per year is %0.2f\t",saving);
        extrainvt=pricelist(3,num2)-pricelist(num1,num2);
        printf("Extra investment= %0.2f\t",extrainvt);
        payback=(12*extrainvt)/saving;
        printf("Payback period is %0.1f months\t",payback);
    case 4:
        printf("\nIf you select IE4 motor\n");
        x=((kilowat(num2)/motortable(num1,num2))-(kilowat(num2)/motortable(4,num2)));
        printf("Price of Motor=%0.1f\n",pricelist(4,num2));
        saving=x*workhrs*workdays*tarrif;
        printf("Saving per year is %0.2f\t",saving);
        extrainvt=pricelist(4,num2)-pricelist(num1,num2);
        printf("Extra investment= %0.2f\t",extrainvt);
        payback=(12*extrainvt)/saving;
        printf("Payback period is %0.1f months",payback);
    }
      
}

float motortable(int op,int op1)
{
    float eff;
    if(op==1)
    { switch(op1)
    {
        case 1:eff=82.3; break;
        case 2:eff=86; break;
        case 3:eff=87.6; break;
        case 4:eff=88.7; break;
        case 5:eff=90.7; break;
        case 6:eff=91.7; break;
        case 7:eff=92.1; break;
    }
    }
    else if(op==2)
    { switch(op1)
    {
        case 1:eff=86; break;
        case 2:eff=88.7; break;
        case 3:eff=89.8; break;
        case 4:eff=90.6; break;
        case 5:eff=92.3; break;
        case 6:eff=93.1; break;
        case 7:eff=93.5; break;
    }
    }

    else if(op==3)
    { switch(op1)
    {
        case 1:eff=88.4; break;
        case 2:eff=90.4; break;
        case 3:eff=91.4; break;
        case 4:eff=92.1; break;
        case 5:eff=93.6; break;
        case 6:eff=94.2; break;
        case 7:eff=94.6; break;
    }
    }

    else if(op==4)
    { switch(op1)
    {
        case 1:eff=90.9; break;
        case 2:eff=92.6; break;
        case 3:eff=93.3; break;
        case 4:eff=93.3; break;
        case 5:eff=94.9; break;
        case 6:eff=95.4; break;
        case 7:eff=95.7; break;
    }
    }

return eff/100;

}

float kilowat(int opt)
{

    float kw1;
     switch(opt)
    {
        case 1:kw1=3.7; break;
        case 2:kw1=7.5; break;
        case 3:kw1=11; break;
        case 4:kw1=15; break;
        case 5:kw1=30; break;
        case 6:kw1=45; break;
        case 7:kw1=55; break;
    }
    return kw1;

}
float pricelist(int opt1,int opt2)
{
    float price;
    if(opt1==1)
    { switch(opt2)
    {
        case 1:price=13950; break;
        case 2:price=21400; break;
        case 3:price=38100; break;
        case 4:price=47400; break;
        case 5:price=92000; break;
        case 6:price=130000; break;
        case 7:price=176000; break;
    }
    }
    else if(opt1==2)
    { switch(opt2)
    {
        case 1:price=15500; break;
        case 2:price=23000; break;
        case 3:price=41000; break;
        case 4:price=51000; break;
        case 5:price=99000; break;
        case 6:price=14000; break;
        case 7:price=190000; break;
    }
    }

    else if(opt1==3)
    { switch(opt2)
    {
        case 1:price=16600; break;
        case 2:price=24700; break;
        case 3:price=44000; break;
        case 4:price=55000; break;
        case 5:price=106000; break;
        case 6:price=150000; break;
        case 7:price=204000; break;
    }
    }

    else if(opt1==4)
    { switch(opt2)
    {
        case 1:price=17900; break;
        case 2:price=26700; break;
        case 3:price=47500; break;
        case 4:price=59400; break;
        case 5:price=114000; break;
        case 6:price=162000; break;
        case 7:price=220000; break;
    }
    }

return price;


}