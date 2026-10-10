// from server: 52% by colin
extern "C" float __cdecl _floorf_helper(double);

struct Vec3 {
    float x;
    float y;
    float z;
};

struct S {
    void f(const Vec3* src, Vec3* dst);
};

void S::f(const Vec3* src, Vec3* dst) {
    dst->z = (float)(int)_floorf_helper((double)src->z);
    dst->y = (float)(int)_floorf_helper((double)src->y);
    dst->x = (float)(int)_floorf_helper((double)src->x);
}
