// from server: 62% by colin
// roc 2007-08 004201a0  unit: CRobloxTreeCtrl  size: 147 bytes

extern "C" __declspec(dllimport) void __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0x70];
    void* ptr94;
    char pad3[0x0c];
    char flag_a4;
    void sub_4201a0();
};

void CRobloxTreeCtrl::sub_4201a0() {
    char* pflag = &flag_a4;
    char saved = *pflag;
    *pflag = 1;
    if (hwnd != 0) {
        SendMessageA(hwnd, 0x1101, 0, 0xffff0000);
        void* p = ptr94;
        if (p != 0) {
            void** vt = *(void***)p;
            typedef void (__stdcall *Fn)(void*, int);
            Fn f = (Fn)vt[1];
            f(p, 1);
            ptr94 = 0;
        }
    }
    *pflag = saved;
}
