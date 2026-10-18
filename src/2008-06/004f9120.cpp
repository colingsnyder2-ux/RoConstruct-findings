// from server: 13% by colin
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

extern "C" float __stdcall ceil(double);

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

struct WedgeBuilder {
    int field0;
    int field4;
    int field8;
    unsigned int fieldC;
    unsigned int field10;
    void build(Vec3* a, Vec3* b, int c, int d, int e, int f);
};

extern void __stdcall sub_5ec1c0(void* dst, void* src);
extern Vec2* __stdcall sub_5185d0(Vec2* out, Vec3* in);
extern float __stdcall sub_4f1ff0(int n);
extern void __stdcall sub_4f35d0(Vec3* a, Vec3* b, Vec3* c, int d, int e, Vec2* f, Vec2* g);
extern void __stdcall sub_4f80e0(WedgeBuilder* self, int a, int b);

void WedgeBuilder::build(Vec3* a, Vec3* b, int c, int d, int e, int f)
{
    Vec2 v0;
    Vec2 v1;
    sub_5ec1c0(&v0, &field4);

    float f0 = a->x; if (f0 < 0) f0 = -f0;
    float f1 = a->y; if (f1 < 0) f1 = -f1;
    float f2 = a->z; if (f2 < 0) f2 = -f2;

    float arr[3];
    arr[0] = f0;
    arr[1] = f1;
    arr[2] = f2;

    int esi;
    if (f == 0) {
        if (f0 == f1) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    unsigned int ebp = (field10 >> 3) & 7;

    int ebx;
    if (f == 0 && ebp != 0) {
        ebx = (int)ceil((double)(arr[esi] * g_819bac));
    } else {
        ebx = 1;
    }

    short s0 = 0;
    short s1 = 0;
    short s2 = 0;
    short s3 = 0;

    short* sp10 = &s0;
    short* sp12 = &s1;
    short* sp14 = &s2;
    short* sp16 = &s3;

    short di = sp10[esi];
    int q = (int)di / ebx;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;
    sp10[esi] = chosen;

    Vec2 t0;
    t0.x = arr[2];
    t0.y = arr[0];
    Vec2* r0 = sub_5185d0(&t0, (Vec3*)&v0);
    float n0x = -r0->x;
    float n0y = -r0->y;

    Vec2 t1;
    t1.x = n0x;
    t1.y = n0y;
    Vec2* r1 = sub_5185d0(&t1, (Vec3*)&v1);

    float zero = 0.0f;
    float p18 = zero;
    float p1c = zero;
    float p28 = zero;
    float p2c = zero;

    if (f == 0) {
        if (ebp == 0) {
            p28 = g_83a3e4;
            p2c = g_819bac;
            p1c = g_819bac;
            p18 = g_819bac;
        } else {
            p2c = zero;
            float r = sub_4f1ff0(ebp);
            p2c = r;
            p1c = arr[2] * 2.0f;
            p18 = g_819bac;
            if (esi == 1) {
                p18 = -p18;
            }
        }
    } else if (f == 1) {
        p28 = zero;
        p2c = b->z;
        p18 = b->y;
        p1c = -b->z;
    } else if (f == 2) {
        p28 = zero;
        p2c = zero;
        p18 = zero;
        p1c = zero;
    } else {
        p28 = zero;
        p2c = zero;
        p18 = zero;
        p1c = zero;
    }

    float p30 = 0.0f;
    float p34 = 0.0f;
    float p38 = 0.0f;
    float p3c = 0.0f;

    int i = 0;
    while (i < ebx) {
        if (i == ebx - 1) {
            p30 = arr[esi];
            if (f == 0 && c != 0) {
                p18 = (arr[esi] - p38) * p18 * g_83a3e4;
            }
        } else {
            p30 = p38 + g_826e6c;
        }

        Vec3 va;
        va.x = p18;
        va.y = p1c;
        Vec3 vb;
        vb.x = p28;
        vb.y = p2c;
        Vec3 vc;
        vc.x = p30;
        vc.y = p38;

        sub_4f35d0(&va, &vb, &vc, d, e, &v0, &v1);
        sub_4f80e0(this, d, e);

        p38 = p30;
        i++;
    }
}
