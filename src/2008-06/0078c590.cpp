// roc 2008-06 0078c590  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c590
//
// 0078c590  8b442404             mov eax, dword ptr [esp + 4]
// 0078c594  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 0078c59a  33c0                 xor eax, eax
// 0078c59c  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?TxGetAcceleratorPos@XTextHost@CXTPRichRender@@UAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
