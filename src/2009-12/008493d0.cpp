// roc 2009-12 008493d0  unit: CXTPControlOleItems  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008493d0
//
// 008493d0  6aff                 push -1
// 008493d2  68ca459600           push 0x9645ca
// 008493d7  64a100000000         mov eax, dword ptr fs:[0]
// 008493dd  50                   push eax
// 008493de  51                   push ecx
// 008493df  56                   push esi
// 008493e0  a10052b600           mov eax, dword ptr [0xb65200]
// 008493e5  33c4                 xor eax, esp
// 008493e7  50                   push eax
// 008493e8  8d44240c             lea eax, [esp + 0xc]
// 008493ec  64a300000000         mov dword ptr fs:[0], eax
// 008493f2  6874010000           push 0x174
// 008493f7  e864a4faff           call 0x7f3860
// 008493fc  8bf0                 mov esi, eax
// 008493fe  83c404               add esp, 4
// 00849401  89742408             mov dword ptr [esp + 8], esi
// 00849405  33c0                 xor eax, eax
// 00849407  89442414             mov dword ptr [esp + 0x14], eax
// 0084940b  3bf0                 cmp esi, eax
// 0084940d  7416                 je 0x849425
// 0084940f  8bce                 mov ecx, esi
// 00849411  e84a6d0400           call 0x890160
// 00849416  c706c4b09f00         mov dword ptr [esi], 0x9fb0c4
// 0084941c  c7462064b09f00       mov dword ptr [esi + 0x20], 0x9fb064
// 00849423  8bc6                 mov eax, esi
// 00849425  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849429  64890d00000000       mov dword ptr fs:[0], ecx
// 00849430  59                   pop ecx
// 00849431  5e                   pop esi
// 00849432  83c410               add esp, 0x10
// 00849435  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemPopupBarButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp