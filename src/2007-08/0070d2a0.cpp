// from server: 63% by colin
// roc 2007-08 0070d2a0  unit: CXTColorLum  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d2a0

struct CXTColorLum {
    char pad_00[0x68];
    double m_dValue;      // +0x68
    char pad_70[0x10];
    int m_nMin;           // +0x80
    int m_nPos;           // +0x84
    int m_nMax;           // +0x88
    void sub_70d210(int* p);
    void SetPos(int nPos, int bRedraw);
};

extern "C" int __cdecl sub_630d60(double d);

void CXTColorLum::SetPos(int nPos, int bRedraw)
{
    int lo;
    int hi;
    int v;
    int delta;

    m_dValue = *(double*)((char*)&nPos + 4);

    sub_70d210(&lo);

    hi = *(int*)((char*)&nPos + 8);
    v = lo;
    delta = (int)((double)(hi - v) * *(double*)((char*)&nPos + 16));
    delta = sub_630d60((double)delta);
    hi = hi - delta - v;

    m_nMax = hi;
    m_nPos = hi;

    ((void (__thiscall*)(CXTColorLum*, int, int, int))*(void**)(*(int*)this + 0x14c))(this, m_nMin, hi, 0);
}
