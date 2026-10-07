// roc 2007-08 0070edb0  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070edb0
//
// 0070edb0  8b442404             mov eax, dword ptr [esp + 4]
// 0070edb4  c70000000001         mov dword ptr [eax], 0x1000000
// 0070edba  33c0                 xor eax, eax
// 0070edbc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?TxGetMaxLength@XTextHost@CXTPRichRender@@UAEJPAK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
