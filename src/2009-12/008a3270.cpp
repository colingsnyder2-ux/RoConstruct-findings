// roc 2009-12 008a3270  unit: CXTPReportHyperlink  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3270
//
// 008a3270  6aff                 push -1
// 008a3272  68a8239600           push 0x9623a8
// 008a3277  64a100000000         mov eax, dword ptr fs:[0]
// 008a327d  50                   push eax
// 008a327e  51                   push ecx
// 008a327f  56                   push esi
// 008a3280  a10052b600           mov eax, dword ptr [0xb65200]
// 008a3285  33c4                 xor eax, esp
// 008a3287  50                   push eax
// 008a3288  8d44240c             lea eax, [esp + 0xc]
// 008a328c  64a300000000         mov dword ptr fs:[0], eax
// 008a3292  8bf1                 mov esi, ecx
// 008a3294  89742408             mov dword ptr [esp + 8], esi
// 008a3298  c7063c5aa000         mov dword ptr [esi], 0xa05a3c
// 008a329e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a32a6  e8b5feffff           call 0x8a3160
// 008a32ab  8bce                 mov ecx, esi
// 008a32ad  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a32b5  e856faffff           call 0x8a2d10
// 008a32ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a32be  64890d00000000       mov dword ptr fs:[0], ecx
// 008a32c5  59                   pop ecx
// 008a32c6  5e                   pop esi
// 008a32c7  83c410               add esp, 0x10
// 008a32ca  c3                   ret 
// copied from an identical function in another client (function ??1CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp