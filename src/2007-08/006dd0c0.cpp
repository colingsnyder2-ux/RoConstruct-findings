// from server: 41% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall GetActiveWindow();
    __declspec(dllimport) void* __stdcall GetFocus();
    __declspec(dllimport) int __stdcall IsWindowEnabled(void*);
    __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
    __declspec(dllimport) void* __stdcall SetActiveWindow(void*);
    __declspec(dllimport) void* __stdcall SetCapture(void*);
    __declspec(dllimport) void* __stdcall SetFocus(void*);
}

extern void func_00630004();
extern void func_0063002e();
extern void* func_006301c0(void*);
extern void* func_006304f6();
extern void* func_006457a0();
extern void func_0066ea60();
extern void* func_00671140();
extern int func_00671a60();
extern int func_0068a2b0();
extern int func_006dc0e0();
extern void func_0073875a();
extern void func_00738c3a();

struct CXTPDockingPaneWindowSelect {
    int f();
};

int CXTPDockingPaneWindowSelect::f()
{
    void* pObj = *(void**)((char*)this + 0xe4);
    void* pPane = *(void**)((char*)pObj + 0xcc);
    void* hwnd = 0;
    if (pPane != 0)
        hwnd = *(void**)((char*)pPane + 0x20);

    void* active = GetActiveWindow();
    int saved = (int)active;
    unsigned int flags = 0x820;
    void* p = func_00671140();
    func_00671a60();
    if (*(unsigned char*)&p != 0)
        flags = 0x20820;

    int local = 0;
    int local2 = 0;
    int local3 = 0;
    int local4 = 0;
    void* result = func_006304f6();
    int (__stdcall *fn)(void*, unsigned int, int, int, int, int, int, int, int) = *(int (__stdcall**)(void*, unsigned int, int, int, int, int, int, int, int))((char*)*(int**)this + 0x180);
    int r = fn(this, flags, 0x80, (int)result, 0, 0, 0, 0x80000100, (int)&local);
    if (r != 0)
    {
        int (__stdcall *fn2)(void*) = *(int (__stdcall**)(void*))((char*)*(int**)this + 0x190);
        int r2 = fn2(this);
        if (r2 == 0)
        {
            int (__stdcall *fn3)(void*) = *(int (__stdcall**)(void*))((char*)*(int**)this + 0x68);
            fn3(this);
            return 0;
        }
    }
    else
    {
        int (__stdcall *fn3)(void*) = *(int (__stdcall**)(void*))((char*)*(int**)this + 0x68);
        fn3(this);
        return 0;
    }

    func_00630004();
    void* w = *(void**)((char*)this + 0x20);
    void* w2 = (void*)SendMessageA(w, 0, 0, 0);
    func_006301c0(w2);

    int b = 0;
    if (hwnd != 0)
    {
        if (IsWindowEnabled(hwnd) != 0)
        {
            func_00738c3a();
            b = 1;
        }
    }

    *(unsigned int*)((char*)this + 0x3c) |= 0x10;
    if (*(unsigned char*)((char*)this + 0x3c) & 0x10)
    {
        func_0073875a();
    }

    if (*(void**)((char*)this + 0x20) != 0)
    {
        func_0063002e();
    }

    if (b != 0)
    {
        func_00738c3a();
    }

    if (hwnd != 0)
    {
        void* fg = GetFocus();
        if (fg == *(void**)((char*)this + 0x20))
        {
            SetFocus(hwnd);
        }
    }

    if (*(int*)((char*)this + 0x44) == 1)
    {
        void* p3 = *(void**)((char*)this + 0x110);
        if (p3 != 0)
        {
            int c = *(int*)((char*)p3 + 0x20);
            if (c == 0)
            {
                int c2 = *(int*)((char*)p3 + 0x10);
                func_0066ea60();
            }
            else if (c == 1)
            {
                int r3 = func_006dc0e0();
                void* p4 = *(void**)((char*)this + 0x110);
                int c3 = *(int*)((char*)p4 + 0x10);
                SendMessageA((void*)c3, 0x222, r3, 0);
                void* p5 = *(void**)((char*)this + 0x110);
                int c4 = *(int*)((char*)p5 + 0x10);
                void* r4 = func_006301c0((void*)c4);
                void* r5 = func_006301c0(GetActiveWindow());
                if (r5 != 0 && *(int*)((char*)r5 + 0x20) != 0)
                {
                    if (r5 != r4)
                    {
                        if (func_0068a2b0() == 0)
                        {
                            void* r6 = func_006457a0();
                            if (r6 != 0)
                            {
                                if (*(int*)((char*)r6 + 0x20) != 0)
                                {
                                    if (func_0068a2b0() == 0)
                                    {
                                        func_00630004();
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    func_00630004();
                }
            }
        }
    }
    else
    {
        SetActiveWindow((void*)saved);
    }

    int (__stdcall *fn4)(void*) = *(int (__stdcall**)(void*))((char*)*(int**)this + 0x68);
    fn4(this);
    return 1;
}
