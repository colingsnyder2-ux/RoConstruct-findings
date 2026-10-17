// from server: 30% by colin
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

extern "C" {
    double __cdecl ceil(double);
}

struct Builder {
    char pad0[0x10];
    unsigned int flags;
    void build(Vec3 a, Vec3 b, int mode, int count, int extra);
};

extern "C" void __cdecl sub_5EC1E0(void*, void*);
extern "C" void __cdecl sub_5185D0(Vec3*, Vec2*);
extern "C" float __cdecl sub_4F1FF0(int);
extern "C" void __cdecl sub_4F35D0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4F8790(void*, int, int);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void Builder::build(Vec3 a, Vec3 b, int mode, int count, int extra)
{
    unsigned int f = flags >> 9;
    int idx = (int)(f & 7);

    Vec2 v;
    sub_5EC1E0(&v, &a);

    float ax = a.x < 0 ? -a.x : a.x;
    float ay = a.y < 0 ? -a.y : a.y;
    float az = a.z < 0 ? -a.z : a.z;

    float arr[3];
    arr[0] = ax;
    arr[1] = ay;
    arr[2] = az;

    bool eq = (ax == ay);
    int sel = eq ? 0 : 1;

    int n;
    if (count == 0 && idx != 0) {
        n = (int)ceil(arr[sel] * g_819bac);
    } else {
        n = 1;
    }

    short tab[2];
    tab[0] = 0;
    short val = (short)((short)v.x / n);
    tab[1] = val;
    if (val < 1) val = 1;
    short tab2[2];
    tab2[0] = 1;
    tab2[1] = val;

    float f1 = arr[2];
    float f2 = arr[0];
    float f3 = arr[1];

    Vec2 p1, p2;
    sub_5185D0(&a, &p1);
    sub_5185D0(&b, &p2);

    float r1 = -p1.x;
    float r2 = -p1.y;
    float r3 = -p2.x;
    float r4 = -p2.y;

    float q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    if (mode == 0) {
        if (idx == 0) {
            q1 = g_83a3e4;
            q2 = g_819bac;
            q3 = g_819bac;
            q4 = g_819bac;
        } else {
            q1 = 0;
            q2 = sub_4F1FF0(idx);
            q3 = arr[sel] * 2.0f;
            q4 = g_819bac;
            if (sel == 1) q3 = -q3;
        }
    } else if (mode == 1) {
        q1 = 0;
        q2 = b.z;
        q3 = b.y;
        q4 = -b.z;
    } else if (mode == 2) {
        q1 = 0;
        q2 = 0;
        q3 = 0;
        q4 = 0;
    }

    int i = 0;
    while (i < n) {
        float t1, t2;
        if (i == n - 1) {
            t1 = arr[sel];
            t2 = arr[sel];
            if (mode == 0 && extra != 0) {
                t2 = (t2 - arr[sel]) * q3 * g_83a3e4;
            }
        } else {
            t1 = arr[sel] + g_826e6c;
            t2 = arr[sel];
        }

        float args[5];
        args[0] = q1;
        args[1] = q2;
        args[2] = q3;
        args[3] = q4;
        args[4] = t1;

        sub_4F35D0(&args, &p1, &p2, &a, &b);
        sub_4F8790(this, count, extra);

        arr[sel] = t2;
        i++;
    }
}
