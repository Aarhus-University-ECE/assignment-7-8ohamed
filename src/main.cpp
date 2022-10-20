#include <math.h>
#include "taylor_sine.h"
#include <stdio.h>
// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    // sammenligner min sin function med MATH sin function 
    printf ("%lf\n",taylor_sine(3.14,7));
    printf ("%lf\n",sin(3.14));

    printf ("%lf\n",taylor_sine(5,7));
    printf ("%lf\n",sin(5));


    printf ("%lf\n",taylor_sine(6,7));
    printf ("%lf\n",sin(6));

    return 0;
}
