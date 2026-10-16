// from server: 34% by colin
// Reconstructed from the target machine code.
// 32-bit x86, MSVC 2008 (/O2 /GS- /EHsc /MD).

extern "C" __declspec(dllimport) double __cdecl ceil(double);

extern "C" void __cdecl sub_5EC1A0(void*, void*);
extern "C" void __cdecl sub_5185D0(void*, void*);
extern "C" void __cdecl sub_4F35D0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4FAC10(void*, void*);
extern "C" float __cdecl sub_4F1FF0(int);

extern float g_819BAC;
extern float g_826E6C;
extern float g_83A3E4;

struct TorsoBuilder {
    char pad0[0x10];
    unsigned int flags;

    void build(void* a, void* b, void* c, void* d, void* e, void* f);
};

void TorsoBuilder::build(void* a, void* b, void* c, void* d, void* e, void* f)
{
    unsigned int mask = flags & 7;

    float v0, v1, v2;
    sub_5EC1A0(&v0, (char*)this + 4);

    float a0 = (v0 < 0.0f) ? -v0 : v0;
    float a1 = (v1 < 0.0f) ? -v1 : v1;
    float a2 = (v2 < 0.0f) ? -v2 : v2;

    float absArr[3];
    absArr[0] = a0;
    absArr[1] = a1;
    absArr[2] = a2;

    bool eq = (a0 == a1);
    int idx = eq ? 0 : 1;

    int count;
    if (mask != 0) {
        float scaled = absArr[idx] * g_819BAC;
        count = (int)ceil((double)scaled);
    } else {
        count = 1;
    }

    unsigned short tmp10 = 0;
    unsigned short tmp12 = 0;

    short sval = (short)tmp12;
    int q = (int)sval / count;
    unsigned short qv = (unsigned short)q;

    unsigned short one = 1;
    unsigned short chosen = (one < qv) ? qv : one;

    tmp10 = chosen;

    float vecA[2];
    float vecB[2];
    sub_5185D0(&vecA[0], (char*)this + 4);
    sub_5185D0(&vecB[0], (char*)this + 4);

    float negA0 = -vecA[0];

    float zero = 0.0f;
    float r0 = zero, r1 = zero, r2 = zero, r3 = zero;

    int mode = *(int*)f;
    if (mode == 0) {
        if (mask == 0) {
            r0 = g_83A3E4;
            r1 = g_819BAC;
            r2 = zero;
            r3 = zero;
        } else {
            r0 = zero;
            r1 = sub_4F1FF0(mask);
            r2 = negA0 * 2.0f;
            r3 = g_819BAC;
            if (idx == 1) {
                r2 = -r2;
            }
        }
    } else if (mode == 1) {
        r0 = zero;
        r1 = *(float*)((char*)a + 0x1C);
        r2 = *(float*)((char*)a + 0x18);
        r3 = -*(float*)((char*)a + 0x1C);
    } else if (mode == 2) {
        r0 = zero;
        r1 = zero;
        r2 = zero;
        r3 = zero;
    } else {
        r0 = zero;
        r1 = zero;
        r2 = zero;
        r3 = zero;
    }

    int i = 0;
    while (i < count) {
        float cur;
        if (i == count - 1) {
            cur = absArr[idx];
            if (mode == 0 && *(int*)e != 0) {
                cur = (cur - r2) * r3 * g_83A3E4;
            }
        } else {
            cur = r2 + g_826E6C;
        }

        float args[2];
        args[0] = r0;
        args[1] = r1;

        float args2[2];
        args2[0] = r2;
        args2[1] = r3;

        float args3[5];
        args3[0] = cur;
        args3[1] = r0;
        args3[2] = r1;
        args3[3] = r2;
        args3[4] = r3;

        sub_4F35D0(&args3[0], &args2[0], &args[0], b, c);
        sub_4FAC10(d, e);

        r2 = cur;
        i++;
    }
}
