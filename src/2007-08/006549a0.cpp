// from server: 67% by colin
struct S_func_00653870 {
    char pad0[40];
    int m_x;
    int f();
};

struct S_func_006ffab0 {
    char pad0[4];
    void g(int, int);
};

struct S_func_006301e4 {
    void h();
};

struct S_func_006549a0 {
    char pad0[0x20];
    int m_20;
    char pad1[4];
    int m_28;
    S_func_006301e4** m_24;
    void f();
};

void S_func_006549a0::f()
{
    int i = 0;
    while (i < ((S_func_00653870*)this)->f()) {
        if (i < 0 || i >= m_28) {
            extern void func_0062ff20();
            func_0062ff20();
        }
        m_24[i]->h();
        i++;
    }
    ((S_func_006ffab0*)((char*)this + 0x20))->g(0, -1);
}
