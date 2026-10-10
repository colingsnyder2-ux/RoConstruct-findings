// from server: 78% by colin
// roc 2007-08 006a0e30  unit: CXTPNewToolbarDlg  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0e30

extern "C" {
    typedef struct { long x; long y; } POINT;
    typedef void* HCURSOR;
    typedef void* HWND;

    __declspec(dllimport) int __stdcall GetCursorPos(POINT* lpPoint);
    __declspec(dllimport) HCURSOR __stdcall LoadCursorA(HWND hInstance, const char* lpCursorName);
    __declspec(dllimport) HWND __stdcall SetCapture(HWND hWnd);
    __declspec(dllimport) int __stdcall ReleaseCapture(void);
    __declspec(dllimport) HCURSOR __stdcall SetCursor(HCURSOR hCursor);
}

struct CXTPNewToolbarDlg {
    void* m_p0;
    void* m_p4;
    int m_n8;
    void* m_pC;
    void* m_p10;
    char m_pad14[0x20];
    void* m_p34;
    char m_pad38[0x18];
    POINT m_pt50;
    int sub_6a0b00();
    int sub_6a0e30(void* p1, void* p2);
};

int CXTPNewToolbarDlg::sub_6a0e30(void* p1, void* p2) {
    void* eax = m_p0;
    if (m_p0 == 0) {
        eax = *(void**)((char*)m_p34 + 0xa0);
    }
    m_p4 = p1;
    if (eax != 0) {
        eax = *(void**)((char*)eax + 0x20);
    }
    m_p0 = eax;
    SetCapture((HWND)eax);
    m_n8 = 0;
    m_p10 = 0;
    m_pC = p2;
    GetCursorPos(&m_pt50);
    int result = sub_6a0b00();
    void* ecx = m_p10;
    if (ecx != 0) {
        void** vtbl = *(void***)ecx;
        void (*fn)(void*) = *(void (**)(void*))((char*)vtbl + 0x16c);
        fn(ecx);
    }
    ReleaseCapture();
    LoadCursorA(0, (const char*)0x7f00);
    SetCursor(0);
    return result;
}
