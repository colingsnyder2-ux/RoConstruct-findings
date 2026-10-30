// from server: 100% by auto
// roc 2008-06 007013a0  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007013a0
//
// 007013a0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007013a6  85c0                 test eax, eax
// 007013a8  7407                 je 0x7013b1
// 007013aa  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 007013b0  c3                   ret 
// 007013b1  33c0                 xor eax, eax
// 007013b3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
