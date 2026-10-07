// roc 2012-06 009e9dd0  unit: CXTPToolTipContext::CHTMLToolTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9dd0
//
// 009e9dd0  81793450000500       cmp dword ptr [ecx + 0x34], 0x50050
// 009e9dd7  1bc0                 sbb eax, eax
// 009e9dd9  40                   inc eax
// 009e9dda  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?IsBalloonStyleSupported@CXTPToolTipContext@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
