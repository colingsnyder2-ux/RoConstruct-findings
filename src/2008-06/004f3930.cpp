// from server: 27% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct Vec2
{
    float x;
    float y;
};

struct Vec3
{
    float x;
    float y;
    float z;
};

struct Obj
{
    char pad[0x10];
    unsigned int flags;

    void func(float a1, float a2, float a3,
    int a4, int a5, int a6, int a7);
};

extern "C" float __stdcall ceil(double);
extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

extern void sub_5ec200(void *, Vec2 *);
extern Vec2 *sub_5185d0(Vec3 *, Vec2 *);
extern float sub_4f1ff0(int);
extern void sub_4f2490(void *, Vec3 *, Vec2 *, float, float, unsigned short);
extern void sub_4f35d0(void *, Vec3 *, Vec2 *, Vec2 *, int, int);

void Obj::func(
    float a1, float a2, float a3,
    int a4, int a5, int a6, int a7)
{
    unsigned int mode = (flags >> 12) & 7;
    Vec2 v;
    sub_5ec200((char *)this + 4, &v);

    float f0 = v.x < 0.0f ? -v.x : v.x;
    float f1 = v.y < 0.0f ? -v.y : v.y;
    float f2 = a3 < 0.0f ? -a3 : a3;

    bool b;
    if (a7 == 0)
    {
        b = !(f0 == f1);
    }
    else
    {
        b = false;
    }

    int idx = b ? 1 : 0;

    int count;
    if (a7 == 0 && mode != 0)
    {
        float scaled = (idx == 0 ? f0 : f1) * g_819bac;
        float c = ceil(scaled);
        count = (int)c;
    }
    else
    {
        count = 1;
    }

    unsigned short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    short raw = *(short *)((char *)&v + idx * 2);
    int q = (int)raw / count;
    unsigned short qv = (unsigned short)q;

    unsigned short one = 1;
    unsigned short chosen = (one < qv) ? one : qv;
    arr[idx] = chosen;

    float f2s = f2;

    Vec2 out;
    sub_5185d0((Vec3 *)&v, &out);
    float nx = -out.x;
    float ny = -out.y;

    float r0 = 0.0f;
    float r1 = 0.0f;
    float r2 = 0.0f;
    float r3 = 0.0f;

    if (a6 == 0)
    {
        if (mode == 0)
        {
            r0 = g_83a3e4;
            r1 = g_819bac;
            r3 = g_819bac;
        }
        else
        {
            r1 = sub_4f1ff0(mode);
            r0 = f2s * 2.0f;
            r3 = g_819bac;
            if (idx == 1)
            {
                r0 = -r0;
            }
        }
    }
    else if (a6 == 1)
    {
        r1 = *(float *)((char *)this + 0x1c);
        r0 = *(float *)((char *)this + 0x18);
        r3 = -*(float *)((char *)this + 0x1c);
    }
    else if (a6 == 2)
    {
        r3 = 0.0f;
    }

    int i = 0;
    while (i < count)
    {
        float cur;
        if (i == count - 1)
        {
            cur = (idx == 0 ? f0 : f1);
            if (a6 == 0 && a5 != 0)
            {
                float diff = cur - (idx == 0 ? nx : ny);
                float prod = diff * (idx == 0 ? r0 : r1);
                float res = prod * g_83a3e4;
                if (idx == 0)
                    r0 = res;
                else
                    r1 = res;
            }
        }
        else
        {
            cur = (idx == 0 ? nx : ny) + g_826e6c;
        }

        Vec2 p;
        p.x = r0;
        p.y = r1;

        Vec2 q2;
        q2.x = r2;
        q2.y = r3;

        Vec3 tmp;
        sub_4f35d0((char *)this + 4, &tmp, &p, &q2, idx, i);

        Vec2 uv;
        uv.x = a1;
        uv.y = a2;
        sub_4f2490((char *)this + 4, &tmp, &uv, cur, 0.0f, arr[idx]);

        if (idx == 0)
            r0 = cur;
        else
            r1 = cur;

        i++;
    }
}
