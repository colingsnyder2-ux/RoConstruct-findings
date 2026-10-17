// from server: 16% by colin
struct Vec3 { float x, y, z; };

struct TorsoBuilder {
    char pad0[4];
    int field4;
    void build(
        void (__stdcall *cb)(Vec3*, Vec3*, Vec3*, Vec3*, int),
        float x0, float y0, float z0,
        float x1, float y1, float z1,
        float u0, float v0,
        float u1, float v1,
        int nu, short nv, short nw);
};

extern "C" void __cdecl sub_5EC1C0(Vec3* out, const void* in);
extern "C" void* __cdecl sub_6A0956(unsigned int size);
extern "C" void* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(Vec3* out, const Vec3* a, const Vec3* b, int flag);
extern "C" void __cdecl sub_500EB0(void* self, void* a, void* b, void* c, void* d);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_6A094A(void* p);

extern float g_float_819BAC;

void TorsoBuilder::build(
    void (__stdcall *cb)(Vec3*, Vec3*, Vec3*, Vec3*, int),
    float x0, float y0, float z0,
    float x1, float y1, float z1,
    float u0, float v0,
    float u1, float v1,
    int nu, short nv, short nw)
{
    Vec3 tmp;
    sub_5EC1C0(&tmp, &this->field4);

    float ax = tmp.x; if (ax < 0) ax = -ax;
    float ay = tmp.y; if (ay < 0) ay = -ay;
    float az = tmp.z; if (az < 0) az = -az;

    int nvi = (int)nv;
    int nwi = (int)nw;

    float du = (u1 - u0) / (float)(nvi + 1);
    float dv = (v1 - v0) / (float)(nwi + 1);
    float sx = (x1 - x0) / (float)(nvi + 1);
    float sy = (y1 - y0) / (float)(nwi + 1);
    float sz = (z1 - z0) / (float)(nu + 1);

    int total = (nwi + 1) * (nvi + 1);
    void** arr = (void**)sub_6A0956((unsigned int)(total * 4));

    float curX = x0;
    float curY = y0;
    float curZ = z0;

    for (int i = 0; i <= nvi; i++) {
        float rowX = x0;
        float rowY = y0;
        float rowZ = z0;
        for (int j = 0; j <= nwi; j++) {
            Vec3 a, b, c, d;
            a.x = rowX; a.y = rowY; a.z = rowZ;
            b.x = rowX + sx; b.y = rowY; b.z = rowZ;
            c.x = rowX; c.y = rowY + sy; c.z = rowZ;
            d.x = rowX + sx; d.y = rowY + sy; d.z = rowZ;

            Vec3 uv0, uv1;
            uv0.x = u0; uv0.y = v0; uv0.z = 0;
            uv1.x = u0 + du; uv1.y = v0 + dv; uv1.z = 0;

            Vec3 out;
            sub_548000(&out, &uv0, &uv1, 1);

            Vec3* p = (Vec3*)sub_509BA0();
            if (p->x == u0 && p->y == v0) {
                a.x = x0;
                a.y = y0;
            }

            Vec3 scaled;
            scaled.x = a.x * g_float_819BAC;
            scaled.y = a.y * g_float_819BAC;
            scaled.z = a.z;

            Vec3 r1, r2;
            sub_5EC1C0(&r1, &scaled);
            sub_5EC1C0(&r2, &out);

            cb(&r1, &r2, &b, &c, 1);

            rowX += sx;
            rowY += sy;
            rowZ += sz;

            int idx = (nvi + 1) * i + j;
            arr[idx] = (void*)0;
        }
        curX += du;
        curY += dv;
    }

    for (int i = 0; i < nvi; i++) {
        for (int j = 0; j < nwi; j++) {
            int base = (nvi + 1) * i + j;
            sub_500EB0(this, arr[base], arr[base + 1], arr[base + nvi + 1], arr[base + nvi + 2]);
        }
    }

    for (int i = 0; i < total; i++) {
        sub_548640(arr[i]);
    }

    sub_6A094A(arr);
}
