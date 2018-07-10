#ifndef CT_MAIN_HPP
#define CT_MAIN_HPP

#include <cmath>

namespace ct
{
    // FACTORIAL

    template <int N> struct fact
    {
        static const long long value = N * fact<N-1>::value;
    };

    template <> struct fact<1>
    {
        static const long long value = 1L;
    };

    // EXPONENTS

    template <class X, int N> struct power
    {
        static const long double value;
    };

    template <class X, int N> const long double power<X, N>::value = X::value * power<X, N-1>::value;

    template <class X> struct power<X, 0>
    {
        static const long double value;
    };

    template <class X> const long double power<X, 0>::value = 1.0f;

    // SIMPLIFY RADIAN TO INTERVAL [-2π, 2π]

    template <class X> struct simp_rad
    {
        static const long double value;
    };

    template <class X> const long double simp_rad<X>::value =

        X::value - (2 * M_PI * (double) (int) (X::value/(2*M_PI))); // float modulo?
}

#include "sin.hpp"
#include "cos.hpp"
#include "tan.hpp"

#endif