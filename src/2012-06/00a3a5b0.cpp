// roc 2012-06 00a3a5b0  unit: CXTPDockingPaneAutoHidePanel  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a5b0
//
// 00a3a5b0  83ec20               sub esp, 0x20
// 00a3a5b3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a3a5b7  53                   push ebx
// 00a3a5b8  55                   push ebp
// 00a3a5b9  56                   push esi
// 00a3a5ba  57                   push edi
// 00a3a5bb  50                   push eax
// 00a3a5bc  8bf1                 mov esi, ecx
// 00a3a5be  e8afef0500           call 0xa99572
// 00a3a5c3  89442434             mov dword ptr [esp + 0x34], eax
// 00a3a5c7  85c0                 test eax, eax
// 00a3a5c9  7449                 je 0xa3a614
// 00a3a5cb  56                   push esi
// 00a3a5cc  8d4c2414             lea ecx, [esp + 0x14]
// 00a3a5d0  e8cbabf9ff           call 0x9d51a0
// 00a3a5d5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a3a5d9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a3a5dd  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a3a5e1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a3a5e5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a3a5e9  8d4e54               lea ecx, [esi + 0x54]
// 00a3a5ec  e88ffbffff           call 0xa3a180
// 00a3a5f1  83ec10               sub esp, 0x10
// 00a3a5f4  8bd4                 mov edx, esp
// 00a3a5f6  893a                 mov dword ptr [edx], edi
// 00a3a5f8  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a3a5fc  895a04               mov dword ptr [edx + 4], ebx
// 00a3a5ff  896a08               mov dword ptr [edx + 8], ebp
// 00a3a602  8bc8                 mov ecx, eax
// 00a3a604  8b00                 mov eax, dword ptr [eax]
// 00a3a606  8b4058               mov eax, dword ptr [eax + 0x58]
// 00a3a609  897a0c               mov dword ptr [edx + 0xc], edi
// 00a3a60c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a3a610  56                   push esi
// 00a3a611  52                   push edx
// 00a3a612  ffd0                 call eax
// 00a3a614  5f                   pop edi
// 00a3a615  5e                   pop esi
// 00a3a616  5d                   pop ebp
// 00a3a617  b801000000           mov eax, 1
// 00a3a61c  5b                   pop ebx
// 00a3a61d  83c420               add esp, 0x20
// 00a3a620  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnPrintClient@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
