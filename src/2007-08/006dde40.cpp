// from server: 59% by colin
// roc 2007-08 006dde40  unit: CXTPDockingPaneKeyboardHook  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dde40

extern "C" {
    void* __stdcall GetFocus();
    void* __stdcall GetParent(void*);
    long __stdcall GetWindowLongA(void*, int);
}

struct CXTPDockingPaneKeyboardHook {
    void* FindPane(void*);
    void* GetActivePane();
};

extern "C" void* __stdcall sub_6dde00(void*, void*);
extern "C" void* __stdcall sub_73856e(void*);
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void* __stdcall sub_6de320(void*);
extern "C" void* __stdcall sub_630202(void*, void*);
extern "C" void* __stdcall sub_6e0540(void*);

void* CXTPDockingPaneKeyboardHook::GetActivePane()
{
    void* focus = GetFocus();
    void* result = 0;
    while (focus != 0) {
        void* pane = sub_6dde00(this, focus);
        if (pane != 0) {
            void* v = sub_73856e(*(void**)((char*)pane + 0xcc));
            if (v == 0) {
                result = pane;
            }
            break;
        }
        if ((GetWindowLongA(focus, -0x10) & 0x40000000) != 0) {
            focus = GetParent(focus);
            continue;
        }
        if ((GetWindowLongA(focus, -0x14) & 0x80000000) == 0) {
            break;
        }
        void* a = sub_6301c0(focus);
        void* b = sub_6de320(a);
        void* c = sub_630202(b, 0);
        if (c == 0) {
            break;
        }
        result = sub_6e0540((char*)c + 0xe4);
        break;
    }
    return result;
}
