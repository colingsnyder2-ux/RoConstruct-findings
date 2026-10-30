// roc 2009-12 008eea40  unit: CXTPRibbonBarMorePopupToolBar  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eea40
//
// 008eea40  6aff                 push -1
// 008eea42  68e8679600           push 0x9667e8
// 008eea47  64a100000000         mov eax, dword ptr fs:[0]
// 008eea4d  50                   push eax
// 008eea4e  51                   push ecx
// 008eea4f  56                   push esi
// 008eea50  a10052b600           mov eax, dword ptr [0xb65200]
// 008eea55  33c4                 xor eax, esp
// 008eea57  50                   push eax
// 008eea58  8d44240c             lea eax, [esp + 0xc]
// 008eea5c  64a300000000         mov dword ptr fs:[0], eax
// 008eea62  8bf1                 mov esi, ecx
// 008eea64  89742408             mov dword ptr [esp + 8], esi
// 008eea68  c70604dea000         mov dword ptr [esi], 0xa0de04
// 008eea6e  c74654f4dda000       mov dword ptr [esi + 0x54], 0xa0ddf4
// 008eea75  c7465c94dda000       mov dword ptr [esi + 0x5c], 0xa0dd94
// 008eea7c  c7865c02000080dda000 mov dword ptr [esi + 0x25c], 0xa0dd80
// 008eea86  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eea8c  8b01                 mov eax, dword ptr [ecx]
// 008eea8e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008eea91  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008eea99  ffd2                 call edx
// 008eea9b  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eeaa1  e83653f0ff           call 0x7f3ddc
// 008eeaa6  8bce                 mov ecx, esi
// 008eeaa8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008eeab0  e8fb2ef5ff           call 0x8419b0
// 008eeab5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008eeab9  64890d00000000       mov dword ptr fs:[0], ecx
// 008eeac0  59                   pop ecx
// 008eeac1  5e                   pop esi
// 008eeac2  83c410               add esp, 0x10
// 008eeac5  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonTabPopupToolBar@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp