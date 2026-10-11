// from server: 8% by atomic.potato
// roc 2009-12 008039a0  unit: CXTPPaintManager  size: 433 bytes

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CSize {
    int cx;
    int cy;
};

struct CString {
    char pad[0x10];
};

struct CXTPTabManagerItem {
    char pad0[0x8];
    void* m_pFont;         // 0x8
};

struct CXTPTabManager {
    char pad0[0x20];
    void* m_hDC;           // 0x20
    char pad1[0xdc];
    int m_nState;          // 0x100
};

struct CXTPPaintManager {
    char pad0[0x4c];
    int m_nTextColor;      // 0x4c
    int m_nTextColor2;     // 0x50
    char pad1[0x4];
    int m_nBorderColor;    // 0x58
    int m_nBorderColor2;   // 0x5c
    char pad2[0x38];
    CString m_strFont;     // 0x98
    CXTPPaintManager* GetTabTextExtent(CXTPTabManager* pTab, CXTPTabManagerItem* pItem, CSize* pSize);
};

extern "C" {
    int __stdcall GetTextExtentPoint32A(void*, const char*, int, CSize*);
    int __stdcall GetClientRect(void*, CRect*);
    int __stdcall SetRect(CRect*, int, int, int, int);
}

void __stdcall sub_84B660(void*, void*, void*);
void __stdcall sub_84B6E0(void*);
void __stdcall sub_7F45FE(void*, void*, int);
void __stdcall sub_7F9B20(void*, void*, int);
void __stdcall sub_7FD580(void*, void*);
void __stdcall sub_926490(void*, int);

extern void* __stdcall sub_98CC50(void*, void*);
extern void* __stdcall sub_98B16C(void*, int, const char*, void*);
extern void* __stdcall sub_98CA38(void);
extern void* __stdcall sub_98DEC0(void*);

CXTPPaintManager* CXTPPaintManager::GetTabTextExtent(CXTPTabManager* pTab, CXTPTabManagerItem* pItem, CSize* pSize)
{
    CRect rc;
    CSize sz;
    CString str;
    int nLen;
    int nHeight;
    int nWidth;
    int nLeft;
    int nRight;
    int nTop;
    int nBottom;
    int nColor;
    int nBorder;
    void* hFont;
    void* hOldFont;
    void* hDC;
    void* pFont;
    int* pRet;

    if (pTab->m_nState != 4)
    {
        pSize->cx = 0;
        pSize->cy = 0;
        return (CXTPPaintManager*)pSize;
    }

    hDC = pTab->m_hDC;
    sub_98CC50(hDC, &str);

    if (pItem == 0)
    {
        pSize->cx = 0;
        pSize->cy = 0;
        return (CXTPPaintManager*)pSize;
    }

    sub_84B660(pItem, &this->m_strFont, &str);

    pFont = pItem->m_pFont;
    sub_98B16C(pFont, 1, (const char*)0x9a6168, &sz);

    nLen = sz.cx;
    if (nLen < 0xf)
        nLen = 0xf;
    nLen += 3;

    nHeight = sz.cy - 3;

    SetRect(&rc, 3, 3, nLen, nHeight);

    if (sz.cx != 0)
    {
        sub_926490(pItem, 1);

        nColor = this->m_nTextColor2;
        if (nColor == -1)
            nColor = this->m_nTextColor;

        sub_7F45FE(pItem, &rc, nColor);

        nBorder = this->m_nBorderColor2;
        if (nBorder == -1)
            nBorder = this->m_nBorderColor;

        hFont = (void*)nBorder;
        pFont = *(void**)pItem;
        ((void (__thiscall*)(void*, void*))((int*)pFont)[0x38/4])(pItem, hFont);

        sub_7FD580(pTab, &str);

        nLeft = rc.left;
        nRight = rc.right;
        nTop = rc.top;
        nBottom = rc.bottom;

        nWidth = (nRight - nLeft) * 2;
        nHeight = nBottom - nWidth;

        rc.left = 5;
        rc.top = 3;
        rc.right = nWidth;
        rc.bottom = nHeight;

        sub_7F9B20(pItem, &rc, 0x824);

        sub_98DEC0(&str);
    }

    pSize->cx = rc.right - rc.left;
    pSize->cy = rc.bottom - rc.top;

    sub_84B6E0(&str);

    return (CXTPPaintManager*)pSize;
}
