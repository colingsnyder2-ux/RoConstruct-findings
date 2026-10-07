// roc 2012-06 00a64cd0  unit: CXTPRichRender::XTextHost  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64cd0
//
// 00a64cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00a64cd4  56                   push esi
// 00a64cd5  57                   push edi
// 00a64cd6  33c9                 xor ecx, ecx
// 00a64cd8  8908                 mov dword ptr [eax], ecx
// 00a64cda  33d2                 xor edx, edx
// 00a64cdc  33f6                 xor esi, esi
// 00a64cde  895004               mov dword ptr [eax + 4], edx
// 00a64ce1  33ff                 xor edi, edi
// 00a64ce3  897008               mov dword ptr [eax + 8], esi
// 00a64ce6  89780c               mov dword ptr [eax + 0xc], edi
// 00a64ce9  5f                   pop edi
// 00a64cea  33c0                 xor eax, eax
// 00a64cec  5e                   pop esi
// 00a64ced  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetViewInset@XTextHost@CXTPRichRender@@UAEJPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
