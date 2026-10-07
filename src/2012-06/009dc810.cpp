// roc 2012-06 009dc810  unit: CXTPTabClientWnd  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc810
//
// 009dc810  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 009dc816  6a00                 push 0
// 009dc818  e8e7ce0b00           call 0xa99704
// 009dc81d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIGetActive@CXTPTabClientWnd@@IAEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
