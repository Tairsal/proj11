#include <stdio.h>
#include "NumClass.h"

int isPrime(int x){
    int count=0;
    for (int i = 1; i <= x; ++i)
    {   
        if (x%i==0)
        {
            count++;
        }
        
    }
    if (count>2)
    {
        return 0;
    }
    else return 1;
}
int isStrong(int y){
    int  temp, rem, count, fact, sum=0;
    temp = y;
    while (y)
    {
        rem = y%10;
        count=1;
        fact=1;
        while (count<=rem)
        {
            fact=fact*count;
            count++;
        }
        sum=sum+fact;
        y=y/10;
        
    }
    if (temp==sum)
    {
        return 1;
    }
    else return 0;
    
    
}
