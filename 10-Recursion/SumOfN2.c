#include<stdio.h>
int sumOfN(int);
int main()
{
    int n;
    printf("enter nth term :");
    scanf("%d",&n);//7

    int sum=sumOfN(n);
    printf("the sum till %d term is %d \n",n,sum);
    return 0;
}
int sumOfN(int n)
{
    if (n)
    {
        return n+sumOfN(n-1);
    }   
}