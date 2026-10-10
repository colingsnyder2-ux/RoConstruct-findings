// roc 2012-06 00a38220  unit: CXTPDockingPaneMiniWnd  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38220
//
// 00a38220  56                   push esi
// 00a38221  8bf1                 mov esi, ecx
// 00a38223  83be28ffffff00       cmp dword ptr [esi - 0xd8], 0
// 00a3822a  7445                 je 0xa38271
// 00a3822c  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a3822f  85c0                 test eax, eax
// 00a38231  742d                 je 0xa38260
// 00a38233  8d4820               lea ecx, [eax + 0x20]
// 00a38236  8b01                 mov eax, dword ptr [ecx]
// 00a38238  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3823b  ffd2                 call edx
// 00a3823d  85c0                 test eax, eax
// 00a3823f  751f                 jne 0xa38260
// 00a38241  50                   push eax
// 00a38242  50                   push eax
// 00a38243  8b8628ffffff         mov eax, dword ptr [esi - 0xd8]
// 00a38249  6863030000           push 0x363
// 00a3824e  50                   push eax
// 00a3824f  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 00a38256  ff15243cb200         call dword ptr [0xb23c24]
// 00a3825c  5e                   pop esi
// 00a3825d  c20400               ret 4
// 00a38260  8b9608ffffff         mov edx, dword ptr [esi - 0xf8]
// 00a38266  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a38269  8d8e08ffffff         lea ecx, [esi - 0xf8]
// 00a3826f  ffd0                 call eax
// 00a38271  5e                   pop esi
// 00a38272  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnChildContainerChanged@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
