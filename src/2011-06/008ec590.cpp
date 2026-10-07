// roc 2011-06 008ec590  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec590
//
// 008ec590  8b442404             mov eax, dword ptr [esp + 4]
// 008ec594  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ec598  2503040000           and eax, 0x403
// 008ec59d  8901                 mov dword ptr [ecx], eax
// 008ec59f  33c0                 xor eax, eax
// 008ec5a1  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetPropertyBits@XTextHost@CXTPRichRender@@UAEJKPAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
