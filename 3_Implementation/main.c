/**
 * @file main.c
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
#include"unity.h"
#include"unity_internals.h"


/**
 * @brief Main file to Run the electrical based application
 * 
 * @return int 
 */
int main()
{
    printf("################## WELCOME TO ELECTRICAL DEPARTMENT ###################\n");
    printf("\tThere are three application you can perform\n");
    printf("       1. Tranformer Equivalent circuit and efficiency from Oc & SC Test\n" );
    printf("       2. Assessing cost effectiveness of energy efficient motor\n");
    printf("       3. Approximate monthly bill of our house\n");
    printf("           Press the correspoding number to start\t");
    int application;
    scanf("%d",&application);
    if(application==1)
    {
     perform_transformer();     //call the transformer function to calculate
    }
    else if(application==2)
    {
     perform_motor();            // call the motor function to calculate
    }
    else if(application==3)
    {
    perform_bill();             // call bill function to calculate
    }
    else
    printf("Invalid option\n");

    

   
}