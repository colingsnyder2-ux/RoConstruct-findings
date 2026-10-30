// roc 2009-12 008f24c0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f24c0
//
// 008f24c0  6aff                 push -1
// 008f24c2  687a6a9600           push 0x966a7a
// 008f24c7  64a100000000         mov eax, dword ptr fs:[0]
// 008f24cd  50                   push eax
// 008f24ce  51                   push ecx
// 008f24cf  a10052b600           mov eax, dword ptr [0xb65200]
// 008f24d4  33c4                 xor eax, esp
// 008f24d6  50                   push eax
// 008f24d7  8d442408             lea eax, [esp + 8]
// 008f24db  64a300000000         mov dword ptr fs:[0], eax
// 008f24e1  6874010000           push 0x174
// 008f24e6  e87513f0ff           call 0x7f3860
// 008f24eb  83c404               add esp, 4
// 008f24ee  89442404             mov dword ptr [esp + 4], eax
// 008f24f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f24fa  85c0                 test eax, eax
// 008f24fc  7417                 je 0x8f2515
// 008f24fe  8bc8                 mov ecx, eax
// 008f2500  e8cbf5ffff           call 0x8f1ad0
// 008f2505  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2509  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2510  59                   pop ecx
// 008f2511  83c410               add esp, 0x10
// 008f2514  c3                   ret 
// 008f2515  33c0                 xor eax, eax
// 008f2517  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f251b  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2522  59                   pop ecx
// 008f2523  83c410               add esp, 0x10
// 008f2526  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPControl@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp