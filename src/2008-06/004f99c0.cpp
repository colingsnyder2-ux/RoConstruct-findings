// from server: 26% by colin
// roc 2008-06 004f99c0  unit: RBX::ViewNew::WedgeBuilder  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f99c0

extern "C" double __stdcall ceil(double);

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
    void buildSide(int side, int a, int b, int c, int d);
};

extern float g_one;
extern float g_half;
extern float g_negone;

float __stdcall getSideValue(int side);

void __stdcall buildWedgeFace(const Vector3* a, const Vector3* b, const Vector3* c, int side, int idx);

void __stdcall emitWedge(int a, int b);

void __stdcall copyVec2(const Vector2* src, Vector2* dst);

void __stdcall copyVec3(const Vector3* src, Vector3* dst);

void WedgeBuilder::buildSide(int side, int a, int b, int c, int d)
{
    unsigned int f = this->flags;
    unsigned int mode = (f >> 15) & 7;

    Vector2 uv;
    copyVec2((const Vector2*)((char*)this + 4), &uv);

    float ax = uv.x;
    float ay = uv.y;
    if (ax < 0.0f) ax = -ax;
    if (ay < 0.0f) ay = -ay;

    float bx = (float)a;
    float by = (float)b;
    if (bx < 0.0f) bx = -bx;
    if (by < 0.0f) by = -by;

    float vx = ax;
    float vy = ay;
    float vz = bx;

    bool degenerate;
    if (d == 0) {
        degenerate = (vx == vy);
    } else {
        degenerate = false;
    }

    int useOther = degenerate ? 0 : 1;

    int count;
    if (d == 0 && mode != 0) {
        float scaled = (useOther ? vy : vx) * g_half;
        double ceiled = ceil((double)scaled);
        count = (int)ceiled;
    } else {
        count = 1;
    }

    short base = (short)side;
    short idx = (short)useOther;

    short v0 = (short)((int)base / count);
    short v1 = (short)((int)idx / count);

    short lo = (v0 < 1) ? v0 : (short)1;
    short hi = (v1 < 1) ? v1 : (short)1;

    Vector3 p0;
    Vector3 p1;

    float z0 = vz;
    float z1 = vy;

    Vector2 t0;
    Vector2 t1;
    copyVec2((const Vector2*)((char*)this + 4), &t0);
    copyVec2((const Vector2*)((char*)this + 4), &t1);

    float nx = -t0.x;
    float ny = -t0.y;
    float nz = 0.0f;

    float u0 = 0.0f;
    float u1 = 0.0f;
    float w0 = 0.0f;
    float w1 = 0.0f;

    switch (c) {
    case 0:
        if (mode == 0) {
            u0 = g_one;
            u1 = g_half;
            w0 = g_half;
            w1 = g_half;
        } else {
            u0 = 0.0f;
            u1 = 0.0f;
            w0 = 0.0f;
            w1 = 0.0f;
        }
        break;
    case 1:
        u0 = 0.0f;
        u1 = 0.0f;
        w0 = 0.0f;
        w1 = 0.0f;
        break;
    case 2:
        u0 = 0.0f;
        u1 = 0.0f;
        w0 = 0.0f;
        w1 = 0.0f;
        break;
    default:
        break;
    }

    int i = 0;
    while (i < count) {
        float cur;
        if (i == count - 1) {
            cur = z0;
            if (d == 0 && c != 0) {
                cur = (z0 - z1) * w0 * g_half;
            }
        } else {
            cur = z1 + g_one;
        }

        Vector3 va;
        va.x = u0;
        va.y = u1;
        va.z = cur;

        Vector3 vb;
        vb.x = w0;
        vb.y = w1;
        vb.z = cur;

        Vector3 vc;
        vc.x = nx;
        vc.y = ny;
        vc.z = nz;

        buildWedgeFace(&va, &vb, &vc, side, i);

        emitWedge(a, b);

        z1 = cur;
        i++;
    }
}
