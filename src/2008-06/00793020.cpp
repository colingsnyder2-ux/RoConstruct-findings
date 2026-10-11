// from server: 49% by colin
struct CXTButton {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x30];
    void* m_pTheme;
    char pad3[0x28];
    unsigned int m_nStyle;
    void SetTheme(void* pTheme);
    void OnStyleChanged(unsigned int nStyle, int bRedraw);
};

extern "C" void* __stdcall sub_6A0920(unsigned int size);
extern "C" void __stdcall sub_70DB20(void* p, void* pTheme);
extern "C" void __stdcall sub_7A16F0(void* p);
extern "C" void __stdcall sub_7A1A60(void* p, int arg);
extern "C" int __stdcall IsWindow(void* hWnd);
extern "C" int __stdcall InvalidateRect(void* hWnd, const void* lpRect, int bErase);

void CXTButton::OnStyleChanged(unsigned int nStyle, int bRedraw)
{
    unsigned int oldStyle = m_nStyle;
    m_nStyle = nStyle;
    if (nStyle & 0x40)
    {
        void* p = sub_6A0920(0xC8);
        if (p)
        {
            sub_7A1A60(p, 0);
        }
        SetTheme(p);
    }
    else if (nStyle & 1)
    {
        void* p = sub_6A0920(0x80);
        if (p)
        {
            sub_7A16F0(p);
        }
        SetTheme(p);
    }
    if (IsWindow(m_hWnd))
    {
        if (bRedraw)
        {
            InvalidateRect(m_hWnd, 0, 1);
        }
    }
}
