// roc 2010-06 0085dd00  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085dd00
//
// 0085dd00  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 0085dd06  85c0                 test eax, eax
// 0085dd08  7412                 je 0x85dd1c
// 0085dd0a  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 0085dd10  750a                 jne 0x85dd1c
// 0085dd12  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 0085dd1c  83790401             cmp dword ptr [ecx + 4], 1
// 0085dd20  7f0a                 jg 0x85dd2c
// 0085dd22  8b01                 mov eax, dword ptr [ecx]
// 0085dd24  8b5004               mov edx, dword ptr [eax + 4]
// 0085dd27  6a01                 push 1
// 0085dd29  ffd2                 call edx
// 0085dd2b  c3                   ret 
// 0085dd2c  e9eba1f4ff           jmp 0x7a7f1c
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
