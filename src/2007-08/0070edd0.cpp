// roc 2007-08 0070edd0  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070edd0
//
// 0070edd0  8b442404             mov eax, dword ptr [esp + 4]
// 0070edd4  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 0070edda  33c0                 xor eax, eax
// 0070eddc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?TxGetAcceleratorPos@XTextHost@CXTPRichRender@@UAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
