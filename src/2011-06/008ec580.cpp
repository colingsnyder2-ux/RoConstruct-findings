// from server: 100% by auto
// roc 2011-06 008ec580  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec580
//
// 008ec580  8b442404             mov eax, dword ptr [esp + 4]
// 008ec584  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 008ec58a  33c0                 xor eax, eax
// 008ec58c  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetAcceleratorPos@XTextHost@CXTPRichRender@@UAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
