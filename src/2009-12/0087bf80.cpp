// roc 2009-12 0087bf80  unit: CXTPControlGallery  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087bf80
//
// 0087bf80  6aff                 push -1
// 0087bf82  687a6a9600           push 0x966a7a
// 0087bf87  64a100000000         mov eax, dword ptr fs:[0]
// 0087bf8d  50                   push eax
// 0087bf8e  51                   push ecx
// 0087bf8f  a10052b600           mov eax, dword ptr [0xb65200]
// 0087bf94  33c4                 xor eax, esp
// 0087bf96  50                   push eax
// 0087bf97  8d442408             lea eax, [esp + 8]
// 0087bf9b  64a300000000         mov dword ptr fs:[0], eax
// 0087bfa1  685c020000           push 0x25c
// 0087bfa6  e8b578f7ff           call 0x7f3860
// 0087bfab  83c404               add esp, 4
// 0087bfae  89442404             mov dword ptr [esp + 4], eax
// 0087bfb2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0087bfba  85c0                 test eax, eax
// 0087bfbc  7417                 je 0x87bfd5
// 0087bfbe  8bc8                 mov ecx, eax
// 0087bfc0  e88bceffff           call 0x878e50
// 0087bfc5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087bfc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bfd0  59                   pop ecx
// 0087bfd1  83c410               add esp, 0x10
// 0087bfd4  c3                   ret 
// 0087bfd5  33c0                 xor eax, eax
// 0087bfd7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087bfdb  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bfe2  59                   pop ecx
// 0087bfe3  83c410               add esp, 0x10
// 0087bfe6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlComboBoxPopupBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp