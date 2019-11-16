#include<stdio.h>
#include"myMath.h"
#define PI 2.718

double Pow(double x, int y){
    if(y==0){
        return 1;
    }
    double ans = x;
    int i;
    for(i =1; i<y; i = i+1){
        ans = ans *x;
        

    }
    return ans;
}


double Exp(int x){
    double c = Pow(PI, (int) x);
    return c;
}