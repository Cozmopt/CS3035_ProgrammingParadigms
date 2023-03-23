#include <stdio.h>
#include <stdlib.h>

//declaration of functions
int bunnyEars(int n);
int factorial(int n);
int fib(int n);
int posPow(int base, int exp);
int numDigits(int n);

int main(void){
    //problem 1 test output
    int x = 5, y = 25;

    printf("Number of bunnys: %d\nNumber of ears: %d\n", x, bunnyEars(x));
    printf("Number of bunnys: %d\nNumber of ears: %d\n", y, bunnyEars(y));

    //problem 2 test output
    x = 6, y = 10;

    printf("Factoiral of %d is %d\n", x, factorial(x));
    printf("Factoiral of %d is %d\n", y, factorial(y));

    //problem 3 test output
    x = 7, y = 15;

    printf("Fibinachi sequence at %d: %d\n", x ,fib(x));
    printf("Fibinachi sequence at %d: %d\n", y ,fib(y));

    //problem 4 output
    int base = 4, exp = 3;

    printf("%d to the %d power = %d\n", base, exp, posPow(base,exp));
    base = 2, exp = 5;
    printf("%d to the %d power = %d\n", base, exp, posPow(base,exp));

    //problem 5 test output
    x = 150, y = 1000023;
    
    printf("Number of digits in %d = %d\n", x, numDigits(x));
    printf("Number of digits in %d = %d\n", y, numDigits(y));

    return 0;
}

//1 (18 points) int bunnyEars(int n) returns -1 if n is less than 0, otherwise returns the number of ears for n bunnies.

int bunnyEars(int n){
    if(n < 0) return -1;
    if(n == 0) return 0;
    else return 2 + bunnyEars(n-1);
}

//2. (18 points) int factorial(int n) returns -1 if n is less than 0, otherwise returns the factorial of n

int factorial(int n){
    if(n < 0) return -1;
    if (n == 0) return 1;
    else return n * factorial(n-1);
}

//3. (18 points) int fib(int n) returns -1 if n is less than 0, returns 0 if n is 0, returns 1 if n is 1,
// otherwise returns fib of n - 1 plus fib of n - 2.  
//(If you test this with numbers greater than about 50, it will be very slow.)

int fib(int n){
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}

//4. (18 points) int posPow(int base, int exp) returns -1 if exp is less than 0, otherwise returns base 
//raised to the power exp.

int posPow(int base, int exp){
    if (exp < 0) return -1;
    if (exp == 0) return 1;
    else return base * posPow(base, exp-1);
}
//5. (18 points) int numDigits(int n) returns the number of digits in n. Hint: in C, as in Java,
// int division returns an int; any digits that would be after the decimal point are lost, so that, 
//for example, 5/4 is 1.

int numDigits(int n){
    n = abs(n);
    if (n/10 == 0) return 1;
    else return 1 + (numDigits(n/10));
}
/*Output from main

Number of bunnys: 5
Number of ears: 10
Number of bunnys: 25
Number of ears: 50
Factoiral of 6 is 720
Factoiral of 10 is 3628800
Fibinachi sequence at 7: 13
Fibinachi sequence at 15: 610
4 to the 3 power = 64
2 to the 5 power = 32
Number of digits in 150 = 3
Number of digits in 1000023 = 7

*/