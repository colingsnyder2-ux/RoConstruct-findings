// roc 2007-03 006c2b00  unit: seg_006c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c2b00
//
// 006c2b00  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 006c2b06  85c0                 test eax, eax
// 006c2b08  7412                 je 0x6c2b1c
// 006c2b0a  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 006c2b10  750a                 jne 0x6c2b1c
// 006c2b12  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 006c2b1c  83790401             cmp dword ptr [ecx + 4], 1
// 006c2b20  7f0a                 jg 0x6c2b2c
// 006c2b22  8b01                 mov eax, dword ptr [ecx]
// 006c2b24  8b5004               mov edx, dword ptr [eax + 4]
// 006c2b27  6a01                 push 1
// 006c2b29  ffd2                 call edx
// 006c2b2b  c3                   ret 
// 006c2b2c  e941bbf5ff           jmp 0x61e672
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
