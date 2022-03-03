#include <stdio.h>
#include <math.h>
int findArmstrong(int num){
    int count=0,x,result=0,sum=1,n;
    n=num;
    while(num!=0){
        num/=10;
        count++;
    }
    
    while(n!=0){
        x=n%10;
        sum=pow(x,count);
        result+=sum;
        n/=10;
    }
    return result;
}

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    
    if(findArmstrong(num)==num){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }

    return 0;
}

