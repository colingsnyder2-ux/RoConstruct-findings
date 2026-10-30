// roc 2009-12 0088b480  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b480
//
// 0088b480  6aff                 push -1
// 0088b482  687a6a9600           push 0x966a7a
// 0088b487  64a100000000         mov eax, dword ptr fs:[0]
// 0088b48d  50                   push eax
// 0088b48e  51                   push ecx
// 0088b48f  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b494  33c4                 xor eax, esp
// 0088b496  50                   push eax
// 0088b497  8d442408             lea eax, [esp + 8]
// 0088b49b  64a300000000         mov dword ptr fs:[0], eax
// 0088b4a1  68b0010000           push 0x1b0
// 0088b4a6  e8b583f6ff           call 0x7f3860
// 0088b4ab  83c404               add esp, 4
// 0088b4ae  89442404             mov dword ptr [esp + 4], eax
// 0088b4b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088b4ba  85c0                 test eax, eax
// 0088b4bc  7417                 je 0x88b4d5
// 0088b4be  8bc8                 mov ecx, eax
// 0088b4c0  e85bfbffff           call 0x88b020
// 0088b4c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088b4c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b4d0  59                   pop ecx
// 0088b4d1  83c410               add esp, 0x10
// 0088b4d4  c3                   ret 
// 0088b4d5  33c0                 xor eax, eax
// 0088b4d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088b4db  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b4e2  59                   pop ecx
// 0088b4e3  83c410               add esp, 0x10
// 0088b4e6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlEdit@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp