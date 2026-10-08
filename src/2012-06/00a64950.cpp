// from server: 100% by auto
// roc 2012-06 00a64950  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64950
//
// 00a64950  8b442404             mov eax, dword ptr [esp + 4]
// 00a64954  c70000000001         mov dword ptr [eax], 0x1000000
// 00a6495a  33c0                 xor eax, eax
// 00a6495c  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetMaxLength@XTextHost@CXTPRichRender@@UAEJPAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
