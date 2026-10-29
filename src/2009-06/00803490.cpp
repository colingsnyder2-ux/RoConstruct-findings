// from server: 17% by atomic.potato
// roc 2009-06 00803490  unit: CXTColorLum  size: 1004 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00803490

extern "C" {
int __stdcall GetClientRect(void*, void*);
int __stdcall SetPixel(void*, int, int, unsigned long);
}

struct CString {
    void* m_pData;
    CString();
    ~CString();
    CString(const CString&);
};

struct CXTColorLum {
    char pad0[4];
    void* m_hdc;
    char pad8[0x18];
    void* m_wnd;
    char pad24[0x50];
    int m_nMin;
    char pad78[0x10];
    int m_nMax;
    void Draw();
};

struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

void __stdcall sub_803350(void* p);
void __stdcall sub_84C69E(void* p, void* a, int b, int c);
void* __stdcall sub_754B20();
void* __stdcall sub_7542A0(void* p, int n);
void* __stdcall sub_84C698(void* p, void* q);
void __stdcall sub_71990E(void* p, void* q, int a, int b);
void __stdcall sub_719908(void* p, int a, int b);
void __stdcall sub_40F4D0(void* p);

extern void* g_89EE14;
extern void* g_89E0D4;
extern void* g_8FB668;
extern int g_A52ACC;

void CXTColorLum::Draw()
{
    CRect rc;
    CPoint pt;
    int x, y;

    GetClientRect(m_wnd, &rc);
    x = rc.left + 0x11;
    y = m_nMin;
    sub_803350(&pt);
    if (pt.x > y) y = pt.x;
    if (pt.y < y) y = pt.y;

    CString s1;
    sub_84C69E(&s1, 0, 1, 0);
    void* p = sub_754B20();
    p = sub_7542A0(p, 0x10);
    CString s2;
    sub_84C69E(&s2, p, 1, 0);

    void* n;
    if (g_A52ACC == 2) {
        n = sub_84C698(&s1, &s2);
    } else {
        n = sub_84C698(&s1, &s2);
    }

    sub_71990E(m_hdc, &n, x + 7, y - 4);
    sub_719908(m_hdc, x + 9, y - 4);
    sub_71990E(m_hdc, &n, x + 5, y - 3);
    sub_719908(m_hdc, x + 9, y - 3);
    sub_71990E(m_hdc, &n, x + 3, y - 2);
    sub_719908(m_hdc, x + 9, y - 2);
    sub_71990E(m_hdc, &n, x + 1, y - 1);
    sub_719908(m_hdc, x + 9, y - 1);
    sub_71990E(m_hdc, &n, x, y);
    sub_719908(m_hdc, x + 9, y);
    sub_71990E(m_hdc, &n, x + 2, y + 1);
    sub_719908(m_hdc, x + 9, y + 1);
    sub_71990E(m_hdc, &n, x + 4, y + 2);
    sub_719908(m_hdc, x + 9, y + 2);
    sub_71990E(m_hdc, &n, x + 6, y + 3);
    sub_719908(m_hdc, x + 9, y + 3);
    sub_71990E(m_hdc, &n, x + 8, y + 4);
    sub_719908(m_hdc, x + 9, y + 4);

    if (g_A52ACC != 2) {
        SetPixel(m_hdc, x, y, 0);
        SetPixel(m_hdc, x + 1, y, 0);
        SetPixel(m_hdc, x + 2, y - 1, 0);
        SetPixel(m_hdc, x + 3, y - 1, 0);
        SetPixel(m_hdc, x + 4, y - 2, 0);
        SetPixel(m_hdc, x + 5, y - 2, 0);
        SetPixel(m_hdc, x + 6, y - 3, 0);
        SetPixel(m_hdc, x + 7, y - 3, 0);
        SetPixel(m_hdc, x + 8, y - 4, 0);
        SetPixel(m_hdc, x + 9, y - 4, 0);
        SetPixel(m_hdc, x + 9, y - 3, 0);
        SetPixel(m_hdc, x + 9, y - 2, 0);
        SetPixel(m_hdc, x + 9, y - 1, 0);
        SetPixel(m_hdc, x + 9, y, 0);
        SetPixel(m_hdc, x + 9, y + 1, 0);
        SetPixel(m_hdc, x + 9, y + 2, 0);
        SetPixel(m_hdc, x + 9, y + 3, 0);
        SetPixel(m_hdc, x + 9, y + 4, 0);
        SetPixel(m_hdc, x + 8, y + 4, 0);
        SetPixel(m_hdc, x + 7, y + 4, 0);
        SetPixel(m_hdc, x + 6, y + 4, 0);
        SetPixel(m_hdc, x + 5, y + 4, 0);
        SetPixel(m_hdc, x + 4, y + 4, 0);
        SetPixel(m_hdc, x + 3, y + 4, 0);
        SetPixel(m_hdc, x + 2, y + 4, 0);
        SetPixel(m_hdc, x + 1, y + 4, 0);
        SetPixel(m_hdc, x, y + 4, 0);
        SetPixel(m_hdc, x, y + 3, 0);
        SetPixel(m_hdc, x, y + 2, 0);
        SetPixel(m_hdc, x, y + 1, 0);
        SetPixel(m_hdc, x, y, 0);
    }

    sub_84C698(&s1, &s2);
    s1.m_pData = g_8FB668;
    sub_40F4D0(&s1);
    s2.m_pData = g_8FB668;
    sub_40F4D0(&s2);
}
