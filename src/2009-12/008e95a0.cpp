// roc 2009-12 008e95a0  unit: CXTPRibbonGroupControlPopup  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e95a0
//
// 008e95a0  6aff                 push -1
// 008e95a2  687a6a9600           push 0x966a7a
// 008e95a7  64a100000000         mov eax, dword ptr fs:[0]
// 008e95ad  50                   push eax
// 008e95ae  51                   push ecx
// 008e95af  a10052b600           mov eax, dword ptr [0xb65200]
// 008e95b4  33c4                 xor eax, esp
// 008e95b6  50                   push eax
// 008e95b7  8d442408             lea eax, [esp + 8]
// 008e95bb  64a300000000         mov dword ptr fs:[0], eax
// 008e95c1  6888010000           push 0x188
// 008e95c6  e895a2f0ff           call 0x7f3860
// 008e95cb  83c404               add esp, 4
// 008e95ce  89442404             mov dword ptr [esp + 4], eax
// 008e95d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008e95da  85c0                 test eax, eax
// 008e95dc  7419                 je 0x8e95f7
// 008e95de  6a00                 push 0
// 008e95e0  8bc8                 mov ecx, eax
// 008e95e2  e899fcffff           call 0x8e9280
// 008e95e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e95eb  64890d00000000       mov dword ptr fs:[0], ecx
// 008e95f2  59                   pop ecx
// 008e95f3  83c410               add esp, 0x10
// 008e95f6  c3                   ret 
// 008e95f7  33c0                 xor eax, eax
// 008e95f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e95fd  64890d00000000       mov dword ptr fs:[0], ecx
// 008e9604  59                   pop ecx
// 008e9605  83c410               add esp, 0x10
// 008e9608  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonGroupControlPopup@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp