// roc 2009-12 00861960  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861960
//
// 00861960  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00861963  8b5044               mov edx, dword ptr [eax + 0x44]
// 00861966  53                   push ebx
// 00861967  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0086196b  55                   push ebp
// 0086196c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00861970  56                   push esi
// 00861971  8b7048               mov esi, dword ptr [eax + 0x48]
// 00861974  03da                 add ebx, edx
// 00861976  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086197a  03ee                 add ebp, esi
// 0086197c  8b742424             mov esi, dword ptr [esp + 0x24]
// 00861980  57                   push edi
// 00861981  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00861984  8b4050               mov eax, dword ptr [eax + 0x50]
// 00861987  2bf0                 sub esi, eax
// 00861989  2bd7                 sub edx, edi
// 0086198b  83c303               add ebx, 3
// 0086198e  83c503               add ebp, 3
// 00861991  83ea03               sub edx, 3
// 00861994  83ee03               sub esi, 3
// 00861997  8d8138010000         lea eax, [ecx + 0x138]
// 0086199d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008619a1  896c2420             mov dword ptr [esp + 0x20], ebp
// 008619a5  89542424             mov dword ptr [esp + 0x24], edx
// 008619a9  89742428             mov dword ptr [esp + 0x28], esi
// 008619ad  85c0                 test eax, eax
// 008619af  742a                 je 0x8619db
// 008619b1  83780400             cmp dword ptr [eax + 4], 0
// 008619b5  7424                 je 0x8619db
// 008619b7  85c0                 test eax, eax
// 008619b9  7403                 je 0x8619be
// 008619bb  8b4004               mov eax, dword ptr [eax + 4]
// 008619be  6a04                 push 4
// 008619c0  6a00                 push 0
// 008619c2  6a00                 push 0
// 008619c4  55                   push ebp
// 008619c5  53                   push ebx
// 008619c6  6a00                 push 0
// 008619c8  50                   push eax
// 008619c9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008619cd  8b4804               mov ecx, dword ptr [eax + 4]
// 008619d0  6a00                 push 0
// 008619d2  6a00                 push 0
// 008619d4  51                   push ecx
// 008619d5  ff15f8ca9800         call dword ptr [0x98caf8]
// 008619db  5f                   pop edi
// 008619dc  5e                   pop esi
// 008619dd  5d                   pop ebp
// 008619de  5b                   pop ebx
// 008619df  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
