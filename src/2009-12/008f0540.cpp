// roc 2009-12 008f0540  unit: CXTPRibbonControlTab  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0540
//
// 008f0540  6aff                 push -1
// 008f0542  68e8639600           push 0x9663e8
// 008f0547  64a100000000         mov eax, dword ptr fs:[0]
// 008f054d  50                   push eax
// 008f054e  51                   push ecx
// 008f054f  56                   push esi
// 008f0550  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0555  33c4                 xor eax, esp
// 008f0557  50                   push eax
// 008f0558  8d44240c             lea eax, [esp + 0xc]
// 008f055c  64a300000000         mov dword ptr fs:[0], eax
// 008f0562  8bf1                 mov esi, ecx
// 008f0564  89742408             mov dword ptr [esp + 8], esi
// 008f0568  8d8e84010000         lea ecx, [esi + 0x184]
// 008f056e  c7060ce8a000         mov dword ptr [esi], 0xa0e80c
// 008f0574  c74620ace7a000       mov dword ptr [esi + 0x20], 0xa0e7ac
// 008f057b  c70124e7a000         mov dword ptr [ecx], 0xa0e724
// 008f0581  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f0589  e832edfdff           call 0x8cf2c0
// 008f058e  8bce                 mov ecx, esi
// 008f0590  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008f0598  e8c3a5f4ff           call 0x83ab60
// 008f059d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f05a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008f05a8  59                   pop ecx
// 008f05a9  5e                   pop esi
// 008f05aa  83c410               add esp, 0x10
// 008f05ad  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonControlTab@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp