// from server: 61% by colin
struct Geometry {
    enum GeometryType { GEOMETRY_TYPE };
};

struct Vector3 {
    float x, y, z;
};

struct Primitive {
    char pad0[4];
    int field4;
    int field8;
    int field0xc;
    int field0x10;
    int field0x14;
    int field0x18;
    int field0x1c;
    int field0x20;
    int field0x24;
    int field0x28;
    int field0x2c;
    int field0x30;
    int field0x34;
    int field0x38;
    int field0x3c;
    int field0x40;
    float field0x44;
    float field0x48;
    float field0x4c;
    float field0x50;
    float field0x54;
    float field0x58;
    int field0x5c;
    int field0x60;
    int field0x64;
    int field0x68;
    int field0x6c;
    char field0x70;
    char field0x71;
    char field0x72;
    char field0x73;
    float field0x74;
    float field0x78;
    int field0x7c;
    int field0x80;
    int field0x84;
    int field0x88;
    int field0x8c;
    int field0x90;
    int field0x94;
    int field0x98;
    int field0x9c;
    int field0xa0;
    int field0xa4;
    int field0xa8;
    int field0xac;
    char pad0xb0[4];
    char field0xb4;
    char pad0xb5[3];
    int field0xb8;
    int field0xbc;

    Primitive(Geometry::GeometryType geometryType);
};

extern "C" Vector3* __cdecl getGlobalVector1();
extern "C" Vector3* __cdecl getGlobalVector2();
extern "C" int __cdecl sub_5B4EC0(int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_5E25B0();
extern "C" void __cdecl sub_630D23(void*);

extern float g_float_787054;
extern unsigned char g_byte_8C2B28;
extern int g_int_8C2B1C;
extern int g_int_8C2B20;
extern int g_int_8C2B24;

Primitive::Primitive(Geometry::GeometryType geometryType)
{
    field4 = 0;
    *(int*)this = 0x7b7efc;
    field8 = 0;
    field0xc = 0;
    field0x10 = 0;
    field0x14 = 0;
    field0x18 = -1;
    field0x1c = 0;
    field0x20 = 0;
    field0x24 = 0;
    field0x28 = 0;
    field0x2c = 0;
    field0x30 = 0;
    field0x34 = 0;
    field0x38 = 0;
    field0x3c = 0;
    field0x40 = 0;

    Vector3* v1 = getGlobalVector1();
    field0x44 = v1->x;
    field0x48 = v1->y;
    field0x4c = v1->z;

    Vector3* v2 = getGlobalVector2();
    field0x50 = -v2->x;
    field0x54 = -v2->y;
    field0x58 = -v2->z;

    field0x5c = -2;
    field0x60 = sub_5B4EC0((int)geometryType);

    void* mem = sub_62FEF6(0xcc);
    if (mem != 0) {
        sub_5E25B0();
    } else {
        mem = 0;
    }
    field0x64 = (int)mem;

    field0x74 = 0.0f;
    field0x68 = 0;
    field0x6c = 0;
    field0x78 = g_float_787054;
    field0x70 = 0;
    field0x71 = 0;
    field0x72 = 1;
    field0x73 = 1;

    if ((g_byte_8C2B28 & 1) == 0) {
        g_byte_8C2B28 |= 1;
        g_int_8C2B1C = 0x797984;
        g_int_8C2B20 = 0;
        g_int_8C2B24 = 0;
        g_int_8C2B1C = 0x7aa894;
        sub_630D23((void*)0x77a080);
    }

    field0xac = (int)&g_int_8C2B1C;
    field0xb4 = 1;
    field0xb8 = (int)this;
    field0xbc = 0x5b4840;

    field0x7c = 0;
    field0x94 = 0;
    field0x80 = 0;
    field0x98 = 0;
    field0x84 = 0;
    field0x9c = 0;
    field0x88 = 0;
    field0xa0 = 0;
    field0x8c = 0;
    field0xa4 = 0;
    field0x90 = 0;
    field0xa8 = 0;
}
