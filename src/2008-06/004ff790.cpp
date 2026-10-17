// from server: 34% by colin
struct Vector2 { float x, y; };
struct Vector3 { float x, y, z; };

extern "C" double __cdecl ceil(double);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

extern "C" void __cdecl sub_5ec1a0(void*, void*);
extern "C" void __cdecl sub_4f35d0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4fe640(void*, void*, void*);
extern "C" float __cdecl sub_4f1ff0(int);
extern "C" void __cdecl sub_5185d0(Vector2*, Vector3*);

struct CylinderBuilder {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void build(Vector3* a, Vector3* b, int c, int d, int e, int f);
};

void CylinderBuilder::build(Vector3* a, Vector3* b, int c, int d, int e, int f)
{
    int mode = field10 & 7;
    Vector2 v2;
    sub_5ec1a0(&field4, &v2);

    float fa = a->x; if (fa < 0) fa = -fa;
    float fb = a->y; if (fb < 0) fb = -fb;
    float fc = a->z; if (fc < 0) fc = -fc;

    float arr[4];
    arr[0] = fa;
    arr[1] = fb;
    arr[2] = fc;

    bool flag;
    if (c == 0) {
        flag = (fa == fb);
    } else {
        flag = false;
    }
    int idx = flag ? 0 : 1;

    int count;
    if (c == 0 && mode != 0) {
        float t = arr[idx] * g_819bac;
        count = (int)ceil((double)t);
    } else {
        count = 1;
    }

    short s0 = 0;
    short s1 = 0;
    short s2 = 0;
    short s3 = 0;
    short* sp = &s0;
    short val = (short)v2.x;
    int q = val / count;
    short qs = (short)q;
    short one = 1;
    short* sel;
    if (one < qs) {
        sel = &qs;
    } else {
        sel = &one;
    }
    short chosen = *sel;
    sp[idx] = chosen;
    sp[1 - idx] = val;

    float f0 = arr[2];
    float f1 = arr[0];
    float f2 = arr[1];

    Vector2 xy1;
    sub_5185d0(&xy1, a);
    float nx = -xy1.x;
    float ny = -xy1.y;

    Vector2 xy2;
    sub_5185d0(&xy2, b);
    float bx = xy2.x;
    float by = xy2.y;

    float r0 = 0, r1 = 0, r2 = 0, r3 = 0;

    if (c == 0) {
        if (mode == 0) {
            r0 = g_83a3e4;
            r1 = g_819bac;
            r2 = r1;
            r3 = r1;
        } else {
            r0 = 0;
            r1 = sub_4f1ff0(mode);
            r2 = f0 * 2.0f;
            r3 = g_819bac;
            if (idx == 1) {
                r2 = -r2;
            }
        }
    } else if (c == 1) {
        r0 = 0;
        r1 = b->z;
        r2 = b->y;
        r3 = -b->z;
    } else if (c == 2) {
        r0 = 0;
        r1 = 0;
        r2 = 0;
        r3 = 0;
    }

    int i;
    for (i = 0; i < count; i++) {
        float prev;
        if (i == count - 1) {
            prev = arr[idx];
            arr[2 + idx] = prev;
            if (c == 0 && d != 0) {
                float t = (prev - arr[2 + idx]) * r2 * g_83a3e4;
                r2 = t;
            }
        } else {
            prev = arr[2 + idx] + g_826e6c;
            arr[2 + idx] = prev;
        }

        float p0 = r2;
        float p1 = r3;
        float p2 = r0;
        float p3 = r1;

        Vector3 out;
        sub_4f35d0(&out, &p0, &p1, &p2, &p3);
        sub_4fe640(this, &out, &p0);
        arr[2 + idx] = arr[2 + idx];
    }
}
