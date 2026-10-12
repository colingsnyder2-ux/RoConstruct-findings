// from server: 78% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

template<class T>
const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct S
{
    float x, y, z, w;
    float f() const;
};

float S::f() const
{
    return maximum(
        maximum((float)fabs(x), (float)fabs(y)),
        maximum((float)fabs(z), (float)fabs(w)));
}
