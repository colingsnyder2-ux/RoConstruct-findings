// roc 2009-12 008ab6c0  unit: CXTPDockingPaneAutoHideWnd  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab6c0
//
// 008ab6c0  6aff                 push -1
// 008ab6c2  682b2a9600           push 0x962a2b
// 008ab6c7  64a100000000         mov eax, dword ptr fs:[0]
// 008ab6cd  50                   push eax
// 008ab6ce  51                   push ecx
// 008ab6cf  56                   push esi
// 008ab6d0  57                   push edi
// 008ab6d1  a10052b600           mov eax, dword ptr [0xb65200]
// 008ab6d6  33c4                 xor eax, esp
// 008ab6d8  50                   push eax
// 008ab6d9  8d442410             lea eax, [esp + 0x10]
// 008ab6dd  64a300000000         mov dword ptr fs:[0], eax
// 008ab6e3  8bf9                 mov edi, ecx
// 008ab6e5  68a4000000           push 0xa4
// 008ab6ea  e87181f4ff           call 0x7f3860
// 008ab6ef  83c404               add esp, 4
// 008ab6f2  8944240c             mov dword ptr [esp + 0xc], eax
// 008ab6f6  33f6                 xor esi, esi
// 008ab6f8  89742418             mov dword ptr [esp + 0x18], esi
// 008ab6fc  3bc6                 cmp eax, esi
// 008ab6fe  7409                 je 0x8ab709
// 008ab700  8bc8                 mov ecx, eax
// 008ab702  e8e9f4ffff           call 0x8aabf0
// 008ab707  8bf0                 mov esi, eax
// 008ab709  8b4708               mov eax, dword ptr [edi + 8]
// 008ab70c  56                   push esi
// 008ab70d  50                   push eax
// 008ab70e  8bcf                 mov ecx, edi
// 008ab710  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008ab718  e853f5fbff           call 0x86ac70
// 008ab71d  89be90000000         mov dword ptr [esi + 0x90], edi
// 008ab723  8bc6                 mov eax, esi
// 008ab725  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ab729  64890d00000000       mov dword ptr fs:[0], ecx
// 008ab730  59                   pop ecx
// 008ab731  5f                   pop edi
// 008ab732  5e                   pop esi
// 008ab733  83c410               add esp, 0x10
// 008ab736  c3                   ret 
// copied from an identical function in another client (function ?AddManager@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEPAVCAutoHidePanelTabManager@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp