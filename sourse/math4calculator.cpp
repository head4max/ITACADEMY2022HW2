#include <cmath>
#include "../header/math4calculator.h"

double getPlus(double x, double y)
{
    return x + y;
}
double getMinus(double x, double y)
{
    return x - y;
}
double getMultiply(double x, double y)
{
    return x * y;
}
double getDivide(double x, double y)
{
    return x / y;
}
double getPower(double x, double y)
{
    return pow(x, y);
}
double getSquarePower(double x)
{
    return pow(x,2);
}
double getCubePower(double x)
{
    return pow(x,3);
}
double get10Power(double y)
{
    return pow(10,y);
}
double getRoot(double x, double y)
{
    if(y == 0)
        return 1.0;
    else if(y == 1)
        return x;
    else
        return pow(x,1/y);
}
double getSquareRoot(double x)
{
    return sqrt(x);
}
double getCubeRoot(double x)
{
    return cbrt(x);
}

double getLn(double x)
{
    return log(x);
}
double getLog(double x)
{
    return log10(x);
}

double getPi()
{
    return atan(1)*4;
}
double getSin(double x)
{
    return sin( x);
}
double getCos(double x)
{
    return cos(x);
}
double getTgs(double x)
{
    return tan(x);
}
double getSinH(double x)
{
    return sinh(x);
}
double getCosH(double x)
{
    return cosh(x);
}
double getTgH(double x)
{
    return tanh(x);
}