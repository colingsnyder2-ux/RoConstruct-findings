// roc 2008-06 0075d8d0  unit: CXTPDockingPaneAutoHidePanel  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d8d0
//
// 0075d8d0  83ec20               sub esp, 0x20
// 0075d8d3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0075d8d7  53                   push ebx
// 0075d8d8  55                   push ebp
// 0075d8d9  56                   push esi
// 0075d8da  57                   push edi
// 0075d8db  50                   push eax
// 0075d8dc  8bf1                 mov esi, ecx
// 0075d8de  e845e70500           call 0x7bc028
// 0075d8e3  89442434             mov dword ptr [esp + 0x34], eax
// 0075d8e7  85c0                 test eax, eax
// 0075d8e9  7449                 je 0x75d934
// 0075d8eb  56                   push esi
// 0075d8ec  8d4c2414             lea ecx, [esp + 0x14]
// 0075d8f0  e83ba2f9ff           call 0x6f7b30
// 0075d8f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0075d8f9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075d8fd  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0075d901  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0075d905  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0075d909  8d4e54               lea ecx, [esi + 0x54]
// 0075d90c  e89ffbffff           call 0x75d4b0
// 0075d911  83ec10               sub esp, 0x10
// 0075d914  8bd4                 mov edx, esp
// 0075d916  893a                 mov dword ptr [edx], edi
// 0075d918  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0075d91c  895a04               mov dword ptr [edx + 4], ebx
// 0075d91f  896a08               mov dword ptr [edx + 8], ebp
// 0075d922  8bc8                 mov ecx, eax
// 0075d924  8b00                 mov eax, dword ptr [eax]
// 0075d926  8b4058               mov eax, dword ptr [eax + 0x58]
// 0075d929  897a0c               mov dword ptr [edx + 0xc], edi
// 0075d92c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0075d930  56                   push esi
// 0075d931  52                   push edx
// 0075d932  ffd0                 call eax
// 0075d934  5f                   pop edi
// 0075d935  5e                   pop esi
// 0075d936  5d                   pop ebp
// 0075d937  b801000000           mov eax, 1
// 0075d93c  5b                   pop ebx
// 0075d93d  83c420               add esp, 0x20
// 0075d940  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnPrintClient@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
