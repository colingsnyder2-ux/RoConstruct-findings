// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct V3 {
    float x, y, z;
};

struct Mat3 {
    float m[9];
    const float* getRow(int i) const { return &m[i * 3]; }
};

struct CoordFrame {
    Mat3 rotation;
    V3 translation;
};

struct RefCounted {
    long refCount;
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
};

struct FactoryProduct {
    RefCounted* get();
};

struct GroupDragTool {
    char pad0[0x14];
    CoordFrame* frame14;
    char pad18[0x0c];
    FactoryProduct* prod24;
    void* ptr28;
    char pad2c[0x0c];
    V3 lastHit38;
    char pad44[0x1c];
    void* ptr60;
    bool update();
};

extern "C" void __cdecl sub_5e81b0(void* out, void* a, void* b);
extern "C" void* __cdecl sub_5e82c0(void* self);
extern "C" void __cdecl sub_5de090(void* self, void* out);
extern "C" void __cdecl sub_59d8a0(void* self, void* out);

bool GroupDragTool::update()
{
    float local_a[3];
    float local_b[3];

    sub_5e81b0(local_a, ptr28, prod24);
    sub_5e81b0(local_b, ptr60, frame14);

    V3* pa = (V3*)local_a;
    V3* pb = (V3*)local_b;

    float ax = pa->x, ay = pa->y, az = pa->z;
    float bx = pb->x, by = pb->y, bz = pb->z;

    CoordFrame* cf = frame14;
    Mat3* rot = (Mat3*)cf;

    float dx = bx - ax;
    float dy = by - ay;
    float dz = bz - az;

    float rx = rot->m[0] * dx + rot->m[3] * dy + rot->m[6] * dz;
    float ry = rot->m[1] * dx + rot->m[4] * dy + rot->m[7] * dz;
    float rz = rot->m[2] * dx + rot->m[5] * dy + rot->m[8] * dz;

    float tx = cf->translation.x;
    float ty = cf->translation.y;
    float tz = cf->translation.z;

    float wx = rot->m[0] * tx + rot->m[3] * ty + rot->m[6] * tz + rx;
    float wy = rot->m[1] * tx + rot->m[4] * ty + rot->m[7] * tz + ry;
    float wz = rot->m[2] * tx + rot->m[5] * ty + rot->m[8] * tz + rz;

    float ox = wx - ax;
    float oy = wy - ay;
    float oz = wz - az;

    FactoryProduct* fp = prod24;
    RefCounted* rc = fp->get();

    V3* rcpos = (V3*)((char*)rc + 0x24);
    float nx = rcpos->x + ox;
    float ny = rcpos->y + oy;
    float nz = rcpos->z + oz;

    (void)nx; (void)ny; (void)nz;

    if (lastHit38.x == ox && lastHit38.y == oy && lastHit38.z == oz) {
        return false;
    }

    lastHit38.x = ox;
    lastHit38.y = oy;
    lastHit38.z = oz;
    return true;
}
