// from server: 29% by colin
struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct CylinderBuilder {
    char pad0[0x10];
    unsigned int flags;
    void build(Vector3* a, Vector3* b, float height, float radius, int segments, int mode);
};

extern "C" double __stdcall ceil(double);
extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void sub_5ec1e0(Vector2* out, Vector3* in);
Vector2* sub_5185d0(Vector3* in, Vector2* out);
float sub_4f1ff0(int n);
void sub_4f35d0(CylinderBuilder* self, Vector3* a, Vector3* b, Vector3* c, Vector3* d, Vector3* e);
void sub_4fe350(CylinderBuilder* self, int a, int b);

void CylinderBuilder::build(Vector3* a, Vector3* b, float height, float radius, int segments, int mode)
{
    unsigned int f = (this->flags >> 9) & 7;
    Vector2 v2;
    sub_5ec1e0(&v2, a);

    float fa = height < 0 ? -height : height;
    float fb = radius < 0 ? -radius : radius;
    float fc = v2.x < 0 ? -v2.x : v2.x;

    float vals[2];
    vals[0] = fa;
    vals[1] = fb;
    float fc2 = fc;

    int useSeg = 0;
    if (segments == 0) {
        if (fa == fb) {
            useSeg = 1;
        }
    }
    int idx = useSeg ? 0 : 1;

    int count;
    if (segments == 0 && f != 0) {
        count = (int)ceil(vals[idx] * g_819bac);
    } else {
        count = 1;
    }

    short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    short base = (short)(int)v2.y;
    int q = base / count;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;
    arr[idx] = chosen;

    float fv = fc2;
    float fv2 = fv;

    Vector2 out1;
    sub_5185d0(a, &out1);
    Vector3 tmp1;
    tmp1.x = -out1.x;
    tmp1.y = -out1.y;
    tmp1.z = 0;

    Vector2 out2;
    sub_5185d0(b, &out2);
    Vector3 tmp2;
    tmp2.x = -out2.x;
    tmp2.y = -out2.y;
    tmp2.z = 0;

    float zero = 0;
    float p0 = zero, p1 = zero, p2 = zero, p3 = zero;

    if (mode == 0) {
        if (f == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p2 = g_819bac;
            p3 = g_819bac;
        } else {
            p0 = zero;
            p1 = sub_4f1ff0(f);
            p2 = fc2 * 2.0f;
            p3 = g_819bac;
            if (idx == 1) {
                p2 = -p2;
            }
        }
    } else if (mode == 1) {
        p0 = zero;
        p1 = tmp1.z;
        p2 = tmp1.y;
        p3 = -tmp1.z;
    } else if (mode == 2) {
        p0 = zero;
        p1 = zero;
        p2 = zero;
        p3 = zero;
    }

    float prev = 0;
    for (int i = 0; i < count; i++) {
        float cur;
        if (i == count - 1) {
            cur = vals[idx];
            if (mode == 0 && segments != 0) {
                cur = (cur - fc2) * p2 * g_83a3e4;
            }
        } else {
            cur = fc2 + g_826e6c;
        }

        Vector3 v;
        v.x = p2;
        v.y = p3;
        v.z = p0;

        Vector3 w;
        w.x = p1;
        w.y = p2;
        w.z = p3;

        Vector3 u;
        u.x = p0;
        u.y = p1;
        u.z = p2;

        sub_4f35d0(this, &u, &w, &v, &tmp1, &tmp2);
        sub_4fe350(this, segments, mode);

        prev = cur;
    }
}
