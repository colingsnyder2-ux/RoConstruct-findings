// from server: 3% by colin
// roc 2007-08 00694550  unit: CXTPToolTipContext::CLunaToolTip  size: 837 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694550

extern "C" {
    __declspec(dllimport) int __stdcall GetTextExtentPoint32A(void*, const char*, int, void*);
    __declspec(dllimport) unsigned long __stdcall GetWindowLongA(void*, int);
}

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

struct CPoint {
    int x;
    int y;
};

struct CDC;
struct CWnd;

struct CXTPToolTipContext {
    struct CLunaToolTip {
        void Draw(CDC* pDC, CWnd* pWnd, CPoint pt, CRect rc, int nFlags);
    };
};

void CXTPToolTipContext::CLunaToolTip::Draw(CDC* pDC, CWnd* pWnd, CPoint pt, CRect rc, int nFlags)
{
    CSize sz;
    GetTextExtentPoint32A(0, 0, 0, &sz);
}
