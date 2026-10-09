// from server: 17% by colin
// roc 2007-08 006d3ab0  unit: CXTPReportColumns  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3ab0
//
// 006d3ab0  6aff                 push -1
// 006d3ab2  68f8797600           push 0x7679f8
// 006d3ab7  64a100000000         mov eax, dword ptr fs:[0]
// 006d3abd  50                   push eax
// 006d3abe  51                   push ecx
// 006d3abf  56                   push esi
// 006d3ac0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d3ac5  33c4                 xor eax, esp
// 006d3ac7  50                   push eax
// 006d3ac8  8d44240c             lea eax, [esp + 0xc]
// 006d3acc  64a300000000         mov dword ptr fs:[0], eax
// 006d3ad2  8bf1                 mov esi, ecx
// 006d3ad4  89742408             mov dword ptr [esp + 8], esi
// 006d3ad8  8d4e24               lea ecx, [esi + 0x24]
// 006d3adb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d3ae3  e8f8fbffff           call 0x6d36e0
// 006d3ae8  8bce                 mov ecx, esi
// 006d3aea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d3af2  e8a3cbf5ff           call 0x63069a
// 006d3af7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3afb  64890d00000000       mov dword ptr fs:[0], ecx
// 006d3b02  59                   pop ecx
// 006d3b03  5e                   pop esi
// 006d3b04  83c410               add esp, 0x10
// 006d3b07  c3                   ret 

struct CXTPReportColumns {
    void sub_6D36E0();
    void sub_63069A();
    void func();
};

void CXTPReportColumns::func()
{
    sub_6D36E0();
    sub_63069A();
}
