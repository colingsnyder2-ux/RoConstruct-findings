// roc 2010-06 00808ad0  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808ad0
//
// 00808ad0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00808ad6  85c0                 test eax, eax
// 00808ad8  7407                 je 0x808ae1
// 00808ada  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00808ae0  c3                   ret 
// 00808ae1  33c0                 xor eax, eax
// 00808ae3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
