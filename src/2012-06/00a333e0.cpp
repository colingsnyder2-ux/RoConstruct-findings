// roc 2012-06 00a333e0  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a333e0
//
// 00a333e0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00a333e6  85c0                 test eax, eax
// 00a333e8  7412                 je 0xa333fc
// 00a333ea  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 00a333f0  750a                 jne 0xa333fc
// 00a333f2  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 00a333fc  83790401             cmp dword ptr [ecx + 4], 1
// 00a33400  7f0a                 jg 0xa3340c
// 00a33402  8b01                 mov eax, dword ptr [ecx]
// 00a33404  8b5004               mov edx, dword ptr [eax + 4]
// 00a33407  6a01                 push 1
// 00a33409  ffd2                 call edx
// 00a3340b  c3                   ret 
// 00a3340c  e979f2f4ff           jmp 0x98268a
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
