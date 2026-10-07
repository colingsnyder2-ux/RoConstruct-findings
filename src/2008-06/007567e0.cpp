// roc 2008-06 007567e0  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007567e0
//
// 007567e0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007567e6  85c0                 test eax, eax
// 007567e8  7412                 je 0x7567fc
// 007567ea  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 007567f0  750a                 jne 0x7567fc
// 007567f2  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 007567fc  83790401             cmp dword ptr [ecx + 4], 1
// 00756800  7f0a                 jg 0x75680c
// 00756802  8b01                 mov eax, dword ptr [ecx]
// 00756804  8b5004               mov edx, dword ptr [eax + 4]
// 00756807  6a01                 push 1
// 00756809  ffd2                 call edx
// 0075680b  c3                   ret 
// 0075680c  e9d3a3f4ff           jmp 0x6a0be4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
