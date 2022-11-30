#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int x){
    int sum=0, rem, q;
    
    q=x;
    while (q!=0)
    {
        rem=q%10;
        sum=sum*10+rem;
        q=q/10;
    }
    if (sum==x)
    {
        return 1;
    }
    else return 0;
    
}
int isArmstrong(int x){
    int count=0, res=0, mul=1, cnt, rem;
    int q=x;
    while (q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=x;
    while (q!=0)
    {
    
        rem=q%10;
        while (cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        res=res+mul;
        cnt=count;
        q=q/10;
        mul=1;
        
        
    }
    if (res==x)
    {
        return 1;
    }
    else return 0;
    
}
