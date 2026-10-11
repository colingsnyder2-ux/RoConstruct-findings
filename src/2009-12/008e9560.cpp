// from server: 82% by atomic.potato
struct I_func_008e9500 {
    char pad[52];
    int m_x;
};

struct S_func_008e9500 {
    char pad[48];
    I_func_008e9500* m_p;
    int f();
};

int S_func_008e9500::f()
{
    return m_p->m_x;
}

extern "C" int __fastcall func_00894ce0(void* p);

struct S {
    char pad0[0x58];
    int m_58;
    int m_5c;
    char pad1[0x78 - 0x60];
    int m_78;
    int f();
};

int S::f()
{
    if (m_5c != m_58)
        return m_78;
    int a = func_00894ce0(this);
    int b = ((S_func_008e9500*)this)->f();
    if (a == b && m_78 != 0)
        return 1;
    return 0;
}
