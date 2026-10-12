// from server: 83% by king_originala
extern "C" double __cdecl fabs(double);

float __cdecl maxAbs(const float* v)
{
    const float a[3] = {
        (float)fabs(v[0]),
        (float)fabs(v[1]),
        (float)fabs(v[2])
    };
    const float& yz = a[1] < a[2] ? a[2] : a[1];
    const float& result = a[0] < yz ? yz : a[0];
    return result;
}
