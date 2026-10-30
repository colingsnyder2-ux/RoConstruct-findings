// roc 2009-06 00779cc0  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779cc0
//
// 00779cc0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00779cc6  85c0                 test eax, eax
// 00779cc8  7407                 je 0x779cd1
// 00779cca  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00779cd0  c3                   ret 
// 00779cd1  33c0                 xor eax, eax
// 00779cd3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
