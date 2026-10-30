// roc 2009-12 008eed20  unit: CXTPRibbonGroupPopupToolBar  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eed20
//
// 008eed20  6aff                 push -1
// 008eed22  68e8679600           push 0x9667e8
// 008eed27  64a100000000         mov eax, dword ptr fs:[0]
// 008eed2d  50                   push eax
// 008eed2e  51                   push ecx
// 008eed2f  56                   push esi
// 008eed30  a10052b600           mov eax, dword ptr [0xb65200]
// 008eed35  33c4                 xor eax, esp
// 008eed37  50                   push eax
// 008eed38  8d44240c             lea eax, [esp + 0xc]
// 008eed3c  64a300000000         mov dword ptr fs:[0], eax
// 008eed42  8bf1                 mov esi, ecx
// 008eed44  89742408             mov dword ptr [esp + 8], esi
// 008eed48  c7069ce0a000         mov dword ptr [esi], 0xa0e09c
// 008eed4e  c746548ce0a000       mov dword ptr [esi + 0x54], 0xa0e08c
// 008eed55  c7465c2ce0a000       mov dword ptr [esi + 0x5c], 0xa0e02c
// 008eed5c  c7865c02000018e0a000 mov dword ptr [esi + 0x25c], 0xa0e018
// 008eed66  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eed6c  8b01                 mov eax, dword ptr [ecx]
// 008eed6e  8b5070               mov edx, dword ptr [eax + 0x70]
// 008eed71  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008eed79  ffd2                 call edx
// 008eed7b  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eed81  e85650f0ff           call 0x7f3ddc
// 008eed86  8bce                 mov ecx, esi
// 008eed88  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008eed90  e81b2cf5ff           call 0x8419b0
// 008eed95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008eed99  64890d00000000       mov dword ptr fs:[0], ecx
// 008eeda0  59                   pop ecx
// 008eeda1  5e                   pop esi
// 008eeda2  83c410               add esp, 0x10
// 008eeda5  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonGroupPopupToolBar@@UAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp