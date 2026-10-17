// from server: 36% by colin
struct Vec3 { float x, y, z; };

struct GCamera {
    char pad[0x24];
    Vec3 pos;
    Vec3 dir;
    Vec3 up;
};

struct EnumPropDescriptor {
    char pad0[0x1dc];
    int field1dc;
    int field1e0;
    char pad1e4[0x44];
    char field228[0x9c];
    float* field2c4;

    bool doGetSetImpl(int arg1, int arg2);
};

extern "C" {
    void __cdecl sub_513220(void* dst, const void* src);
    void __cdecl sub_476580(void* dst, const void* a, const void* b);
    bool __cdecl sub_5DE2A0(void* a, void* b, float c, float d, void* e);
    void* __cdecl sub_5E82C0(void* self);
    void __cdecl sub_599EB0(void* self, void* a, void* b);
    void __cdecl sub_59D8A0(void* self, void* a);
    void __cdecl sub_59DB90(void* self, void* a);
    void __cdecl sub_59B4F0(void* self);
    extern float g_81c3b8;
    extern float g_8288c0;
    extern float g_826e60;
    extern float g_819bac;
    extern float g_82b3b0;
}

bool EnumPropDescriptor::doGetSetImpl(int arg1, int arg2)
{
    if (arg1 == 0)
        return false;

    float* p = field2c4;
    float v0 = p[1];
    float v1 = p[2];
    float v2 = p[3];

    GCamera cam;
    void* r0 = sub_5E82C0(field228);
    sub_513220(&cam, r0);

    Vec3 base;
    base.x = 0.0f;
    base.y = 0.0f;
    base.z = 0.0f;

    float farg = (float)arg2;

    if (field1dc == 1) {
        int idx = arg2 % 3;
        (&base.x)[idx] = farg;
    }

    float m;
    if (field1e0 == 1)
        m = g_826e60;
    else if (field1e0 == 2)
        m = g_8288c0;
    else
        m = 1.0f;

    Vec3 p1;
    p1.x = base.x + v0;
    p1.y = base.y + v1;
    p1.z = base.z + v2;

    Vec3 p2;
    p2.x = base.x - v0;
    p2.y = base.y - v1;
    p2.z = base.z - v2;

    Vec3 p3;
    p3.x = p1.x * m;
    p3.y = p1.y * m;
    p3.z = p1.z * m;

    Vec3 p4;
    p4.x = p2.x * m;
    p4.y = p2.y * m;
    p4.z = p2.z * m;

    Vec3 p5;
    p5.x = p3.x + v0;
    p5.y = p3.y + v1;
    p5.z = p3.z + v2;

    Vec3 p6;
    p6.x = p4.x + v0;
    p6.y = p4.y + v1;
    p6.z = p4.z + v2;

    sub_59D8A0(this, &p5);
    sub_599EB0(this, &p6, &p5);
    sub_59DB90(this, &p6);
    sub_59B4F0(this);

    void* r = sub_5E82C0(field228);
    if (sub_5DE2A0(r, &p6, g_82b3b0, g_82b3b0, &p5))
        return true;

    sub_59D8A0(this, &p6);
    sub_59DB90(this, &p6);
    return false;
}
