#include <stdio.h>
#include <math.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

float exponential(int x,float n){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    return x*exponential(x,n-1);
}
int main(){
    int x,i;
    float n,result;
    printf("enter the x and n value:");
    scanf("%d %f",&x,&n);
    int a=-1;
    for(i=0;i<=n;i++){
    result+=exponential(a,i)*(exponential(x,2*i)/factorial(2*i));
    }
    
    printf("%f",result);
    
    return 0;
}
