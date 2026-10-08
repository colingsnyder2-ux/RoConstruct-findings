// roc 2010-06 00848ef0  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848ef0
//
// 00848ef0  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00848ef6  81c184010000         add ecx, 0x184
// 00848efc  e91fa90300           jmp 0x883820
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
