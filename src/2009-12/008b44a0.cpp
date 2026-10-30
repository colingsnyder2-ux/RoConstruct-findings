// roc 2009-12 008b44a0  unit: CXTPDockingPaneSplitterContainer  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b44a0
//
// 008b44a0  6aff                 push -1
// 008b44a2  687a6a9600           push 0x966a7a
// 008b44a7  64a100000000         mov eax, dword ptr fs:[0]
// 008b44ad  50                   push eax
// 008b44ae  51                   push ecx
// 008b44af  a10052b600           mov eax, dword ptr [0xb65200]
// 008b44b4  33c4                 xor eax, esp
// 008b44b6  50                   push eax
// 008b44b7  8d442408             lea eax, [esp + 8]
// 008b44bb  64a300000000         mov dword ptr fs:[0], eax
// 008b44c1  6a6c                 push 0x6c
// 008b44c3  e898f3f3ff           call 0x7f3860
// 008b44c8  83c404               add esp, 4
// 008b44cb  89442404             mov dword ptr [esp + 4], eax
// 008b44cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008b44d7  85c0                 test eax, eax
// 008b44d9  7417                 je 0x8b44f2
// 008b44db  8bc8                 mov ecx, eax
// 008b44dd  e87ef4ffff           call 0x8b3960
// 008b44e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b44e6  64890d00000000       mov dword ptr fs:[0], ecx
// 008b44ed  59                   pop ecx
// 008b44ee  83c410               add esp, 0x10
// 008b44f1  c3                   ret 
// 008b44f2  33c0                 xor eax, eax
// 008b44f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b44f8  64890d00000000       mov dword ptr fs:[0], ecx
// 008b44ff  59                   pop ecx
// 008b4500  83c410               add esp, 0x10
// 008b4503  c3                   ret 
// copied from an identical function in another client (function ?OnCreateSplitter@CXTPDockingPaneSplitterContainer@@MAEPAVCXTPDockingPaneSplitterWnd@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp