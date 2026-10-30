// roc 2009-12 00804c70  unit: CXTPCommandBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804c70
//
// 00804c70  8389e800000002       or dword ptr [ecx + 0xe8], 2
// 00804c77  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?DelayRedraw@CXTPCommandBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeMenusPage.cpp
