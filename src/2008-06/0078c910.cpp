// from server: 100% by auto
// roc 2008-06 0078c910  unit: CXTPRichRender::XTextHost  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c910
//
// 0078c910  8b442404             mov eax, dword ptr [esp + 4]
// 0078c914  56                   push esi
// 0078c915  57                   push edi
// 0078c916  33c9                 xor ecx, ecx
// 0078c918  8908                 mov dword ptr [eax], ecx
// 0078c91a  33d2                 xor edx, edx
// 0078c91c  33f6                 xor esi, esi
// 0078c91e  895004               mov dword ptr [eax + 4], edx
// 0078c921  33ff                 xor edi, edi
// 0078c923  897008               mov dword ptr [eax + 8], esi
// 0078c926  89780c               mov dword ptr [eax + 0xc], edi
// 0078c929  5f                   pop edi
// 0078c92a  33c0                 xor eax, eax
// 0078c92c  5e                   pop esi
// 0078c92d  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?TxGetViewInset@XTextHost@CXTPRichRender@@UAEJPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
