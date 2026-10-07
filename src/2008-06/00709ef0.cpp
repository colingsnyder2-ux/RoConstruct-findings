// roc 2008-06 00709ef0  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709ef0
//
// 00709ef0  837c240400           cmp dword ptr [esp + 4], 0
// 00709ef5  750b                 jne 0x709f02
// 00709ef7  81c138010000         add ecx, 0x138
// 00709efd  e8546df9ff           call 0x6a0c56
// 00709f02  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
