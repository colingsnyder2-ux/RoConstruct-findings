// roc 2009-12 008db010  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008db010
//
// 008db010  6aff                 push -1
// 008db012  6858559600           push 0x965558
// 008db017  64a100000000         mov eax, dword ptr fs:[0]
// 008db01d  50                   push eax
// 008db01e  51                   push ecx
// 008db01f  56                   push esi
// 008db020  a10052b600           mov eax, dword ptr [0xb65200]
// 008db025  33c4                 xor eax, esp
// 008db027  50                   push eax
// 008db028  8d44240c             lea eax, [esp + 0xc]
// 008db02c  64a300000000         mov dword ptr fs:[0], eax
// 008db032  8bf1                 mov esi, ecx
// 008db034  89742408             mov dword ptr [esp + 8], esi
// 008db038  c70694b0a000         mov dword ptr [esi], 0xa0b094
// 008db03e  8d8e88000000         lea ecx, [esi + 0x88]
// 008db044  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008db04c  e8bff9ffff           call 0x8daa10
// 008db051  8bce                 mov ecx, esi
// 008db053  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008db05b  e8fcb70400           call 0x92685c
// 008db060  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008db064  64890d00000000       mov dword ptr fs:[0], ecx
// 008db06b  59                   pop ecx
// 008db06c  5e                   pop esi
// 008db06d  83c410               add esp, 0x10
// 008db070  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageStandard@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp