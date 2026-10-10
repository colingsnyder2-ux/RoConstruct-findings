// from server: 54% by colin
struct Vec3 { float x, y, z; };

struct Mat3 {
    float m[9];
};

struct Body {
    char pad[0x64];
    void* prim; // at 0x64
};

struct Joint {
    char pad0[8];
    Body* body0;   // 0x08
    Body* body1;   // 0x0c
    char pad1[0x28 - 0x10];
    Vec3 refs0;    // 0x28
    char pad2[0x58 - 0x34];
    Vec3 refs1;    // 0x58
};

struct Prim {
    char pad[0x84];
    Mat3 mat;      // 0x84
};

extern "C" void __stdcall sub_530100(void* p);
extern "C" void __stdcall sub_473200(Mat3* out, const Vec3* in);
extern "C" void __stdcall sub_5ab3f0(Mat3* out, const Mat3* a, float f1, float f2);

extern float dword_7A4498;

struct WeldJoint {
    void computeWorld();
};

void WeldJoint::computeWorld()
{
    Mat3 m0;
    Mat3 m1;
    Mat3 result;

    Body* b0 = *(Body**)((char*)this + 8);
    Prim* p0 = (Prim*)b0->prim;
    sub_530100(p0);
    sub_473200(&m0, (const Vec3*)((char*)this + 0x28));

    Body* b1 = *(Body**)((char*)this + 0xc);
    Prim* p1 = (Prim*)b1->prim;
    sub_530100(p1);
    sub_473200(&m1, (const Vec3*)((char*)this + 0x58));

    float f = dword_7A4498;
    sub_5ab3f0(&result, &m0, f, f);
}
