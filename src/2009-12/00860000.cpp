// roc 2009-12 00860000  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860000
//
// 00860000  837c240400           cmp dword ptr [esp + 4], 0
// 00860005  750b                 jne 0x860012
// 00860007  81c138010000         add ecx, 0x138
// 0086000d  e80c3ef9ff           call 0x7f3e1e
// 00860012  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
