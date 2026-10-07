// roc 2008-06 00701820  unit: CXTPTabClientWnd  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701820
//
// 00701820  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00701826  6a00                 push 0
// 00701828  e8a1a70b00           call 0x7bbfce
// 0070182d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIGetActive@CXTPTabClientWnd@@IAEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
