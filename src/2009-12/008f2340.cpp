// roc 2009-12 008f2340  unit: CXTPRibbonControlSystemPopupBarButton  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2340
//
// 008f2340  6aff                 push -1
// 008f2342  687a6a9600           push 0x966a7a
// 008f2347  64a100000000         mov eax, dword ptr fs:[0]
// 008f234d  50                   push eax
// 008f234e  51                   push ecx
// 008f234f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2354  33c4                 xor eax, esp
// 008f2356  50                   push eax
// 008f2357  8d442408             lea eax, [esp + 8]
// 008f235b  64a300000000         mov dword ptr fs:[0], eax
// 008f2361  6874010000           push 0x174
// 008f2366  e8f514f0ff           call 0x7f3860
// 008f236b  83c404               add esp, 4
// 008f236e  89442404             mov dword ptr [esp + 4], eax
// 008f2372  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f237a  85c0                 test eax, eax
// 008f237c  7417                 je 0x8f2395
// 008f237e  8bc8                 mov ecx, eax
// 008f2380  e80bf7ffff           call 0x8f1a90
// 008f2385  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2389  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2390  59                   pop ecx
// 008f2391  83c410               add esp, 0x10
// 008f2394  c3                   ret 
// 008f2395  33c0                 xor eax, eax
// 008f2397  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f239b  64890d00000000       mov dword ptr fs:[0], ecx
// 008f23a2  59                   pop ecx
// 008f23a3  83c410               add esp, 0x10
// 008f23a6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp