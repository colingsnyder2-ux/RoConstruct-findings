// roc 2009-12 00849dc0  unit: CXTPControlLabel  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849dc0
//
// 00849dc0  6aff                 push -1
// 00849dc2  687a6a9600           push 0x966a7a
// 00849dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00849dcd  50                   push eax
// 00849dce  51                   push ecx
// 00849dcf  a10052b600           mov eax, dword ptr [0xb65200]
// 00849dd4  33c4                 xor eax, esp
// 00849dd6  50                   push eax
// 00849dd7  8d442408             lea eax, [esp + 8]
// 00849ddb  64a300000000         mov dword ptr fs:[0], eax
// 00849de1  6874010000           push 0x174
// 00849de6  e8759afaff           call 0x7f3860
// 00849deb  83c404               add esp, 4
// 00849dee  89442404             mov dword ptr [esp + 4], eax
// 00849df2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00849dfa  85c0                 test eax, eax
// 00849dfc  7417                 je 0x849e15
// 00849dfe  8bc8                 mov ecx, eax
// 00849e00  e8dbeaffff           call 0x8488e0
// 00849e05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849e09  64890d00000000       mov dword ptr fs:[0], ecx
// 00849e10  59                   pop ecx
// 00849e11  83c410               add esp, 0x10
// 00849e14  c3                   ret 
// 00849e15  33c0                 xor eax, eax
// 00849e17  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849e1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00849e22  59                   pop ecx
// 00849e23  83c410               add esp, 0x10
// 00849e26  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp