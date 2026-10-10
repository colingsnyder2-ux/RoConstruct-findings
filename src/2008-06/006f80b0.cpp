// from server: 63% by atomic.potato
extern "C" int (__stdcall *SelectObject)(int, int);

struct CXTPBitmapDC
{
    int m_pDC;
    int m_hBitmap;
    int m_rect;
    int m_oldBitmap;
    int m_extra;
    CXTPBitmapDC& f();
};

CXTPBitmapDC& CXTPBitmapDC::f()
{
    SelectObject(m_oldBitmap, m_extra);
    m_pDC = 0x85a6c0;
    m_hBitmap = 0x80e068;
    return *this;
}
