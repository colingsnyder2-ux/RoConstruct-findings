// roc 2009-12 0083cc40  unit: CXTPControlPopupColor  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083cc40
//
// 0083cc40  6aff                 push -1
// 0083cc42  687a6a9600           push 0x966a7a
// 0083cc47  64a100000000         mov eax, dword ptr fs:[0]
// 0083cc4d  50                   push eax
// 0083cc4e  51                   push ecx
// 0083cc4f  a10052b600           mov eax, dword ptr [0xb65200]
// 0083cc54  33c4                 xor eax, esp
// 0083cc56  50                   push eax
// 0083cc57  8d442408             lea eax, [esp + 8]
// 0083cc5b  64a300000000         mov dword ptr fs:[0], eax
// 0083cc61  6888010000           push 0x188
// 0083cc66  e8f56bfbff           call 0x7f3860
// 0083cc6b  83c404               add esp, 4
// 0083cc6e  89442404             mov dword ptr [esp + 4], eax
// 0083cc72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083cc7a  85c0                 test eax, eax
// 0083cc7c  7417                 je 0x83cc95
// 0083cc7e  8bc8                 mov ecx, eax
// 0083cc80  e80bfcffff           call 0x83c890
// 0083cc85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083cc89  64890d00000000       mov dword ptr fs:[0], ecx
// 0083cc90  59                   pop ecx
// 0083cc91  83c410               add esp, 0x10
// 0083cc94  c3                   ret 
// 0083cc95  33c0                 xor eax, eax
// 0083cc97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083cc9b  64890d00000000       mov dword ptr fs:[0], ecx
// 0083cca2  59                   pop ecx
// 0083cca3  83c410               add esp, 0x10
// 0083cca6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlPopupColor@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopupColor.cpp