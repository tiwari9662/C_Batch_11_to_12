#include<stdio.h>
void counting(int);
int main()
{
    int a=1;
    printf("before calling counting function \n");
    counting(a);
    printf("after counting function \n");
    return 0;
}
void counting(int a)
{
    if (a<=10) //Base condition or Termination condition
    {    
        counting(a+1); 
        printf("in add function at %d \n",a);
    }
}
//h.w psuedocode,reverse counting by recursion