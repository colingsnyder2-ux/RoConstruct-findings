// from server: 22% by colin
// roc 2007-08 004ecf80  unit: CylinderBuilder  size: 794 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ecf80

extern "C" double __stdcall ceil(double);

struct Vec3 {
    float x, y, z;
};

struct CylinderBuilder {
    char pad[0x10];
    unsigned int flags;
    char pad2[0x0c];
    float f18;
    float f1c;
    int build(int a, int b, int c);
};

extern "C" void __cdecl sub_5b99f0(void*, void*);
extern "C" void* __cdecl sub_50b010(void*, void*);
extern "C" float __cdecl sub_4de980(int);
extern "C" void __cdecl sub_4e0180(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4ebbe0(void*, void*);

extern float g_787050;
extern float g_797e9c;
extern double g_795b48;
extern double g_79f340;
extern double g_79f348;

int CylinderBuilder::build(int a, int b, int c)
{
    float v44[4];
    float v38[4];
    float v30[4];
    float v1c[4];
    float v10[4];
    float v18, v1c_s, v10_s;
    int ebx, ebp, esi, edi;
    int i;
    float f;
    unsigned short w;
    int n;
    float tmp;

    ebx = (this->flags >> 12) & 7;

    sub_5b99f0(&this->pad[4], v44);

    v18 = (float)ceil((double)(a < 0 ? -(float)a : (float)a));
    v1c_s = v18;

    v10_s = (float)ceil((double)(v44[0] < 0 ? -v44[0] : v44[0]));
    v18 = v10_s;

    v44[3] = (float)ceil((double)(v44[1] < 0 ? -v44[1] : v44[1]));

    v44[2] = v18;
    v44[1] = v1c_s;

    if (b == 0 && v44[3] == v44[2]) {
        esi = 0;
    } else {
        esi = 1;
    }

    if (b == 0 && ebx != 0) {
        ebp = (int)ceil((double)(v44[esi] * g_795b48));
    } else {
        ebp = 1;
    }

    w = 0;
    v10[0] = 0.0f;
    v10[1] = 0.0f;

    n = (int)(short)((short)v10[0] / ebp);
    if (n > 1) {
        v10[2] = (float)n;
    } else {
        v10[2] = 1.0f;
    }

    v10[esi] = v10[2];

    v18 = v44[1];

    sub_50b010(v44, v38);
    v38[0] = -v38[0];
    v38[1] = -v38[1];

    sub_50b010(v44, v30);

    f = 0.0f;
    v30[0] = 0.0f;
    v30[1] = 0.0f;
    v30[2] = 0.0f;
    v30[3] = 0.0f;

    switch (c) {
    case 0:
        if (ebx == 0) {
            v30[0] = g_787050;
            v30[1] = g_797e9c;
            v30[esi] = v30[1];
            v30[1] = v30[0];
        } else {
            v30[1] = f;
            v30[1] = sub_4de980(ebx);
            v30[esi] = v30[1] * 2.0f;
            v30[0] = g_797e9c;
            if (esi == 1) {
                v30[0] = -v30[0];
            }
        }
        break;
    case 1:
        v30[0] = 0.0f;
        v30[1] = this->f1c;
        v30[2] = this->f18;
        v30[3] = -this->f1c;
        break;
    case 2:
        break;
    }

    for (i = 0; i < ebp; i++) {
        if (i == ebp - 1) {
            v44[2] = v44[esi];
            v30[2] = v44[2];
            if (c == 0 && v30[3] != 0.0f) {
                v30[3] = (v44[2] - v30[2]) * g_79f348 * v30[3];
            }
        } else {
            v30[2] = v44[2] + g_79f340;
        }

        sub_4e0180(v10, v30, v38, v44, &v10[esi]);
        sub_4ebbe0(v10, &v10[esi]);
        v30[3] = v30[2];
    }

    return 0;
}
