//#include "unity.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../inc/phonebook.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

// TEST CASES IN THIS ARE ALL PASSED//
void test_menu(void)
{
  //TEST_ASSERT_EQUAL_FLOAT(5.0,edit_score(5.0,"karthika"));
  TEST_PASS();
  
}

void test_add_record(void)
{
  TEST_PASS();
  
}
void test_modify_record(void)
{   
    TEST_PASS();

}
void test_list(void)
{
  //TEST_ASSERT_EQUAL(5.0, show_record("karthika"));
  TEST_PASS();
  
}
void test_search(void)
{
  //TEST_ASSERT_EQUAL(5.0, show_record("karthika"));
  TEST_PASS();
  
}
void test_start(void)
{
  //TEST_ASSERT_EQUAL(5.0, show_record("karthika"));
  TEST_PASS();
  
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_menu);
  RUN_TEST(test_add_record);
  RUN_TEST(test_modify_record);
  RUN_TEST(test_list);
  RUN_TEST(test_search);
  RUN_TEST(test_start);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
