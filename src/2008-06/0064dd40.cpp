// from server: 56% by colin
struct Point {
    char pad0[0x10];
    float x;
    float y;
    float z;
    char pad1[4];
    float ox;
    float oy;
    float oz;
    void setFrom(const float* p);
};

struct Other {
    char pad0[0x94];
    float m00;
    float m01;
    float m02;
    float m03;
    float m10;
    float m11;
    float m12;
    float m13;
    float m20;
    float m21;
    float m22;
    float m23;
    float m30;
    float m31;
    float m32;
    float m33;
    void update();
};

extern "C" void __fastcall sub_599360(Other* self);

void Point::setFrom(const float* p) {
    ox = p[0];
    oy = p[1];
    oz = p[2];
    Other* o = *(Other**)((char*)this + 0xc);
    o->update();
    float dx = ox - o->m30;
    float dy = oy - o->m31;
    float dz = oz - o->m32;
    x = o->m00 * o->m10 + dx * dy + o->m20 * dz;
    y = o->m01 * dx + o->m11 * dy + o->m21 * dz;
    z = o->m02 * dx + o->m12 * dy + o->m22 * dz;
}
