// roc 2009-12 00894f50  unit: CXTPRibbonBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894f50
//
// 00894f50  e87bfdffff           call 0x894cd0
// 00894f55  85c0                 test eax, eax
// 00894f57  7509                 jne 0x894f62
// 00894f59  398190020000         cmp dword ptr [ecx + 0x290], eax
// 00894f5f  7501                 jne 0x894f62
// 00894f61  c3                   ret 
// 00894f62  b801000000           mov eax, 1
// 00894f67  c3                   ret 
// copied from an identical function in another client (function ?IsCaptionVisible@CXTPRibbonBar@@QBEHXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp