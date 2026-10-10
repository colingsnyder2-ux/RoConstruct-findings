// from server: 38% by colin
struct CXTPPropertyGridView {
    void* m_pData;
    void GetTextExtent(int, int, int, int, int*);
};

struct CString {
    char* m_pData;
    int m_nLength;
    int m_nAllocLength;
    CString();
    ~CString();
    CString(const CString&);
    CString& operator=(const CString&);
};

struct CSize {
    int cx;
    int cy;
};

extern "C" {
    int __stdcall GetTextExtentPoint32A(void*, const char*, int, CSize*);
}

extern void* g_pFont;
extern void* g_pDC;

void CXTPPropertyGridView::GetTextExtent(int a, int b, int c, int d, int* pResult)
{
    CString str;
    CSize size;
    void* pFont;
    void* pDC;
    void* pOldFont;
    int len;
    char* psz;

    pFont = g_pFont;
    pDC = g_pDC;

    // Build string via virtual call
    // (placeholder for the actual string construction)
    str.m_pData = 0;
    str.m_nLength = 0;
    str.m_nAllocLength = 0;

    // Get text extent
    pOldFont = 0;
    GetTextExtentPoint32A(pDC, str.m_pData, str.m_nLength, &size);

    pResult[0] = size.cx;
    pResult[1] = size.cy;

    str.~CString();
}
