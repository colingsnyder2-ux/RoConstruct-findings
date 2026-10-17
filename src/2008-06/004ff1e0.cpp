// from server: 26% by colin
struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct CylinderBuilder {
    char pad[0x10];
    unsigned int flags;
    void buildCylinder(float, float, float, int, int, int);
};

extern "C" double __stdcall ceil(double);
extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void __stdcall sub_5ec200(Vector3* out, Vector3* in);
Vector2* __stdcall sub_5185d0(Vector2* out, Vector3* in);
float __stdcall sub_4f1ff0(int n);
void __stdcall sub_4f35d0(Vector3* a, Vector3* b, Vector3* c, Vector3* d, Vector2* e, int f, int g);
void __stdcall sub_4fe070(int h);

void CylinderBuilder::buildCylinder(float a, float b, float c, int d, int e, int f)
{
    Vector3 v;
    sub_5ec200(&v, (Vector3*)((char*)this + 4));

    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;

    float arr[3];
    arr[0] = fc;
    arr[1] = fb;
    arr[2] = fa;

    int idx;
    if (f == 0) {
        idx = (fa == fb && fb == fc) ? 0 : 1;
    } else {
        idx = 1;
    }

    unsigned int flags = (this->flags >> 12) & 7;
    int count;
    if (f == 0 && flags != 0) {
        double dv = (double)arr[idx] * (double)g_819bac;
        double cv = ceil(dv);
        count = (int)cv;
    } else {
        count = 1;
    }

    short segs[2];
    segs[0] = 0;
    segs[1] = 0;

    short s0 = (short)((int)segs[0] / count);
    short s1 = (short)((int)segs[1] / count);
    short m = s0 < s1 ? s0 : s1;
    segs[0] = m;
    segs[1] = m;

    float f0 = arr[0];
    float f1 = arr[1];
    float f2 = arr[2];

    Vector2 uv0, uv1;
    sub_5185d0(&uv0, &v);
    uv0.x = -uv0.x;
    uv0.y = -uv0.y;
    sub_5185d0(&uv1, &v);
    uv1.x = -uv1.x;
    uv1.y = -uv1.y;

    float p0 = 0, p1 = 0, p2 = 0, p3 = 0;

    if (d == 0) {
        if (flags == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p2 = g_819bac;
            p3 = g_819bac;
        } else {
            p0 = 0;
            p1 = sub_4f1ff0(flags);
            p2 = f0 * 2.0f;
            p3 = g_819bac;
            if (idx == 1) {
                p2 = -p2;
            }
        }
    } else if (d == 1) {
        p0 = 0;
        p1 = v.z;
        p2 = v.y;
        p3 = -v.z;
    } else if (d == 2) {
        p0 = 0;
        p1 = 0;
        p2 = 0;
        p3 = 0;
    }

    float prev = 0;
    for (int i = 0; i < count; i++) {
        float cur;
        if (i == count - 1) {
            cur = arr[idx];
            if (d == 0 && e != 0) {
                p2 = (cur - f2) * p2 * g_83a3e4;
            }
        } else {
            cur = f2 + g_826e6c;
        }

        Vector3 va, vb, vc;
        va.x = p2;
        va.y = p1;
        va.z = p0;
        vb.x = p3;
        vb.y = p1;
        vc.x = p2;
        vc.y = p1;
        vc.z = p0;

        sub_4f35d0(&va, &vb, &vc, &v, &uv0, idx, i);
        sub_4fe070(f);

        prev = cur;
    }
}
