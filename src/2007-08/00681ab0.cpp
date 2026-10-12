// from server: 19% by colin
struct CXTPPrintPageHeaderFooter {
    char pad0[0x20];
    char field20[0x3c];
    int field5c;
    char pad60[4];
    int field64;
    int field68;
    int field6c;
    int field70;
    void DrawHeaderFooter(int, int, int);
};

struct CXTPControlSelector {
    int m_nUnknown0;
    void* m_pUnknown4;
    void* m_pUnknown8;
    int m_nUnknownC;
    void Set(void* p);
    void SetValue(int nValue);
};

struct CXTPBitmapDC {
    int m_nType;
    int m_hBitmap;
    int m_rect[4];
    void Set(void* p);
    ~CXTPBitmapDC();
};

struct CFont {
    void* m_hFont;
};

struct CSize {
    int cx;
    int cy;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CString {
    void* m_pData;
    CString();
    ~CString();
};

struct CPrintInfo {
    int m_nCurPage;
};

struct CDC {
    void* m_hDC;
    void* m_hAttribDC;
    void SelectObject(void* p);
    void TextOutA(int x, int y, const char* psz, int n);
    void DrawTextA(const char* psz, int n, void* pRect, unsigned int nFormat);
};

struct CFontInfo {
    int m_nHeight;
    int m_nWidth;
    int m_nEscapement;
    int m_nOrientation;
    int m_nWeight;
    unsigned char m_bItalic;
    unsigned char m_bUnderline;
    unsigned char m_bStrikeOut;
    unsigned char m_bCharSet;
    unsigned char m_bOutPrecision;
    unsigned char m_bClipPrecision;
    unsigned char m_bQuality;
    unsigned char m_bPitchAndFamily;
    char m_szFaceName[32];
};

extern "C" {
    void* __stdcall GetStockObject(int nIndex);
    void* __stdcall CreateFontIndirectA(const void* lpLogFont);
    int __stdcall GetDeviceCaps(void* hdc, int nIndex);
}

extern void* g_pfnGetDC;
extern void* g_pfnGetTextExtent;
extern void* g_pfnGetTextExtentPoint32A;
extern void* g_pfnGetTextMetricsA;

void CXTPPrintPageHeaderFooter::DrawHeaderFooter(int nPage, int nWidth, int nHeight)
{
    CString str;
    CFontInfo lf;
    CSize size;
    CRect rect;
    CXTPBitmapDC dc;
    void* hFont;
    void* hOldFont;
    int nOldMode;
    int nTextHeight;
    int nTextWidth;
    int nResult;
    int nOffset;
    int nExtra;
    int nAlign;
    int nY;
    int nX;

    lf.m_nHeight = 0;
    lf.m_nWidth = 0;
    lf.m_nEscapement = 0;
    lf.m_nOrientation = 0;
    lf.m_nWeight = 0;
    lf.m_bItalic = 0;
    lf.m_bUnderline = 0;
    lf.m_bStrikeOut = 0;
    lf.m_bCharSet = 0;
    lf.m_bOutPrecision = 0;
    lf.m_bClipPrecision = 0;
    lf.m_bQuality = 0;
    lf.m_bPitchAndFamily = 0;
    lf.m_szFaceName[0] = 0;

    hFont = CreateFontIndirectA(&lf);
    hOldFont = 0;

    dc.Set(0);
    dc.m_nType = 0;
    dc.m_hBitmap = 0;
    dc.m_rect[0] = 0;
    dc.m_rect[1] = 0;
    dc.m_rect[2] = 0;
    dc.m_rect[3] = 0;

    nTextHeight = 0;
    nTextWidth = 0;
    nResult = 0;
    nOffset = 0;
    nExtra = 0;
    nAlign = 0;
    nY = 0;
    nX = 0;

    if (this->field70 != 0) {
        nY = this->field64 + nExtra + nResult;
        this->field6c = nY;
    } else {
        nY = this->field6c - nExtra - nResult;
        this->field64 = nY;
    }

    if (nPage != 0) {
        return;
    }

    nOldMode = 0;
    nTextHeight = 0;
    nTextWidth = 0;
    nResult = 0;
    nOffset = 0;
    nExtra = 0;
    nAlign = 0;
    nY = 0;
    nX = 0;

    (void)hFont;
    (void)hOldFont;
    (void)nOldMode;
    (void)nTextHeight;
    (void)nTextWidth;
    (void)nResult;
    (void)nOffset;
    (void)nExtra;
    (void)nAlign;
    (void)nY;
    (void)nX;
    (void)size;
    (void)rect;
    (void)str;
}
