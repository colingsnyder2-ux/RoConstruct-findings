// roc 2011-06 00871890  unit: CXTPToolTipContext::CHTMLToolTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871890
//
// 00871890  81793450000500       cmp dword ptr [ecx + 0x34], 0x50050
// 00871897  1bc0                 sbb eax, eax
// 00871899  40                   inc eax
// 0087189a  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?IsBalloonStyleSupported@CXTPToolTipContext@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
