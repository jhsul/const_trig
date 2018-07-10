#ifndef CT_SIN_HPP
#define CT_SIN_HPP

// SINE

namespace ct
{
    template <class X, int N> struct sin
    {
        static const long double value;
    };

    template <class X, int N> const long double sin<X, N>::value =

        (((N % 2 == 0 ? -1 : 1) * power<simp_rad<X>, 2*N-1>::value) / ((long double) fact<2*N-1>::value)) + sin<X, N-1>::value;

    template <class X> struct sin<X, 0>
    {
        static const long double value;
    };
    
    template <class X> const long double sin<X, 0>::value = 0.0f;

}

#endif