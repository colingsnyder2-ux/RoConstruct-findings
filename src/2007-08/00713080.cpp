// from server: 52% by colin
// roc 2007-08 00713080 461 bytes
// Reconstructed from disassembly evidence.

extern "C" {
    typedef unsigned int DWORD;
    typedef int BOOL;
    typedef void* HWND;
    typedef void* HRGN;
    typedef void* HCURSOR;
    typedef void* HINSTANCE;
    typedef void* HANDLE;

    struct tagRECT {
        long left;
        long top;
        long right;
        long bottom;
    };
    typedef struct tagRECT RECT;
    typedef RECT* LPRECT;
    typedef const RECT* LPCRECT;

    __declspec(dllimport) BOOL __stdcall IsRectEmpty(const RECT*);
    __declspec(dllimport) HCURSOR __stdcall LoadCursorA(HINSTANCE, const char*);
    __declspec(dllimport) BOOL __stdcall SetRect(LPRECT, int, int, int, int);
    __declspec(dllimport) BOOL __stdcall SetRectEmpty(LPRECT);
    __declspec(dllimport) int __stdcall SetWindowRgn(HWND, HRGN, BOOL);

    __declspec(dllimport) HRGN __stdcall CreateRectRgn(int, int, int, int);
    __declspec(dllimport) BOOL __stdcall DeleteObject(HANDLE);
}

struct CXTShadowWnd;

extern "C" {
    void* __cdecl sub_62FF02();
    void* __cdecl sub_6303D0();
    void* __cdecl sub_6304F6(int, void*, int, int);
    void* __cdecl sub_67FF60(void*, int, int, int);
    void* __cdecl sub_712EC0();
    void* __cdecl sub_712590(void*);
    void* __cdecl sub_7125A0(void*);
    void __cdecl sub_630034(void*, int, int, int, int, int);
}

extern DWORD g_dwCookie;

extern void* (__stdcall *g_pfn_77dd98)(void*, int, int, void*);
extern void* (__stdcall *g_pfn_77ddb8)(void*);
extern void* (__stdcall *g_pfn_77ddbc)();
extern void* (__stdcall *g_pfn_77ec20)();
extern void* (__stdcall *g_pfn_77ec80)();
extern void* (__stdcall *g_pfn_77ed78)(void*, int, int, int, int);
extern void* (__stdcall *g_pfn_77eddc)(void*);
extern void* (__stdcall *g_pfn_77ee14)(void*);

struct CXTShadowWnd {
    char pad_00[0x20];
    HWND m_hWnd;
    char pad_24[0x30];
    DWORD m_dw54;
    char pad_58[0x04];
    DWORD m_dw5c;
    void* m_p60;
    void* m_p64;

    int Init(int a2, int a3, int a4, int a5, int a6);
};

int CXTShadowWnd::Init(int a2, int a3, int a4, int a5, int a6)
{
    void* p;
    DWORD flags;
    RECT rc;
    RECT rc2;
    HCURSOR hCursor;
    int result;

    p = sub_712EC0();
    m_p60 = sub_712590(p);

    p = sub_712EC0();
    m_p64 = sub_7125A0(p);

    if (m_hWnd != 0) {
        goto loc_713187;
    }

    flags = 0;
    if (m_p60 != 0) {
        flags = 0x80000;
    }

    sub_62FF02();
    hCursor = LoadCursorA(0, (const char*)0x7f00);
    p = sub_6304F6(0, hCursor, 0, 0);
    g_pfn_77ddb8(p);

    *(DWORD*)((char*)&rc + 0x2c) = 0;

    p = sub_6303D0();
    if (p != 0) {
        void** vtbl = *(void***)p;
        void* (__stdcall *fn)(void*) = (void* (__stdcall *)(void*))vtbl[0x7c/4];
        result = (int)fn(p);
    } else {
        result = 0;
    }

    void** vtbl = *(void***)this;

    sub_67FF60(&rc2, 0, 0, result);
    g_pfn_77dd98(&rc, 0x80000000, 0, &rc2);

    flags |= 0x80;

    void* (__stdcall *fn2)(void*, DWORD, void*) = (void* (__stdcall *)(void*, DWORD, void*))vtbl[0x60/4];
    result = (int)fn2(this, flags, &rc);

    if (result != 0) {
        goto loc_713179;
    }

    g_pfn_77ddbc();
    return 0;

loc_713179:
    *(DWORD*)((char*)&rc + 0x2c) = 0xffffffff;
    g_pfn_77ddbc();

loc_713187:
    SetWindowRgn(m_hWnd, 0, 0);

    if (m_p60 == 0 && m_p64 == 0) {
        m_dw54 = 2;
    } else {
        m_dw54 = 4;
    }

    m_dw5c = a5;

    if (g_pfn_77eddc(&rc) != 0) {
        g_pfn_77ee14(&rc2);
    } else {
        if (a5 != 0) {
            int v = m_dw54;
            int w = a2;
            int h = a3;
            SetRect(&rc, v, w, v + h, w + a4);
        } else {
            int v = m_dw54;
            int w = a2;
            int h = a3;
            SetRect(&rc, v, w, v + h, w + a4);
        }
        g_pfn_77ed78(&rc, a2, a3, a4, a5);
    }

    int left = rc.left;
    int top = rc.top;
    int right = rc.right;
    int bottom = rc.bottom;

    sub_630034(this, left, top, right - left, bottom - top, 0);

    return 1;
}
