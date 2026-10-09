// from server: 22% by colin
// roc 2007-08 006dbde0  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dbde0
//
// 006dbde0  6aff                 push -1
// 006dbde2  68b8757600           push 0x7675b8
// 006dbde7  64a100000000         mov eax, dword ptr fs:[0]
// 006dbded  50                   push eax
// 006dbdee  51                   push ecx
// 006dbdef  56                   push esi
// 006dbdf0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006dbdf5  33c4                 xor eax, esp
// 006dbdf7  50                   push eax
// 006dbdf8  8d44240c             lea eax, [esp + 0xc]
// 006dbdfc  64a300000000         mov dword ptr fs:[0], eax
// 006dbe02  8bf1                 mov esi, ecx
// 006dbe04  89742408             mov dword ptr [esp + 8], esi
// 006dbe08  c70674917d00         mov dword ptr [esi], 0x7d9174
// 006dbe0e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006dbe16  e895f6ffff           call 0x6db4b0
// 006dbe1b  8bce                 mov ecx, esi
// 006dbe1d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006dbe25  e8d6f2ffff           call 0x6db100
// 006dbe2a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dbe2e  64890d00000000       mov dword ptr fs:[0], ecx
// 006dbe35  59                   pop ecx
// 006dbe36  5e                   pop esi
// 006dbe37  83c410               add esp, 0x10
// 006dbe3a  c3                   ret 

struct CXTPDockingPaneAutoHidePanel_CPanelDropTarget {
    void dtor_body();
    void dtor_base();
};

void CXTPDockingPaneAutoHidePanel_CPanelDropTarget::dtor_body() {
    *(void**)this = (void*)0x7d9174;
    dtor_base();
}

void CXTPDockingPaneAutoHidePanel_CPanelDropTarget::dtor_base() {
    extern void sub_6db4b0();
    sub_6db4b0();
    extern void sub_6db100();
    sub_6db100();
}
