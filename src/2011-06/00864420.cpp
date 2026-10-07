// roc 2011-06 00864420  unit: CXTPTabClientWnd  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864420
//
// 00864420  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00864426  6a00                 push 0
// 00864428  e81d831600           call 0x9cc74a
// 0086442d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIGetActive@CXTPTabClientWnd@@IAEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
