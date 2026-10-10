// from server: 64% by tester
// roc 2007-08 005e1250  unit: RBX::VMotorFeature::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1250

struct Vec3 {
    float x, y, z;
};

struct S {
    bool __cdecl f(const Vec3* v, int a);
};

extern float g_7bcf10;
extern float g_7a837c;

extern "C" void __cdecl sub_5e11e0(Vec3* out, const Vec3* in);
extern "C" bool __cdecl sub_6002b0(const Vec3* v, int a, float f);

bool S::f(const Vec3* v, int a) {
    Vec3 tmp;
    sub_5e11e0(&tmp, v);
    if (g_7bcf10 <= tmp.z) {
        return true;
    }
    if (sub_6002b0(v, a, g_7a837c)) {
        return true;
    }
    return false;
}
