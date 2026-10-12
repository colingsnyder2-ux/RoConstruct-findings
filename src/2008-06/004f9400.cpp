// from server: 28% by atomic.potato
// roc 2008-06 004f9400  unit: RBX::ViewNew::WedgeBuilder  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f9400

extern "C" __declspec(dllimport) double __stdcall ceil(double);

struct V2 { float x, y; };
struct V3 { float x, y, z; };

struct WedgeBuilder {
    char pad0[4];
    int field4;
    char pad8[8];
    int field10;
    void buildTop(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_6784d0(void*, void*);
extern "C" void __cdecl sub_5185d0(V3*, V2*);
extern "C" float __cdecl sub_4f1ff0(int);
extern "C" void __cdecl sub_4f35d0(float*, float*, float*, float*, float*, float*, int, int);
extern "C" void __cdecl sub_4f8420(WedgeBuilder*, int, int);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void WedgeBuilder::buildTop(int a, int b, int c, int d)
{
    float v44, v48, v4c;
    float v18, v1c, v28, v2c;
    float v30, v38;
    int ebx;
    int esi;
    int ebp;
    int i;
    V2 tmp2;
    V3 tmp3;
    float f38[2];
    float f44[2];
    float f30[2];
    float f18[2];
    float f1c[2];
    float f28[2];
    float f2c[2];
    int arr18[2];
    int arr20[2];
    short arr10[2];
    short arr12[2];

    ebp = (this->field10 >> 6) & 7;

    sub_6784d0(&this->field4, &tmp3);

    v44 = tmp3.x; if (v44 < 0) v44 = -v44;
    v48 = tmp3.y; if (v48 < 0) v48 = -v48;
    v4c = tmp3.z; if (v4c < 0) v4c = -v4c;

    if (c == 0) {
        if (v44 == v48) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    if (c == 0 && ebp != 0) {
        float t = (esi == 0) ? v44 : v48;
        ebx = (int)ceil((double)(t * g_819bac));
    } else {
        ebx = 1;
    }

    arr10[0] = 0;
    arr12[0] = 0;
    arr18[0] = 0;
    arr20[0] = 0;

    {
        short val = *(short*)((char*)&tmp3 + (esi * 2) + 0x1c);
        int q = (int)val / ebx;
        arr18[0] = 1;
        arr20[0] = 1;
        arr18[0] = (unsigned short)q;
        arr10[esi] = (q < 1) ? 1 : (unsigned short)q;
        arr12[esi] = val;
    }

    v2c = v4c;

    sub_5185d0(&tmp3, &tmp2);
    f38[0] = -tmp2.x;
    f38[1] = -tmp2.y;

    sub_5185d0(&tmp3, &tmp2);

    v28 = 0.0f;
    v2c = 0.0f;
    v18 = 0.0f;
    v1c = 0.0f;

    if (d == 0) {
        if (ebp == 0) {
            v28 = g_83a3e4;
            v2c = g_819bac;
            f1c[esi] = g_819bac;
            f18[esi] = g_819bac;
        } else {
            f2c[esi] = 0.0f;
            v2c = sub_4f1ff0(ebp);
            f28[esi] = f38[esi] * 2.0f;
            f18[esi] = g_819bac;
            if (esi == 1) {
                f18[0] = -f18[0];
            }
        }
    } else if (d == 1) {
        v28 = 0.0f;
        v2c = this->field4 ? 0.0f : 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    } else if (d == 2) {
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    } else {
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    }

    for (i = 0; i < ebx; i++) {
        if (i == ebx - 1) {
            f30[esi] = f44[esi];
            if (d == 0 && arr20[0] != 0) {
                f18[esi] = (f44[esi] - f38[esi]) * f18[esi] * g_83a3e4;
            }
        } else {
            f30[esi] = f38[esi] + g_826e6c;
        }

        {
            float args[5];
            args[0] = v18;
            args[1] = v1c;
            args[2] = v28;
            args[3] = v2c;
            args[4] = f18[esi];
            sub_4f35d0(args, &f30[esi], &f28[esi], &f2c[esi], &f1c[esi], &f18[esi], esi, ebp);
        }

        sub_4f8420(this, a, b);

        f38[esi] = f30[esi];
    }
}
