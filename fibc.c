#include <stdio.h>

int fib_recurse(unsigned n){
    if (n == 1 || n == 0){
        return 1;
    }else {
        return fib_recurse(n - 1) + fib_recurse(n - 2);
    }
}

//no returning arrays from c

int main(void){
    printf("%u", fib_recurse(20));
}
