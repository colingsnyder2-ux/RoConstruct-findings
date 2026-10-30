// roc 2011-06 00872940  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00872940
//
// 00872940  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00872943  8b5044               mov edx, dword ptr [eax + 0x44]
// 00872946  53                   push ebx
// 00872947  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0087294b  56                   push esi
// 0087294c  8b7048               mov esi, dword ptr [eax + 0x48]
// 0087294f  03da                 add ebx, edx
// 00872951  8b542418             mov edx, dword ptr [esp + 0x18]
// 00872955  57                   push edi
// 00872956  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00872959  8b4050               mov eax, dword ptr [eax + 0x50]
// 0087295c  03d6                 add edx, esi
// 0087295e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00872962  2bf7                 sub esi, edi
// 00872964  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00872968  2bf8                 sub edi, eax
// 0087296a  83c203               add edx, 3
// 0087296d  8d442418             lea eax, [esp + 0x18]
// 00872971  8954241c             mov dword ptr [esp + 0x1c], edx
// 00872975  8b542410             mov edx, dword ptr [esp + 0x10]
// 00872979  50                   push eax
// 0087297a  83c303               add ebx, 3
// 0087297d  83ee03               sub esi, 3
// 00872980  83ef03               sub edi, 3
// 00872983  52                   push edx
// 00872984  81c130010000         add ecx, 0x130
// 0087298a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0087298e  89742428             mov dword ptr [esp + 0x28], esi
// 00872992  897c242c             mov dword ptr [esp + 0x2c], edi
// 00872996  e8b59e0700           call 0x8ec850
// 0087299b  5f                   pop edi
// 0087299c  5e                   pop esi
// 0087299d  5b                   pop ebx
// 0087299e  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
