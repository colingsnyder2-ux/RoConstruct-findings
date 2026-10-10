// from server: 41% by colin
struct CXTPDockingPaneKeyboardHook {
    char pad0[4];
    void* field4;
    char pad8[0x1c];
    void* field24;
    void* field28;
    char pad2c[0x110];
    int field13c;
    int HookProc(unsigned int, unsigned int, long);
};

struct Creator {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    void destroy();
};

extern "C" void __stdcall sub_62FF38(void*, void*);
extern "C" void* __stdcall sub_73836A(void*, void*);
extern "C" void __stdcall sub_62FF20();
extern "C" void* __stdcall sub_62FF3E(void*, void*);
extern "C" void* __stdcall sub_63052C(void*);
extern "C" int __stdcall sub_68F460(void*);
extern "C" void* __stdcall sub_6DD0C0(void*);
extern "C" void* __stdcall sub_6DD9C0(void*, int, int, int);
extern "C" void* __stdcall sub_6DDE40(void*);
extern "C" void __stdcall sub_4083E0(void*);
extern "C" short __stdcall GetKeyState(int);
extern "C" int __stdcall PostMessageA(void*, unsigned int, void*, void*);
extern "C" int __stdcall CallNextHookEx(void*, int, unsigned int, long);

void Creator::destroy()
{
    if (field4) {
        *(void**)((char*)field4 + 4) = field0;
    }
}

int CXTPDockingPaneKeyboardHook::HookProc(unsigned int code, unsigned int wParam, long lParam)
{
    void* p = sub_73836A((void*)0x8c9348, (void*)0x66e330);
    if (p == 0) {
        sub_62FF20();
    }
    if (code != 0) {
        return CallNextHookEx(field4, code, wParam, lParam);
    }
    unsigned int hi = wParam >> 16;
    if (hi & 0x8000) {
        return CallNextHookEx(field4, code, wParam, lParam);
    }
    if (lParam == 9 && GetKeyState(0x11) < 0 && !(hi & 0x2000)) {
        sub_62FF3E(field24, (void*)0);
        if (field28 != 0) {
            sub_6DD9C0(field28, 9, 0, 0);
            sub_4083E0((void*)0);
            return 1;
        }
        void* obj = sub_6DDE40(this);
        if (obj != 0 && (*(unsigned char*)((char*)obj + 0x110) & 8)) {
            void* v = sub_63052C(*(void**)((char*)obj + 0x134));
            field28 = v;
            *(void**)((char*)v + 0xe4) = obj;
            *(int*)((char*)field28 + 0x13c) = 0;
            void* r = sub_6DD0C0(field28);
            if (field28 != 0) {
                void* vt = *(void**)field28;
                void* fn = *(void**)((char*)vt + 4);
                ((void (__stdcall*)(void*, int))fn)(field28, 1);
            }
            field28 = 0;
            if (r != 0) {
                sub_4083E0((void*)0);
                return 1;
            }
        }
        sub_4083E0((void*)0);
    }
    if ((hi & 0x2000) && lParam == 0x76 && GetKeyState(0x11) >= 0) {
        sub_62FF3E(field24, (void*)0);
        if (field28 != 0) {
            sub_6DD9C0(field28, 9, 0, 0);
            sub_4083E0((void*)0);
            return 1;
        }
        void* obj = sub_6DDE40(this);
        if (obj != 0 && (*(unsigned char*)((char*)obj + 0x110) & 4)) {
            void* v = sub_63052C(*(void**)((char*)obj + 0x134));
            field28 = v;
            *(void**)((char*)v + 0xe4) = obj;
            *(int*)((char*)field28 + 0x13c) = 1;
            void* r = sub_6DD0C0(field28);
            if (field28 != 0) {
                void* vt = *(void**)field28;
                void* fn = *(void**)((char*)vt + 4);
                ((void (__stdcall*)(void*, int))fn)(field28, 1);
            }
            field28 = 0;
            if (r != 0) {
                sub_4083E0((void*)0);
                return 1;
            }
        }
        sub_4083E0((void*)0);
    }
    if ((hi & 0xffff) == 0) {
        return CallNextHookEx(field4, code, wParam, lParam);
    }
    if (lParam == 0x75 && GetKeyState(0x11) >= 0) {
        sub_62FF3E(field24, (void*)0);
        void* obj = sub_6DDE40(this);
        if (obj != 0 && (*(unsigned char*)((char*)obj + 0x110) & 2)) {
            int v = GetKeyState(0x10) < 0 ? 0xf040 : 0xf050;
            PostMessageA(*(void**)((char*)obj + 0x20), 0x112, (void*)v, 0);
            sub_4083E0((void*)0);
            return 1;
        }
        sub_4083E0((void*)0);
    }
    if ((hi & 0xffff) == 0) {
        return CallNextHookEx(field4, code, wParam, lParam);
    }
    if (lParam == 0xbd || lParam == 0x6d) {
        if (GetKeyState(0x11) >= 0 && GetKeyState(0x10) >= 0) {
            sub_62FF3E(field24, (void*)0);
            void* obj = sub_6DDE40(this);
            if (obj != 0 && (*(unsigned char*)((char*)obj + 0x110) & 1)) {
                void* p2 = *(void**)((char*)obj + 0xd8);
                if (p2 != 0) {
                    if (sub_68F460(p2) == 0) {
                        void* vt = *(void**)((char*)p2 + 0x20);
                        void* fn = *(void**)((char*)vt + 0x1c);
                        if (((int (__stdcall*)(void*))fn)((char*)p2 + 0x20) == 0) {
                            PostMessageA(*(void**)((char*)obj + 0x20), 0x112, (void*)0xf100, (void*)0x2d);
                        }
                    }
                }
            }
            sub_4083E0((void*)0);
            return 1;
        }
    }
    return CallNextHookEx(field4, code, wParam, lParam);
}
