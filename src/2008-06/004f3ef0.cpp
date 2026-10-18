// from server: 32% by atomic.potato
struct V3 { float x, y, z; };

extern "C" double __cdecl ceil(double);

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

struct Vec2 { float x, y; };

struct S {
    int __thiscall f(int a, int b, float c, float d, float e, int g);
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
};

extern "C" void __cdecl sub_5ec1a0(void* dst, void* src);
extern "C" void __cdecl sub_5185d0(Vec2* out, V3* in);
extern "C" float __cdecl sub_4f1ff0(int n);
extern "C" void __cdecl sub_4f35d0(int a, int b, float* p, float* q, float* r, void* s);
extern "C" void __cdecl sub_4f2b80(int a, int b, float* p, float* q, float* r, void* s);

int __thiscall S::f(int a, int b, float c, float d, float e, int g)
{
    int ebp = field10 & 7;
    int local10 = (int)this;
    float f38, f3c, f40;
    sub_5ec1a0(&f38, &field4);
    float fa = (c < 0 ? -c : c);
    float fb = (d < 0 ? -d : d);
    float fc = (e < 0 ? -e : e);
    float arr[2];
    arr[0] = fa;
    arr[1] = fb;
    float arr2[2];
    arr2[0] = fc;
    arr2[1] = 0.0f;

    int esi;
    if (g == 0) {
        if (fa == fb) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    int ebx;
    if (g == 0 && ebp != 0) {
        double r = ceil((double)(arr[esi] * g_819bac));
        ebx = (int)r;
    } else {
        ebx = 1;
    }

    unsigned short w10 = 0;
    unsigned short w12 = 0;
    unsigned short* p10 = &w10;
    unsigned short* p12 = &w12;
    unsigned short v = *(unsigned short*)((char*)&f38 + (esi * 2));
    int iv = (short)v;
    int q = iv / ebx;
    unsigned short uq = (unsigned short)q;
    unsigned short one = 1;
    unsigned short sel = (one < uq) ? one : uq;
    p10[esi] = sel;
    p12[esi] = v;

    float t20 = arr2[0];
    float t24 = arr2[1];

    Vec2 v1, v2;
    sub_5185d0(&v1, (V3*)&f38);
    float n1x = -v1.x;
    float n1y = -v1.y;
    sub_5185d0(&v2, (V3*)&f38);
    float n2x = -v2.x;
    float n2y = -v2.y;

    float r18 = 0.0f, r1c = 0.0f, r28 = 0.0f, r2c = 0.0f;

    if (g == 0) {
        if (ebp == 0) {
            r28 = g_83a3e4;
            r2c = g_819bac;
            r1c = g_819bac;
            r18 = g_819bac;
        } else {
            r2c = t20;
            float r = sub_4f1ff0(ebp);
            r28 = r;
            r1c = t24 * 2.0f;
            r18 = g_819bac;
            if (esi == 1) {
                r18 = -r18;
            }
        }
    } else if (g == 1) {
        r28 = 0.0f;
        r2c = *(float*)((char*)&field0 + 0x1c);
        r18 = *(float*)((char*)&field0 + 0x18);
        r1c = -*(float*)((char*)&field0 + 0x1c);
    } else if (g == 2) {
        r28 = 0.0f;
        r2c = 0.0f;
        r18 = 0.0f;
        r1c = 0.0f;
    }

    float prev38 = 0.0f;
    for (int i = 0; i < ebx; i++) {
        float cur30;
        if (i == ebx - 1) {
            cur30 = arr[esi];
            if (g == 0 && *(int*)&w10 != 0) {
                float diff = cur30 - prev38;
                float m = diff * r18;
                r18 = m * g_83a3e4;
            }
        } else {
            cur30 = prev38 + g_826e6c;
        }

        float args[2];
        args[0] = r18;
        args[1] = r1c;
        float args2[2];
        args2[0] = r28;
        args2[1] = r2c;
        float args3[2];
        args3[0] = cur30;
        args3[1] = 0.0f;

        sub_4f35d0(a, esi, args, args2, args3, 0);
        sub_4f2b80(a, esi, args, args2, args3, 0);

        prev38 = cur30;
    }

    return 0;
}
