#ifndef CT_COS_HPP
#define CT_COS_HPP

// COSINE

namespace ct
{
    template <class X, int N> struct cos
    {
        static const long double value;
    };

    template <class X, int N> const long double cos<X, N>::value = 

        (((N % 2 == 0 ? 1 : -1) * power<simp_rad<X>, 2*N>::value) / ((long double) fact<2*N>::value)) + cos<X, N-1>::value;

    template <class X> struct cos<X, 0>
    {
        static const long double value;
    };

    template <class X> const long double cos<X, 0>::value = 1.0f;
}

#endif