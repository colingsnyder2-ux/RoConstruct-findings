// from server: 55% by colin
// roc 2007-08 0068a720  unit: CXTPTabClientWnd::CSingleWorkspace  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a720

extern "C" {
    int __stdcall GetWindowRect(void*, void*);
}

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

struct CString {
    void* data;
    CString();
    ~CString();
    CString(const CString&);
    CString& operator=(const CString&);
};

struct CXTPTabClientWnd_CSingleWorkspace {
    char pad0[0x58];
    void* m_pTabClientWnd;
    char pad1[0x88];
    void* m_pWindow;
    char pad2[0xbc];
    void OnDraw();
};

void CXTPTabClientWnd_CSingleWorkspace::OnDraw() {
    CString str1;
    CString str2;
    CRect rect;
    CPoint pt;
    void* pWnd;
    void* pTab;
    int x, y, w, h;

    pWnd = *(void**)((char*)this + 0xe4);
    if (pWnd != 0) {
        GetWindowRect(*(void**)((char*)pWnd + 0x20), &rect);
        ((void(__thiscall*)(void*, CRect*))0x6309f4)(this, &rect);
        ((void(__thiscall*)(void*, CRect*))0x738a18)(&str1, &rect);
        ((void(__thiscall*)(void*, CRect*))0x738a18)(&str2, &rect);
    }

    pTab = *(void**)((char*)this + 0x58);
    x = rect.left;
    y = rect.top;
    w = rect.right;
    h = rect.bottom;

    void* pVtbl = *(void**)pTab;
    void* pFunc = *(void**)((char*)pVtbl + 0x2c);
    ((void(__thiscall*)(void*))pFunc)((char*)this + 0x58);

    void* pVtbl2 = *(void**)pTab;
    void* pFunc2 = *(void**)((char*)pVtbl2 + 0x58);
    ((void(__thiscall*)(void*, void*, int, int, int, int))pFunc2)(pTab, (char*)this + 0x58, x, y, w, h);
}
