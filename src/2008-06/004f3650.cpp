// from server: 30% by colin
struct V3 { float x, y, z; };
struct V2 { float x, y; };

extern "C" {
    double __stdcall ceil(double);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

struct S {
    char pad0[4];
    char pad4[12];
    unsigned int flags10;
    void f(V3* a, V3* b, V3* c, int mode, int extra);
};

void copyV2(V2* dst, V3* src);
float getFactor(int n);

void S::f(V3* a, V3* b, V3* c, int mode, int extra)
{
    unsigned int f = (flags10 >> 3) & 7;
    V2 v;
    copyV2(&v, a);

    float ax = a->x; if (ax < 0) ax = -ax;
    float ay = a->y; if (ay < 0) ay = -ay;
    float az = a->z; if (az < 0) az = -az;

    float vals[2];
    vals[0] = ax;
    vals[1] = ay;
    float zval = az;

    bool eq;
    if (mode == 0) {
        eq = (ax == ay);
    } else {
        eq = false;
    }
    int idx = eq ? 0 : 1;

    int count;
    if (mode == 0 && f != 0) {
        double d = (double)vals[idx] * (double)g_819bac;
        float r = (float)ceil(d);
        count = (int)r;
    } else {
        count = 1;
    }

    short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    short v0 = (short)(int)v.x;
    short v1 = (short)(int)v.y;

    int q0 = v0 / count;
    int q1 = v1 / count;

    short s0 = (short)q0;
    short s1 = (short)q1;

    short pick0 = (s0 < 1) ? s0 : 1;
    short pick1 = (s1 < 1) ? s1 : 1;

    arr[idx] = pick0;
    arr[1 - idx] = pick1;

    float fz = zval;

    V2 r1;
    copyV2(&r1, b);
    float bx = -r1.x;
    float by = -r1.y;

    V2 r2;
    copyV2(&r2, c);

    float px = 0, py = 0, pz = 0, pw = 0;

    if (mode == 0) {
        if (f == 0) {
            px = g_83a3e4;
            py = g_819bac;
            pw = g_819bac;
            pz = g_819bac;
        } else {
            float t = getFactor(f);
            py = t;
            pz = fz * 2.0f;
            pw = g_819bac;
            if (idx == 1) {
                pw = -pw;
            }
        }
    } else if (mode == 1) {
        px = 0;
        py = b->z;
        pz = b->y;
        pw = -b->z;
    } else if (mode == 2) {
        px = 0;
        py = 0;
        pz = 0;
        pw = 0;
    }

    int i = 0;
    while (i < count) {
        float cur;
        if (i == count - 1) {
            cur = vals[idx];
            if (mode == 0 && extra != 0) {
                cur = (cur - pw) * pz * g_83a3e4;
            }
        } else {
            cur = pw + g_826e6c;
        }

        float args[3];
        args[0] = pz;
        args[1] = py;
        args[2] = px;

        V3 out;
        V3 tmp;
        tmp.x = cur;
        tmp.y = args[0];
        tmp.z = args[1];

        V3 tmp2;
        tmp2.x = args[2];
        tmp2.y = 0;
        tmp2.z = 0;

        // call 0x4f35d0
        extern void call_4f35d0(V3* out, V3* a, V3* b, V3* c, int idx, int f);
        call_4f35d0(&out, &tmp, &tmp2, &tmp, idx, f);

        V3 final;
        final.x = out.x;
        final.y = out.y;
        final.z = out.z;

        extern void call_4f2110(S* self, V3* v, int idx, int f);
        call_4f2110(this, &final, idx, f);

        pw = cur;
        i++;
    }
}
