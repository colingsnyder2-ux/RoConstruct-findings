// roc 2009-12 008f1c70  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1c70
//
// 008f1c70  6aff                 push -1
// 008f1c72  687a6a9600           push 0x966a7a
// 008f1c77  64a100000000         mov eax, dword ptr fs:[0]
// 008f1c7d  50                   push eax
// 008f1c7e  51                   push ecx
// 008f1c7f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1c84  33c4                 xor eax, esp
// 008f1c86  50                   push eax
// 008f1c87  8d442408             lea eax, [esp + 8]
// 008f1c8b  64a300000000         mov dword ptr fs:[0], eax
// 008f1c91  6884010000           push 0x184
// 008f1c96  e8c51bf0ff           call 0x7f3860
// 008f1c9b  83c404               add esp, 4
// 008f1c9e  89442404             mov dword ptr [esp + 4], eax
// 008f1ca2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f1caa  85c0                 test eax, eax
// 008f1cac  7417                 je 0x8f1cc5
// 008f1cae  8bc8                 mov ecx, eax
// 008f1cb0  e87bfcffff           call 0x8f1930
// 008f1cb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f1cb9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1cc0  59                   pop ecx
// 008f1cc1  83c410               add esp, 0x10
// 008f1cc4  c3                   ret 
// 008f1cc5  33c0                 xor eax, eax
// 008f1cc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f1ccb  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1cd2  59                   pop ecx
// 008f1cd3  83c410               add esp, 0x10
// 008f1cd6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlSystemButton@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp