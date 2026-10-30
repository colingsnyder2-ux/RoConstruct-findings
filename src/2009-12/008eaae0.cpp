// roc 2009-12 008eaae0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eaae0
//
// 008eaae0  6aff                 push -1
// 008eaae2  687a6a9600           push 0x966a7a
// 008eaae7  64a100000000         mov eax, dword ptr fs:[0]
// 008eaaed  50                   push eax
// 008eaaee  51                   push ecx
// 008eaaef  a10052b600           mov eax, dword ptr [0xb65200]
// 008eaaf4  33c4                 xor eax, esp
// 008eaaf6  50                   push eax
// 008eaaf7  8d442408             lea eax, [esp + 8]
// 008eaafb  64a300000000         mov dword ptr fs:[0], eax
// 008eab01  68a0000000           push 0xa0
// 008eab06  e8558df0ff           call 0x7f3860
// 008eab0b  83c404               add esp, 4
// 008eab0e  89442404             mov dword ptr [esp + 4], eax
// 008eab12  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008eab1a  85c0                 test eax, eax
// 008eab1c  7417                 je 0x8eab35
// 008eab1e  8bc8                 mov ecx, eax
// 008eab20  e86bfbffff           call 0x8ea690
// 008eab25  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008eab29  64890d00000000       mov dword ptr fs:[0], ecx
// 008eab30  59                   pop ecx
// 008eab31  83c410               add esp, 0x10
// 008eab34  c3                   ret 
// 008eab35  33c0                 xor eax, eax
// 008eab37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008eab3b  64890d00000000       mov dword ptr fs:[0], ecx
// 008eab42  59                   pop ecx
// 008eab43  83c410               add esp, 0x10
// 008eab46  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTTreeView@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp