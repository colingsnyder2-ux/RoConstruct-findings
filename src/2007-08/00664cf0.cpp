// from server: 100% by auto
// roc 2007-08 00664cf0  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664cf0
//
// 00664cf0  c701ec997c00         mov dword ptr [ecx], 0x7c99ec
// 00664cf6  c741546c997c00       mov dword ptr [ecx + 0x54], 0x7c996c
// 00664cfd  e95effffff           jmp 0x664c60
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlScrollBar.cpp (function ??1CXTPControlScrollBarCtrl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlScrollBar.cpp
