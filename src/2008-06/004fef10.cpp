// from server: 38% by colin
// roc 2008-06 004fef10  unit: RBX::ViewNew::CylinderBuilder  size: 714 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fef10

extern "C" double __stdcall ceil(double);
extern "C" float __stdcall sub_4f1ff0(int);
extern "C" void __stdcall sub_4f35d0(float*, float*, float*, float*, int, int);
extern "C" void __stdcall sub_4fdd90(void*, int);
extern "C" void __stdcall sub_5ec1c0(void*, void*);
extern "C" void __stdcall sub_5185d0(void*, void*);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

struct CylinderBuilder {
    char pad[0x10];
    unsigned int flags;
    void buildTop(int, int, int, int, int, int, int, int, int);
};

void CylinderBuilder::buildTop(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    float v44, v48, v4c;
    float v30, v34, v38, v3c;
    float v18, v1c, v20, v24, v28, v2c;
    int ebx;
    int esi;
    int ebp;
    int i;
    int tmp;

    ebp = (this->flags >> 3) & 7;

    sub_5ec1c0(&this->pad[4], &v44);

    v44 = (float)(v44 < 0 ? -v44 : v44);
    v48 = (float)(v48 < 0 ? -v48 : v48);
    v4c = (float)(v4c < 0 ? -v4c : v4c);

    {
        float f1 = v44;
        float f2 = v48;
        float f3 = v4c;
        v44 = f1;
        v48 = f2;
        v4c = f3;
    }

    if (a9 != 0) {
        if (v44 == v48) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    if (a9 == 0 && ebp != 0) {
        float f = (&v44)[esi];
        f = (float)(f * (double)g_819bac);
        tmp = (int)ceil((double)f);
        ebx = tmp;
    } else {
        ebx = 1;
    }

    {
        short s0 = 0;
        short s1 = 0;
        int idx = esi + esi;
        short* p = (short*)((char*)&v44 + 0x16 - idx);
        short di = *p;
        int eax = (int)di;
        int q = eax / ebx;
        short q16 = (short)q;
        int one = 1;
        int val18 = (int)(unsigned short)q16;
        int val20 = 1;
        short* sel;
        if ((short)one < (short)val18) {
            sel = (short*)&val18;
        } else {
            sel = (short*)&val20;
        }
        short chosen = *sel;
        ((short*)((char*)&v18))[idx / 2] = chosen;
        ((short*)((char*)&v18 - idx))[0] = di;
    }

    {
        float f = v4c;
        v20 = f;
    }

    sub_5185d0(&v44, &v30);
    v30 = -v30;
    v34 = -v34;
    sub_5185d0(&v44, &v38);

    v28 = 0.0f;
    v2c = 0.0f;
    v18 = 0.0f;
    v1c = 0.0f;

    if (a9 == 0) {
        if (ebp == 0) {
            v28 = g_83a3e4;
            v2c = g_819bac;
            v1c = g_819bac;
            v18 = g_819bac;
        } else {
            v2c = 0.0f;
            v2c = sub_4f1ff0(ebp);
            v20 = v30 * 2.0f;
            v18 = g_819bac;
            if (esi == 1) {
                v18 = -v18;
            }
        }
    } else if (a9 == 1) {
        v28 = 0.0f;
        v2c = *(float*)((char*)this + 0x1c);
        v18 = *(float*)((char*)this + 0x18);
        v1c = -*(float*)((char*)this + 0x1c);
    } else if (a9 == 2) {
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    }

    for (i = 0; i < ebx; i++) {
        if (i == ebx - 1) {
            v30 = (&v44)[esi];
            if (a9 == 0 && a5 != 0) {
                v18 = (v30 - (&v38)[esi]) * (&v18)[esi] * g_83a3e4;
            }
        } else {
            v30 = (&v38)[esi] + g_826e6c;
        }

        {
            float args[5];
            args[0] = v18;
            args[1] = v1c;
            args[2] = v28;
            args[3] = v2c;
            args[4] = v20;
            sub_4f35d0(args, &v30, &v44, &v38, esi, ebp);
        }

        sub_4fdd90((void*)a1, a2);
        (&v38)[esi] = (&v30)[esi];
    }
}
