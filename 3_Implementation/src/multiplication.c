#include<calc.h>

/**
 * @brief funtion to perform multiplication
 * @switch(Calc_oprn)
 * @return test_value
 */

test_values multiplication()
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}