// from server: 21% by colin
// Reconstructed from the target machine code.
// 32-bit x86, MSVC VS2008 (/O2 /GS- /EHsc /MD).

extern "C" {
    double __cdecl ceil(double);
}

struct Vec2 {
    float x;
    float y;
};

extern "C" void __stdcall sub_6784d0(Vec2* dst, const Vec2* src);
extern "C" void __stdcall sub_5185d0(Vec2* dst, const Vec2* src);
extern "C" float __cdecl sub_4f1ff0(int n);
extern "C" void __cdecl sub_4f35d0(float* a, float* b, float* c, float* d, float* e);
extern "C" void __cdecl sub_4fec20(int a, int b, int c);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

struct CylinderBuilder {
    unsigned int flags;

    void build(
        float a,
        float b,
        float c,
        int   d,
        int   e,
        int   f,
        int   g);
};

void CylinderBuilder::build(float a, float b, float c, int d, int e, int f, int g)
{
    unsigned int mode = (flags >> 6) & 7;

    Vec2 v40;
    Vec2 v48;
    sub_6784d0(&v40, (const Vec2*)((char*)this + 4));

    float fa = a < 0.0f ? -a : a;
    float fb = b < 0.0f ? -b : b;
    float fc = c < 0.0f ? -c : c;

    float v44 = fa;
    float v48f = fb;
    float v4c = fc;

    bool eq;
    if (f == 0) {
        eq = (fa == fb);
    } else {
        eq = false;
    }
    int esi = eq ? 0 : 1;

    int ebx;
    if (f == 0 && mode != 0) {
        float t = (esi == 0 ? v44 : v48f);
        t = t * g_819bac;
        ebx = (int)ceil((double)t);
    } else {
        ebx = 1;
    }

    short v10 = 0;
    short v12 = 0;

    short di = *(short*)((char*)&v40 + esi * 2);
    int   v18i = (int)di / ebx;
    int   v20i = 1;
    short ax = (short)v18i;
    if ((short)1 < ax) {
        // keep v18i
    } else {
        v18i = v20i;
    }
    short chosen = (short)v18i;
    *(short*)((char*)&v10 + esi * 2) = chosen;

    float v20 = v4c;
    int   v24 = 0;

    float v28 = 0.0f;
    float v2c = 0.0f;
    float v18 = 0.0f;
    float v1c = 0.0f;

    float v30[2];
    float v38[2];
    v30[0] = 0.0f;
    v30[1] = 0.0f;
    v38[0] = 0.0f;
    v38[1] = 0.0f;

    Vec2 tmp;
    sub_5185d0(&tmp, &v40);
    float nx = -tmp.x;
    float ny = -tmp.y;

    Vec2 tmp2;
    sub_5185d0(&tmp2, &v48);
    float nx2 = -tmp2.x;
    float ny2 = -tmp2.y;

    if (d == 0) {
        if (mode == 0) {
            v28 = g_83a3e4;
            v2c = g_819bac;
            *(float*)((char*)&v1c + esi * 4) = g_819bac;
            *(float*)((char*)&v18 + esi * 4) = g_819bac;
        } else {
            *(float*)((char*)&v2c + esi * 4) = 0.0f;
            float r = sub_4f1ff0(mode);
            *(float*)((char*)&v2c + esi * 4) = r;
            float t = *(float*)((char*)&v4c + esi * 4);
            *(float*)((char*)&v20 + esi * 4) = t + t;
            *(float*)((char*)&v18 + esi * 4) = g_819bac;
            if (esi == 1) {
                v18 = -v18;
            }
        }
    } else if (d == 1) {
        v28 = 0.0f;
        v2c = *(float*)((char*)this + 0x1c);
        v18 = *(float*)((char*)this + 0x18);
        v1c = -*(float*)((char*)this + 0x1c);
    } else if (d == 2) {
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    }

    int i = 0;
    if (ebx > 0) {
        do {
            if (i == ebx - 1) {
                float t = (esi == 0 ? v44 : v48f);
                *(float*)((char*)&v30 + esi * 4) = t;
                if (d == 0 && v24 != 0) {
                    float u = t - *(float*)((char*)&v38 + esi * 4);
                    u = u * *(float*)((char*)&v18 + esi * 4);
                    u = u * g_83a3e4;
                    *(float*)((char*)&v18 + esi * 4) = u;
                }
            } else {
                float t = *(float*)((char*)&v38 + esi * 4);
                t = t + g_826e6c;
                *(float*)((char*)&v30 + esi * 4) = t;
            }

            float p0 = v18;
            float p1 = v1c;
            float p2 = v28;
            float p3 = v2c;
            float p4 = v20;

            sub_4f35d0(&p0, &p1, &p2, &p3, &p4);

            sub_4fec20(e, g, f);

            *(float*)((char*)&v38 + esi * 4) = *(float*)((char*)&v30 + esi * 4);
            i++;
        } while (i < ebx);
    }
}
