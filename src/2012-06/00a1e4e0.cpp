// roc 2012-06 00a1e4e0  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e4e0
//
// 00a1e4e0  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00a1e4e6  81c184010000         add ecx, 0x184
// 00a1e4ec  e96fe50200           jmp 0xa4ca60
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
