#ifndef __ELECTRICAL_H__
#define __ELECTRICAL_H__

typedef enum error_t {
    SUCCESS = 1,             // Successful operation
    ERROR = 0,              // Error in operation
   
}error_t;



float efficiency(float kva,float x,float lpf);
float motortable(int op,int op1);
float kilowat(int opt);
float pricelist(int opt1,int opt2);
void motorselection(int num1,int num2);
int motor_tests(int input1 ,int input2);
int transformer_tests(int vol1, int cur1, int pow1, int vol2, int cur2);
struct appliances{

char name[100];
float watt;
float hours;

};

void perform_transformer();
void perform_motor();
void perform_bill();
void television(int tv1);
void fan(int fan1);
void fridge(int fri);
void ac(int ac1);
void tubelight(int tl);
void washingmachine(int wash);
void otherappliances(int *num1);

#endif