// from server: 81% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPReportInplaceControl
{
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x58];
    void* m_pFont;
    void* m_pFontOld;
    void SetFont(void* pFont);
    void* GetFont();
    void OnDraw(HDC hdc);
};

extern "C" {
    void* __stdcall CreateFontIndirectA(const void*);
    int __stdcall GetObjectA(void*, int, void*);
    long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
    void __stdcall sub_63022c(void*);
    void __stdcall sub_630238(void*, void*);
    void __stdcall sub_630a1e();
}

void CXTPReportInplaceControl::OnDraw(HDC hdc)
{
    char buf[0x3c];
    void* hFont;
    void* hOldFont;
    void* pFont;

    sub_63022c(&m_pFont);

    GetObjectA(*(void**)((char*)hdc + 4), 0x3c, buf);
    hFont = CreateFontIndirectA(buf);
    sub_630238(&m_pFont, hFont);

    if (&m_pFont != 0)
        pFont = *(void**)((char*)&m_pFont + 4);
    else
        pFont = 0;

    SendMessageA(m_hWnd, 0x30, (unsigned int)pFont, 1);
}
