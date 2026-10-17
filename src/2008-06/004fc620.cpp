// from server: 25% by colin
struct Vector2 { float x, y; };
struct Vector3 { float x, y, z; };

extern "C" double __cdecl ceil(double);

struct TorsoBuilder {
    int field0;
    int field4;
    int field8;
    int fieldC;
    unsigned int field10;
    void build(int a, int b, int c);
};

extern "C" void __stdcall sub_5EC1E0(Vector2* out, Vector2* in);
extern "C" Vector2* __stdcall sub_5185D0(Vector2* out, Vector3* in);
extern "C" float __stdcall sub_4F1FF0(int n);
extern "C" void __stdcall sub_4F35D0(Vector3* a, Vector3* b, Vector3* c, Vector3* d, int e, int f, int g);
extern "C" void __stdcall sub_4FB4E0(int a, int b);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void TorsoBuilder::build(int a, int b, int c)
{
    Vector2 v2;
    sub_5EC1E0(&v2, (Vector2*)&field4);

    float f0 = *(float*)&a;
    float f1 = *(float*)&b;
    float f2 = *(float*)&c;
    if (f0 < 0) f0 = -f0;
    if (f1 < 0) f1 = -f1;
    if (f2 < 0) f2 = -f2;

    float arr[2];
    arr[0] = f0;
    arr[1] = f1;
    float f2v = f2;

    int mode = (field10 >> 9) & 7;

    bool eq;
    if (c == 0) {
        eq = (f0 == f1);
    } else {
        eq = false;
    }
    int idx = eq ? 0 : 1;

    int count;
    if (c == 0 && mode != 0) {
        count = (int)ceil(arr[idx] * g_819bac);
    } else {
        count = 1;
    }

    short s0 = 0;
    short s1 = 0;
    short v = *(short*)&v2.x;
    int q = (int)v / count;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;
    s0 = chosen;
    s1 = v;

    float f2copy = f2v;

    Vector2 t1, t2;
    sub_5185D0(&t1, (Vector3*)&f0);
    float nx = -t1.x;
    float ny = -t1.y;
    sub_5185D0(&t2, (Vector3*)&f1);

    float p0 = 0, p1 = 0, p2 = 0, p3 = 0;

    if (c == 0) {
        if (mode == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p2 = g_819bac;
            p3 = g_819bac;
        } else {
            p0 = 0;
            p1 = sub_4F1FF0(mode);
            p2 = f2copy * 2.0f;
            p3 = g_819bac;
            if (idx == 1) {
                p2 = -p2;
            }
        }
    } else if (c == 1) {
        p0 = 0;
        p1 = *(float*)((char*)&field4 + 0x1c);
        p2 = *(float*)((char*)&field4 + 0x18);
        p3 = -*(float*)((char*)&field4 + 0x1c);
    } else if (c == 2) {
        p0 = 0;
        p1 = 0;
        p2 = 0;
        p3 = 0;
    }

    for (int i = 0; i < count; i++) {
        float cur;
        if (i == count - 1) {
            cur = arr[idx];
            if (c == 0 && a != 0) {
                p2 = (cur - p2) * p2 * g_83a3e4;
            }
        } else {
            cur = p2 + g_826e6c;
        }
        Vector3 va, vb, vc;
        va.x = p2; va.y = p3; va.z = 0;
        vb.x = p0; vb.y = p1; vb.z = 0;
        vc.x = nx; vc.y = ny; vc.z = 0;
        sub_4F35D0(&va, &vb, &vc, &va, idx, s0, s1);
        sub_4FB4E0(s0, s1);
        p2 = cur;
    }
}
