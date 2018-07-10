#ifndef CT_TAN_HPP
#define CT_TAN_HPP

// TANGENT

namespace ct
{
    template <class X, int N> struct tan
    {
        static const long double value;
    };

    template <class X, int N> const long double tan<X, N>::value = sin<X, N>::value / cos<X, N>::value;
}

#endif