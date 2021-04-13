#include<stdio.h>
#include<math.h>
#include"electrical.h"
#include"unity.h"
#include"unity_internals.h"



int main()
{
    printf("#######WELCOME TO ELECTRICAL DEPARTMENT#######\n");
    printf("\tThere are three application you can perform\n");
    printf(" 1. Tranformer Equivalent circuit and efficiency from Oc & SC Test\n" );
    printf(" 2. Assessing cost effectiveness of energy efficient motor\n");
    printf(" 3. Approximate monthly bill of our house\n");
    printf(" Press the correspoding number to start\t");
    int application;
    scanf("%d",&application);
    if(application==1)
    {
     perform_transformer();
    }
    else if(application==2)
    {
     perform_motor();
    }
    else if(application==3)
    {
    perform_bill();
    }
    else
    printf("Invalid option\n");

    

   
}