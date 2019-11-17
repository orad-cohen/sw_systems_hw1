#include<stdio.h>
#include"myMath.h"
#define PI 2.718

double Pow(double x, int y){
    if(y==0){
        return 1;
    }
    double ans = x;
    int i;
    if(y<0){
      y*=-1;
    }
    for(i =1; i<y; i = i+1){
        ans = ans *x;


    }
    if(y<0){
      ans=1/ans;
    }
    return ans;
}


double Exp(int x){
    double c = Pow(PI, (int) x);
    return c;
}
