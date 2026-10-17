// from server: 30% by colin
struct Vector2 { float x, y; };
struct Vector3 { float x, y, z; };

extern "C" double __stdcall ceil(double);

struct CylinderBuilder {
    int f(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_5EC220(void*, void*);
extern "C" void __cdecl sub_5185D0(Vector2* out, const Vector3* in);
extern "C" float __cdecl sub_4F1FF0(int);
extern "C" void __cdecl sub_4F35D0(Vector3* a, Vector3* b, Vector3* c, Vector3* d, Vector3* e);
extern "C" void __cdecl sub_4FE930(void* self, int a, int b);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

int CylinderBuilder::f(int arg0, int arg1, int arg2, int arg3)
{
    int saved = *(int*)((char*)this + 0x10);
    int mode = (saved >> 15) & 7;

    Vector2 v2a;
    sub_5EC220((char*)this + 4, &v2a);

    float f0 = *(float*)((char*)&arg0 + 0);
    (void)f0;

    float a = *(float*)((char*)&arg0 + 0);
    float b = *(float*)((char*)&arg1 + 0);
    float c = *(float*)((char*)&arg2 + 0);

    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;

    float vals[2];
    vals[0] = fa;
    vals[1] = fb;
    float extra = fc;

    bool flag;
    if (arg3 == 0) {
        flag = (fa == fb);
    } else {
        flag = false;
    }
    int idx = flag ? 0 : 1;

    int count;
    if (arg3 == 0 && mode != 0) {
        float t = vals[idx] * g_819bac;
        double ct = ceil((double)t);
        count = (int)ct;
    } else {
        count = 1;
    }

    short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    short v = *(short*)((char*)&v2a + (idx * 2));
    int q = (int)v / count;
    short qs = (short)q;

    short one = 1;
    short chosen;
    if (one < qs) {
        chosen = qs;
    } else {
        chosen = one;
    }
    arr[idx] = chosen;

    float fv = extra;

    Vector2 out2;
    sub_5185D0(&out2, (const Vector3*)&v2a);
    float nx = -out2.x;
    float ny = -out2.y;

    Vector2 out3;
    sub_5185D0(&out3, (const Vector3*)&v2a);

    float r0 = 0, r1 = 0, r2 = 0, r3 = 0;

    int sel = arg3;
    if (sel == 0) {
        if (mode == 0) {
            r0 = g_83a3e4;
            r1 = g_819bac;
            r2 = g_819bac;
            r3 = g_819bac;
        } else {
            r1 = sub_4F1FF0(mode);
            r0 = extra * 2.0f;
            r2 = g_819bac;
            r3 = g_819bac;
            if (idx == 1) {
                r2 = -r2;
            }
        }
    } else if (sel == 1) {
        r0 = *(float*)((char*)&arg0 + 0x1c);
        r1 = *(float*)((char*)&arg0 + 0x18);
        r2 = *(float*)((char*)&arg0 + 0x1c);
        r3 = -r2;
    } else if (sel == 2) {
        r0 = 0;
        r1 = 0;
        r2 = 0;
        r3 = 0;
    } else {
        r0 = 0;
        r1 = 0;
        r2 = 0;
        r3 = 0;
    }

    float prev = 0;

    for (int i = 0; i < count; i++) {
        float cur;
        if (i == count - 1) {
            cur = vals[idx];
            if (arg3 == 0 && *(int*)((char*)&arg0 + 0x24) != 0) {
                float d = cur - prev;
                float m = d * r2;
                m = m * g_83a3e4;
                r2 = m;
            }
        } else {
            cur = prev + g_826e6c;
        }

        Vector3 p1, p2, p3;
        p1.x = r0;
        p1.y = r1;
        p1.z = r2;
        p2.x = r3;
        p2.y = r0;
        p2.z = r1;
        p3.x = r2;
        p3.y = r3;
        p3.z = r0;

        Vector3 outv;
        sub_4F35D0(&outv, &p1, &p2, &p3, &p1);

        sub_4FE930((void*)this, arg2, arg3);

        prev = cur;
    }

    return 0;
}
