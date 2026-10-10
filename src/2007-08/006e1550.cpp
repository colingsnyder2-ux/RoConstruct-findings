// from server: 54% by colin
extern "C" __declspec(dllimport) short __stdcall GetKeyState(int);

struct CXTPDockingPaneTabbedContainer {
    void sub_6e0b90();
    void* sub_6e0540(int, int, int, int);
    void sub_6e1550(int, int);
};

void CXTPDockingPaneTabbedContainer::sub_6e1550(int a, int b) {
    sub_6e0b90();
    if (GetKeyState(1) < 0) {
        void* p = sub_6e0540(0x11, *(int*)((char*)this + 0x1a0), 0, 0);
        if (*(int*)0x66e000 == 0) {
            // placeholder
        }
    }
}
