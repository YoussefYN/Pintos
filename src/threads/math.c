#include "math.h"
#include <stdint.h>

int f = 16384 ;

int toFixedPoint(int n)
{
    return n*f ;
}

int toInt(int x , int m) /// if m = 0 rounding toward zero  , if m!=0  rounding toward nearest
{
    if(m==0)
        return x/f ;
    else
    {
        if(x>=0)
             return (x + (f/2))/f ;
        else
             return (x - (f/2))/f ;
    }
}

int addInt (int x , int n)  /// n is an Integer , x is a Fixed point
{
    return x+(n*f);
}

int mul (int x , int y )  /// x & y are in Fixed point
{
    return (((int64_t) x) * y) / f ;
}


int div (int x , int y ) /// x/y , x & y are in Fixed point
{
    return (((int64_t) x) * f)/ y ;
}
