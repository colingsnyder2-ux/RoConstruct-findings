// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_004cd920 {
    char pad0[0x38];
    int m_38;
    int m_3c;
    int m_40;
    int m_44;
    char pad48[0x4];
    char m_4c;

    int f();
};

extern "C" int __cdecl sub_4cd8d0(int);
extern "C" int __cdecl sub_618a40(int, int, int);
extern "C" int __cdecl sub_4025b0(int, int);
extern "C" int __cdecl sub_4cc720(int, int, int, int, int, int);
extern "C" int __cdecl sub_4cd370(int, int);
extern "C" int __cdecl sub_4a3340(int, int, int, int);
extern "C" int __cdecl sub_595540(int, int);
extern "C" int __cdecl sub_595370(int);
extern "C" int __cdecl sub_49f710(int);
extern "C" int __cdecl sub_4782d0(int);
extern "C" int __cdecl sub_598cb0(int);
extern "C" int __cdecl sub_49e890();
extern "C" int __cdecl sub_4c9d90(int, int);
extern "C" int __cdecl sub_4c9e30(int, int, int, int);
extern "C" int __cdecl sub_4cc5e0(int, int, int);

int S_func_004cd920::f()
{
    char tmp[0x100];
    if (m_44 == 0) {
        int v = sub_4cd8d0(m_3c);
        sub_618a40((int)tmp, v, 0);
        int edx = *(int*)tmp;
        m_44 = edx;
        sub_4025b0((int)&m_4c, (int)tmp + 4);
        int esi = *(int*)tmp;
        if (esi) {
            if (_InterlockedExchangeAdd((volatile long*)(esi + 4), -1) == 1) {
                (*(void(**)(int))*(int*)esi)(esi);
                if (_InterlockedExchangeAdd((volatile long*)(esi + 8), -1) == 1) {
                    (*(void(**)(int))(*(int*)esi + 8))(esi);
                }
            }
        }
        int a = *(int*)(m_44 + 0x150);
        int b = *(int*)(m_44 + 0x138);
        int c = *(int*)(m_44 + 0x150);
        int d = *(int*)(m_44 + 0x138);
        int e = *(int*)c;
        sub_4cc720((int)tmp, d, e, b, a, 0);
        sub_4cd370((int)tmp, 0);
        int p = m_44 ? m_44 + 0x14 : 0;
        sub_4a3340(0x97abec, (int)tmp, p, 10);
        sub_595540((int)&m_4c, (int)tmp);
        sub_595370((int)tmp);
        sub_49f710((int)tmp);
    }
    m_40++;
    sub_4782d0((int)tmp);
    int r = (*(int(**)(int))(*(int*)m_3c + 0x44))(m_3c);
    if (r) {
        int q = *(int*)(r + 0x170);
        if (q) {
            int ecx = *(int*)(q + 0x134);
            int edx = *(int*)(ecx + 4);
            int v2 = edx + q + 0x134;
            int r2 = (*(int(**)(int))*(int*)v2)(v2);
            if (r2) {
                int* src = (int*)sub_598cb0(r2);
                int dst[9];
                for (int i = 0; i < 9; i++) dst[i] = src[i];
                float f1 = *(float*)((char*)src + 0x24);
                float f2 = *(float*)((char*)src + 0x28);
                float f3 = *(float*)((char*)src + 0x2c);
                (void)f1; (void)f2; (void)f3;
            }
        }
    }
    int g = sub_49e890();
    int ecx2 = *(int*)(g + 0x13c);
    int edx2 = (int)(((long long)ecx2 * 0x88888889LL) >> 32);
    edx2 += ecx2;
    edx2 >>= 4;
    int ebx = edx2;
    ebx = (unsigned)ebx >> 31;
    ebx += edx2;
    if (ebx == 0) ebx = 1;
    int edi = (int)&m_38;
    if (edi) edi += 0xc;
    while (ebx > 0) {
        int eax2 = edi ? edi - 0xc : 0;
        int eax3 = *(int*)(eax2 + 4);
        int eax4 = *(int*)(eax3 + 0x54);
        int esi2 = eax4 ? eax4 - 0x50 : 0;
        int eax5 = edi ? edi - 0xc : 0;
        if (esi2 == *(int*)(eax5 + 4)) break;
        sub_4c9d90((int)tmp, esi2);
        if (*(int*)(tmp + 0x8c) > 0) ebx--;
        sub_4c9e30((int)tmp, (int)tmp, m_40, 0);
        if (tmp[0]) {
            int eax6 = edi ? edi - 0xc : 0;
            sub_4cc5e0(eax6 + 0xc, (int)tmp, esi2);
            int esi3 = *(int*)tmp;
            if (esi3) {
                if (_InterlockedExchangeAdd((volatile long*)(esi3 + 4), -1) == 1) {
                    (*(void(**)(int))*(int*)esi3)(esi3);
                    if (_InterlockedExchangeAdd((volatile long*)(esi3 + 8), -1) == 1) {
                        (*(void(**)(int))(*(int*)esi3 + 8))(esi3);
                    }
                }
            }
            if (ebx > 0) continue;
            break;
        } else {
            int esi4 = *(int*)tmp;
            if (esi4) {
                if (_InterlockedExchangeAdd((volatile long*)(esi4 + 4), -1) == 1) {
                    (*(void(**)(int))*(int*)esi4)(esi4);
                    if (_InterlockedExchangeAdd((volatile long*)(esi4 + 8), -1) == 1) {
                        (*(void(**)(int))(*(int*)esi4 + 8))(esi4);
                    }
                }
            }
            break;
        }
    }
    int eax7 = (int)&m_38;
    if (eax7) {
        eax7 += 0xc;
        if (eax7) eax7 -= 0xc;
        else eax7 = 0;
    } else eax7 = 0;
    int eax8 = *(int*)(eax7 + 4);
    int eax9 = *(int*)(eax8 + 0x64);
    m_38 = eax9 ? eax9 - 0x60 : 0;
    return 0;
}
