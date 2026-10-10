// from server: 85% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall GetParent(void*);
    __declspec(dllimport) int __stdcall IsWindow(void*);
    __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, long);
}

struct CXTPDockingPaneAutoHideWnd {
    void sub_62FF4A(int);
    void* sub_6D9950();
    void sub_6D9DD0();
};

void CXTPDockingPaneAutoHideWnd::sub_6D9DD0()
{
    if (IsWindow(*(void**)((char*)this + 0x20))) {
        sub_62FF4A(0);

        void* p = *(void**)((char*)this + 0xe4);
        if (p != 0 && *(void**)((char*)p + 0x20) != 0) {
            void* parent = GetParent(*(void**)((char*)p + 0x20));
            if (parent == this) {
                (*(CXTPDockingPaneAutoHideWnd**)((char*)this + 0xe4))->sub_62FF4A(0);
                void* r = sub_6D9950();
                void* q = *(void**)((char*)this + 0xe4);
                void* vtbl = *(void**)((char*)q + 0x54);
                void* arg = *(void**)((char*)r + 0xcc);
                void* fn = *(void**)((char*)vtbl + 0x2c);
                void* ecx = (char*)q + 0x54;
                ((void (__thiscall*)(void*, void*))fn)(ecx, arg);
            }
        }

        void* e8 = *(void**)((char*)this + 0xe8);
        *(void**)((char*)this + 0xe4) = 0;
        if (e8 != 0 && *(void**)((char*)e8 + 0xa8) == this) {
            *(void**)((char*)e8 + 0xa8) = 0;
        }

        PostMessageA(*(void**)((char*)this + 0x20), 0x10, 0, 0);
    }
}
