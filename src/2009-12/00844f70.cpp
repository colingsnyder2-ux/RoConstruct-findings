// roc 2009-12 00844f70  unit: CXTPRibbonBarMorePopupToolBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844f70
//
// 00844f70  6aff                 push -1
// 00844f72  687a6a9600           push 0x966a7a
// 00844f77  64a100000000         mov eax, dword ptr fs:[0]
// 00844f7d  50                   push eax
// 00844f7e  51                   push ecx
// 00844f7f  a10052b600           mov eax, dword ptr [0xb65200]
// 00844f84  33c4                 xor eax, esp
// 00844f86  50                   push eax
// 00844f87  8d442408             lea eax, [esp + 8]
// 00844f8b  64a300000000         mov dword ptr fs:[0], eax
// 00844f91  685c020000           push 0x25c
// 00844f96  e8c5e8faff           call 0x7f3860
// 00844f9b  83c404               add esp, 4
// 00844f9e  89442404             mov dword ptr [esp + 4], eax
// 00844fa2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00844faa  85c0                 test eax, eax
// 00844fac  7417                 je 0x844fc5
// 00844fae  8bc8                 mov ecx, eax
// 00844fb0  e81bfeffff           call 0x844dd0
// 00844fb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00844fb9  64890d00000000       mov dword ptr fs:[0], ecx
// 00844fc0  59                   pop ecx
// 00844fc1  83c410               add esp, 0x10
// 00844fc4  c3                   ret 
// 00844fc5  33c0                 xor eax, eax
// 00844fc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00844fcb  64890d00000000       mov dword ptr fs:[0], ecx
// 00844fd2  59                   pop ecx
// 00844fd3  83c410               add esp, 0x10
// 00844fd6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp