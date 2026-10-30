// roc 2009-12 008f2180  unit: CXTPRibbonSystemPopupBar  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2180
//
// 008f2180  6aff                 push -1
// 008f2182  687a6a9600           push 0x966a7a
// 008f2187  64a100000000         mov eax, dword ptr fs:[0]
// 008f218d  50                   push eax
// 008f218e  51                   push ecx
// 008f218f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2194  33c4                 xor eax, esp
// 008f2196  50                   push eax
// 008f2197  8d442408             lea eax, [esp + 8]
// 008f219b  64a300000000         mov dword ptr fs:[0], eax
// 008f21a1  6874010000           push 0x174
// 008f21a6  e8b516f0ff           call 0x7f3860
// 008f21ab  83c404               add esp, 4
// 008f21ae  89442404             mov dword ptr [esp + 4], eax
// 008f21b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f21ba  85c0                 test eax, eax
// 008f21bc  7417                 je 0x8f21d5
// 008f21be  8bc8                 mov ecx, eax
// 008f21c0  e86bf8ffff           call 0x8f1a30
// 008f21c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f21c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f21d0  59                   pop ecx
// 008f21d1  83c410               add esp, 0x10
// 008f21d4  c3                   ret 
// 008f21d5  33c0                 xor eax, eax
// 008f21d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f21db  64890d00000000       mov dword ptr fs:[0], ecx
// 008f21e2  59                   pop ecx
// 008f21e3  83c410               add esp, 0x10
// 008f21e6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp