// roc 2009-06 007cedb0  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cedb0
//
// 007cedb0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007cedb6  85c0                 test eax, eax
// 007cedb8  7412                 je 0x7cedcc
// 007cedba  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 007cedc0  750a                 jne 0x7cedcc
// 007cedc2  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 007cedcc  83790401             cmp dword ptr [ecx + 4], 1
// 007cedd0  7f0a                 jg 0x7ceddc
// 007cedd2  8b01                 mov eax, dword ptr [ecx]
// 007cedd4  8b5004               mov edx, dword ptr [eax + 4]
// 007cedd7  6a01                 push 1
// 007cedd9  ffd2                 call edx
// 007ceddb  c3                   ret 
// 007ceddc  e9c7a1f4ff           jmp 0x718fa8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
