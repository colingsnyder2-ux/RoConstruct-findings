// from server: 100% by auto
// roc 2008-06 007221b0  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007221b0
//
// 007221b0  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 007221b6  81c184010000         add ecx, 0x184
// 007221bc  e90fa20500           jmp 0x77c3d0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetCurSel@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
