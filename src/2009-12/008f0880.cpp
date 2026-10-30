// roc 2009-12 008f0880  unit: CXTPRibbonControlTab  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0880
//
// 008f0880  6aff                 push -1
// 008f0882  687a6a9600           push 0x966a7a
// 008f0887  64a100000000         mov eax, dword ptr fs:[0]
// 008f088d  50                   push eax
// 008f088e  51                   push ecx
// 008f088f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0894  33c4                 xor eax, esp
// 008f0896  50                   push eax
// 008f0897  8d442408             lea eax, [esp + 8]
// 008f089b  64a300000000         mov dword ptr fs:[0], eax
// 008f08a1  6818020000           push 0x218
// 008f08a6  e8b52ff0ff           call 0x7f3860
// 008f08ab  83c404               add esp, 4
// 008f08ae  89442404             mov dword ptr [esp + 4], eax
// 008f08b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f08ba  85c0                 test eax, eax
// 008f08bc  7417                 je 0x8f08d5
// 008f08be  8bc8                 mov ecx, eax
// 008f08c0  e8dbfbffff           call 0x8f04a0
// 008f08c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f08c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f08d0  59                   pop ecx
// 008f08d1  83c410               add esp, 0x10
// 008f08d4  c3                   ret 
// 008f08d5  33c0                 xor eax, eax
// 008f08d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f08db  64890d00000000       mov dword ptr fs:[0], ecx
// 008f08e2  59                   pop ecx
// 008f08e3  83c410               add esp, 0x10
// 008f08e6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonControlTab@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp