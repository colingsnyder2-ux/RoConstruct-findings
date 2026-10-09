// from server: 17% by colin
// roc 2007-08 007166d0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007166d0
//
// 007166d0  6aff                 push -1
// 007166d2  68e8ad7600           push 0x76ade8
// 007166d7  64a100000000         mov eax, dword ptr fs:[0]
// 007166dd  50                   push eax
// 007166de  51                   push ecx
// 007166df  56                   push esi
// 007166e0  a188518b00           mov eax, dword ptr [0x8b5188]
// 007166e5  33c4                 xor eax, esp
// 007166e7  50                   push eax
// 007166e8  8d44240c             lea eax, [esp + 0xc]
// 007166ec  64a300000000         mov dword ptr fs:[0], eax
// 007166f2  8bf1                 mov esi, ecx
// 007166f4  89742408             mov dword ptr [esp + 8], esi
// 007166f8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00716700  e8dbfeffff           call 0x7165e0
// 00716705  8bce                 mov ecx, esi
// 00716707  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0071670f  e87cfeffff           call 0x716590
// 00716714  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00716718  64890d00000000       mov dword ptr fs:[0], ecx
// 0071671f  59                   pop ecx
// 00716720  5e                   pop esi
// 00716721  83c410               add esp, 0x10
// 00716724  c3                   ret 

struct CArray {
    void f1();
    void f2();
    void f();
};

void CArray::f() {
    f1();
    f2();
}
