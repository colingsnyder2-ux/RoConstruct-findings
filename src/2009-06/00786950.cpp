// roc 2009-06 00786950  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786950
//
// 00786950  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00786953  8b5044               mov edx, dword ptr [eax + 0x44]
// 00786956  53                   push ebx
// 00786957  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0078695b  55                   push ebp
// 0078695c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00786960  56                   push esi
// 00786961  8b7048               mov esi, dword ptr [eax + 0x48]
// 00786964  03da                 add ebx, edx
// 00786966  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078696a  03ee                 add ebp, esi
// 0078696c  8b742424             mov esi, dword ptr [esp + 0x24]
// 00786970  57                   push edi
// 00786971  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00786974  8b4050               mov eax, dword ptr [eax + 0x50]
// 00786977  2bf0                 sub esi, eax
// 00786979  2bd7                 sub edx, edi
// 0078697b  83c303               add ebx, 3
// 0078697e  83c503               add ebp, 3
// 00786981  83ea03               sub edx, 3
// 00786984  83ee03               sub esi, 3
// 00786987  8d8138010000         lea eax, [ecx + 0x138]
// 0078698d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00786991  896c2420             mov dword ptr [esp + 0x20], ebp
// 00786995  89542424             mov dword ptr [esp + 0x24], edx
// 00786999  89742428             mov dword ptr [esp + 0x28], esi
// 0078699d  85c0                 test eax, eax
// 0078699f  742a                 je 0x7869cb
// 007869a1  83780400             cmp dword ptr [eax + 4], 0
// 007869a5  7424                 je 0x7869cb
// 007869a7  85c0                 test eax, eax
// 007869a9  7403                 je 0x7869ae
// 007869ab  8b4004               mov eax, dword ptr [eax + 4]
// 007869ae  6a04                 push 4
// 007869b0  6a00                 push 0
// 007869b2  6a00                 push 0
// 007869b4  55                   push ebp
// 007869b5  53                   push ebx
// 007869b6  6a00                 push 0
// 007869b8  50                   push eax
// 007869b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007869bd  8b4804               mov ecx, dword ptr [eax + 4]
// 007869c0  6a00                 push 0
// 007869c2  6a00                 push 0
// 007869c4  51                   push ecx
// 007869c5  ff150cef8900         call dword ptr [0x89ef0c]
// 007869cb  5f                   pop edi
// 007869cc  5e                   pop esi
// 007869cd  5d                   pop ebp
// 007869ce  5b                   pop ebx
// 007869cf  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
