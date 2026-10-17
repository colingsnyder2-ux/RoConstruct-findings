// from server: 24% by colin
struct Vec2 { float x; float y; };

struct PBBBuilder {
    char pad0[0x10];
    unsigned int flags;
    void build(float a, float b, float c, int mode, int count, int extra);
};

extern "C" {
    void __stdcall sub_5ec220(Vec2* out, Vec2* in);
    void __stdcall sub_5185d0(Vec2* out, Vec2* in);
    float __stdcall sub_4f1ff0(int n);
    void __stdcall sub_4f35d0(float* a, float* b, float* c, float* d, int e, int f);
    void __stdcall sub_4f5810(int a);
    double __cdecl ceil(double x);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void PBBBuilder::build(float a, float b, float c, int mode, int count, int extra)
{
    Vec2 v;
    sub_5ec220(&v, (Vec2*)&this->pad0[0]);

    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;

    unsigned int f = this->flags >> 15;
    f &= 7;

    int sel;
    if (extra != 0) {
        if (fa == fb) {
            sel = 1;
        } else {
            sel = 0;
        }
    } else {
        sel = 0;
    }

    int n;
    if (extra == 0 && f != 0) {
        float arr[3];
        arr[0] = fa;
        arr[1] = fb;
        arr[2] = fc;
        n = (int)ceil((double)(arr[sel] * g_819bac));
    } else {
        n = 1;
    }

    short idx = (short)(int)v.x;
    int q = (int)idx / n;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;

    short arr2[3];
    arr2[0] = idx;
    arr2[1] = 0;
    arr2[2] = 0;
    arr2[sel] = chosen;

    float f1 = fc;
    float f2 = fa;
    float f3 = fb;

    Vec2 t1;
    sub_5185d0(&t1, (Vec2*)&v);
    float nx = -t1.x;
    float ny = -t1.y;

    Vec2 t2;
    sub_5185d0(&t2, (Vec2*)&v);

    float p0 = 0.0f, p1 = 0.0f, p2 = 0.0f, p3 = 0.0f;

    if (mode == 0) {
        if (f == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p3 = g_819bac;
        } else {
            p1 = sub_4f1ff0(f);
            p2 = f1 + f1;
            p3 = g_819bac;
            if (sel == 1) {
                p2 = -p2;
            }
        }
    } else if (mode == 1) {
        p1 = this->pad0[0x1c];
        p2 = this->pad0[0x18];
        p3 = -this->pad0[0x1c];
    } else if (mode == 2) {
        p3 = 0.0f;
    }

    int i = 0;
    while (i < n) {
        float cur;
        if (i == n - 1) {
            cur = arr2[sel];
            if (extra == 0 && count != 0) {
                p2 = (cur - p3) * p2 * g_83a3e4;
            }
        } else {
            cur = p3 + g_826e6c;
        }

        float args[4];
        args[0] = p2;
        args[1] = p1;
        args[2] = nx;
        args[3] = ny;

        float out[4];
        sub_4f35d0(args, &out[0], &out[1], &out[2], sel, count);
        sub_4f5810(extra);

        p3 = cur;
        i++;
    }
}
