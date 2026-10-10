// from server: 56% by colin
struct Primitive;

struct World {
    char pad0[0x24];
    float x;
    float y;
    float z;
};

struct Other {
    char pad0[0x24];
    float x;
    float y;
    float z;
};

extern float g_float_7a32e8;

struct Helper1 {
    float* getSomething(int a, float* out);
};

struct Helper2 {
    void setSomething(Primitive* p);
};

extern "C" void __stdcall func_5ab810(Other* o, float a, float b);

extern "C" float __cdecl atan2f(float y, float x);

Other* World_method(World* self, Other* other) {
    float tmp = g_float_7a32e8;
    float v[2];
    Helper1* h1 = (Helper1*)self;
    float* r = h1->getSomething(2, v);
    float a = r[0] * tmp;
    float b = r[2] * tmp;
    float angle = atan2f(-b, -a);
    Helper2* h2 = (Helper2*)other;
    h2->setSomething((Primitive*)self);
    other->x = self->x;
    other->y = self->y;
    other->z = self->z;
    func_5ab810(other, angle, 0.0f);
    return other;
}
