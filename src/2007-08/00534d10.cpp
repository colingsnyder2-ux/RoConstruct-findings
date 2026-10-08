// from server: 45% by colin
// roc 2007-08 00534d10  unit: seg_00530000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534d10

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Mat4 {
    float m[16];
};

struct S {
    void f(const Vec3& a, const Vec3& b, const Vec3& c, float d, float e, float f2);
};

extern "C" void __stdcall sub_5095d0(Mat4* out, const Vec3* in);
extern "C" void __stdcall sub_534780(Mat4* m, float v);

void S::f(const Vec3& a, const Vec3& b, const Vec3& c, float d, float e, float f2)
{
    Mat4 m;
    sub_5095d0(&m, &a);
    m.m[9] = d;
    m.m[10] = e;
    m.m[11] = f2;
    sub_534780(&m, d);
}
