// roc 2008-06 00709e80  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709e80
//
// 00709e80  8b442408             mov eax, dword ptr [esp + 8]
// 00709e84  c740040d000400       mov dword ptr [eax + 4], 0x4000d
// 00709e8b  c7400800000000       mov dword ptr [eax + 8], 0
// 00709e92  33c0                 xor eax, eax
// 00709e94  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetHostInfo@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGJPAU_DOCHOSTUIINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
