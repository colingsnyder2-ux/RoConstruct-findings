// from server: 58% by tester
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

struct CXTPBitmapDC {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    CXTPBitmapDC(int a, int b);
    ~CXTPBitmapDC();
};

struct I_func_0069ab30 {
    char pad[316];
    int m_x;
};

struct S_func_0069ab30 {
    char pad[176];
    I_func_0069ab30* m_p;
    int f();
};

extern "C" int __stdcall GetTextExtentPoint32A(void*, const char*, int, CSize*);
extern "C" int __stdcall sub_67F2F0(int);

extern void* g_pFont;
extern void* g_pDC;

void CXTPPropertyGridView::GetTextExtent(int a, int b, int c, int d, int* pResult)
{
    CString str;
    CSize size;
    CXTPBitmapDC dc(0, 0);
    S_func_0069ab30* pObj;
    void* pFont;
    void* pDC;
    void* pOldFont;
    int len;
    char* psz;

    pFont = g_pFont;
    pDC = g_pDC;

    pObj = (S_func_0069ab30*)this->m_pData;
    pObj->f();

    GetTextExtentPoint32A(pDC, str.m_pData, str.m_nLength, &size);

    pResult[0] = size.cx;
    pResult[1] = size.cy;
}
