// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vec3 { float x, y, z; };

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct HealthHud {
    char pad[0xf4];
    float f4;
    float f8;
    int fc;
    void* ptr100;
    void render();
};

struct Instance {
    void* vptr;
};

struct CoordFrame {
    float m[12];
};

extern "C" {
    void __cdecl sub_402a60(void*);
    void __cdecl sub_4e0180(void*, void*, void*);
    void* __cdecl sub_50b050();
    void* __cdecl sub_50b0b0();
    void __cdecl sub_5555b0(void*, void*);
    void __cdecl sub_59c770(void*, void*, int, int, void*, void*, void*, void*);
    void* __cdecl sub_5a47f0();
    float __cdecl sub_5a5600(void*);
    void* __cdecl sub_5a5820(void*);
    void __cdecl sub_5e49e0(void*, void*, void*);
    void* __cdecl sub_622b60(void*);
    void __cdecl sub_630d60();
    void* __cdecl sub_736ed0(int, int, int);
    void __cdecl sub_77e698(void*, const char*);
    void __cdecl sub_77e6ac(void*);
}

extern float g_7bce88;
extern float g_797eb0;
extern float g_7c45ec;
extern char g_7b57f0[];

void HealthHud::render()
{
    Instance* inst = *(Instance**)((char*)this + 0xb8);
    void** vt = *(void***)inst;
    void (*getCF)(void*, void*) = (void (*)(void*, void*))vt[3];
    char buf[0x40];
    getCF(inst, buf);

    float a = *(float*)(buf + 0x0c);
    float b = *(float*)(buf + 0x04);
    float d = (a - b) * g_7bce88;
    float e = g_797eb0 * d;
    *(float*)((char*)this + 0xf4) = e;
    float f = e * g_7c45ec;
    *(float*)((char*)this + 0xf8) = f;

    sub_630d60();
    int t = (int)0;

    if (*(int*)((char*)this + 0xfc) == 0) {
        void* p = sub_622b60(this);
        char tmp[8];
        sub_5e49e0(tmp, p, 0);
        *(int*)((char*)this + 0xfc) = *(int*)tmp;
        sub_402a60((char*)this + 0x100);
        RefCounted* rc = *(RefCounted**)tmp;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** rvt = *(void***)rc;
                void (*dtor)(void*) = (void (*)(void*))rvt[1];
                dtor(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** rvt2 = *(void***)rc;
                    void (*wdtor)(void*) = (void (*)(void*))rvt2[2];
                    wdtor(rc);
                }
            }
        }
        if (*(int*)((char*)this + 0xfc) == 0)
            return;
    }

    void* obj = sub_5a5820(this);
    if (!obj)
        return;

    sub_5a5600(obj);

    char cf[0x30];
    sub_5555b0(this, cf);

    float v0 = *(float*)(cf + 0x00);
    float v1 = *(float*)(cf + 0x04);
    float v2 = *(float*)(cf + 0x08);
    float v3 = *(float*)(cf + 0x0c);
    float v4 = *(float*)(cf + 0x10);
    float v5 = *(float*)(cf + 0x14);

    float diff = v4 - v1;
    float scale = sub_5a5600(obj);
    float res = v5 - diff * scale;

    Vec3* pos = (Vec3*)sub_5a47f0();
    Vec3 p;
    p.x = pos->x;
    p.y = pos->y;
    p.z = pos->z;

    char m1[0x40];
    float one = 1.0f;
    sub_4e0180(m1, &p, &one);

    void** ivt = *(void***)inst;
    void (*fn28)(void*, void*, void*) = (void (*)(void*, void*, void*))ivt[10];
    char out1[0x40];
    fn28(inst, out1, m1);

    Vec3* pos2 = (Vec3*)sub_50b050();
    Vec3 p2;
    p2.x = pos2->x;
    p2.y = pos2->y;
    p2.z = pos2->z;

    char m2[0x40];
    float one2 = 1.0f;
    sub_4e0180(m2, &p2, &one2);

    void** ivt2 = *(void***)inst;
    void (*fn28b)(void*, void*, void*) = (void (*)(void*, void*, void*))ivt2[10];
    char out2[0x40];
    fn28b(inst, out2, m2);

    Vec3* pos3 = (Vec3*)sub_50b0b0();
    Vec3 p3;
    p3.x = pos3->x;
    p3.y = pos3->y;
    p3.z = pos3->z;

    char strbuf[0x40];
    sub_77e698(strbuf, g_7b57f0);

    void** ivt3 = *(void***)inst;
    void (*fn30)(void*, void*, void*) = (void (*)(void*, void*, void*))ivt3[12];

    void* s = sub_736ed0(2, 0, 0);

    char tmp2[0x40];
    sub_59c770(tmp2, &p3, 4, 1, &one2, &strbuf, s, 0);

    char out3[0x40];
    fn30(inst, out3, tmp2);

    sub_77e6ac(strbuf);
}
