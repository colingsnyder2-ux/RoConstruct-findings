// from server: 66% by colin
struct Vec3 {
    float x, y, z;
};

struct S {
    int __cdecl f(Vec3* out, const Vec3* in, const Vec3* extra);
};

extern float g_797eb0;
extern float g_79f5d8;
extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern int g_8bd138;

extern "C" void __cdecl sub_5abfe0(Vec3* out, const Vec3* a, float b);
extern "C" void __cdecl sub_5e10b0(S* self, const Vec3* v);
extern "C" char __cdecl sub_5e1250(S* self, const Vec3* v);
extern "C" void __cdecl sub_5e1530(S* self, const Vec3* v, Vec3* out);
extern "C" void __cdecl sub_5e15b0(S* self, const Vec3* v, Vec3* out);

int S::f(Vec3* out, const Vec3* in, const Vec3* extra)
{
    if (*(int*)((char*)this + 4) == 0) {
        if ((g_8bd138 & 1) == 0) {
            g_8bd138 |= 1;
            g_8bd12c = 0.0f;
            g_8bd130 = 0.0f;
            g_8bd134 = 0.0f;
        }
        out->x = g_8bd12c;
        out->y = g_8bd130;
        out->z = g_8bd134;
        return 0;
    }

    Vec3 tmp;
    tmp.x = extra->x;
    tmp.y = extra->y - g_79f5d8;
    tmp.z = extra->z;

    Vec3 tmp2;
    sub_5abfe0(&tmp2, &tmp, g_797eb0);

    sub_5e10b0(this, &tmp2);

    char b = sub_5e1250(this, &tmp2);

    Vec3 tmp3;
    if (b) {
        sub_5e1530(this, &tmp2, &tmp3);
    } else {
        sub_5e15b0(this, &tmp2, &tmp3);
    }

    out->x = tmp3.x;
    out->y = tmp3.y;
    out->z = tmp3.z;
    return 0;
}
