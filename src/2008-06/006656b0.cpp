// from server: 35% by tester
struct V3 { float x, y, z; };

struct A {
    char pad0[0x10];
    V3 v10;
};

struct B {
    char pad0[0x24];
    float f24, f28, f2c;
};

extern "C" void __stdcall sub_60f7b0(void*, void*);
extern "C" void* __cdecl sub_5ec570(int);
extern "C" void __cdecl sub_677140(void*, void*, void*);
extern "C" void __cdecl sub_7bb5a0(void*, void*, void*, void*, void*);

extern float g_81e380;
extern double g_96f018;
extern int g_96f020;
extern void* g_8024ac;
extern void* g_827404;
extern void* g_97f6d8;

struct Effect {
    bool f(void* a, void* b, void* c, void* d);
};

bool Effect::f(void* a, void* b, void* c, void* d)
{
    char* p = (char*)a;
    V3* vp = (V3*)(p + 4);
    V3* vp2 = (V3*)(p + 0x10);
    B* bp = (B*)b;
    int i;
    float fx, fy, fz;
    float gx, gy, gz;
    float hx, hy, hz;
    float t;
    bool result = false;

    for (i = 0; i < 6; i++) {
        char buf[0x30];
        sub_60f7b0(b, buf);
        void* q = sub_5ec570(0);
        float s = g_81e380;
        fx = *(float*)q * s;
        fy = *(float*)((char*)q + 4) * s;
        fz = *(float*)((char*)q + 8) * s;
        fx += vp->x;
        fy += vp->y;
        fz += vp->z;
        gx = bp->f24 + fx * *(float*)((char*)b + 0) + fy * *(float*)((char*)b + 0x10) + fz * *(float*)((char*)b + 0x20);
        gy = bp->f28 + fx * *(float*)((char*)b + 4) + fy * *(float*)((char*)b + 0x14) + fz * *(float*)((char*)b + 0x24);
        gz = bp->f2c + fx * *(float*)((char*)b + 8) + fy * *(float*)((char*)b + 0x18) + fz * *(float*)((char*)b + 0x28);
        sub_677140(0, 0, 0);
        hx = 0.0f;
        hy = 0.0f;
        hz = 0.0f;
        sub_7bb5a0(vp2, buf, &hx, &gx, g_97f6d8);
        if (!(g_96f020 & 1)) {
            g_96f020 |= 1;
            g_96f018 = *(double*)g_8024ac;
        }
        if (hx != (float)g_96f018) {
            result = true;
            break;
        }
    }

    if (result) {
        *(int*)d = i;
        *(float*)c = fx;
        *(float*)((char*)c + 4) = fy;
        *(float*)((char*)c + 8) = fz;
        return true;
    }
    return false;
}
