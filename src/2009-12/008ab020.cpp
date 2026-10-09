// roc 2009-12 008ab020  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab020
//
// 008ab020  833db88eb60000       cmp dword ptr [0xb68eb8], 0
// 008ab027  56                   push esi
// 008ab028  8bf1                 mov esi, ecx
// 008ab02a  0f84f5000000         je 0x8ab125
// 008ab030  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008ab036  85c0                 test eax, eax
// 008ab038  0f84e7000000         je 0x8ab125
// 008ab03e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008ab044  57                   push edi
// 008ab045  85c0                 test eax, eax
// 008ab047  744d                 je 0x8ab096
// 008ab049  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008ab04f  6a00                 push 0
// 008ab051  6a00                 push 0
// 008ab053  50                   push eax
// 008ab054  8d7e54               lea edi, [esi + 0x54]
// 008ab057  6a0a                 push 0xa
// 008ab059  8bcf                 mov ecx, edi
// 008ab05b  e8e0570000           call 0x8b0840
// 008ab060  8bc8                 mov ecx, eax
// 008ab062  e8b9d4f8ff           call 0x838520
// 008ab067  85c0                 test eax, eax
// 008ab069  0f85b5000000         jne 0x8ab124
// 008ab06f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008ab075  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008ab07b  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 008ab081  6a00                 push 0
// 008ab083  6a00                 push 0
// 008ab085  50                   push eax
// 008ab086  6a0b                 push 0xb
// 008ab088  8bcf                 mov ecx, edi
// 008ab08a  e8b1570000           call 0x8b0840
// 008ab08f  8bc8                 mov ecx, eax
// 008ab091  e88ad4f8ff           call 0x838520
// 008ab096  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008ab09b  7472                 je 0x8ab10f
// 008ab09d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 008ab0a3  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 008ab0a9  85c9                 test ecx, ecx
// 008ab0ab  743d                 je 0x8ab0ea
// 008ab0ad  6a00                 push 0
// 008ab0af  e8948af4ff           call 0x7f3b48
// 008ab0b4  8d4e54               lea ecx, [esi + 0x54]
// 008ab0b7  e884570000           call 0x8b0840
// 008ab0bc  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008ab0c2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008ab0c8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008ab0cb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008ab0d1  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008ab0d4  83c154               add ecx, 0x54
// 008ab0d7  50                   push eax
// 008ab0d8  ffd2                 call edx
// 008ab0da  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008ab0e0  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 008ab0ea  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008ab0f0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008ab0f3  6a00                 push 0
// 008ab0f5  6a32                 push 0x32
// 008ab0f7  6a04                 push 4
// 008ab0f9  52                   push edx
// 008ab0fa  ff1558cc9800         call dword ptr [0x98cc58]
// 008ab100  5f                   pop edi
// 008ab101  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 008ab10b  5e                   pop esi
// 008ab10c  c20400               ret 4
// 008ab10f  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008ab115  e836efffff           call 0x8aa050
// 008ab11a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 008ab124  5f                   pop edi
// 008ab125  5e                   pop esi
// 008ab126  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
