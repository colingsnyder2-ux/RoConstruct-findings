// roc 2007-08 0070f190  unit: CXTPRichRender::XTextHost  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f190
//
// 0070f190  8b442404             mov eax, dword ptr [esp + 4]
// 0070f194  56                   push esi
// 0070f195  57                   push edi
// 0070f196  33c9                 xor ecx, ecx
// 0070f198  8908                 mov dword ptr [eax], ecx
// 0070f19a  33d2                 xor edx, edx
// 0070f19c  33f6                 xor esi, esi
// 0070f19e  895004               mov dword ptr [eax + 4], edx
// 0070f1a1  33ff                 xor edi, edi
// 0070f1a3  897008               mov dword ptr [eax + 8], esi
// 0070f1a6  89780c               mov dword ptr [eax + 0xc], edi
// 0070f1a9  5f                   pop edi
// 0070f1aa  33c0                 xor eax, eax
// 0070f1ac  5e                   pop esi
// 0070f1ad  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?TxGetViewInset@XTextHost@CXTPRichRender@@UAEJPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
