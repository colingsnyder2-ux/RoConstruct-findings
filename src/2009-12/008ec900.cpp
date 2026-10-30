// roc 2009-12 008ec900  unit: CXTPDialogBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec900
//
// 008ec900  6aff                 push -1
// 008ec902  687a6a9600           push 0x966a7a
// 008ec907  64a100000000         mov eax, dword ptr fs:[0]
// 008ec90d  50                   push eax
// 008ec90e  51                   push ecx
// 008ec90f  a10052b600           mov eax, dword ptr [0xb65200]
// 008ec914  33c4                 xor eax, esp
// 008ec916  50                   push eax
// 008ec917  8d442408             lea eax, [esp + 8]
// 008ec91b  64a300000000         mov dword ptr fs:[0], eax
// 008ec921  68f0010000           push 0x1f0
// 008ec926  e8356ff0ff           call 0x7f3860
// 008ec92b  83c404               add esp, 4
// 008ec92e  89442404             mov dword ptr [esp + 4], eax
// 008ec932  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008ec93a  85c0                 test eax, eax
// 008ec93c  7417                 je 0x8ec955
// 008ec93e  8bc8                 mov ecx, eax
// 008ec940  e81bf7ffff           call 0x8ec060
// 008ec945  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ec949  64890d00000000       mov dword ptr fs:[0], ecx
// 008ec950  59                   pop ecx
// 008ec951  83c410               add esp, 0x10
// 008ec954  c3                   ret 
// 008ec955  33c0                 xor eax, eax
// 008ec957  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ec95b  64890d00000000       mov dword ptr fs:[0], ecx
// 008ec962  59                   pop ecx
// 008ec963  83c410               add esp, 0x10
// 008ec966  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPDialogBar@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp