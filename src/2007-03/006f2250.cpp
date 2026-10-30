// roc 2007-03 006f2250  unit: seg_006f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f2250
//
// 006f2250  8b442404             mov eax, dword ptr [esp + 4]
// 006f2254  56                   push esi
// 006f2255  57                   push edi
// 006f2256  33c9                 xor ecx, ecx
// 006f2258  8908                 mov dword ptr [eax], ecx
// 006f225a  33d2                 xor edx, edx
// 006f225c  33f6                 xor esi, esi
// 006f225e  895004               mov dword ptr [eax + 4], edx
// 006f2261  33ff                 xor edi, edi
// 006f2263  897008               mov dword ptr [eax + 8], esi
// 006f2266  89780c               mov dword ptr [eax + 0xc], edi
// 006f2269  5f                   pop edi
// 006f226a  33c0                 xor eax, eax
// 006f226c  5e                   pop esi
// 006f226d  c20400               ret 4
// copied from an identical function in another client (function ?TxGetViewInset@XTextHost@CXTPRichRender@@UAEJPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp