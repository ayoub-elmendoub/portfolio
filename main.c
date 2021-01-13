/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//change stdio color output
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_RED "\x1b[31m"
//Get input from and handle characters as inputs
#define ASK_NUMBER(X)  while(1){\
                        printf(" Please enter the value of "#X": ");\
                        if (scanf("%f", &X) != 1){\
                        printf(ANSI_COLOR_RED" Please enter a valid number\n"ANSI_COLOR_RESET);\
                        while (getchar() != '\n');} else break; }
                        
//To measure time of execution
#include <time.h>
clock_t start, end;
double cpu_time_used;

//Normal fib
int fib(int n){
    
    if(n < 2) return n;
    return fib(n-1)+fib(n-2);
    
}
//Tail recursion
int fibTail(int n,int a,int b){
    
    if(n == 0) return a;
    if(n == 1) return b;
    return fibTail(n-1,b,a+b);
    
}

int main()
{
    //Without optimazition
    start = clock();
    
    printf("%d",fib(40));
    
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n fib without optimazition %lf",cpu_time_used);
    
    //with tail recursion
    start = clock();
    
    printf("%d",fibTail(40,0,1));
    
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n fib with tail recursion optimazition %lf",cpu_time_used);
    
    // //Dynamic programming
    // int f[40];
    // for (int i = 0; i < 40; i++) f[i] = -1;
    
    // start = clock();
    
    // printf("%d",fibDynamic(40));
    
    // end = clock();
    
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("\n fib with dynamic programming %lf",cpu_time_used);
}


//Dynamic Programin
// int fib(int n){
    
//     if(n < 2) return n;
//     if(f[n] != -1) return f[n];
//     return f[n] = fib(n-1)+fib(n-2);
    
// }
