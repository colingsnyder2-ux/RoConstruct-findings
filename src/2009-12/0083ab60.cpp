// roc 2009-12 0083ab60  unit: CXTPToolBar::CControlButtonExpand  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ab60
//
// 0083ab60  6aff                 push -1
// 0083ab62  6888169600           push 0x961688
// 0083ab67  64a100000000         mov eax, dword ptr fs:[0]
// 0083ab6d  50                   push eax
// 0083ab6e  51                   push ecx
// 0083ab6f  56                   push esi
// 0083ab70  a10052b600           mov eax, dword ptr [0xb65200]
// 0083ab75  33c4                 xor eax, esp
// 0083ab77  50                   push eax
// 0083ab78  8d44240c             lea eax, [esp + 0xc]
// 0083ab7c  64a300000000         mov dword ptr fs:[0], eax
// 0083ab82  8bf1                 mov esi, ecx
// 0083ab84  89742408             mov dword ptr [esp + 8], esi
// 0083ab88  c706fc819f00         mov dword ptr [esi], 0x9f81fc
// 0083ab8e  c746209c819f00       mov dword ptr [esi + 0x20], 0x9f819c
// 0083ab95  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083ab9b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083aba3  85c9                 test ecx, ecx
// 0083aba5  7405                 je 0x83abac
// 0083aba7  e83092fbff           call 0x7f3ddc
// 0083abac  8bce                 mov ecx, esi
// 0083abae  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0083abb6  e815560500           call 0x8901d0
// 0083abbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083abbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0083abc6  59                   pop ecx
// 0083abc7  5e                   pop esi
// 0083abc8  83c410               add esp, 0x10
// 0083abcb  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlPopup@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp