// from server: 75% by colin
// roc 2007-08 0070d0e0  unit: CXTColorWnd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d0e0

struct RECT {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" __declspec(dllimport) int __stdcall GetClientRect(void* hWnd, RECT* lpRect);
extern "C" int __cdecl sub_630D60(double value);

struct CXTColorWnd {
    char pad_0000[0x20];
    void* m_hWnd;
    char pad_0024[0x54];
    double m_value78;
    int m_value80;
    int m_value84;
    void SetValue(double value);
};

void CXTColorWnd::SetValue(double value) {
    RECT rect;
    m_value78 = value;
    GetClientRect(m_hWnd, &rect);
    int width = rect.right - rect.left;
    m_value80 = sub_630D60((double)width * value);
    void (__thiscall *fn)(CXTColorWnd*, int, int, int) =
        *(void (__thiscall **)(CXTColorWnd*, int, int, int))((*(int*)this) + 0x14c);
    fn(this, m_value80, m_value84, 0);
}
