// from server: 100% by auto
// roc 2007-08 0070ede0  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ede0
//
// 0070ede0  8b442404             mov eax, dword ptr [esp + 4]
// 0070ede4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070ede8  2503040000           and eax, 0x403
// 0070eded  8901                 mov dword ptr [ecx], eax
// 0070edef  33c0                 xor eax, eax
// 0070edf1  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?TxGetPropertyBits@XTextHost@CXTPRichRender@@UAEJKPAK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
