// from server: 79% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float tolerance;

bool __cdecl approximatelyEqual(float a, float b)
{
    return a == b || fabs(b - a) > tolerance;
}
