// roc 2009-06 007b7b10  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7b10
//
// 007b7b10  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 007b7b16  81c184010000         add ecx, 0x184
// 007b7b1c  e96fcf0300           jmp 0x7f4a90
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
