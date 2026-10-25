// from server: 100% by king_originala
// roc 2008-06 005e6070  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6070
//
// 005e6070  8bc1                 mov eax, ecx
// 005e6072  8b4820               mov ecx, dword ptr [eax + 0x20]
// 005e6075  85c9                 test ecx, ecx
// 005e6077  7405                 je 0x5e607e
// 005e6079  e9f2ffffff           jmp 0x5e6070
// 005e607e  c3                   ret 

struct S {
    char padding[0x20];
    S* parent;
    S* f();
    S* next();
};

S* S::f() {
    if (parent)
        return parent->next();
    return this;
}
