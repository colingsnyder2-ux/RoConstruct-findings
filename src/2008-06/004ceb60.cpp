// from server: 60% by atomic.potato
struct S_func_004d5990 {
    char pad0[600];
    char m_x;
    char f();
};

struct S_func_004ce780 {
    int f(int, int, int, int, int);
};

struct PhysicsSender {
    char pad0[0x450];
    int m_450;
    int m_454;
    int m_458;
    char pad1[0x4b0 - 0x45c];
    int m_4b0;
    char pad2[0x528 - 0x4b4];
    S_func_004d5990 m_528;
    int f(int, int, int, int);
};

int PhysicsSender::f(int a, int b, int c, int d)
{
    char ok = m_528.f();
    int eax = *(int*)&a;
    if (ok) {
        int ecx = *(int*)((char*)&a + 0xc);
        int tmp;
        eax = (eax + 7) >> 3;
        int ebx = eax;
        ((S_func_004ce780*)0)->f(eax, ecx, (int)&tmp, ecx, 0);
        int v = tmp;
        m_454 = (v - ebx) * 8;
    } else {
        eax = (eax + 7) >> 3;
    }
    m_450++;
    int ecx2 = eax * 8;
    m_458 += ecx2;
    m_4b0 += ecx2;
    int edx = *(int*)((char*)&a + 0xc);
    int ecx3 = *(int*)((char*)&a + 8);
    ((S_func_004ce780*)0x971d31)->f(eax, edx, ecx3, *(int*)((char*)&a + 0x10), 0);
    return 0;
}
