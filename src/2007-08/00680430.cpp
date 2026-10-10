// from server: 36% by colin
struct CXTPBufferDC {
    void* vtable;
    void* m_hDC;
    int m_nSavedDC;
    int m_xSrc;
    int m_ySrc;
    int m_xDst;
    int m_yDst;
    int m_cx;
    int m_cy;
    void* m_hOldBitmap;
    void* m_hBitmap;
    void Release();
    ~CXTPBufferDC();
};

extern "C" {
    int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
    void* __stdcall SelectObject(void*, void*);
    void __stdcall sub_41F680();
    void __stdcall sub_7383DC();
}

void CXTPBufferDC::Release()
{
    if (m_hDC != 0)
    {
        if (m_hBitmap != 0)
        {
            BitBlt(m_hDC, m_xDst, m_yDst, m_cx, m_cy, m_hBitmap, m_xSrc, m_ySrc, 0x00CC0020);
        }
        SelectObject(m_hDC, m_hOldBitmap);
    }
}

CXTPBufferDC::~CXTPBufferDC()
{
    vtable = (void*)0x7CEC54;
    Release();
    *(void**)((char*)this + 0x14) = (void*)0x788300;
    sub_41F680();
    sub_7383DC();
}
