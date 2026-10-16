// from server: 6% by colin
// roc 2008-06 004f9120  unit: RBX::ViewNew::WedgeBuilder  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f9120

extern "C" __declspec(dllimport) double __cdecl ceil(double);

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct WedgeBuilder {
    char pad0[0x10];
    unsigned int flags;
    void buildSide(int a, int b, int c, int d);
};

extern float g_one;
extern float g_half;
extern float g_negone;
extern float g_zero;

float __stdcall getWedgeParam(int idx);

void __stdcall buildWedgeFace(void* a, void* b, void* c);

void WedgeBuilder::buildSide(int a, int b, int c, int d)
{
    Vector2 uv;
    Vector3 v0, v1;
    float f0, f1, f2;
    float t0, t1, t2, t3;
    int count;
    int i;
    int idx;

    unsigned int f = this->flags;
    int mode = (f >> 3) & 7;

    getWedgeParam(0);

    float fa = (float)ceil((double)0.0f);
    (void)fa;

    f0 = 0.0f;
    f1 = 0.0f;
    f2 = 0.0f;

    count = 1;

    for (i = 0; i < count; i++) {
        idx = 0;
        (void)idx;
    }
}
