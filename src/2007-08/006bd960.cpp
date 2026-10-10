// from server: 49% by colin
// roc 2007-08 006bd960  unit: CXTPControlGalleryOffice2007Theme  size: 298 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bd960

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CSize {
    int cx;
    int cy;
};

struct CDC;
struct CGdiObject;

struct CXTPControlGalleryOffice2007Theme {
    char pad[0x28];
    void* m_pGallery;
    void DrawItem(CDC* pDC, int nIndex, CRect rcItem, int nState);
};

extern "C" {
    void* __stdcall sub_63cd70(void* p, unsigned int n);
    void __stdcall sub_6308b0(void* pThis, CRect* pRect, void* p);
    void __stdcall sub_7383ca(void* pThis, int a, int b, int c, int d, int e);
    void __stdcall sub_680550(void* pThis, void* p, void* p2);
    void __stdcall sub_6805d0(void* pThis);
    void* __stdcall sub_6b3540(void* pThis, CRect* pRect);
    void __stdcall InflateRect(CRect* pRect, int dx, int dy);
    void* __stdcall sub_77dcc8(void* pThis, int a, void* p);
    void* __stdcall sub_77dd98(void* pThis, void* p);
    void __stdcall sub_77ddbc(void* pThis);
    void __stdcall sub_77ed90(void* pThis, int a, void* p, int b, int c);
}

void CXTPControlGalleryOffice2007Theme::DrawItem(CDC* pDC, int nIndex, CRect rcItem, int nState)
{
    void* pGallery = *(void**)((char*)this + 0x28);
    void* pItem = sub_63cd70(pGallery, 0x38);
    CRect rc;
    sub_6308b0(pDC, &rc, pItem);
    int left = rc.left;
    int right = rc.right;
    int top = rc.top;
    int bottom = rc.bottom;
    sub_7383ca(pDC, left, bottom - 1, right - left, 1, 0xc5c5c5);
    CRect rc2;
    sub_680550((char*)pGallery + 0xe0, pDC, &rc2);
    CPoint pt;
    pt.x = rc.left;
    pt.y = rc.top;
    CSize sz;
    sz.cx = rc.right;
    sz.cy = rc.bottom;
    sub_77ed90(pDC, 0, &pt, -0xa, 0);
    void** vtbl = *(void***)pDC;
    void* pObj = sub_63cd70(pGallery, 0x2c);
    ((void (__stdcall*)(void*, void*))vtbl[0x38/4])(pDC, pObj);
    void* pFont = sub_6b3540(pDC, &rc2);
    void** vtbl2 = *(void***)pDC;
    void* pFont2 = sub_77dcc8(pFont, 0x8024, &rc2);
    void* pFont3 = sub_77dd98(pFont, pFont2);
    ((void (__stdcall*)(void*, void*))vtbl2[0x70/4])(pDC, pFont3);
    sub_77ddbc(&rc2);
    sub_6805d0(&rc2);
}
