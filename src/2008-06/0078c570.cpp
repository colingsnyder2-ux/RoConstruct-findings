// from server: 100% by auto
// roc 2008-06 0078c570  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c570
//
// 0078c570  8b442404             mov eax, dword ptr [esp + 4]
// 0078c574  c70000000001         mov dword ptr [eax], 0x1000000
// 0078c57a  33c0                 xor eax, eax
// 0078c57c  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?TxGetMaxLength@XTextHost@CXTPRichRender@@UAEJPAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
