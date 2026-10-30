// roc 2009-12 008f2bb0  unit: CXTPRibbonSystemPopupBarPage  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2bb0
//
// 008f2bb0  6aff                 push -1
// 008f2bb2  687a6a9600           push 0x966a7a
// 008f2bb7  64a100000000         mov eax, dword ptr fs:[0]
// 008f2bbd  50                   push eax
// 008f2bbe  51                   push ecx
// 008f2bbf  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2bc4  33c4                 xor eax, esp
// 008f2bc6  50                   push eax
// 008f2bc7  8d442408             lea eax, [esp + 8]
// 008f2bcb  64a300000000         mov dword ptr fs:[0], eax
// 008f2bd1  685c020000           push 0x25c
// 008f2bd6  e8850cf0ff           call 0x7f3860
// 008f2bdb  83c404               add esp, 4
// 008f2bde  89442404             mov dword ptr [esp + 4], eax
// 008f2be2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f2bea  85c0                 test eax, eax
// 008f2bec  7417                 je 0x8f2c05
// 008f2bee  8bc8                 mov ecx, eax
// 008f2bf0  e80bf2ffff           call 0x8f1e00
// 008f2bf5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2bf9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2c00  59                   pop ecx
// 008f2c01  83c410               add esp, 0x10
// 008f2c04  c3                   ret 
// 008f2c05  33c0                 xor eax, eax
// 008f2c07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2c0b  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2c12  59                   pop ecx
// 008f2c13  83c410               add esp, 0x10
// 008f2c16  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp