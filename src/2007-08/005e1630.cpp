// from server: 44% by colin
struct Vec3 {
    float x, y, z;
};

struct S {
    int f(Vec3* a, Vec3* b, Vec3* c, int d, int e);
};

extern "C" int __cdecl sub_5e12a0(int, Vec3*, Vec3*);
extern "C" char __cdecl sub_5e1250(int, Vec3*);
extern "C" void __cdecl sub_5abf60(Vec3*, Vec3*, float*);

extern float dword_797EB0;
extern float dword_7BCF18;
extern float dword_8C2AF0;
extern float dword_8C2AF4;
extern float dword_8C2AF8;
extern int dword_8C2AFC;

int S::f(Vec3* a, Vec3* b, Vec3* c, int d, int e)
{
    int r = sub_5e12a0(d, a, b);
    char ok = sub_5e1250(d, a);
    if (!ok)
        return r;

    Vec3 t;
    t.x = c->x + b->x;
    t.y = c->y + b->y;
    t.z = c->z + b->z;

    float s = dword_7BCF18;
    t.x *= s;
    t.y *= s;
    t.z *= s;

    if ((dword_8C2AFC & 1) == 0) {
        dword_8C2AFC |= 1;
        dword_8C2AF0 = 1.0f;
        dword_8C2AF4 = dword_797EB0;
        dword_8C2AF8 = 1.0f;
    }

    Vec3 u;
    sub_5abf60(&u, &t, &dword_8C2AF0);

    sub_5e12a0(d, &u, b);
    char ok2 = sub_5e1250(d, a);

    if (b->x == u.x && b->y == u.y && b->z == u.z) {
        if (ok2) {
            sub_5e12a0(d, c, b);
            return r;
        }
    } else {
        if (ok2) {
            return this->f(a, c, &u, d, e);
        } else {
            return this->f(a, &u, b, d, e);
        }
    }
    return r;
}
