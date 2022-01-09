    #include <stdio.h>  
    #include <conio.h>  
    #include <math.h>  
    #include <stdlib.h>  
          
    // function declarations   
    float addition();  
    float subtract();  
    float multiply();  
    float divide();  
    float square();  
    float squareroot();  
    void exit();  
      
    int main()  
    {  
        int num;  
        do  
        {  
             
            printf (" Select an operation to perform the simple calculation:");  
            printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, choose a choice: ");      
              
            scanf ("%d", &num);  
          
          
        //  switch statement to call an arithmetic operation  
        switch (num)  
        {  
            case 1:  
                addition(); /* It call the addition() function */  
                break; 
                  
            case 2:  
                subtract(); /* It call the subtract() function */  
                break; 
                  
            case 3:  
                multiply(); /* It call the multiply() function*/  
                break; 
                  
            case 4:  
                divide(); /* It call the divide() function */
                break; 
                  
            case 5:  
                square(); /* It call the square() function */
                break;
                  
            case 6:  
                squareroot(); /* It call the square root() function */  
                break;  
                  
            case 7:  
                exit(0);  
                break; 
                  
            default:  
                printf(" Error!! ");  
                break;                        
        }  
        printf (" \n \n ********** \n ");  
        } while (num != 7);  
          
      
        return 0;        
    }  
      
      
      
    // function definition  
    float addition()  
    {  
        float i, sum, num;    
        printf ("The first number is: ");  
        scanf ("%f", &num);  
        printf ("The second number is:  ");  
        
            scanf(" %f", &i);  
            sum = i + num;  
          
        printf (" \nThe addition of %.1f + %.1f is = %.2f ",i,num, sum);  
        return 0;  
    }  
      
    float subtract()  
    {  
        float N, n, subs;  
        printf (" The first number is: ");  
        scanf ("  %f", &N);  
        printf (" The second number is: ");  
        scanf ("  %f", &n);  
        subs = N - n;    
        printf (" The subtraction of %.1f - %.1f is = %.2f", N, n, subs);  
    }  
      
    float multiply()  
    {  
        float N, n, mult;  
        printf (" The first number is: ");  
        scanf ("  %f", &N);  
        printf (" The second number is: ");  
        scanf ("  %f", &n);  
        mult = N * n;    
        printf (" The multiply of %.1f * %.1f is = %.2f", N, n, mult);  
    }  
    float divide()  
    {  
        float N, n;
        float divs;  
        printf (" The first number is: ");  
        scanf ("  %f", &N);  
        printf (" The second number is: ");  
        scanf ("  %f", &n);  
          
        if (n == 0)  
        {  
            printf (" \n Invalid. Please enter another value :");  
            scanf ("%f", &n);        
        }  
        divs = N / n;    
        printf (" \n The division of %.1f / %.1f is = %.3f", N, n, divs);  
    }  
      
    float square()  
    {  
        float N, sqr;  
        printf (" Enter a number to get the Square: ");  
        scanf ("  %f", &N);  
          
        sqr = N * N;    
        printf (" \n The Square of %.1f is = %.2f", N, sqr);  
    }  
      
       
    float squareroot()  
    {  
        float sqroot;  
        float N;  
        printf (" Enter a number to get the Square Root: ");  
        scanf ("  %f", &N);  
      
        sqroot = sqrt(N);   
        printf (" \n The Square Root of %.1f is = %.3f", N, sqroot);  
    }
      
