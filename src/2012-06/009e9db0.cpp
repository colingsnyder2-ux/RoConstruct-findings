// roc 2012-06 009e9db0  unit: CXTPToolTipContext::CHTMLToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9db0
//
// 009e9db0  837c240400           cmp dword ptr [esp + 4], 0
// 009e9db5  750b                 jne 0x9e9dc2
// 009e9db7  81c138010000         add ecx, 0x138
// 009e9dbd  e80a89f9ff           call 0x9826cc
// 009e9dc2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnVisibleChanged@CHTMLToolTip@CXTPToolTipContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
