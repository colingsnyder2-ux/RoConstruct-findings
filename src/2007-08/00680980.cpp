// from server: 10% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall GetDesktopWindow();
    __declspec(dllimport) void* __stdcall GetDCEx(void*, void*, unsigned long);
    __declspec(dllimport) void* __stdcall GetCapture();
    __declspec(dllimport) int __stdcall ReleaseCapture();
    __declspec(dllimport) void* __stdcall SetCapture(void*);
    __declspec(dllimport) int __stdcall ReleaseDC(void*, void*);
    __declspec(dllimport) int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
    __declspec(dllimport) int __stdcall DispatchMessageA(const void*);
    __declspec(dllimport) int __stdcall ClientToScreen(void*, void*);
    __declspec(dllimport) int __stdcall IsRectEmpty(const void*);
    __declspec(dllimport) int __stdcall OffsetRect(void*, int, int);
    __declspec(dllimport) int __stdcall LockWindowUpdate(void*);
}

extern "C" void* __stdcall sub_6301C0(void*);
extern "C" void* __stdcall sub_7383BE(void*);

struct CXTPBitmapDC {
    void* m_pBitmap;
    char pad_04[4];
    int m_rect[4];
    int m_bDragging;
    char pad_1C[0x24 - 0x1C];
    void sub_680910(int*);
    void sub_680980(void*);
};

void CXTPBitmapDC::sub_680980(void* pMsg)
{
    void* hwnd = *(void**)((char*)pMsg + 0x20);
    void* hdc = GetDCEx(hwnd, 0, 0);
    void* dc = sub_6301C0(hdc);
    m_pBitmap = 0;

    void* desktop = GetDesktopWindow();
    void* deskdc = sub_6301C0(desktop);
    void* src = *(void**)((char*)deskdc + 0x20);

    if (GetCapture()) {
        void* h = *(void**)((char*)deskdc + 0x20);
        sub_7383BE((void*)0);
    } else {
        void* h = *(void**)((char*)deskdc + 0x20);
        sub_7383BE((void*)0);
    }
}
