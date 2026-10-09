// from server: 15% by colin
// roc 2007-08 006d2d00  unit: CXTPReportHyperlink  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2d00
//
// 006d2d00  6aff                 push -1
// 006d2d02  68086c7600           push 0x766c08
// 006d2d07  64a100000000         mov eax, dword ptr fs:[0]
// 006d2d0d  50                   push eax
// 006d2d0e  51                   push ecx
// 006d2d0f  56                   push esi
// 006d2d10  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d2d15  33c4                 xor eax, esp
// 006d2d17  50                   push eax
// 006d2d18  8d44240c             lea eax, [esp + 0xc]
// 006d2d1c  64a300000000         mov dword ptr fs:[0], eax
// 006d2d22  8bf1                 mov esi, ecx
// 006d2d24  89742408             mov dword ptr [esp + 8], esi
// 006d2d28  c706c4817d00         mov dword ptr [esi], 0x7d81c4
// 006d2d2e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d2d36  e8b5feffff           call 0x6d2bf0
// 006d2d3b  8bce                 mov ecx, esi
// 006d2d3d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d2d45  e886faffff           call 0x6d27d0
// 006d2d4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2d4e  64890d00000000       mov dword ptr fs:[0], ecx
// 006d2d55  59                   pop ecx
// 006d2d56  5e                   pop esi
// 006d2d57  83c410               add esp, 0x10
// 006d2d5a  c3                   ret 

struct CXTPReportHyperlink
{
    void sub_006d2bf0();
    void sub_006d27d0();
    void func_006d2d00();
};

void CXTPReportHyperlink::func_006d2d00()
{
    *(int*)this = 0x7d81c4;
    sub_006d2bf0();
    sub_006d27d0();
}
