// from server: 40% by colin
struct ModelInstance {
    char pad[0x198];
    int field_198;
    char pad2[0x44];
    unsigned char field_1e0;
    char pad3[0x2c];
    unsigned char field_210;
    char pad4[0x4];
    unsigned char field_1ac;
    void method(int);
};

struct Mat34 {
    float m[9];
    float t[3];
};

extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern unsigned char g_8bd138;

extern "C" void __cdecl sub_475050(void* p);
extern "C" void __cdecl sub_51df60(void* p, int a);
extern "C" void* __cdecl sub_573f80(int a, void* b, void* c);
extern "C" void* __cdecl sub_5099a0(void* p);
extern "C" void* __cdecl sub_509750(void* p);
extern "C" void __cdecl sub_5095d0(void* p, void* q);

void ModelInstance::method(int a)
{
    if (field_198 == 0)
        return;

    char buf1[0x30];
    char buf2[0x30];
    char buf3[0x30];

    sub_475050(buf1);
    sub_51df60(buf1, a);

    if ((g_8bd138 & 1) == 0) {
        g_8bd138 |= 1;
        g_8bd12c = 0.0f;
        g_8bd130 = 0.0f;
        g_8bd134 = 0.0f;
    }

    void* r = sub_573f80(field_198, buf2, buf1);
    void* r2 = sub_5099a0(r);
    void* r3 = sub_509750(r2);
    sub_5095d0(buf3, r3);

    Mat34* dst = (Mat34*)((char*)this + 0x168);
    float* src = (float*)buf3;
    for (int i = 0; i < 9; ++i)
        dst->m[i] = src[i];

    dst->t[0] = g_8bd12c;
    dst->t[1] = g_8bd130;
    dst->t[2] = g_8bd134;

    field_1e0 = 1;
    field_210 = 1;
    field_1ac = 1;
}
