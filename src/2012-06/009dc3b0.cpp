// roc 2012-06 009dc3b0  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc3b0
//
// 009dc3b0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dc3b6  85c0                 test eax, eax
// 009dc3b8  7407                 je 0x9dc3c1
// 009dc3ba  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 009dc3c0  c3                   ret 
// 009dc3c1  33c0                 xor eax, eax
// 009dc3c3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
