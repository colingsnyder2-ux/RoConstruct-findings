// from server: 100% by auto
// roc 2012-06 00a64970  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64970
//
// 00a64970  8b442404             mov eax, dword ptr [esp + 4]
// 00a64974  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a64978  2503040000           and eax, 0x403
// 00a6497d  8901                 mov dword ptr [ecx], eax
// 00a6497f  33c0                 xor eax, eax
// 00a64981  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetPropertyBits@XTextHost@CXTPRichRender@@UAEJKPAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
