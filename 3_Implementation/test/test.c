
/**
 * @file test.c
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"unity.h"
#include"unity_internals.h"
#include"electrical.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/**
 * @brief Transformer test cases
 * 
 */
void test_transformer()
{
  TEST_ASSERT_EQUAL(SUCCESS,transformer_tests(220,1.25,150,20,12.5));
  TEST_ASSERT_EQUAL(ERROR,transformer_tests(220,1.25,150,300,12.5));
  TEST_ASSERT_EQUAL(ERROR,transformer_tests(20,1.25,150,300,12.5));
  TEST_ASSERT_EQUAL(ERROR,transformer_tests(220,20,150,300,12.5));
}

/**
 * @brief Motor test cases
 * 
 */
void test_motor()
{
  TEST_ASSERT_EQUAL(SUCCESS,motor_tests(1,2));
  TEST_ASSERT_EQUAL(ERROR,motor_tests(5,2));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  
  //RUN_TEST(test_transformer);
  RUN_TEST(test_motor);
  RUN_TEST(test_transformer);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

