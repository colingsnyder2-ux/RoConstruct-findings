// from server: 24% by colin
struct Vector3 {
    float x, y, z;
};

struct G3D_Matrix3 {
    float m[9];
    float get(int i, int j) const { return m[i * 3 + j]; }
};

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void* v6();
    virtual void v7(void*);
};

struct Humanoid {
    bool func(void* a, void* b, float* out);
};

extern "C" void __cdecl sub_4293D0(void* p);
extern "C" void __cdecl sub_513240(void* out, void* in, int idx);
extern "C" void __cdecl sub_518830(void* out, void* a, void* b);
extern "C" int __cdecl sub_60DB10(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_6A067A(void* p);
extern "C" void __cdecl sub_660210(void* p);
extern "C" void __cdecl sub_641240(Humanoid* self, void* out, void* a, void* b);

extern float g_827494;
extern float g_819BAC;
extern float g_819DCC;
extern void* g_97BEB8;

bool Humanoid::func(void* a, void* b, float* out)
{
    Obj* o = (Obj*)this;
    void* r = o->v6();
    if (!r)
        return false;

    char buf[0x60];
    sub_4293D0(buf);

    o->v7(buf);

    void* p1 = *(void**)((char*)b + 0x24);
    void* p2 = *(void**)((char*)a + 0x24);

    float tmp[3];
    sub_641240(this, tmp, a, b);

    float v[3];
    sub_513240(v, tmp, 0);

    float nx = -v[0];
    float ny = -v[1];
    float nz = -v[2];

    float dx = *(float*)((char*)b + 0x24) - *(float*)((char*)a + 0x24);
    float dy = *(float*)((char*)b + 0x28) - *(float*)((char*)a + 0x28);
    float dz = *(float*)((char*)b + 0x2c) - *(float*)((char*)a + 0x2c);

    float dist = dx * nx + dy * ny + dz * nz;
    if (dist < 0) dist = -dist;
    *out = dist;

    sub_660210(0);

    int count = 0;
    for (int i = -2; i <= 2; i += 2) {
        float fx = (float)i * nx;
        float fy = (float)i * ny;
        float fz = (float)i * nz;

        float px = fx + *(float*)((char*)a + 0x24);
        float py = fy + *(float*)((char*)a + 0x28);
        float pz = fz + *(float*)((char*)a + 0x2c);

        float qx = *(float*)((char*)b + 0x24) - px;
        float qy = *(float*)((char*)b + 0x28) - py;
        float qz = *(float*)((char*)b + 0x2c) - pz;

        float tmpv[3];
        sub_518830(tmpv, &px, &qx);

        float zero = 0.0f;
        float z2 = 0.0f;
        float z3 = 0.0f;

        int res = sub_60DB10(&zero, &z2, &z3, &px, &qx);
        if (res) {
            count++;
            float ddx = qx - px;
            float ddy = qy - py;
            float ddz = qz - pz;
            float d2 = ddx * ddx + ddy * ddy + ddz * ddz;
            if (d2 < *out)
                *out = d2;
        }
    }

    if (count > 1) {
        *out = *out - g_827494;
        if (*out < g_819BAC)
            *out = g_819BAC;
        if (*out > g_819DCC)
            *out = g_819DCC;
        sub_6A067A(0);
        sub_6A067A(0);
        return true;
    } else {
        *out = 0.0f;
        sub_6A067A(0);
        sub_6A067A(0);
        return false;
    }
}
