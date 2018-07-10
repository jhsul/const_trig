#include <cstdio>
#include <cmath>
#include "include/const_trig.hpp"

#define DEPTH 8

struct var
{
    static const long double value;
};

const long double var::value = M_PI / 4;

int main(int argc, char *argv[])
{
    printf("var = %Lf\n", var::value);
    printf("sin(%Lf) = %Lf\ncos(%Lf) = %Lf\ntan(%Lf) = %Lf\n",
            var::value, ct::sin<var, DEPTH>::value,
            var::value, ct::cos<var, DEPTH>::value,
            var::value, ct::tan<var, DEPTH>::value);
}