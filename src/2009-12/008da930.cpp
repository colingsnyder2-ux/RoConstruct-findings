// roc 2009-12 008da930  unit: CXTColorHex  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008da930
//
// 008da930  b8e8aea000           mov eax, 0xa0aee8
// 008da935  c3                   ret 
// copied from an identical function in another client (function ?GetThisMessageMap@CXTPRibbonBar@@KGPBUAFX_MSGMAP@@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp