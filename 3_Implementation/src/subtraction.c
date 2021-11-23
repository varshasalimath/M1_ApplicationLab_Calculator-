#include<calc.h>

/**
 * @brief funtion to perform subtraction
 * @switch(Calc_oprn)
 * @return test_value
 */
test_values subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}
