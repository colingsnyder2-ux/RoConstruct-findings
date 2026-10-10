// from server: 60% by colin
// roc 2007-08 00618c30  unit: RBX::Edge  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00618c30

struct Vec3 {
    float x, y, z;
};

struct Obj {
    char pad0[0xc];
    Obj* p0c;
    Obj* p10;
    char pad14[0x4];
    float f18;
    float f1c;
    char pad20[0x88];
    float fA8;
    float fAC;
    float fB0;
};

extern "C" void __stdcall sub_530100(Obj* p);
extern "C" float __stdcall sub_50f3a0(float x);

extern float g_79fe50;

struct Edge {
    char pad0[0xc];
    Obj* p0c;
    Obj* p10;
    char pad14[0x4];
    float f18;
    float f1c;
    void func(Vec3* out);
};

void Edge::func(Vec3* out) {
    Obj* a = this->p0c;
    Obj* b = this->p10;
    sub_530100(a);
    sub_530100(b);
    out->x = b->fA8 - a->fA8;
    out->y = b->fAC - a->fAC;
    out->z = b->fB0 - a->fB0;
    out->x = sub_50f3a0(g_79fe50) - this->f1c;
    out->y = this->f18 * out->x;
    out->z = this->f18 * out->y;
    out->x = this->f18 * out->z;
    out->x = out->x + a->fA8;
    out->y = out->y + a->fAC;
    out->z = out->z + a->fB0;
}
