// roc 2011-06 00871870  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871870
//
// 00871870  837c240400           cmp dword ptr [esp + 4], 0
// 00871875  750b                 jne 0x871882
// 00871877  81c138010000         add ecx, 0x138
// 0087187d  e89a8df9ff           call 0x80a61c
// 00871882  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
