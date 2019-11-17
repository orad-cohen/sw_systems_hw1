#include<stdio.h>
#include"myMath.h"


int main(){
    double x;
    printf("Please enter a real number: ");
    scanf("%lf.04",&x);
    double ans1 = add(Exp(x), sub(Pow(x,3),2));
    double ans2 = add(mul(x,3),mul(Pow(x,2),2));
    double ans3 = sub(div(mul(Pow(x,3),4),5),mul(x,2));
    printf("f(x)=e^x+x^3-2, f(%lf) =%.4lf \n",x,ans1);
    printf("f(x)=3x+2x^2, f(%lf) =%.4lf \n",x,ans2);
    printf("f(x)=(4x^3)/5-2x), f(%lf) =%.4lf \n",x,ans3);


}
