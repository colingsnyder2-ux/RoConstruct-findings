// roc 2009-06 00784fe0  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784fe0
//
// 00784fe0  837c240400           cmp dword ptr [esp + 4], 0
// 00784fe5  750b                 jne 0x784ff2
// 00784fe7  81c138010000         add ecx, 0x138
// 00784fed  e80440f9ff           call 0x718ff6
// 00784ff2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
