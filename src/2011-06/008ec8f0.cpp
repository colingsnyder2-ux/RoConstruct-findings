// roc 2011-06 008ec8f0  unit: CXTPRichRender::XTextHost  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec8f0
//
// 008ec8f0  8b442404             mov eax, dword ptr [esp + 4]
// 008ec8f4  56                   push esi
// 008ec8f5  57                   push edi
// 008ec8f6  33c9                 xor ecx, ecx
// 008ec8f8  8908                 mov dword ptr [eax], ecx
// 008ec8fa  33d2                 xor edx, edx
// 008ec8fc  33f6                 xor esi, esi
// 008ec8fe  895004               mov dword ptr [eax + 4], edx
// 008ec901  33ff                 xor edi, edi
// 008ec903  897008               mov dword ptr [eax + 8], esi
// 008ec906  89780c               mov dword ptr [eax + 0xc], edi
// 008ec909  5f                   pop edi
// 008ec90a  33c0                 xor eax, eax
// 008ec90c  5e                   pop esi
// 008ec90d  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?TxGetViewInset@XTextHost@CXTPRichRender@@UAEJPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
