// from server: 100% by auto
// roc 2007-08 006e0790  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0790
//
// 006e0790  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006e0793  3b442404             cmp eax, dword ptr [esp + 4]
// 006e0797  750a                 jne 0x6e07a3
// 006e0799  51                   push ecx
// 006e079a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e079e  e8cd3f0000           call 0x6e4770
// 006e07a3  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?FindPane@CXTPDockingPaneBase@@UBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
