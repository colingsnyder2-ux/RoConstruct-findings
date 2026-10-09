// from server: 17% by colin
// roc 2007-08 006f77b0  unit: VCEdit::?$CXTMaskEditT  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f77b0
//
// 006f77b0  6aff                 push -1
// 006f77b2  68c8917600           push 0x7691c8
// 006f77b7  64a100000000         mov eax, dword ptr fs:[0]
// 006f77bd  50                   push eax
// 006f77be  51                   push ecx
// 006f77bf  56                   push esi
// 006f77c0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006f77c5  33c4                 xor eax, esp
// 006f77c7  50                   push eax
// 006f77c8  8d44240c             lea eax, [esp + 0xc]
// 006f77cc  64a300000000         mov dword ptr fs:[0], eax
// 006f77d2  8bf1                 mov esi, ecx
// 006f77d4  89742408             mov dword ptr [esp + 8], esi
// 006f77d8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006f77e0  e86bf9ffff           call 0x6f7150
// 006f77e5  8bce                 mov ecx, esi
// 006f77e7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006f77ef  e88cf8ffff           call 0x6f7080
// 006f77f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f77f8  64890d00000000       mov dword ptr fs:[0], ecx
// 006f77ff  59                   pop ecx
// 006f7800  5e                   pop esi
// 006f7801  83c410               add esp, 0x10
// 006f7804  c3                   ret 

struct VCEdit_CXTMaskEditT {
    void method_6f7150();
    void method_6f7080();
    void method_6f77b0();
};

void VCEdit_CXTMaskEditT::method_6f77b0() {
    this->method_6f7150();
    this->method_6f7080();
}
