// from server: 65% by atomic.potato
struct CXTPBitmapDC
{
    int m_value;
    int m_object;
    int m_hdc;
    int m_hbitmap;
    int m_unused;
    CXTPBitmapDC& f();
};

extern "C" int __stdcall SelectObject(int, int);
extern "C" void Function4111A0(CXTPBitmapDC*);

CXTPBitmapDC& CXTPBitmapDC::f()
{
    SelectObject(m_hdc, m_hbitmap);
    m_value = 0x85a6b8;
    m_object = 0x85a610;
    Function4111A0(this);
    return *this;
}
