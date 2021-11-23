/**
 * @file calc.h
 * @author Pavan v (pavan.v1@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BASIC_CALCULATOR_H_
#define __BASIC_CALCULATOE_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for Calculator
 * 
 */

/**
 * @brief  return type for function for unit testing
 * 
 */
typedef enum test_values{
    pass = 1;
    fail = 0;
}test_values;

/**
 * @brief function to find a operation calculator_operations
 * 'H','h'
 * @return test_values
 * 
 */

test_values calculator_operations();

/**
 * @brief function to perform addition
 * switch(Calc_oprn)
 * @return test_values
 */

test_values addition();

/**
 * @brief function to perform subtraction
 * switch(Calc_oprn)
 * @return test_values
 */

test_values subtraction();

/**
 * @brief function to perform Multiplication
 * switch(Calc_oprn)
 * @return test_values
 */

test_values multiplication();

/**
 * @brief function to perform Division
 * switch(Calc_oprn)
 * @return test_values
 */
test_values division();

/**
 * @brief function to perform modulus
 * switch(Calc_oprn)
 * @return test_values
 */

test_values modulus();
/**
 * @brief function to perform factorial
 * switch(Calc_oprn)
 * @return test_values
 */
test_values factorial();

/**
 * @brief function to perform power
 * switch(Calc_oprn)
 * @return test_values
 */

test_values power();

#endif



