#include<stdio.h>

int main()
{
    int a=10,b=20,c;
	//we r giving pre-defined(hard quoted) value to variable num1 and num2

    c=a+b;//right to left assignment

    // printf(" c \n");//c
    printf(" %d ",c);//30
    printf(" \n c ki value %d hai \n ",c);
    printf("the sum of %d and %d is %d ",a,b,c);

    return 0;
}