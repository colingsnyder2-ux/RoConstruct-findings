// roc 2009-12 008f1ad0  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1ad0
//
// 008f1ad0  6aff                 push -1
// 008f1ad2  68e8699600           push 0x9669e8
// 008f1ad7  64a100000000         mov eax, dword ptr fs:[0]
// 008f1add  50                   push eax
// 008f1ade  51                   push ecx
// 008f1adf  56                   push esi
// 008f1ae0  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1ae5  33c4                 xor eax, esp
// 008f1ae7  50                   push eax
// 008f1ae8  8d44240c             lea eax, [esp + 0xc]
// 008f1aec  64a300000000         mov dword ptr fs:[0], eax
// 008f1af2  8bf1                 mov esi, ecx
// 008f1af4  89742408             mov dword ptr [esp + 8], esi
// 008f1af8  e8236ef0ff           call 0x7f8920
// 008f1afd  689a000000           push 0x9a
// 008f1b02  8bce                 mov ecx, esi
// 008f1b04  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008f1b0c  c706dcefa000         mov dword ptr [esi], 0xa0efdc
// 008f1b12  c746207cefa000       mov dword ptr [esi + 0x20], 0xa0ef7c
// 008f1b19  e84245f0ff           call 0x7f6060
// 008f1b1e  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 008f1b28  c786640100001b000000 mov dword ptr [esi + 0x164], 0x1b
// 008f1b32  8bc6                 mov eax, esi
// 008f1b34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1b38  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1b3f  59                   pop ecx
// 008f1b40  5e                   pop esi
// 008f1b41  83c410               add esp, 0x10
// 008f1b44  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonControlSystemPopupBarListCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp