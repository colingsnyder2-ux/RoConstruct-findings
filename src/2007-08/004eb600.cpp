// from server: 70% by colin
// roc 2007-08 004eb600  unit: CylinderBuilder  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb600

extern "C" float __cdecl sinf_(float);
extern "C" float __cdecl cosf_(float);

struct CylinderBuilder {
    float radius;
    int segments;
    void build(float* out0, float* out1, float* out2, float* out3, float* out4);
};

void CylinderBuilder::build(float* a, float* b, float* c, float* d, float* e)
{
    float t = a[0] * 0.5f / c[0];
    int n = (int)(short)*(short*)((char*)d + 2) - segments + 1;
    float s = (float)n * 3.14159265358979323846f / (float)(segments - 1);
    float cs = cosf_(s);
    double one_minus = 1.0 - (double)cs;
    float sn = sinf_(t);
    a[0] = (float)((double)radius * one_minus - (double)c[0]) * sn;

    if ((int)(short)*(short*)((char*)d + 2) >= segments) {
        float sn2 = sinf_(s);
        a[1] = c[1] - (1.0f - sn2) * radius;
    } else {
        float sn2 = sinf_(s);
        a[1] = (sn2 + 1.0f) * radius - c[1];
    }

    float cs2 = cosf_(t);
    float v = c[2] - (float)((double)radius * one_minus);
    a[2] = v * cs2;
    b[0] = cs * cs2;
    b[1] = s;
    b[2] = cs2 * cs2;

    float q = radius * 3.14159265358979323846f;
    float r = (c[1] + q - radius) / q;

    if ((int)(short)*(short*)((char*)d + 2) >= segments) {
        e[1] = e[1] * r;
    } else {
        float u = (e[1] - c[1]) / c[1];
        e[1] = (c[1] + c[1]) - (1.0f - u) * r * c[1];
    }
}
