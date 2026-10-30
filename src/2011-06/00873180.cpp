// roc 2011-06 00873180  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873180
//
// 00873180  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00873183  8b5044               mov edx, dword ptr [eax + 0x44]
// 00873186  53                   push ebx
// 00873187  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0087318b  55                   push ebp
// 0087318c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00873190  56                   push esi
// 00873191  8b7048               mov esi, dword ptr [eax + 0x48]
// 00873194  03da                 add ebx, edx
// 00873196  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087319a  03ee                 add ebp, esi
// 0087319c  8b742424             mov esi, dword ptr [esp + 0x24]
// 008731a0  57                   push edi
// 008731a1  8b784c               mov edi, dword ptr [eax + 0x4c]
// 008731a4  8b4050               mov eax, dword ptr [eax + 0x50]
// 008731a7  2bf0                 sub esi, eax
// 008731a9  2bd7                 sub edx, edi
// 008731ab  83c303               add ebx, 3
// 008731ae  83c503               add ebp, 3
// 008731b1  83ea03               sub edx, 3
// 008731b4  83ee03               sub esi, 3
// 008731b7  8d8138010000         lea eax, [ecx + 0x138]
// 008731bd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008731c1  896c2420             mov dword ptr [esp + 0x20], ebp
// 008731c5  89542424             mov dword ptr [esp + 0x24], edx
// 008731c9  89742428             mov dword ptr [esp + 0x28], esi
// 008731cd  85c0                 test eax, eax
// 008731cf  742a                 je 0x8731fb
// 008731d1  83780400             cmp dword ptr [eax + 4], 0
// 008731d5  7424                 je 0x8731fb
// 008731d7  85c0                 test eax, eax
// 008731d9  7403                 je 0x8731de
// 008731db  8b4004               mov eax, dword ptr [eax + 4]
// 008731de  6a04                 push 4
// 008731e0  6a00                 push 0
// 008731e2  6a00                 push 0
// 008731e4  55                   push ebp
// 008731e5  53                   push ebx
// 008731e6  6a00                 push 0
// 008731e8  50                   push eax
// 008731e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008731ed  8b4804               mov ecx, dword ptr [eax + 4]
// 008731f0  6a00                 push 0
// 008731f2  6a00                 push 0
// 008731f4  51                   push ecx
// 008731f5  ff15e41aa400         call dword ptr [0xa41ae4]
// 008731fb  5f                   pop edi
// 008731fc  5e                   pop esi
// 008731fd  5d                   pop ebp
// 008731fe  5b                   pop ebx
// 008731ff  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
