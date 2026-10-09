// roc 2009-12 00854a20  unit: CXTPTabClientWnd::CWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854a20
//
// 00854a20  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00854a26  85c0                 test eax, eax
// 00854a28  7407                 je 0x854a31
// 00854a2a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00854a30  c3                   ret 
// 00854a31  33c0                 xor eax, eax
// 00854a33  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPaintManager@CWorkspace@CXTPTabClientWnd@@MBEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
