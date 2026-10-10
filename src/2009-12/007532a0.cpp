// from server: 77% by atomic.potato
struct S_func_007532a0
{
    int m_0;
    int m_4;
    char m_pad8[16];
    int m_18;
    int m_1c;
    void f();
};

extern "C" void __cdecl S_func_00637b00(S_func_007532a0*);

void S_func_007532a0::f()
{
    m_0 = 0x9e476c;
    m_4 = 0x9e4764;
    m_18 = 0x9e4758;
    m_1c = 0x9e4750;
    S_func_00637b00(this);
}
