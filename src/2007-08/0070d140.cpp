// from server: 62% by colin
// roc 2007-08 0070d140  unit: CXTColorWnd  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d140

extern "C" int __stdcall GetClientRect(void* hWnd, void* lpRect);
extern "C" int __cdecl sub_630d60(double value);

struct RECT {
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTColorWnd {
    void* vtbl;
    char pad[0x1c];
    void* m_hWnd;
    char pad2[0x4c];
    double m_dbl70;
    char pad3[0x8];
    int m_n80;
    int m_n84;
    void OnSetFocus(void* pWnd, double dbl);
};

void CXTColorWnd::OnSetFocus(void* pWnd, double dbl) {
    RECT rc;
    m_dbl70 = dbl;
    GetClientRect(m_hWnd, &rc);
    int right = rc.right;
    int left = rc.left;
    int width = right - left;
    int scaled = sub_630d60((double)width * dbl);
    int result = right - scaled - left;
    m_n84 = result;
    void (__thiscall *fn)(CXTColorWnd*, int, int, int) =
        *(void (__thiscall **)(CXTColorWnd*, int, int, int))((char*)vtbl + 0x14c);
    fn(this, m_n80, result, 0);
}
