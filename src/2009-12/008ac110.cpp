// roc 2009-12 008ac110  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac110
//
// 008ac110  6aff                 push -1
// 008ac112  68e82a9600           push 0x962ae8
// 008ac117  64a100000000         mov eax, dword ptr fs:[0]
// 008ac11d  50                   push eax
// 008ac11e  51                   push ecx
// 008ac11f  56                   push esi
// 008ac120  a10052b600           mov eax, dword ptr [0xb65200]
// 008ac125  33c4                 xor eax, esp
// 008ac127  50                   push eax
// 008ac128  8d44240c             lea eax, [esp + 0xc]
// 008ac12c  64a300000000         mov dword ptr fs:[0], eax
// 008ac132  8bf1                 mov esi, ecx
// 008ac134  89742408             mov dword ptr [esp + 8], esi
// 008ac138  c7065c68a000         mov dword ptr [esi], 0xa0685c
// 008ac13e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008ac146  e825f5ffff           call 0x8ab670
// 008ac14b  8bce                 mov ecx, esi
// 008ac14d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ac155  e846f1ffff           call 0x8ab2a0
// 008ac15a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ac15e  64890d00000000       mov dword ptr fs:[0], ecx
// 008ac165  59                   pop ecx
// 008ac166  5e                   pop esi
// 008ac167  83c410               add esp, 0x10
// 008ac16a  c3                   ret 
// copied from an identical function in another client (function ??1CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp