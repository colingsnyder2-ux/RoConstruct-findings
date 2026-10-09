// roc 2009-12 008a9d70  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9d70
//
// 008a9d70  33c0                 xor eax, eax
// 008a9d72  56                   push esi
// 008a9d73  8b742408             mov esi, dword ptr [esp + 8]
// 008a9d77  8906                 mov dword ptr [esi], eax
// 008a9d79  894604               mov dword ptr [esi + 4], eax
// 008a9d7c  894608               mov dword ptr [esi + 8], eax
// 008a9d7f  89460c               mov dword ptr [esi + 0xc], eax
// 008a9d82  894610               mov dword ptr [esi + 0x10], eax
// 008a9d85  894614               mov dword ptr [esi + 0x14], eax
// 008a9d88  894618               mov dword ptr [esi + 0x18], eax
// 008a9d8b  89461c               mov dword ptr [esi + 0x1c], eax
// 008a9d8e  b8007d0000           mov eax, 0x7d00
// 008a9d93  57                   push edi
// 008a9d94  8bf9                 mov edi, ecx
// 008a9d96  8bc8                 mov ecx, eax
// 008a9d98  894620               mov dword ptr [esi + 0x20], eax
// 008a9d9b  894e24               mov dword ptr [esi + 0x24], ecx
// 008a9d9e  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 008a9da4  85c0                 test eax, eax
// 008a9da6  745a                 je 0x8a9e02
// 008a9da8  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 008a9daf  7451                 je 0x8a9e02
// 008a9db1  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008a9db7  8b5020               mov edx, dword ptr [eax + 0x20]
// 008a9dba  8d4820               lea ecx, [eax + 0x20]
// 008a9dbd  8b4210               mov eax, dword ptr [edx + 0x10]
// 008a9dc0  56                   push esi
// 008a9dc1  ffd0                 call eax
// 008a9dc3  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 008a9dc9  6a01                 push 1
// 008a9dcb  56                   push esi
// 008a9dcc  e8df7f0000           call 0x8b1db0
// 008a9dd1  837c241000           cmp dword ptr [esp + 0x10], 0
// 008a9dd6  742a                 je 0x8a9e02
// 008a9dd8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 008a9dde  85ff                 test edi, edi
// 008a9de0  7415                 je 0x8a9df7
// 008a9de2  83ff01               cmp edi, 1
// 008a9de5  7410                 je 0x8a9df7
// 008a9de7  b804000000           mov eax, 4
// 008a9dec  01461c               add dword ptr [esi + 0x1c], eax
// 008a9def  014624               add dword ptr [esi + 0x24], eax
// 008a9df2  5f                   pop edi
// 008a9df3  5e                   pop esi
// 008a9df4  c20800               ret 8
// 008a9df7  b804000000           mov eax, 4
// 008a9dfc  014618               add dword ptr [esi + 0x18], eax
// 008a9dff  014620               add dword ptr [esi + 0x20], eax
// 008a9e02  5f                   pop edi
// 008a9e03  5e                   pop esi
// 008a9e04  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
