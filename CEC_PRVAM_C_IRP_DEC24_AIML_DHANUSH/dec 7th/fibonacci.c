#include<stdio.h>
int fib(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    for(int i=0; i < 10; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
    