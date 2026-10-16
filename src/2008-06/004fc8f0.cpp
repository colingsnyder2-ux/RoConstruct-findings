// from server: 40% by colin
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

extern "C" {
    double __cdecl ceil(double);
}

struct TorsoBuilder {
    char pad0[4];
    unsigned int flags;
    char pad1[8];
    int field10;
    char pad2[0x40];
    int f();
};

extern "C" void __stdcall sub_5EC200(void*, void*);
extern "C" void __stdcall sub_5185D0(Vec2* out, const Vec3* in);
extern "C" float __stdcall sub_4F1FF0(int);
extern "C" void __stdcall sub_4F35D0(void*, void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_4FB7D0(void*, int);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

int TorsoBuilder::f()
{
    char buf[0x40];
    Vec2 v2a, v2b;
    Vec3 v3a, v3b;
    float f0, f1, f2;
    float a0, a1, a2;
    float b0, b1, b2;
    float c0, c1, c2;
    float d0, d1, d2;
    int i;
    int mode;
    int idx;
    int count;
    unsigned short s0, s1;
    int t;

    mode = (int)((unsigned int)field10 >> 12) & 7;

    sub_5EC200(&buf[0x2c], &field10);

    f0 = *(float*)(buf + 0x2c);
    f1 = *(float*)(buf + 0x28);
    f2 = *(float*)(buf + 0x1c);

    if (f0 < 0) f0 = -f0;
    if (f1 < 0) f1 = -f1;
    if (f2 < 0) f2 = -f2;

    a0 = f0;
    a1 = f1;
    a2 = f2;

    if (field10 == 0) {
        if (a0 == a1) {
            idx = 1;
        } else {
            idx = 0;
        }
    } else {
        idx = 0;
    }

    if (field10 == 0 && mode != 0) {
        float v = *(float*)((char*)&a0 + idx * 4);
        v = (float)ceil((double)(v * g_819bac));
        count = (int)v;
    } else {
        count = 1;
    }

    s0 = 0;
    s1 = 0;
    {
        unsigned short* p = (unsigned short*)((char*)&s1 + 0x48 - idx * 2);
        t = (int)(short)*p;
    }
    {
        int q = t / count;
        unsigned short qq = (unsigned short)q;
        if ((short)1 < (short)qq) {
            s0 = qq;
        } else {
            s0 = 1;
        }
    }
    *(unsigned short*)((char*)&s0 + idx * 2) = s0;

    c0 = a2;

    sub_5185D0(&v2a, (Vec3*)&buf[0x2c]);
    v3a.x = -v2a.x;
    v3a.y = -v2a.y;
    v3a.z = 0.0f;

    sub_5185D0(&v2b, (Vec3*)&buf[0x2c]);
    v3b.x = v2b.x;
    v3b.y = v2b.y;
    v3b.z = 0.0f;

    d0 = 0.0f;
    d1 = 0.0f;
    d2 = 0.0f;
    b0 = 0.0f;
    b1 = 0.0f;
    b2 = 0.0f;

    if (field10 == 0) {
        if (mode == 0) {
            b0 = g_83a3e4;
            b1 = g_819bac;
            d0 = g_819bac;
            d1 = g_819bac;
        } else {
            b0 = sub_4F1FF0(mode);
            d0 = c0 * 2.0f;
            d1 = g_819bac;
            if (idx == 1) {
                d0 = -d0;
            }
        }
    } else if (field10 == 1) {
        b0 = 0.0f;
        b1 = *(float*)((char*)&field10 + 0x1c);
        d0 = *(float*)((char*)&field10 + 0x18);
        d1 = -*(float*)((char*)&field10 + 0x1c);
    } else if (field10 == 2) {
        b0 = 0.0f;
        b1 = 0.0f;
        d0 = 0.0f;
        d1 = 0.0f;
    }

    i = 0;
    while (i < count) {
        float* pf;
        if (i == count - 1) {
            pf = (float*)((char*)&a0 + idx * 4);
            *(float*)((char*)&c0 + idx * 4) = *pf;
            if (field10 == 0 && *(int*)(buf + 0x24) != 0) {
                float t2 = (*pf - *(float*)((char*)&d0 + idx * 4)) * *(float*)((char*)&b0 + idx * 4) * g_83a3e4;
                *(float*)((char*)&b0 + idx * 4) = t2;
            }
        } else {
            *(float*)((char*)&c0 + idx * 4) = *(float*)((char*)&d0 + idx * 4) + g_826e6c;
        }

        sub_4F35D0(&v3a, &v3b, &b0, &d0, &c0, &s0);
        sub_4FB7D0(&buf[0x2c], i);
        *(float*)((char*)&d0 + idx * 4) = *(float*)((char*)&c0 + idx * 4);
        i++;
    }

    return 0;
}
