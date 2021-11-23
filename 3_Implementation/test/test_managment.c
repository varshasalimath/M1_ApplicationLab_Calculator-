#include"library_Managment_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_calculator_operation(void){
    TEST_ASSERT_EQUAL(pass,calculator_operation());
}

void test_addition(void){
    TEST_ASSERT_EQUAL(pass,addition());
}

void test_subtraction(void){
    TEST_ASSERT_EQUAL(fail,subtraction("f"));
    TEST_ASSERT_EQUAL(pass,subtraction(125));
}

void test_multiplication(void){
    TEST_ASSERT_EQUAL(pass,multiplication(125*7));
}        

void test_Division(void){
    TEST_ASSERT_EQUAL(pass,division(125/87));
}

void test_power(void){
    TEST_ASSERT_EQUAL(pass,power(2,2));
}

void test_factorial(void){
    TEST_ASSERT_EQUAL(pass,factorial(5));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_calculator_operation);
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_Division);
    RUN_TEST(test_power);
    RUN_TEST(test_factorial);
    
    return UNITY_END();
}
