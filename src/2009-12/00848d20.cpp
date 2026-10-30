// roc 2009-12 00848d20  unit: CXTPControlWindowList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848d20
//
// 00848d20  6aff                 push -1
// 00848d22  687a6a9600           push 0x966a7a
// 00848d27  64a100000000         mov eax, dword ptr fs:[0]
// 00848d2d  50                   push eax
// 00848d2e  51                   push ecx
// 00848d2f  a10052b600           mov eax, dword ptr [0xb65200]
// 00848d34  33c4                 xor eax, esp
// 00848d36  50                   push eax
// 00848d37  8d442408             lea eax, [esp + 8]
// 00848d3b  64a300000000         mov dword ptr fs:[0], eax
// 00848d41  6874010000           push 0x174
// 00848d46  e815abfaff           call 0x7f3860
// 00848d4b  83c404               add esp, 4
// 00848d4e  89442404             mov dword ptr [esp + 4], eax
// 00848d52  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00848d5a  85c0                 test eax, eax
// 00848d5c  7417                 je 0x848d75
// 00848d5e  8bc8                 mov ecx, eax
// 00848d60  e8bbf9ffff           call 0x848720
// 00848d65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00848d69  64890d00000000       mov dword ptr fs:[0], ecx
// 00848d70  59                   pop ecx
// 00848d71  83c410               add esp, 0x10
// 00848d74  c3                   ret 
// 00848d75  33c0                 xor eax, eax
// 00848d77  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00848d7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00848d82  59                   pop ecx
// 00848d83  83c410               add esp, 0x10
// 00848d86  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp