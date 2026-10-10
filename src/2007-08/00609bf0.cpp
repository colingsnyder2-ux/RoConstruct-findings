// from server: 45% by colin
struct Primitive {
    char pad[0x60];
    float* getCoordinateFrame();
};

struct Joint {
    char pad[8];
    Primitive* prim0;
    Primitive* prim1;
    char pad2[0x28 - 0x10];
    float angle0;
    char pad3[0x58 - 0x2c];
    float angle1;

    float stepWorld();
};

extern "C" void __cdecl sub_5B9B00(float* out, float* in);
extern "C" int __cdecl sub_5B9950(float* a, float* b);

extern float g_609bf0_const;

float Joint::stepWorld() {
    float v0[3];
    float v1[3];
    float* cf0 = prim0->getCoordinateFrame();
    v0[0] = cf0[1];
    v0[1] = cf0[2];
    v0[2] = cf0[3];
    float* cf1 = prim1->getCoordinateFrame();
    v1[0] = cf1[0];
    v1[1] = cf1[1];
    v1[2] = cf1[2];

    float a0[3];
    float a1[3];
    sub_5B9B00(a0, &angle0);
    sub_5B9B00(a1, &angle1);
    int r = sub_5B9950(a0, a1);

    int i0 = (r + 1) % 3;
    int i1 = (r + 2) % 3;
    int i2 = (r + 2) % 3;

    float* p0 = &v0[i2];
    float* p1 = &v0[i0];
    if (!(v0[i2] > v0[i0])) {
        p0 = p1;
    }
    float f0 = *p0;

    float* q0 = &v1[i1];
    float* q1 = &v1[i0];
    if (!(v1[i1] > v1[i0])) {
        q0 = q1;
    }
    float f1 = *q0;

    float result;
    if (f0 > f1) {
        result = f0;
    } else {
        result = f1;
    }
    return result * g_609bf0_const;
}
