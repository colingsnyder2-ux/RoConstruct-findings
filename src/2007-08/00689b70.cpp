// from server: 100% by auto
// roc 2007-08 00689b70  unit: CXTPTabClientWnd  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689b70
//
// 00689b70  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00689b76  6a00                 push 0
// 00689b78  e8e1e70a00           call 0x73835e
// 00689b7d  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIGetActive@CXTPTabClientWnd@@IAEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
