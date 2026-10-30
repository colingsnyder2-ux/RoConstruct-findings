// roc 2012-06 00993520  unit: CXTPCommandBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993520
//
// 00993520  8389e800000002       or dword ptr [ecx + 0xe8], 2
// 00993527  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?DelayRedraw@CXTPCommandBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeMenusPage.cpp
