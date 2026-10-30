// from server: 100% by auto
// roc 2007-08 006d9980  unit: CXTPDockingPaneAutoHideWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d9980
//
// 006d9980  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 006d9986  85c0                 test eax, eax
// 006d9988  7412                 je 0x6d999c
// 006d998a  3988a8000000         cmp dword ptr [eax + 0xa8], ecx
// 006d9990  750a                 jne 0x6d999c
// 006d9992  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 006d999c  83790401             cmp dword ptr [ecx + 4], 1
// 006d99a0  7f0a                 jg 0x6d99ac
// 006d99a2  8b01                 mov eax, dword ptr [ecx]
// 006d99a4  8b5004               mov edx, dword ptr [eax + 4]
// 006d99a7  6a01                 push 1
// 006d99a9  ffd2                 call edx
// 006d99ab  c3                   ret 
// 006d99ac  e93368f5ff           jmp 0x6301e4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?PostNcDestroy@CXTPDockingPaneAutoHideWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
