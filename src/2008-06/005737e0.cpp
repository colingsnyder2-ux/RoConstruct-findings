// from server: 51% by colin
// roc 2008-06 005737e0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005737e0

extern float g_974d78;
extern float g_974d7c;

struct Vec2f { float x; float y; };
struct Vec3f { float x; float y; float z; };

extern "C" Vec2f* __cdecl sub_509ba0();
extern "C" Vec3f* __cdecl sub_5cef60(Vec3f* a, Vec3f* b, Vec3f* c, int d, int e);

struct S {
    virtual Vec3f* f0(Vec3f* out);
    char pad[0x15c];
    int m15c;
    int m160;
    short m164;
    short m166;
    Vec3f f(Vec3f* arg);
};

Vec3f S::f(Vec3f* arg)
{
    Vec3f tmp;
    tmp.x = g_974d78;
    tmp.y = g_974d7c;
    Vec2f* p = sub_509ba0();
    Vec3f a;
    a.x = p->x;
    a.y = p->y;
    a.z = tmp.x;
    Vec3f b;
    b.x = tmp.y;
    b.y = 0.0f;
    b.z = 0.0f;
    Vec3f* r = f0(&a);
    Vec2f* q = sub_509ba0();
    Vec3f c;
    c.x = q->x;
    c.y = q->y;
    c.z = r->x;
    Vec3f d;
    d.x = r->y;
    d.y = 0.0f;
    d.z = 0.0f;
    Vec3f e;
    e.x = (float)m164 + c.x;
    e.y = (float)m166 + c.y;
    e.z = d.x - c.z;
    Vec3f g;
    g.x = d.y - c.z;
    g.y = 0.0f;
    g.z = 0.0f;
    Vec3f* out = sub_5cef60(&e, &g, arg, m15c, m160);
    arg->x = out->x;
    arg->y = out->y;
    return *arg;
}
