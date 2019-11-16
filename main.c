#include<stdio.h>
#include"myMath.h"


int main(){
    double x;
    printf("Please enter a double: ");
    scanf("%lf.04",&x);
    double ans1 = add(Exp(x), sub(Pow(x,3),2));
    double ans2 = add(mul(x,3),Pow(mul(x,2),2));
    double ans3 = sub(div(mul(Pow(x,3),4),2),mul(x,2));
    printf("f(x)=e^x+x^3-2, f(%lf) =%lf \n",x,ans1);
    printf("f(x)=3x+2x^2, f(%lf) =%lf \n",x,ans2);
    printf("f(x)=(4x^3)/5-2x), f(%lf) =%lf \n",x,ans3);

    
}