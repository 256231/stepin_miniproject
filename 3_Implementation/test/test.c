#include"unity.h"
#include"unity_internals.h"
#include"electrical.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  
  RUN_TEST();
  RUN_TEST();
  RUN_TEST();
  RUN_TEST();


  /* Close the Unity Test Framework */
  return UNITY_END();
}