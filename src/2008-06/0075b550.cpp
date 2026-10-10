// roc 2008-06 0075b550  unit: CXTPDockingPaneMiniWnd  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b550
//
// 0075b550  56                   push esi
// 0075b551  8bf1                 mov esi, ecx
// 0075b553  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 0075b55a  7445                 je 0x75b5a1
// 0075b55c  8b4638               mov eax, dword ptr [esi + 0x38]
// 0075b55f  85c0                 test eax, eax
// 0075b561  742d                 je 0x75b590
// 0075b563  8d4820               lea ecx, [eax + 0x20]
// 0075b566  8b01                 mov eax, dword ptr [ecx]
// 0075b568  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075b56b  ffd2                 call edx
// 0075b56d  85c0                 test eax, eax
// 0075b56f  751f                 jne 0x75b590
// 0075b571  50                   push eax
// 0075b572  50                   push eax
// 0075b573  8b8628ffffff         mov eax, dword ptr [esi - 0xd8]
// 0075b579  6863030000           push 0x363
// 0075b57e  50                   push eax
// 0075b57f  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0075b586  ff150c2e8000         call dword ptr [0x802e0c]
// 0075b58c  5e                   pop esi
// 0075b58d  c20400               ret 4
// 0075b590  8b9608ffffff         mov edx, dword ptr [esi - 0xf8]
// 0075b596  8b4268               mov eax, dword ptr [edx + 0x68]
// 0075b599  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 0075b59f  ffd0                 call eax
// 0075b5a1  5e                   pop esi
// 0075b5a2  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnChildContainerChanged@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
