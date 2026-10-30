// roc 2009-12 008982b0  unit: CXTPRibbonBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008982b0
//
// 008982b0  6aff                 push -1
// 008982b2  687a6a9600           push 0x966a7a
// 008982b7  64a100000000         mov eax, dword ptr fs:[0]
// 008982bd  50                   push eax
// 008982be  51                   push ecx
// 008982bf  a10052b600           mov eax, dword ptr [0xb65200]
// 008982c4  33c4                 xor eax, esp
// 008982c6  50                   push eax
// 008982c7  8d442408             lea eax, [esp + 8]
// 008982cb  64a300000000         mov dword ptr fs:[0], eax
// 008982d1  6898020000           push 0x298
// 008982d6  e885b5f5ff           call 0x7f3860
// 008982db  83c404               add esp, 4
// 008982de  89442404             mov dword ptr [esp + 4], eax
// 008982e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008982ea  85c0                 test eax, eax
// 008982ec  7417                 je 0x898305
// 008982ee  8bc8                 mov ecx, eax
// 008982f0  e8ebd7ffff           call 0x895ae0
// 008982f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008982f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00898300  59                   pop ecx
// 00898301  83c410               add esp, 0x10
// 00898304  c3                   ret 
// 00898305  33c0                 xor eax, eax
// 00898307  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089830b  64890d00000000       mov dword ptr fs:[0], ecx
// 00898312  59                   pop ecx
// 00898313  83c410               add esp, 0x10
// 00898316  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp