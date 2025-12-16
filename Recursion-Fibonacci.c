#include <stdio.h>

int fib(n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return 0;

    else
        return fib(n - 1) + fib(n - 2);
}

int main ()
{


int n;
printf("Enter the number:");
scanf("%d",&n);

printf("The Fibnonaci Series Are: ");

for (int i=0;i<n;i++)
{

printf("%d",fib(i));

}


return 0;
}