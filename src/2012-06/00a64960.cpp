// roc 2012-06 00a64960  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64960
//
// 00a64960  8b442404             mov eax, dword ptr [esp + 4]
// 00a64964  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 00a6496a  33c0                 xor eax, eax
// 00a6496c  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetAcceleratorPos@XTextHost@CXTPRichRender@@UAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
