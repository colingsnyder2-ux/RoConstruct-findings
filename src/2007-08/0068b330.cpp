// from server: 77% by colin
// roc 2007-08 0068b330  unit: CXTPTabClientWnd  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b330

extern "C" {
    typedef unsigned int DWORD;
    typedef int BOOL;
    typedef void* HWND;

    DWORD __stdcall SendMessageA(HWND hWnd, DWORD Msg, DWORD wParam, DWORD lParam);
    BOOL __stdcall RedrawWindow(HWND hWnd, const void* lprcUpdate, void* hrgnUpdate, DWORD flags);
}

struct CXTPTabClientWnd {
    char pad_00[0x20];
    HWND m_hWnd;            // 0x20
    char pad_24[0x90];
    int m_nSomething;       // 0xb4
    char pad_b8[0x5c];
    int m_nSomething2;      // 0x114

    int sub_63023e();
    int MDIGetActive(int, int);
};

int CXTPTabClientWnd::MDIGetActive(int, int) {
    int result;
    if (this->m_nSomething != 0 || this->m_nSomething2 != 0) {
        result = this->sub_63023e();
        (*(void(__thiscall**)(CXTPTabClientWnd*))(*(int*)this + 0x13c))(this);
        return result;
    }

    SendMessageA(this->m_hWnd, 0xb, 0, 0);
    result = this->sub_63023e();
    SendMessageA(this->m_hWnd, 0xb, 1, 0);
    RedrawWindow(this->m_hWnd, 0, 0, 0x185);
    (*(void(__thiscall**)(CXTPTabClientWnd*))(*(int*)this + 0x13c))(this);
    return result;
}
