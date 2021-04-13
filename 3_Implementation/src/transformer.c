/**
 * @file transformer.c
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include"math.h"
#include"electrical.h"
#include"unity.h"
#include"unity_internals.h"

float pg0,pg1;

/**
 * @brief Function to determine equivalent circuit parameters and efficiency of the transfomer
 * 
 */
 void perform_transformer()
{
   printf("#### Open circuit and short circuit test to determine the equvilalent circuit reffered \
           to both lv and hv side and determine its efficiency and voltage regulation ####\n");

           printf("Specify the tranfotmer ratings\t");
           double kva;
           double lv,hv;
           printf("Enter the KVA rating\t");
           scanf("%lf",&kva);
           printf("Enter the Low voltage and high voltage ratings respectiviely\t");
           scanf("%lf %lf",&lv,&hv);
           back0:
           printf("Enter the Open circuit data performed on lv side\n ");
           float v0,i0,p0;
           printf("Enter the applied voltage for oc test\t ");
           scanf("%f",&v0);
           printf("Enter the no load current obserevedt\t ");
           scanf("%f",&i0);
           printf("Enter the watmeter reading obsered in watts\t ");
           scanf("%f",&p0);
 pg0=p0;

           float pf=(p0/(v0*i0));
           if(pf>=1){
            printf("The entered values are wrong check again\n");

            goto back0;
           }
           float sin;
           sin=sqrt(1-pow(pf,2));
           float im1,ic1;
           im1=i0*sin;
           ic1=i0*pf;
           float xm1,rc1;
           xm1=v0/im1;
           rc1=v0/ic1;

           back1:
           printf("Enter the Short circuit data performed on hv side\n ");
           float v1,i1,p1;
           printf("Enter the applied voltage for sc test\t ");
           scanf("%f",&v1);
           printf("Enter the short circuit current obserevedt\t ");
           scanf("%f",&i1);
           printf("Enter the watmeter reading obsered in watts\t ");
           scanf("%f",&p1);
           pg1=p1;
           if(v1>=v0||i1<=i0)
           {
               printf("Entered values are wrong pls check and enter again\n");
              
               goto back1;
           }

           float re2,ze2;
           re2=p1/pow(i1,2);
           ze2=v1/i1;
           if(re2>=ze2)
            goto back1;
           float xe2=sqrt(pow(ze2,2)-pow(re2,2));

           float a=lv/hv;
           float re1,xe1;
           re1=pow(a,2)*re2;
           xe1=pow(a,2)*xe2;

           printf("Eivalent circuit referd to LV side\n");
           printf("                     %0.2f ohm          %0.2f ohm\n",re1,xe1);

           printf(" ----------------------^^^^^^----------@@@@@--------------------\n");
           printf(" ^               |                                              ^\n");
           printf(" |             -----                                            |\n");
           printf(" |            <     @                                           |\n");
           printf(" | %0.2f",rc1);printf("     <     @  %0.2f                                   |\n",xm1);
           printf(" |  ohm       <     @   ohm                                     |\n");
           printf(" |             -----                                            |\n");
           printf(" |               |                                              |\n");
           printf(" --------------------------------------------------------------\n");

        float rc2,xm2;
        rc2=rc1/pow(a,2);
        xm2=xm1/pow(a,2);

        printf("Eivalent circuit referd to HV side\n");
           printf("                     %0.2f ohm          %0.2f ohm\n",re2,xe2);

           printf(" -----------------------^^^^^^----------@@@@@--------------------\n");
           printf(" ^                |                                              ^\n");
           printf(" |              -----                                            |\n");
           printf(" |             <     @                                           |\n");
           printf(" | %0.2f",rc2);printf("     <     @  %0.2f                                   |\n",xm2);
           printf(" |  ohm        <     @   ohm                                     |\n");
           printf(" |              -----                                            |\n");
           printf(" |                |                                              |\n");
           printf(" ---------------------------------------------------------------\n");


           float x=sqrt(p0/p1);

           float lpf,effmax;
           printf("Enter the load power facotr for efficiency calculation\n");
           scanf("%f",&lpf);
           effmax=efficiency(kva,x,lpf);
           printf("Maximum efficieny of tranformer for given load is %f \t",effmax*100);
           int resp;
           printf("\n To find efficiency at different percentage of loading press 1 else press 0 \t");
           scanf("%d",&resp);

           if(resp==1)
           {
               float load,eff;
               printf("Enter the loading to find efficieny \t ");
               scanf("%f",&load);
               eff=efficiency(kva,load/100,lpf);
               printf("The efficiency at %f loading is=%f\t",load,eff*100);

           }
           
          
 



}

/**
 * @brief Functions gives efficiency of the transformer
 * 
 * @param kva 
 * @param x 
 * @param lpf 
 * @return float 
 */

float efficiency(float kva,float x,float lpf)
{
    return ((x*kva*lpf)/((x*kva*lpf)+pg0+pow(x,2)*pg1));
}

/**
 * @brief Function to check the test cases by checking the correct input given to function
 * 
 * @param vol1 
 * @param cur1 
 * @param pow1 
 * @param vol2 
 * @param cur2 
 * @return int 
 */
int transformer_tests(int vol1, int cur1, int pow1, int vol2, int cur2)
{
    if(((pow1)/vol1*cur1)>=1||vol2>=vol1||cur2<=cur1)
    return ERROR;
    else
    return SUCCESS;
}