
#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{  
    
    int op, n1, n2;  
    float res;  
    char ch;  
    do  
    {  
         
        printf (" Select an operation to perform the calculation in C Calculator:\n ");  
        printf("-----------------------------------------------------------------");
        printf (" \n 1. Addition  \t \t 2. Subtraction \n 3. Multiplication \t 4. Division \n 5. Square \t \t 6. Square Root \n 7. Exit \n \n Please, Make a choice :- ");      
          
        scanf ("%d", &op);  
      
      
     
    switch (op)  
    {  
        case 1:  
            
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 + n2; 
            printf("-------------------------------------------\n");  
            printf ("|  Addition of two numbers is: %.2f  |\n", res);
            printf("-------------------------------------------\n"); 
            break; 
              
        case 2:  
              
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 - n2; 
            printf("-------------------------------------------\n");  
            printf ("|  Subtraction of two numbers is: %.2f  |\n", res);
            printf("-------------------------------------------\n");   
            break;   
              
        case 3:  
              
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 * n2;  
            printf("----------------------------------------------\n");  
            printf ("|  Multiplication of two numbers is: %.2f  |\n", res);
            printf("----------------------------------------------\n");   
            break;   
              
        case 4:  
              
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {   printf("--------------------------------------------------------\n"); 
                    printf (" \n|  Divisor cannot be zero. Please enter another value  |\n");  
                    scanf ("%d", &n2);        
                    printf("--------------------------------------------------------\n"); 
                }  
            res = n1 / n2;  
            printf("---------------------------------------\n"); 
            printf("|  Division of two numbers is: %.2f  |\n", res);
            printf("---------------------------------------\n");  
            break;   
              
        case 5:  
              
            printf (" You chose: Square");  
            printf ("\n Enter the Number: ");  
            scanf (" %d", &n1);  
  
            res = n1 * n1; 
            printf("---------------------------------\n"); 
            printf (" | Square of %d number is: %.2f | \n", n1, res);
            printf("---------------------------------\n");  
            break;   
              
        case 6:  
             
            printf (" You chose: Square Root");  
            printf ("\n Enter the Number: ");  
            scanf (" %d", &n1);  
              
            res = sqrt(n1); 
            printf("---------------------------------------\n");   
            printf ("|  Square Root of %d numbers is: %.2f  |\n", n1, res);
            printf("---------------------------------------\n");  
            break;
              
        case 7:  
            printf("----------------------------\n");
            printf ("|  You chose: Exit  |\n");  
            printf("----------------------------\n");
            exit(0);   
            break;  
              
        default: 
            printf("----------------------------\n"); 
            printf("|   Something is wrong!!   |\n");
             printf("---------------------------\n");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 7);  
  
    return 0;        
}
