// from server: 61% by colin
extern "C" {
    int __stdcall GetClassNameA(void* hWnd, char* lpClassName, int nMaxCount);
    int __stdcall _mbscmp(const unsigned char* s1, const unsigned char* s2);
    int __stdcall PostMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    int __stdcall CallNextHookEx(void* hhk, int nCode, unsigned int wParam, long lParam);
}

struct Ctl {
    void sub_6384D0(int);
};

extern Ctl* g_6386BC;
extern void* g_6386B8;
extern unsigned int g_8B5188;

struct S {
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    char buf[256];
    int cookie;

    cookie = g_8B5188 ^ (int)&cookie;

    if (a != 0 && g_6386BC != 0 && *(int*)(a + 8) == 0x46) {
        int* p = *(int**)a;
        int v = *(int*)((char*)g_6386BC + 8);
        if (v != 0) {
            if (v == p[0] && (*(unsigned char*)((char*)p + 0x18) & 0x80)) {
                g_6386BC->sub_6384D0(0);
            }
        } else {
            if (*(unsigned char*)((char*)p + 0x18) & 0x40) {
                int hwnd = p[0];
                GetClassNameA((void*)hwnd, buf, 0xff);
                if (_mbscmp((const unsigned char*)buf, (const unsigned char*)0x7c6078) == 0) {
                    g_6386BC->sub_6384D0(hwnd);
                    PostMessageA(*(void**)((char*)g_6386BC + 0xc), 0x2872, 0, 0);
                }
            }
        }
    }

    CallNextHookEx(g_6386B8, b, c, a);

    return 0;
}
