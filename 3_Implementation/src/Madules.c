#include<calc.h>

/**
 * @brief funtion to perform modulus
 * @switch(Calc_oprn)
 * @return test_value
 */

test_values modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}