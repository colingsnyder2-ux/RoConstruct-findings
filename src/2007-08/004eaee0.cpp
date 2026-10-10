// from server: 63% by colin
// roc 2007-08 004eaee0  unit: SphereBuilder  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eaee0

struct SphereBuilder {
    float x;
    float y;
    void build(float* a, float* b, float* c);
};

extern "C" float* __stdcall sub_50f520(float* out, float* in);
extern "C" float __cdecl sub_630e0c(float x);

void SphereBuilder::build(float* a, float* b, float* c)
{
    float tmp[4];
    float* p = sub_50f520(tmp, a);
    float len2 = p[0] * p[0] + p[1] * p[1];
    float inv = 1.0f / sub_630e0c(len2);
    float nx = p[0] * inv;
    float ny = p[1] * inv;
    float s = b[0];
    this->x = nx * s;
    float s2 = b[1];
    this->y = ny * s2;
    c[0] = 0.0f;
    c[1] = 0.0f;
    c[2] = 0.0f;
}
