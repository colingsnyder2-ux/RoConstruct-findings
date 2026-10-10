// from server: 61% by colin
extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentThreadId(void);
extern "C" __declspec(dllimport) void *__stdcall SetWindowsHookExA(int, void *, void *, unsigned long);
extern "C" __declspec(dllimport) int __stdcall UnhookWindowsHookEx(void *);

extern "C" void *__cdecl sub_62FF02(void);
extern "C" void __cdecl sub_62FF20(void);
extern "C" void __cdecl sub_6384D0(void);
extern "C" void __cdecl sub_6A3640(void);
extern "C" void __cdecl sub_6A3680(void);
extern "C" void __cdecl sub_73836A(void);

extern void *g_8C86B8;
extern void *g_8C86BC;

struct CXTPEdit {
    void sub_6384D0(int);
    void sub_639460(int);
};

void CXTPEdit::sub_639460(int arg) {
    if (arg != 0) {
        if (g_8C86B8 == 0) {
            void *p = sub_62FF02();
            void *q = *(void **)((char *)p + 8);
            unsigned long tid = GetCurrentThreadId();
            g_8C86B8 = SetWindowsHookExA(4, (void *)0x638530, q, tid);
            sub_73836A();
            if (g_8C86B8 == 0) {
                sub_62FF20();
            }
            sub_6A3640();
            g_8C86BC = (void *)arg;
            return;
        }
    } else {
        if (g_8C86B8 != 0 && g_8C86BC == (void *)arg) {
            UnhookWindowsHookEx(g_8C86B8);
            sub_73836A();
            if (g_8C86B8 == 0) {
                sub_62FF20();
            }
            sub_6A3680();
            g_8C86B8 = 0;
            g_8C86BC = 0;
        }
        sub_6384D0(0);
    }
}
