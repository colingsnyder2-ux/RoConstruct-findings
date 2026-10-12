// from server: 48% by king_originala
#pragma float_control(precise, off)

extern "C" float __cdecl round_value(double);

struct Float3 {
    float x, y, z;
};

struct Int3 {
    int x, y, z;
    Int3(int a, int b, int c);
};

inline Int3::Int3(int a, int b, int c)
    : x(a), y(b), z(c)
{
}

Int3 __cdecl convert(const Float3& v)
{
    return Int3(
        (int)round_value(v.x),
        (int)round_value(v.y),
        (int)round_value(v.z));
}
