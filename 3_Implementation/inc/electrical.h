/**
 * @file electrical.h
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ELECTRICAL_H__
#define __ELECTRICAL_H__

/**
 * @brief Error type for test cases
 * 
 */
typedef enum error_t {
    SUCCESS = 1,             // Successful operation
    ERROR = 0,              // Error in operation
   
}error_t;


/**
 * @brief This function gives efficiency of Transformer 
 * 
 * @param kva 
 * @param x 
 * @param lpf 
 * @return float 
 */
float efficiency(float kva,float x,float lpf);
/**
 * @brief This gives Efficiency of motor from the selected option
 * 
 * @param op 
 * @param op1 
 * @return float 
 */
float motortable(int op,int op1);

/**
 * @brief Function returns the kilowatt of selected motor
 * 
 * @param opt 
 * @return float 
 */
float kilowat(int opt);

/**
 * @brief Function contains price list of motor and returns price for selected motor
 * 
 * @param opt1 
 * @param opt2 
 * @return float 
 */
float pricelist(int opt1,int opt2);

/**
 * @brief This function gives which motor will be suitable for replacement
 * 
 * @param num1 
 * @param num2 
 */
void motorselection(int num1,int num2);

/**
 * @brief Function for motor  test cases to check whether input given  is correct
 * 
 * @param input1 
 * @param input2 
 * @return int 
 */
int motor_tests(int input1 ,int input2);
/**
 * @brief Function for trasformer test cases to check whether input given  is correct
 * 
 * @param vol1 
 * @param cur1 
 * @param pow1 
 * @param vol2 
 * @param cur2 
 * @return int 
 */
int transformer_tests(int vol1, int cur1, int pow1, int vol2, int cur2);

/**
 * @brief Structure for the Appliances used in house
 * 
 */
struct appliances{

char name[100];
float watt;
float hours;

};

/**
 * @brief To run the transformer application by giving open circuit and short circuit parameters
 * 
 */
void perform_transformer();

/**
 * @brief To perform cost effectivess on Energy efficient motors
 * 
 */
void perform_motor();

/**
 * @brief To calculate the approximate monthly bill
 * 
 */
void perform_bill();

/**
 * @brief To give the unit consumed by TV
 * 
 * @param tv1 
 */
void television(int tv1);

/**
 * @brief To give the unit consumed by fan
 * 
 * @param fan1 
 */
void fan(int fan1);

/**
 * @brief To give the unit consumed by Fridge
 * 
 * @param fri 
 */
void fridge(int fri);

/**
 * @brief To give the unit consumed by AC
 * 
 * @param ac1 
 */
void ac(int ac1);

/**
 * @brief To give the unit consumed by tubelight
 * 
 * @param tl 
 */
void tubelight(int tl);

/**
 * @brief To give the unit consumed by Washing machine
 * 
 * @param wash 
 */
void washingmachine(int wash);

/**
 * @brief To give the unit consumed by other appliances
 * 
 * @param num1 
 */
void otherappliances(int *num1);



#endif