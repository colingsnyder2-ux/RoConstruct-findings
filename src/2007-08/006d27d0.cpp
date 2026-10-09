// from server: 15% by colin
// roc 2007-08 006d27d0  unit: CXTPReportHyperlinks  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d27d0
//
// 006d27d0  6aff                 push -1
// 006d27d2  68f8797600           push 0x7679f8
// 006d27d7  64a100000000         mov eax, dword ptr fs:[0]
// 006d27dd  50                   push eax
// 006d27de  51                   push ecx
// 006d27df  56                   push esi
// 006d27e0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d27e5  33c4                 xor eax, esp
// 006d27e7  50                   push eax
// 006d27e8  8d44240c             lea eax, [esp + 0xc]
// 006d27ec  64a300000000         mov dword ptr fs:[0], eax
// 006d27f2  8bf1                 mov esi, ecx
// 006d27f4  89742408             mov dword ptr [esp + 8], esi
// 006d27f8  c70614817d00         mov dword ptr [esi], 0x7d8114
// 006d27fe  8d4e20               lea ecx, [esi + 0x20]
// 006d2801  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d2809  e8a2ffffff           call 0x6d27b0
// 006d280e  8bce                 mov ecx, esi
// 006d2810  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d2818  e87ddef5ff           call 0x63069a
// 006d281d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2821  64890d00000000       mov dword ptr fs:[0], ecx
// 006d2828  59                   pop ecx
// 006d2829  5e                   pop esi
// 006d282a  83c410               add esp, 0x10
// 006d282d  c3                   ret 

struct CXTPReportHyperlinks
{
    void sub_6D27B0();
    void sub_63069A();
    void func_006D27D0();
};

void CXTPReportHyperlinks::func_006D27D0()
{
    *(void**)this = (void*)0x7D8114;
    sub_6D27B0();
    sub_63069A();
}
