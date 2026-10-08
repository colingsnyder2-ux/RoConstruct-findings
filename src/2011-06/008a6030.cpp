// roc 2011-06 008a6030  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6030
//
// 008a6030  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 008a6036  81c184010000         add ecx, 0x184
// 008a603c  e9cfe60200           jmp 0x8d4710
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
