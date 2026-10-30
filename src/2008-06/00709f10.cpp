// from server: 100% by auto
// roc 2008-06 00709f10  unit: CXTPToolTipContext::CHTMLToolTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709f10
//
// 00709f10  81793450000500       cmp dword ptr [ecx + 0x34], 0x50050
// 00709f17  1bc0                 sbb eax, eax
// 00709f19  40                   inc eax
// 00709f1a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?IsBalloonStyleSupported@CXTPToolTipContext@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
