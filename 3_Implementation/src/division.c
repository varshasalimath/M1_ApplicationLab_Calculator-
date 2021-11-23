#include<calc.h>

/**
 * @brief funtion to perform division
 * @switch(Calc_oprn)
 * @return test_value
 */

test_values division()
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}