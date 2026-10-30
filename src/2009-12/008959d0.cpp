// roc 2009-12 008959d0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008959d0
//
// 008959d0  6aff                 push -1
// 008959d2  687a6a9600           push 0x966a7a
// 008959d7  64a100000000         mov eax, dword ptr fs:[0]
// 008959dd  50                   push eax
// 008959de  51                   push ecx
// 008959df  a10052b600           mov eax, dword ptr [0xb65200]
// 008959e4  33c4                 xor eax, esp
// 008959e6  50                   push eax
// 008959e7  8d442408             lea eax, [esp + 8]
// 008959eb  64a300000000         mov dword ptr fs:[0], eax
// 008959f1  6884010000           push 0x184
// 008959f6  e865def5ff           call 0x7f3860
// 008959fb  83c404               add esp, 4
// 008959fe  89442404             mov dword ptr [esp + 4], eax
// 00895a02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00895a0a  85c0                 test eax, eax
// 00895a0c  7417                 je 0x895a25
// 00895a0e  8bc8                 mov ecx, eax
// 00895a10  e8dbf0ffff           call 0x894af0
// 00895a15  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00895a19  64890d00000000       mov dword ptr fs:[0], ecx
// 00895a20  59                   pop ecx
// 00895a21  83c410               add esp, 0x10
// 00895a24  c3                   ret 
// 00895a25  33c0                 xor eax, eax
// 00895a27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00895a2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00895a32  59                   pop ecx
// 00895a33  83c410               add esp, 0x10
// 00895a36  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp