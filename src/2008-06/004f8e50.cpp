// from server: 43% by colin
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
    float __cdecl ceil_helper(double x);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;
extern void* g_8027ec;

int WedgeBuilder::method(int a, int b, int c, int d)
{
    char buf[0x40];
    int* local10 = (int*)(buf + 0x00);
    int* local14 = (int*)(buf + 0x04);
    int* local18 = (int*)(buf + 0x08);
    int* local1c = (int*)(buf + 0x0c);
    int* local20 = (int*)(buf + 0x10);
    int* local24 = (int*)(buf + 0x14);
    int* local28 = (int*)(buf + 0x18);
    int* local2c = (int*)(buf + 0x1c);
    int* local30 = (int*)(buf + 0x20);
    int* local34 = (int*)(buf + 0x24);
    int* local38 = (int*)(buf + 0x28);
    int* local3c = (int*)(buf + 0x2c);
    int* local40 = (int*)(buf + 0x30);
    int* local44 = (int*)(buf + 0x34);
    int* local48 = (int*)(buf + 0x38);
    int* local4c = (int*)(buf + 0x3c);

    int ebp = this->field10 & 7;
    *local10 = (int)this;

    sub_5EC1A0(&this->field4, local3c);

    float f44 = *(float*)local44;
    float f48 = *(float*)local48;
    float f38 = *(float*)local38;

    float af44 = f44 < 0 ? -f44 : f44;
    float af48 = f48 < 0 ? -f48 : f48;
    float af38 = f38 < 0 ? -f38 : f38;

    *(float*)local44 = af44;
    *(float*)local48 = af48;
    *(float*)local4c = af38;

    int ecx = *(int*)(buf + 0x58);
    bool al;
    if (ecx == 0) {
        if (af44 == af48) al = true;
        else al = false;
    } else {
        al = false;
    }
    int esi = al ? 0 : 1;

    int ebx;
    if (ecx == 0 && ebp != 0) {
        float v = *(float*)((char*)local44 + esi * 4);
        v = v * g_819bac;
        double dv = (double)v;
        float r = ceil_helper(dv);
        *(float*)local20 = r;
        ebx = *local10;
    } else {
        ebx = 1;
    }

    int ecx2 = esi + esi;
    short* edx = (short*)(buf + 0x4e - ecx2);
    unsigned short di = *(unsigned short*)edx;
    *(short*)local10 = 0;
    int eax = (int)(short)di;
    int idiv_result = eax / ebx;
    int edx2 = 1;
    *local20 = 1;
    unsigned short ax = (unsigned short)idiv_result;
    *local18 = (int)ax;
    short* ptr;
    if ((short)edx2 < (short)ax) {
        ptr = (short*)local18;
    } else {
        ptr = (short*)local20;
    }
    short ax2 = *ptr;
    float f4c = *(float*)local4c;
    *(short*)((char*)local10 + ecx2) = ax2;
    *(float*)local20 = f4c;
    short* edx3 = (short*)(buf + 0x02 - ecx2);
    *edx3 = (short)di;

    sub_5185D0((float*)local48, (float*)local38);
    float* eax2 = (float*)local48;
    float v1 = -eax2[0];
    float v2 = -eax2[1];
    *(float*)local3c = v1;
    *(float*)local40 = v2;

    sub_5185D0((float*)local48, (float*)local30);

    float zero = 0.0f;
    int eax3 = *(int*)(buf + 0x50);
    *(float*)local28 = zero;
    *(float*)local2c = zero;
    *(float*)local18 = zero;
    *(float*)local1c = zero;

    if (eax3 == 0) {
        if (ebp == 0) {
            float g1 = g_83a3e4;
            int eax4 = esi * 4;
            *(float*)local28 = g1;
            float g2 = g_819bac;
            *(float*)local2c = g2;
            float* edx4 = (float*)((char*)local1c - eax4);
            *edx4 = g2;
            *(float*)((char*)local18 + eax4) = g2;
        } else {
            int edi = esi * 4;
            float* eax5 = (float*)((char*)local2c - edi);
            *eax5 = zero;
            float r = sub_4F1FF0(ebp);
            *(float*)((char*)local2c + edi) = r;
            float* ecx3 = (float*)((char*)local4c - edi);
            float v3 = *ecx3;
            v3 = v3 + v3;
            float* edx5 = (float*)((char*)local20 - edi);
            *edx5 = v3;
            *(float*)((char*)local18 + edi) = g_819bac;
            if (esi == 1) {
                float v4 = *(float*)local18;
                v4 = -v4;
                *(float*)local18 = v4;
            }
        }
    } else if (eax3 == 1) {
        int eax6 = *local14;
        *(float*)local28 = zero;
        float v5 = *(float*)(eax6 + 0x1c);
        *(float*)local2c = v5;
        float v6 = *(float*)(eax6 + 0x18);
        *(float*)local18 = v6;
        float v7 = *(float*)(eax6 + 0x1c);
        v7 = -v7;
        *(float*)local1c = v7;
    } else if (eax3 == 2) {
        *(float*)local28 = zero;
        *(float*)local2c = zero;
        *(float*)local18 = zero;
        *(float*)local1c = zero;
    }

    int edi2 = 0;
    if (ebx > 0) {
        int ebp2 = *local10;
        do {
            int eax7 = ebx - 1;
            if (edi2 != eax7) {
                float v8 = *(float*)((char*)local38 + esi * 4);
                v8 = v8 + g_826e6c;
                *(float*)((char*)local30 + esi * 4) = v8;
            } else {
                float v9 = *(float*)((char*)local44 + esi * 4);
                *(float*)((char*)local30 + esi * 4) = v9;
                if (*(int*)(buf + 0x50) == 0 && *local24 != 0) {
                    float v10 = v9 - *(float*)((char*)local38 + esi * 4);
                    v10 = v10 * *(float*)((char*)local18 + esi * 4);
                    v10 = v10 * g_83a3e4;
                    *(float*)((char*)local18 + esi * 4) = v10;
                }
            }

            float f18 = *(float*)local18;
            float f2c = *(float*)local2c;
            float f30 = *(float*)local30;
            float f38b = *(float*)local38;
            float f4c2 = *(float*)local4c;

            sub_4F35D0(&f18, &f2c, &f30, ebp2, esi, &f38b, &f4c2);

            int a1 = *(int*)(buf + 0x58);
            int a2 = *(int*)(buf + 0x54);
            sub_4F7D90((int)this, a2, a1);

            float v11 = *(float*)((char*)local30 + esi * 4);
            edi2++;
            *(float*)((char*)local38 + esi * 4) = v11;
        } while (edi2 < ebx);
    }

    return 0;
}
