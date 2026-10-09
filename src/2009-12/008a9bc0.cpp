// roc 2009-12 008a9bc0  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9bc0
//
// 008a9bc0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 008a9bc6  85c0                 test eax, eax
// 008a9bc8  7412                 je 0x8a9bdc
// 008a9bca  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 008a9bd0  750a                 jne 0x8a9bdc
// 008a9bd2  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 008a9bdc  83790401             cmp dword ptr [ecx + 4], 1
// 008a9be0  7f0a                 jg 0x8a9bec
// 008a9be2  8b01                 mov eax, dword ptr [ecx]
// 008a9be4  8b5004               mov edx, dword ptr [eax + 4]
// 008a9be7  6a01                 push 1
// 008a9be9  ffd2                 call edx
// 008a9beb  c3                   ret 
// 008a9bec  e9eba1f4ff           jmp 0x7f3ddc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
