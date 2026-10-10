// from server: 56% by colin
struct CXTPCommandBarKeyboardTip
{
    char pad_0000[0xa0];
    void* m_pCommandBar;
    char pad_00a4[0x1c];
    unsigned long m_dwFlags;
    char pad_00c4[0x0c];
    void* m_pTip;
    char pad_00d4[0x0c];

    void ShowTip(unsigned int nID);
};

extern "C" void __stdcall sub_00680000(void* p, void* out);
extern "C" void* __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, unsigned int lParam);

void CXTPCommandBarKeyboardTip::ShowTip(unsigned int nID)
{
    if (m_dwFlags != 0)
        return;

    void* pBar = m_pCommandBar;
    if (pBar != 0)
        return;

    if (*(void**)((char*)pBar + 0x20) == 0)
        return;

    void** vtbl = *(void***)pBar;
    typedef int (__thiscall *Fn1)(void*);
    Fn1 fn1 = (Fn1)vtbl[0x128 / 4];
    if (fn1(pBar) != 0)
    {
        void* pBar2 = m_pCommandBar;
        if (pBar2 == 0)
            goto fallback;
        if (nID != 0)
        {
            m_dwFlags |= 8;
            return;
        }
        void** vtbl2 = *(void***)pBar2;
        typedef void (__thiscall *Fn2)(void*, unsigned int);
        Fn2 fn2 = (Fn2)vtbl2[0x150 / 4];
        fn2(pBar2, 0);
        return;
    }

fallback:
    {
        void* pBar3 = m_pCommandBar;
        sub_00680000(pBar3, (void*)((char*)0 + 0));
    }
}
