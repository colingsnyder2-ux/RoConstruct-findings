// roc 2009-12 008f2750  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2750
//
// 008f2750  6aff                 push -1
// 008f2752  687a6a9600           push 0x966a7a
// 008f2757  64a100000000         mov eax, dword ptr fs:[0]
// 008f275d  50                   push eax
// 008f275e  51                   push ecx
// 008f275f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2764  33c4                 xor eax, esp
// 008f2766  50                   push eax
// 008f2767  8d442408             lea eax, [esp + 8]
// 008f276b  64a300000000         mov dword ptr fs:[0], eax
// 008f2771  6874010000           push 0x174
// 008f2776  e8e510f0ff           call 0x7f3860
// 008f277b  83c404               add esp, 4
// 008f277e  89442404             mov dword ptr [esp + 4], eax
// 008f2782  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f278a  85c0                 test eax, eax
// 008f278c  7417                 je 0x8f27a5
// 008f278e  8bc8                 mov ecx, eax
// 008f2790  e8dbf3ffff           call 0x8f1b70
// 008f2795  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2799  64890d00000000       mov dword ptr fs:[0], ecx
// 008f27a0  59                   pop ecx
// 008f27a1  83c410               add esp, 0x10
// 008f27a4  c3                   ret 
// 008f27a5  33c0                 xor eax, eax
// 008f27a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f27ab  64890d00000000       mov dword ptr fs:[0], ecx
// 008f27b2  59                   pop ecx
// 008f27b3  83c410               add esp, 0x10
// 008f27b6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp