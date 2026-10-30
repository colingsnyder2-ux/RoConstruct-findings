// roc 2009-12 008c6070  unit: CXTPControlCustom  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6070
//
// 008c6070  6aff                 push -1
// 008c6072  687a6a9600           push 0x966a7a
// 008c6077  64a100000000         mov eax, dword ptr fs:[0]
// 008c607d  50                   push eax
// 008c607e  51                   push ecx
// 008c607f  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6084  33c4                 xor eax, esp
// 008c6086  50                   push eax
// 008c6087  8d442408             lea eax, [esp + 8]
// 008c608b  64a300000000         mov dword ptr fs:[0], eax
// 008c6091  68a4010000           push 0x1a4
// 008c6096  e8c5d7f2ff           call 0x7f3860
// 008c609b  83c404               add esp, 4
// 008c609e  89442404             mov dword ptr [esp + 4], eax
// 008c60a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008c60aa  85c0                 test eax, eax
// 008c60ac  7417                 je 0x8c60c5
// 008c60ae  8bc8                 mov ecx, eax
// 008c60b0  e87bfbffff           call 0x8c5c30
// 008c60b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c60b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008c60c0  59                   pop ecx
// 008c60c1  83c410               add esp, 0x10
// 008c60c4  c3                   ret 
// 008c60c5  33c0                 xor eax, eax
// 008c60c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c60cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008c60d2  59                   pop ecx
// 008c60d3  83c410               add esp, 0x10
// 008c60d6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControlCustom@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlCustom.cpp