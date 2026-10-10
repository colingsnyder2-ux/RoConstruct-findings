// from server: 65% by tester
struct CXTPBitmapDC
{
    int* m_pDC;
    int m_hBitmap;
    int m_rect[4];
    void f(int, int, int, int);
};

extern "C" int __stdcall InvertRect(int*, int*);
extern "C" int __stdcall PatBlt(int, int, int, int, int, int);
extern "C" int __stdcall GetDC(int);
extern "C" int __stdcall SelectObject(int*, int);
extern "C" int __stdcall ReleaseDC(int, int);

void CXTPBitmapDC::f(int a, int b, int c, int d)
{
    if (m_hBitmap != 0)
    {
        InvertRect(m_pDC, m_rect);
        return;
    }
    int hdc = GetDC(0);
    int old = SelectObject(m_pDC, hdc);
    PatBlt(m_pDC[1], a, b, c - a, d - b, 0x5a0049);
    SelectObject(m_pDC, old);
    ReleaseDC(0, hdc);
}
