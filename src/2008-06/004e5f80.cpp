// from server: 79% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float threshold;

struct S_func_00598cd0 {
    char pad0[708];
    int m_x;
    int f();
};

struct S {
    char pad0[188];
    S_func_00598cd0* object;
    char pad1[20];
    int state;
    bool f();
};

bool S::f()
{
    if (state == 0 &&
        *reinterpret_cast<int*>(reinterpret_cast<char*>(object) + 476) == 1)
    {
        const float* v = reinterpret_cast<const float*>(object->f());
        double x = v[0];
        double y = v[1];
        double z = v[2];

        x = fabs(x);
        y = fabs(y);
        z = fabs(z);

        double m = x > y ? x : y;
        return (z < m ? z : m) >= threshold;
    }
    return false;
}
