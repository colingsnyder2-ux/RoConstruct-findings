// from server: 82% by atomic.potato
struct S_func_00528c90 {
    char pad0[4];
    char m_5;
    char pad6[2];
    int m_8;
    int m_c;
    int m_10;
    char pad14[4];
    int m_18;
    char pad1c[0x1c];
    int m_38;
    int m_3c;
    int m_40;
    int m_44;
    S_func_00528c90* ctor(int, int, int);
};

extern "C" long (__stdcall *g_inc)(long volatile*);
extern "C" void __stdcall sub_00528bd0(int, int);

S_func_00528c90* S_func_00528c90::ctor(int a, int b, int c)
{
    g_inc((long volatile*)0xa3a1bc);
    *(int*)this = 0x8afff4;
    m_5 = 1;
    m_8 = 0;
    m_c = *(int*)0x8ef840;
    m_10 = c;
    *(int*)this = 0x8b0074;
    *(int*)((char*)this + 0x18) = 0;
    sub_00528bd0(a, b);
    m_38 = 0;
    m_3c = 0;
    m_40 = 0;
    m_44 = 0;
    return this;
}
