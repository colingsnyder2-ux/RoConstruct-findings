// from server: 48% by colin
struct TorsoBuilder {
    void build(int a, int b, int c);
};

extern "C" {
    void __stdcall sub_6784D0(int* out, int* in);
    void __stdcall sub_5185D0(float* out, float* in);
    float __stdcall sub_4F1FF0(int n);
    void __stdcall sub_4F35D0(float* a, float* b, float* c, float* d, float* e, float* f);
    void __stdcall sub_4FB1F0(int* p);
    double __cdecl ceil(double x);
}

extern float g_819BAC;
extern float g_826E6C;
extern float g_83A3E4;

void TorsoBuilder::build(int a, int b, int c)
{
    int local10;
    int local14;
    int local18;
    int local1C;
    int local20;
    int local24;
    int local28;
    int local2C;
    int local30;
    int local34;
    int local38;
    int local3C;
    int local40;
    int local44;
    int local48;
    int local4C;
    int local50;
    int local54;
    int local58;
    int local5C;

    int ebp = (*(int*)((char*)this + 0x10) >> 6) & 7;

    sub_6784D0(&local3C, (int*)((char*)this + 4));

    float f44 = *(float*)&local44;
    if (f44 < 0.0f) f44 = -f44;
    float f48 = *(float*)&local48;
    if (f48 < 0.0f) f48 = -f48;
    float f4C = *(float*)&local38;
    if (f4C < 0.0f) f4C = -f4C;

    int ecx = local5C;
    int esi;
    if (ecx == 0) {
        if (f44 == f48) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    int ebx;
    if (ecx == 0 && ebp != 0) {
        float v = (&f44)[esi] * g_819BAC;
        double d = ceil((double)v);
        ebx = (int)d;
    } else {
        ebx = 1;
    }

    short w10 = 0;
    short w12 = 0;
    int ecx2 = esi + esi;
    short di = *(short*)((char*)&local58 - ecx2);
    int eax2 = (int)di;
    int div = eax2 / ebx;
    short ax = (short)div;
    int local18v = (int)(unsigned short)ax;
    int local20v = 1;
    short cmpv = (short)local20v;
    short* psel;
    if (cmpv < (short)local18v) {
        psel = (short*)&local18v;
    } else {
        psel = (short*)&local20v;
    }
    short sel = *psel;
    *(short*)((char*)&local10 + ecx2) = sel;
    *(short*)((char*)&local10 - ecx2) = di;

    float f20 = f4C;
    sub_5185D0((float*)&local38, (float*)&local48);
    float t0 = -((float*)&local38)[0];
    float t1 = -((float*)&local38)[1];
    float local3C2 = t0;
    float local40v = t1;
    sub_5185D0((float*)&local30, (float*)&local48);

    float zero = 0.0f;
    int eax3 = local5C;
    eax3 -= 0;
    float local28v = zero;
    float local2Cv = zero;
    float local18f = zero;
    float local1Cf = zero;

    if (eax3 == 0) {
        if (ebp == 0) {
            local28v = g_83A3E4;
            int eax4 = esi * 4;
            local2Cv = g_819BAC;
            float* edx = (float*)((char*)&local1C - eax4);
            *edx = g_819BAC;
            *(float*)((char*)&local18 + eax4) = g_819BAC;
        } else {
            int edi2 = esi * 4;
            float* eax5 = (float*)((char*)&local2C - edi2);
            *eax5 = zero;
            float r = sub_4F1FF0(ebp);
            *(float*)((char*)&local2C + edi2) = r;
            float* ecx3 = (float*)((char*)&local4C - edi2);
            float v2 = *ecx3;
            float* edx2 = (float*)((char*)&local20 - edi2);
            *edx2 = v2 + v2;
            *(float*)((char*)&local18 + edi2) = g_819BAC;
            if (esi == 1) {
                local18f = -local18f;
            }
        }
    } else {
        eax3 -= 1;
        if (eax3 == 0) {
            local28v = zero;
            local2Cv = *(float*)((char*)&local14 + 0x1C);
            local18f = *(float*)((char*)&local14 + 0x18);
            local1Cf = -*(float*)((char*)&local14 + 0x1C);
        } else {
            eax3 -= 1;
            if (eax3 == 0) {
                local28v = zero;
                local2Cv = zero;
                local18f = zero;
                local1Cf = zero;
            }
        }
    }

    int edi3 = 0;
    if (ebx > 0) {
        int ebp2 = local54;
        while (edi3 < ebx) {
            int eax6 = ebx - 1;
            if (edi3 == eax6) {
                float f = (&f44)[esi];
                (&local30)[esi] = f;
                if (local5C == 0 && local24 != 0) {
                    float v3 = f - (&local38)[esi];
                    v3 = v3 * (&local18f)[esi];
                    v3 = v3 * g_83A3E4;
                    (&local18f)[esi] = v3;
                }
            } else {
                float v4 = (&local38)[esi] + g_826E6C;
                (&local30)[esi] = v4;
            }

            int eax7 = local10;
            float f18 = local18f;
            float f2C = local2Cv;
            float f30 = (&local30)[esi];
            float f44b = (&f44)[esi];
            sub_4F35D0((float*)&local58, (float*)&local48, (float*)&local30, (float*)&local18f, (float*)&local2Cv, (float*)&local44);
            sub_4FB1F0(&ebp2);
            (&local38)[esi] = (&local30)[esi];
            edi3++;
        }
    }
}
