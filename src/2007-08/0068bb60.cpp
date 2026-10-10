// from server: 38% by colin
struct CXTPTabClientWnd {
    char pad[0x7c];
    int m_nState;
    int m_nState2;
    char pad2[0x30];
    int m_bFlag;
    int GetSomething();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl func_68a470();
extern "C" int __cdecl func_68b1f0();

int CXTPTabClientWnd::GetSomething()
{
    if (m_nState != 0)
        return 0;
    if (m_nState2 != 0)
        return 0;
    if (m_bFlag != 0)
    {
        void* p = operator_new(0xa8);
        if (p == 0)
            return 0;
        func_68a470();
        return 0;
    }
    else
    {
        void* p = operator_new(0x100);
        if (p == 0)
            return 0;
        int r = func_68b1f0();
        if (r == 0)
            return 0;
        return r + 0x58;
    }
}
