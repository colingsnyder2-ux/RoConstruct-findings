// roc 2008-06 0078c5b0  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c5b0
//
// 0078c5b0  8b442404             mov eax, dword ptr [esp + 4]
// 0078c5b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078c5b8  2503040000           and eax, 0x403
// 0078c5bd  8901                 mov dword ptr [ecx], eax
// 0078c5bf  33c0                 xor eax, eax
// 0078c5c1  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?TxGetPropertyBits@XTextHost@CXTPRichRender@@UAEJKPAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
