// from server: 68% by colin
struct Edge {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    void func(float* out);
};

struct Sub {
    char pad[0x84];
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    void method();
};

extern "C" void __stdcall sub_530100();

void Edge::func(float* out)
{
    Sub* a = (Sub*)fieldC;
    a->method();
    Sub* b = (Sub*)field10;
    b->method();

    float* m = (float*)field8;

    float x = b->f8c * m[2] + b->f88 * m[1] + b->f84 * m[0] + b->fa8;
    float y = b->f98 * m[2] + b->f90 * m[0] + b->f94 * m[1] + b->fac;
    float z = b->fa4 * m[2] + b->f9c * m[0] + b->fa0 * m[1] + b->fb0;

    int q = field1C / 3;
    int r = field1C - q * 3;

    float e0 = *(float*)((char*)b + 0x84 + r * 4);
    float e1 = *(float*)((char*)b + 0x90 + r * 4);
    float e2 = *(float*)((char*)b + 0x9c + r * 4);

    float ft = (float)(1 - q * 2);

    out[0] = -(e0 * ft);
    out[1] = -(e1 * ft);
    out[2] = -(e2 * ft);

    float dx = x - a->fa8;
    float dy = y - a->fac;
    float dz = z - a->fb0;

    float r0 = dx * e0 + dy * e1 + dz * e2;
    float r1 = dx * e1 + dy * e2 + dz * e0;
    float r2 = dx * e2 + dy * e0 + dz * e1;

    out[4] = a->fa8 + r0;
    out[5] = a->fac + r1;
    out[6] = a->fb0 + r2;

    float len = r0 * r0 + r1 * r1 + r2 * r2;
    out[3] = len - *(float*)((char*)this + 0x18);
}
