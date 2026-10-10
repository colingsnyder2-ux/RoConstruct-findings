// from server: 98% by colin
struct Vec3 {
    float x, y, z;
};

struct S {
};

extern "C" void __cdecl sub_5e10b0(const Vec3* a, const Vec3* b);
extern "C" void __cdecl sub_5abf60(const Vec3* a, const Vec3* b, const float* c);

extern float dword_797EB0;
extern float dword_8C2AF0;
extern float dword_8C2AF4;
extern float dword_8C2AF8;
extern unsigned int dword_8C2AFC;

void __cdecl f(const Vec3* a, Vec3* b, Vec3* c)
{
    Vec3 tmp;
    Vec3 out;

    sub_5e10b0(a, b);

    tmp.x = b->x + c->x;
    tmp.y = b->y + c->y;
    tmp.z = b->z + c->z;

    if ((dword_8C2AFC & 1) == 0) {
        dword_8C2AFC |= 1;
        dword_8C2AF0 = 1.0f;
        dword_8C2AF4 = dword_797EB0;
        dword_8C2AF8 = 1.0f;
    }

    sub_5abf60(&tmp, &out, &dword_8C2AF0);

    c->x = out.x;
    c->y = out.y;
    c->z = out.z;
}
