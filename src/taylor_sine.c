#include "taylor_sine.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double pow(double base, int exponent) {
    double res = 1;
        for (int i = 0; i<exponent;i++ ){
            res = res * base;
        
    }
    return res;
}




int factorial(int n) {
if (n==0){
    return 1;
}

int res = 1;
    for (int i =1;i<=n;i++){
        res = res * i;  
}
return res;
}




bool lige(int x)
{
    return  (x%2==0);
}







double taylor_sine(double x, int n)
 {  
    double sum =0;
    int t = 1;
        for (int i = 0; i < n; i ++) {


double fortegn = lig(i)?1:-1;

        sum =sum +fortegn * pow (x,t) / (double)  factorial(t);
}
  return sum;
    
}
