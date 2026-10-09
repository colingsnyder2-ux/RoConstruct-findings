// roc 2009-12 00894d60  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894d60
//
// 00894d60  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00894d66  81c184010000         add ecx, 0x184
// 00894d6c  e9cfa80300           jmp 0x8cf640
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
