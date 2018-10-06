#include <stdio.h>

int fibo(int n)
{
   if (n <= 1) 
      return n; 
   else
      return ( fibo(n-1) + fibo(n-2) );
}

int main()
{
    int n = 0;
    scanf("%i", &n);
    if(n<1)
    {
        printf("Silakan masukkan bilangan bulat !!!");
        return 0;
    }
    printf("Deret bilangan Fibonacci(%i) adalah ", n);
    for(int i=0; i<=n;i++){
        if(i>0) printf(", ");
        printf("%i", fibo(i));
    }
    printf("\nFibonacci(%i) adalah %i",n, fibo(n));
    return 0;
} 
