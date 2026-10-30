// from server: 100% by auto
// roc 2012-06 00a64940  unit: CXTPRichRender::XTextHost  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64940
//
// 00a64940  8b442404             mov eax, dword ptr [esp + 4]
// 00a64944  c70000000000         mov dword ptr [eax], 0
// 00a6494a  33c0                 xor eax, eax
// 00a6494c  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetBackStyle@XTextHost@CXTPRichRender@@UAEJPAW4TXTBACKSTYLE@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
