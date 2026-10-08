// roc 2010-06 00813fe0  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813fe0
//
// 00813fe0  837c240400           cmp dword ptr [esp + 4], 0
// 00813fe5  750b                 jne 0x813ff2
// 00813fe7  81c138010000         add ecx, 0x138
// 00813fed  e86c3ff9ff           call 0x7a7f5e
// 00813ff2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
