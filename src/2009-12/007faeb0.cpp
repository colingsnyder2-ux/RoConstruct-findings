// roc 2009-12 007faeb0  unit: CXTPControlComboBoxPopupBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faeb0
//
// 007faeb0  6aff                 push -1
// 007faeb2  687a6a9600           push 0x966a7a
// 007faeb7  64a100000000         mov eax, dword ptr fs:[0]
// 007faebd  50                   push eax
// 007faebe  51                   push ecx
// 007faebf  a10052b600           mov eax, dword ptr [0xb65200]
// 007faec4  33c4                 xor eax, esp
// 007faec6  50                   push eax
// 007faec7  8d442408             lea eax, [esp + 8]
// 007faecb  64a300000000         mov dword ptr fs:[0], eax
// 007faed1  6860020000           push 0x260
// 007faed6  e88589ffff           call 0x7f3860
// 007faedb  83c404               add esp, 4
// 007faede  89442404             mov dword ptr [esp + 4], eax
// 007faee2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007faeea  85c0                 test eax, eax
// 007faeec  7417                 je 0x7faf05
// 007faeee  8bc8                 mov ecx, eax
// 007faef0  e81be8ffff           call 0x7f9710
// 007faef5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007faef9  64890d00000000       mov dword ptr fs:[0], ecx
// 007faf00  59                   pop ecx
// 007faf01  83c410               add esp, 0x10
// 007faf04  c3                   ret 
// 007faf05  33c0                 xor eax, eax
// 007faf07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007faf0b  64890d00000000       mov dword ptr fs:[0], ecx
// 007faf12  59                   pop ecx
// 007faf13  83c410               add esp, 0x10
// 007faf16  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxList@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp