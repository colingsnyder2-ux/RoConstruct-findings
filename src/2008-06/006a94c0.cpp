// from server: 68% by colin
extern "C" {
    int __stdcall GetClassNameA(void* hWnd, char* lpClassName, int nMaxCount);
    int __stdcall _mbscmp(const unsigned char* s1, const unsigned char* s2);
    int __stdcall PostMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    long __stdcall CallNextHookEx(void* hhk, int nCode, unsigned int wParam, long lParam);
}

struct CXTPControlEditCtrl {
    void sub_6a9460(void* p);
};

extern void* g_97e044;
extern void* g_97e040;

void __stdcall func_6a94c0(int a1, int a2, int a3)
{
    char className[260];
    void* p = (void*)a3;
    if (p != 0) {
        void* ctrl = g_97e044;
        if (ctrl != 0) {
            if (*(int*)((char*)p + 8) == 0x46) {
                int v = *(int*)((char*)ctrl + 8);
                int* edx = *(int**)p;
                if (v != 0) {
                    if (v == *edx) {
                        if ((*(unsigned char*)((char*)edx + 0x18) & 0x80) != 0) {
                            ((CXTPControlEditCtrl*)ctrl)->sub_6a9460(0);
                        }
                    }
                } else {
                    if ((*(unsigned char*)((char*)edx + 0x18) & 0x40) != 0) {
                        void* hwnd = (void*)*edx;
                        GetClassNameA(hwnd, className, 0xff);
                        if (_mbscmp((const unsigned char*)className, (const unsigned char*)"Auto-Suggest Dropdown") == 0) {
                            void* ctrl2 = g_97e044;
                            ((CXTPControlEditCtrl*)ctrl2)->sub_6a9460(hwnd);
                            void* ctrl3 = g_97e044;
                            void* h = *(void**)((char*)ctrl3 + 0xc);
                            PostMessageA(h, 0x2872, 0, 0);
                        }
                    }
                }
            }
        }
    }
    CallNextHookEx(g_97e040, a1, (unsigned int)a2, (long)a3);
}
