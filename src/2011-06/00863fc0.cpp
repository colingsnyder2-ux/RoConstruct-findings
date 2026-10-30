// roc 2011-06 00863fc0  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00863fc0
//
// 00863fc0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00863fc6  85c0                 test eax, eax
// 00863fc8  7407                 je 0x863fd1
// 00863fca  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00863fd0  c3                   ret 
// 00863fd1  33c0                 xor eax, eax
// 00863fd3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
