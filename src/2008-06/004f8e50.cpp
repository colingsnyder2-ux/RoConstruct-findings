// from server: 44% by colin
struct WedgeBuilder {
    char pad0[4];
    int field4;
    char pad8[8];
    int field10;
    int method(int a, int b, int c, int d);
};

extern "C" {
    int __cdecl sub_5EC1A0(int* a, int* b);
    void __cdecl sub_5185D0(float* a, float* b);
    float __cdecl sub_4F1FF0(int a);
    void __cdecl sub_4F35D0(float* a, float* b, float* c, int d, int e, float* f, float* g);
    void __cdecl sub_4F7D90(int a, int b, int c);
    double __cdecl ceil(double x);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

int WedgeBuilder::method(int a, int b, int c, int d)
{
    char buf[0x40];
    float* f44 = (float*)(buf + 0x04);
    float* f48 = (float*)(buf + 0x08);
    float* f4c = (float*)(buf + 0x0c);
    float* f18 = (float*)(buf + 0x18);
    float* f1c = (float*)(buf + 0x1c);
    float* f20 = (float*)(buf + 0x20);
    float* f24 = (float*)(buf + 0x24);
    float* f28 = (float*)(buf + 0x28);
    float* f2c = (float*)(buf + 0x2c);
    float* f30 = (float*)(buf + 0x30);
    float* f34 = (float*)(buf + 0x34);
    float* f38 = (float*)(buf + 0x38);
    float* f3c = (float*)(buf + 0x3c);
    float* f40 = (float*)(buf + 0x40);
    short* s10 = (short*)(buf + 0x10);
    short* s12 = (short*)(buf + 0x12);
    int* p10 = (int*)(buf + 0x10);
    int* p14 = (int*)(buf + 0x14);
    int* p18 = (int*)(buf + 0x18);
    int* p20 = (int*)(buf + 0x20);
    int* p24 = (int*)(buf + 0x24);

    int ebp = this->field10 & 7;
    *p10 = (int)this;

    sub_5EC1A0(&this->field4, (int*)(buf + 0x3c));

    float v44 = *f44;
    float v48 = *f48;
    float v38 = *f38;

    float af44 = v44 < 0 ? -v44 : v44;
    float af48 = v48 < 0 ? -v48 : v48;
    float af38 = v38 < 0 ? -v38 : v38;

    *f44 = af44;
    *f48 = af48;
    *f4c = af38;

    int ecx = *(int*)(buf + 0x58);
    bool al;
    if (ecx == 0) {
        al = (af44 == af48);
    } else {
        al = false;
    }
    int esi = al ? 0 : 1;

    int ebx;
    if (ecx == 0 && ebp != 0) {
        float v = *(float*)((char*)f44 + esi * 4);
        v = v * g_819bac;
        double dv = (double)v;
        float r = (float)ceil(dv);
        *f20 = r;
        ebx = *p10;
    } else {
        ebx = 1;
    }

    int ecx2 = esi + esi;
    short* edx = (short*)(buf + 0x4e - ecx2);
    unsigned short di = *(unsigned short*)edx;
    *s10 = 0;
    int eax = (int)(short)di;
    int idiv_result = eax / ebx;
    int edx2 = 1;
    *p20 = 1;
    unsigned short ax = (unsigned short)idiv_result;
    *p18 = (int)ax;
    short* ptr;
    if ((short)edx2 < (short)ax) {
        ptr = (short*)p18;
    } else {
        ptr = (short*)p20;
    }
    short ax2 = *ptr;
    float f4cv = *f4c;
    *(short*)((char*)s10 + ecx2) = ax2;
    *f20 = f4cv;
    short* edx3 = (short*)(buf + 0x02 - ecx2);
    *edx3 = (short)di;

    sub_5185D0(f48, f38);
    float* eax2 = f48;
    float v1 = -eax2[0];
    float v2 = -eax2[1];
    *f3c = v1;
    *f40 = v2;

    sub_5185D0(f48, f30);

    float zero = 0.0f;
    int eax3 = *(int*)(buf + 0x50);
    *f28 = zero;
    *f2c = zero;
    *f18 = zero;
    *f1c = zero;

    if (eax3 == 0) {
        if (ebp == 0) {
            float g1 = g_83a3e4;
            int eax4 = esi * 4;
            *f28 = g1;
            float g2 = g_819bac;
            *f2c = g2;
            float* edx4 = (float*)((char*)f1c - eax4);
            *edx4 = g2;
            *(float*)((char*)f18 + eax4) = g2;
        } else {
            int edi = esi * 4;
            float* eax5 = (float*)((char*)f2c - edi);
            *eax5 = zero;
            float r = sub_4F1FF0(ebp);
            *(float*)((char*)f2c + edi) = r;
            float* ecx3 = (float*)((char*)f4c - edi);
            float v3 = *ecx3;
            v3 = v3 + v3;
            float* edx5 = (float*)((char*)f20 - edi);
            *edx5 = v3;
            *(float*)((char*)f18 + edi) = g_819bac;
            if (esi == 1) {
                float v4 = *f18;
                v4 = -v4;
                *f18 = v4;
            }
        }
    } else if (eax3 == 1) {
        int eax6 = *p14;
        *f28 = zero;
        float v5 = *(float*)(eax6 + 0x1c);
        *f2c = v5;
        float v6 = *(float*)(eax6 + 0x18);
        *f18 = v6;
        float v7 = *(float*)(eax6 + 0x1c);
        v7 = -v7;
        *f1c = v7;
    } else if (eax3 == 2) {
        *f28 = zero;
        *f2c = zero;
        *f18 = zero;
        *f1c = zero;
    }

    int edi2 = 0;
    if (ebx > 0) {
        int ebp2 = *p10;
        do {
            int eax7 = ebx - 1;
            if (edi2 != eax7) {
                float v8 = *(float*)((char*)f38 + esi * 4);
                v8 = v8 + g_826e6c;
                *(float*)((char*)f30 + esi * 4) = v8;
            } else {
                float v9 = *(float*)((char*)f44 + esi * 4);
                *(float*)((char*)f30 + esi * 4) = v9;
                if (*(int*)(buf + 0x50) == 0 && *p24 != 0) {
                    float v10 = v9 - *(float*)((char*)f38 + esi * 4);
                    v10 = v10 * *(float*)((char*)f18 + esi * 4);
                    v10 = v10 * g_83a3e4;
                    *(float*)((char*)f18 + esi * 4) = v10;
                }
            }

            float f18v = *f18;
            float f2cv = *f2c;
            float f30v = *f30;
            float f38v = *f38;
            float f4c2 = *f4c;

            sub_4F35D0(&f18v, &f2cv, &f30v, ebp2, esi, &f38v, &f4c2);

            int a1 = *(int*)(buf + 0x58);
            int a2 = *(int*)(buf + 0x54);
            sub_4F7D90((int)this, a2, a1);

            float v11 = *(float*)((char*)f30 + esi * 4);
            edi2++;
            *(float*)((char*)f38 + esi * 4) = v11;
        } while (edi2 < ebx);
    }

    return 0;
}
