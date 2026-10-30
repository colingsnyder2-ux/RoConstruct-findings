// roc 2009-12 0083d750  unit: CXTPControlColorSelector  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d750
//
// 0083d750  6aff                 push -1
// 0083d752  687a6a9600           push 0x966a7a
// 0083d757  64a100000000         mov eax, dword ptr fs:[0]
// 0083d75d  50                   push eax
// 0083d75e  51                   push ecx
// 0083d75f  a10052b600           mov eax, dword ptr [0xb65200]
// 0083d764  33c4                 xor eax, esp
// 0083d766  50                   push eax
// 0083d767  8d442408             lea eax, [esp + 8]
// 0083d76b  64a300000000         mov dword ptr fs:[0], eax
// 0083d771  6880010000           push 0x180
// 0083d776  e8e560fbff           call 0x7f3860
// 0083d77b  83c404               add esp, 4
// 0083d77e  89442404             mov dword ptr [esp + 4], eax
// 0083d782  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083d78a  85c0                 test eax, eax
// 0083d78c  7417                 je 0x83d7a5
// 0083d78e  8bc8                 mov ecx, eax
// 0083d790  e86bfbffff           call 0x83d300
// 0083d795  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083d799  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d7a0  59                   pop ecx
// 0083d7a1  83c410               add esp, 0x10
// 0083d7a4  c3                   ret 
// 0083d7a5  33c0                 xor eax, eax
// 0083d7a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083d7ab  64890d00000000       mov dword ptr fs:[0], ecx
// 0083d7b2  59                   pop ecx
// 0083d7b3  83c410               add esp, 0x10
// 0083d7b6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPCommandBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp