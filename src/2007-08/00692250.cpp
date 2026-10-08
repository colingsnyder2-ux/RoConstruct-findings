// from server: 71% by colin
// roc 2007-08 00692250  unit: CXTPStatusBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692250
//
// 00692250  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 00692256  85c9                 test ecx, ecx
// 00692258  7405                 je 0x69225f
// 0069225a  e991fff9ff           jmp 0x6321f0
// 0069225f  e96cbdfbff           jmp 0x64dfd0

struct CXTPStatusBar {
    char pad[0xb8];
    void* field_0xb8;
    void sub_006321F0();
    void sub_0064DFD0();
    void func_00692250();
};

void CXTPStatusBar::func_00692250() {
    void* p = field_0xb8;
    if (p != 0) {
        sub_006321F0();
    } else {
        sub_0064DFD0();
    }
}
