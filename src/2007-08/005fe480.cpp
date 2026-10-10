// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" double __cdecl sqrt(double);

struct Vector3 {
    float x, y, z;
};

struct AxisMoveTool {
    char pad0[0x18];
    void* field18;
    char pad1[0x24 - 0x1c];
    void* field24;
    char pad2[0x44 - 0x28];
    unsigned char field44;
    char pad3[0x46 - 0x45];
    short field46;
    short field48;
    char pad4[0x4c - 0x4a];
    char field4c[0x6c - 0x4c];
    float field6c;
    float field70;
    float field74;

    void method();
};

extern float g_79f2fc;
extern float g_7aa8b4;
extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern unsigned int g_8bd138;
extern float g_8c7fb8;
extern float g_8c7fbc;
extern float g_8c7fc0;
extern unsigned int g_8c7fc4;

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __cdecl sub_62fc62(void* p);
extern "C" void __cdecl sub_5623c0(void* p, int a);
extern "C" void __cdecl sub_5e0d50(void* p, void* a, int b, void* c);
extern "C" void __cdecl sub_5e0ef0(void* p);
extern "C" void __cdecl sub_5e0660(void* p);
extern "C" void __cdecl sub_5e07e0(void* p);
extern "C" int __cdecl sub_5e05d0(void* p);
extern "C" void __cdecl sub_5e05c0(void* p);
extern "C" void __cdecl sub_5e0a60(void* p, void* a, void* b);
extern "C" void __cdecl sub_5e3b90(void* p, void* a, void* b);
extern "C" void __cdecl sub_5abf60(void* a, void* b, void* c);
extern "C" void __cdecl sub_5ac2c0(void* a, void* b, void* c);
extern "C" void* __cdecl sub_475020();
extern "C" int __cdecl sub_5736f0(void* p, void* a);
extern "C" void* __cdecl sub_5fe120();

void AxisMoveTool::method()
{
    if (field44 == 0) {
        int a = field46;
        int b = field48;
        float fa = (float)a;
        float fb = (float)b;
        float dx = (float)(*(short*)((char*)this + 0x80 + 8)) - fa;
        float dy = (float)(*(short*)((char*)this + 0x80 + 0xa)) - fb;
        float len = dx * dy + dx * dy;
        len = (float)sqrt((double)len);
        if (len >= g_79f2fc) {
            void* p18 = field18;
            void* p = sub_62fef6(0x24);
            void* edi = p;
            if (p != 0) {
                sub_5623c0((char*)p + 0x10, 1);
                void* r = (void*)((char*)p + 0xf4);
                sub_5e0d50(edi, r, 0, p18);
                edi = r;
            } else {
                edi = 0;
            }
            void* ebx = field24;
            if (edi != ebx) {
                if (ebx != 0) {
                    sub_5e0ef0(ebx);
                    sub_62fc62(ebx);
                }
            }
            field24 = edi;
            sub_5e0660(edi);
            sub_5e07e0(field24);
            field44 = 1;
        }
    }
    if (field44 != 0) {
        if (sub_5e05d0(field24)) {
            void* arg = (void*)((char*)this + 0x80);
            sub_5e3b90(this, arg, (char*)this + 0x4c);
            sub_5ac2c0((char*)this + 0x4c, arg, (char*)this + 0x4c);
            if ((g_8c7fc4 & 1) == 0) {
                g_8c7fc4 |= 1;
                g_8c7fb8 = 1.0f;
                g_8c7fbc = g_7aa8b4;
                g_8c7fc0 = 0.0f;
            }
            sub_5abf60(&g_8c7fb8, (char*)this + 0x4c, (char*)this + 0x4c);
            if ((g_8c7fc4 & 1) == 0) {
                g_8c7fc4 |= 1;
                g_8c7fb8 = 1.0f;
                g_8c7fbc = g_7aa8b4;
                g_8c7fc0 = 0.0f;
            }
            sub_5abf60(&g_8c7fb8, (char*)this + 0x4c, (char*)this + 0x4c);
            if ((g_8bd138 & 1) == 0) {
                g_8bd138 |= 1;
                g_8bd12c = 0.0f;
                g_8bd130 = 0.0f;
                g_8bd134 = 0.0f;
            }
            if (g_8bd12c != *(float*)((char*)this + 0x4c) ||
                g_8bd130 != *(float*)((char*)this + 0x50) ||
                g_8bd134 != *(float*)((char*)this + 0x54)) {
                sub_5e05c0(field24);
                sub_5e0a60(field24, (char*)this + 0x4c, (char*)this + 0x4c);
                void* r = sub_475020();
                if (sub_5736f0((char*)this + 0x4c, r)) {
                    float fx = field6c + *(float*)((char*)this + 0x4c);
                    float fy = field70 + *(float*)((char*)this + 0x50);
                    float fz = field74 + *(float*)((char*)this + 0x54);
                    void* r2 = sub_5fe120();
                    sub_5abf60(&fx, r2, (char*)this + 0x4c);
                    field6c = fx;
                    field70 = fy;
                    field74 = fz;
                }
            }
        }
    }
}
