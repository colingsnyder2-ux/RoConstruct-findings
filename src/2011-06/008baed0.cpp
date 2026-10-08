// roc 2011-06 008baed0  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008baed0
//
// 008baed0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 008baed6  85c0                 test eax, eax
// 008baed8  7412                 je 0x8baeec
// 008baeda  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 008baee0  750a                 jne 0x8baeec
// 008baee2  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 008baeec  83790401             cmp dword ptr [ecx + 4], 1
// 008baef0  7f0a                 jg 0x8baefc
// 008baef2  8b01                 mov eax, dword ptr [ecx]
// 008baef4  8b5004               mov edx, dword ptr [eax + 4]
// 008baef7  6a01                 push 1
// 008baef9  ffd2                 call edx
// 008baefb  c3                   ret 
// 008baefc  e9d9f6f4ff           jmp 0x80a5da
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
