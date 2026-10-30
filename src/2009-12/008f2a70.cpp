// roc 2009-12 008f2a70  unit: CXTPRibbonControlSystemRecentFileList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2a70
//
// 008f2a70  6aff                 push -1
// 008f2a72  687a6a9600           push 0x966a7a
// 008f2a77  64a100000000         mov eax, dword ptr fs:[0]
// 008f2a7d  50                   push eax
// 008f2a7e  51                   push ecx
// 008f2a7f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2a84  33c4                 xor eax, esp
// 008f2a86  50                   push eax
// 008f2a87  8d442408             lea eax, [esp + 8]
// 008f2a8b  64a300000000         mov dword ptr fs:[0], eax
// 008f2a91  685c020000           push 0x25c
// 008f2a96  e8c50df0ff           call 0x7f3860
// 008f2a9b  83c404               add esp, 4
// 008f2a9e  89442404             mov dword ptr [esp + 4], eax
// 008f2aa2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f2aaa  85c0                 test eax, eax
// 008f2aac  7417                 je 0x8f2ac5
// 008f2aae  8bc8                 mov ecx, eax
// 008f2ab0  e80bf1ffff           call 0x8f1bc0
// 008f2ab5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2ab9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2ac0  59                   pop ecx
// 008f2ac1  83c410               add esp, 0x10
// 008f2ac4  c3                   ret 
// 008f2ac5  33c0                 xor eax, eax
// 008f2ac7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2acb  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2ad2  59                   pop ecx
// 008f2ad3  83c410               add esp, 0x10
// 008f2ad6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp