// from server: 36% by colin
struct Vec3 { float x, y, z; };

struct Billboard {
    void setColour(const void* c);
};

struct ColourValue {
    float r, g, b, a;
};

struct RbxEntity {
    char pad0[0x34];
    void* field34;       // 0x34
    char pad1[4];        // 0x38
    void* field3c;       // 0x3c
    void* field40;       // 0x40
    char pad2[0x40];     // 0x44..0x83
    char field84;        // 0x84
    char pad3[0x37];     // 0x85..0xbb
    float fieldbc;       // 0xbc
    float fieldc0;       // 0xc0
    float fieldc4;       // 0xc4

    void func(Vec3* a, Vec3* b);
};

extern float g_819b48;
extern float g_81e704;
extern float g_826cb4;
extern double g_826fd0;
extern float g_827490;
extern double g_84ae00;
extern double g_84e560;
extern void* g_8045d8;

extern "C" double sqrt(double);

void RbxEntity::func(Vec3* a, Vec3* b)
{
    float t0, t1, t2;

    float* src;
    if (b->x == 0.0f) {
        src = &a->x;
    } else {
        src = &a->x;
    }

    float s = g_819b48;
    t0 = src[0] * s;
    t1 = src[1] * s;
    t2 = src[2] * s;

    if (b->x != 0.0f) {
        float tmp = (b->x + g_81e704) * g_827490;
        float chosen;
        if (tmp < b->x) {
            chosen = tmp;
        } else {
            chosen = b->x;
        }
        t0 = t0 * chosen;
        t1 = t1 * chosen;
        t2 = t2 * chosen;
    }

    float m = g_826cb4;
    float r0 = t0 * m;
    float r1 = t1 * m;
    float r2 = t2 * m;

    void** vtbl = *(void***)field40;
    typedef void (__thiscall *Fn68)(void*, float, float, float);
    Fn68 f68 = (Fn68)vtbl[0x68/4];
    f68(field40, r0, r1, r2);

    ColourValue col;
    col.r = t0;
    col.g = t1;
    col.b = t2;
    col.a = 1.0f;

    void** vtbl2 = *(void***)field34;
    typedef Billboard* (__thiscall *FnF8)(void*, int, ColourValue*);
    FnF8 fF8 = (FnF8)vtbl2[0xf8/4];
    Billboard* bb;

    bb = fF8(field34, 0, &col);
    ((void (__thiscall*)(Billboard*, const ColourValue*))g_8045d8)(bb, &col);

    bb = fF8(field34, 1, &col);
    ((void (__thiscall*)(Billboard*, const ColourValue*))g_8045d8)(bb, &col);

    bb = fF8(field34, 2, &col);
    ((void (__thiscall*)(Billboard*, const ColourValue*))g_8045d8)(bb, &col);

    fieldbc = t0;
    fieldc0 = t1;
    fieldc4 = t2;

    float z = 0.0f;
    if (t2 == z) {
        field84 = 0;
        return;
    }
    if (t2 < 0.0f) {
        field84 = 0;
        return;
    }
    if (t2 > g_84ae00) {
        field84 = 0;
        return;
    }

    float d = g_826fd0;
    float sq = (float)sqrt(d);
    float ratio = t2 / sq;
    float two = ratio + ratio;
    float one = 1.0f;
    float lo = one - two;
    float hi = two;

    float chosen;
    if (lo < hi) {
        chosen = lo;
    } else {
        chosen = hi;
    }

    float chosen2;
    if (chosen < 0.0f) {
        chosen2 = 0.0f;
    } else {
        chosen2 = chosen;
    }

    float ang = chosen2 * (float)g_84e560;

    ColourValue col2;
    col2.r = ang;
    col2.g = ang;
    col2.b = ang;
    col2.a = ang;

    void** vtbl3 = *(void***)field3c;
    typedef Billboard* (__thiscall *FnF8b)(void*, int, ColourValue*);
    FnF8b fF8b = (FnF8b)vtbl3[0xf8/4];
    bb = fF8b(field3c, 0, &col2);
    ((void (__thiscall*)(Billboard*, const ColourValue*))g_8045d8)(bb, &col2);

    field84 = 1;
}
