// from server: 34% by colin
//

struct VMaterialBase {
    char pad[0x10];
    unsigned int flags;
    void func(float a, float b, float c, int d, int e);
};

extern "C" {
    double __stdcall ceil(double);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void __stdcall sub_6784d0(void*, void*);
void __stdcall sub_5185d0(float*, float*);
float __stdcall sub_4f1ff0(int);
void __stdcall sub_4f35d0(void*, void*, void*, void*, void*);
void __stdcall sub_4f3260(void*, void*, void*, void*, void*);

void VMaterialBase::func(float a, float b, float c, int d, int e)
{
    float v38;
    float v44, v48, v4c;
    float v30, v34, v38b;
    float v18, v1c, v20, v24, v28, v2c;
    int ebp;
    int esi;
    int ebx;
    int edi;
    int i;
    float f;

    ebp = (flags >> 6) & 7;

    sub_6784d0(&v38, &flags);

    v44 = a < 0 ? -a : a;
    v48 = b < 0 ? -b : b;
    v4c = c < 0 ? -c : c;

    if (d == 0) {
        if (v44 == v48) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    if (d == 0 && ebp != 0) {
        f = (float)((int)ceil(v44 * g_819bac));
        ebx = (int)f;
    } else {
        ebx = 1;
    }

    {
        short tmp;
        short arr[2];
        short val;
        int idx;

        idx = esi + esi;
        tmp = *(short*)((char*)&v38 + 0x2a - idx);
        val = (short)((int)tmp / ebx);
        if (val < 1) val = 1;
        *(short*)((char*)&v18 + idx) = val;
        *(short*)((char*)&v18 + 0x2a - idx) = tmp;
    }

    {
        float tmp2[2];
        sub_5185d0(&v38, tmp2);
        v30 = -tmp2[0];
        v34 = -tmp2[1];
    }

    {
        float tmp2[2];
        sub_5185d0(&v38, tmp2);
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    }

    if (d == 0) {
        if (ebp == 0) {
            v28 = g_83a3e4;
            v2c = g_819bac;
            v1c = g_819bac;
            v18 = g_819bac;
        } else {
            v2c = sub_4f1ff0(ebp);
            v20 = v30 * 2.0f;
            v18 = g_819bac;
            if (esi == 1) {
                v18 = -v18;
            }
        }
    } else if (d == 1) {
        v28 = 0.0f;
        v2c = *(float*)((char*)this + 0x1c);
        v18 = *(float*)((char*)this + 0x18);
        v1c = -*(float*)((char*)this + 0x1c);
    } else if (d == 2) {
        v28 = 0.0f;
        v2c = 0.0f;
        v18 = 0.0f;
        v1c = 0.0f;
    }

    for (i = 0; i < ebx; i++) {
        if (i == ebx - 1) {
            v30 = v44;
            if (d == 0 && e != 0) {
                v18 = (v44 - v48) * v18 * g_83a3e4;
            }
        } else {
            v30 = v48 + g_826e6c;
        }

        {
            float args[5];
            args[0] = v18;
            args[1] = v1c;
            args[2] = v28;
            args[3] = v2c;
            args[4] = v30;
            sub_4f35d0(this, &v38, args, &v30, &v34);
        }

        {
            float args[5];
            args[0] = v30;
            args[1] = v34;
            args[2] = v38b;
            sub_4f3260(this, args, &v30, &v34, &v38b);
        }

        v34 = v30;
    }
}
