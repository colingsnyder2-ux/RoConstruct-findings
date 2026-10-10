// from server: 54% by colin
struct S_func_006ea200 {
    char pad0[0x34];
    int m_flag34;
    char pad1[0x9c - 0x38];
    void* m_ptr9c;
    int f(int a, int b, int c, int d);
};

struct S_func_006ea0f0 {
    int f(int a);
};

struct S_func_006ea1d0 {
    int f(int a);
};

struct S_func_00648730 {
    char pad0[48];
    int m_x;
    int* f();
};

struct S_func_0064c960 {
    void f(int a);
};

struct S_func_0064e7a0 {
    void f(int a, int b, int c, int d, int e);
};

struct S_func_0041ece0 {
    char pad0[8];
    int m_a;
    int m_b;
    int m_c;
    int m_d;
    void f(int* out);
};

int S_func_006ea200::f(int a, int b, int c, int d)
{
    if (m_flag34 == 0)
        return 0;

    int* p = (int*)m_ptr9c;
    int ebx = *(int*)((char*)p + 0x88);
    int esi = *(int*)((char*)p + 0x8c);

    S_func_006ea0f0* obj = (S_func_006ea0f0*)0;
    int r = ((S_func_006ea0f0*)0)->f(a);
    if (r == 0)
        return 0;

    int* vt = *(int**)r;
    int (*fn)(void*, int) = (int (*)(void*, int))*(int*)((char*)vt + 0x64);
    int ebp = fn((void*)r, ebx);
    if (ebp == 0)
        return 0;

    int r2 = ((S_func_006ea1d0*)this)->f(c);
    if (r2 == 0)
        ((S_func_0064c960*)ebp)->f(1);
    else
        ((S_func_00648730*)ebp)->f();

    int* edi = (int*)d;
    if (c == 0) {
        int eax = edi[0];
        int edx = edi[2];
        edx -= eax;
        if (edx < ebx)
            return 0;
        int eax2 = edi[3];
        eax2 += edi[1];
        int ecx = eax2 - edx;
        ecx >>= 1;
        int eax3 = esi;
        int edx2 = eax3 >> 31;
        eax3 -= edx2;
        eax3 >>= 1;
        ecx -= eax3;
        ((S_func_0064e7a0*)ebp)->f(c, edi[0], ecx, b, ebx);
        ebx += 3;
        edi[0] += ebx;
    } else {
        int eax = edi[1];
        int edx = edi[3];
        edx -= eax;
        if (edx < esi)
            return 0;
        int tmp;
        ((S_func_0041ece0*)edi)->f(&tmp);
        int ecx = tmp;
        int eax2 = esi;
        int edx2 = eax2 >> 31;
        eax2 -= edx2;
        edx2 = eax2 >> 1;
        int eax3 = *(int*)ecx;
        eax3 -= edx2;
        ((S_func_0064e7a0*)ebp)->f(c, edi[1], eax3, b, esi);
        esi += 3;
        edi[1] += esi;
    }
    return 0;
}
