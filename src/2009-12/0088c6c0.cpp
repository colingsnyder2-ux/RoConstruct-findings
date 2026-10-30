// roc 2009-12 0088c6c0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c6c0
//
// 0088c6c0  6aff                 push -1
// 0088c6c2  687a6a9600           push 0x966a7a
// 0088c6c7  64a100000000         mov eax, dword ptr fs:[0]
// 0088c6cd  50                   push eax
// 0088c6ce  51                   push ecx
// 0088c6cf  a10052b600           mov eax, dword ptr [0xb65200]
// 0088c6d4  33c4                 xor eax, esp
// 0088c6d6  50                   push eax
// 0088c6d7  8d442408             lea eax, [esp + 8]
// 0088c6db  64a300000000         mov dword ptr fs:[0], eax
// 0088c6e1  6a64                 push 0x64
// 0088c6e3  e87871f6ff           call 0x7f3860
// 0088c6e8  83c404               add esp, 4
// 0088c6eb  89442404             mov dword ptr [esp + 4], eax
// 0088c6ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088c6f7  85c0                 test eax, eax
// 0088c6f9  7417                 je 0x88c712
// 0088c6fb  8bc8                 mov ecx, eax
// 0088c6fd  e8aef9ffff           call 0x88c0b0
// 0088c702  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088c706  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c70d  59                   pop ecx
// 0088c70e  83c410               add esp, 0x10
// 0088c711  c3                   ret 
// 0088c712  33c0                 xor eax, eax
// 0088c714  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088c718  64890d00000000       mov dword ptr fs:[0], ecx
// 0088c71f  59                   pop ecx
// 0088c720  83c410               add esp, 0x10
// 0088c723  c3                   ret 
// copied from an identical function in another client (function ?CreateEditControl@CXTPControlEdit@@UAEPAVCXTPControlEditCtrl@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp