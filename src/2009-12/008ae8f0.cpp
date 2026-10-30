// roc 2009-12 008ae8f0  unit: CXTPDockingPaneMiniWnd  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae8f0
//
// 008ae8f0  56                   push esi
// 008ae8f1  8bf1                 mov esi, ecx
// 008ae8f3  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 008ae8fa  7445                 je 0x8ae941
// 008ae8fc  8b4638               mov eax, dword ptr [esi + 0x38]
// 008ae8ff  85c0                 test eax, eax
// 008ae901  742d                 je 0x8ae930
// 008ae903  8d4820               lea ecx, [eax + 0x20]
// 008ae906  8b01                 mov eax, dword ptr [ecx]
// 008ae908  8b5014               mov edx, dword ptr [eax + 0x14]
// 008ae90b  ffd2                 call edx
// 008ae90d  85c0                 test eax, eax
// 008ae90f  751f                 jne 0x8ae930
// 008ae911  50                   push eax
// 008ae912  50                   push eax
// 008ae913  8b8628ffffff         mov eax, dword ptr [esi - 0xd8]
// 008ae919  6863030000           push 0x363
// 008ae91e  50                   push eax
// 008ae91f  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 008ae926  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008ae92c  5e                   pop esi
// 008ae92d  c20400               ret 4
// 008ae930  8b9608ffffff         mov edx, dword ptr [esi - 0xf8]
// 008ae936  8b4268               mov eax, dword ptr [edx + 0x68]
// 008ae939  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 008ae93f  ffd0                 call eax
// 008ae941  5e                   pop esi
// 008ae942  c20400               ret 4
// copied from an identical function in another client (function ?OnChildContainerChanged@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp