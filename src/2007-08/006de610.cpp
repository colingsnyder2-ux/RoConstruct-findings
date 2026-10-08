// from server: 83% by colin
// roc 2007-08 006de610  unit: CXTPDockingPaneAutoHidePanel  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de610
//
// 006de610  56                   push esi
// 006de611  8bf1                 mov esi, ecx
// 006de613  837e2000             cmp dword ptr [esi + 0x20], 0
// 006de617  7407                 je 0x6de620
// 006de619  8b06                 mov eax, dword ptr [esi]
// 006de61b  8b5068               mov edx, dword ptr [eax + 0x68]
// 006de61e  ffd2                 call edx
// 006de620  8bce                 mov ecx, esi
// 006de622  5e                   pop esi
// 006de623  e90e1ef5ff           jmp 0x630436

struct CXTPDockingPaneAutoHidePanel {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;

    void method();
};

void CXTPDockingPaneAutoHidePanel::method() {
    if (this->field20 != 0) {
        (*(void (__thiscall **)(CXTPDockingPaneAutoHidePanel *))(*(int *)this + 0x68))(this);
    }
    // tail call to 0x630436
    extern void __stdcall helper(CXTPDockingPaneAutoHidePanel *);
    helper(this);
}
