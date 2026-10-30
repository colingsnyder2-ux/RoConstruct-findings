// roc 2010-06 00815940  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815940
//
// 00815940  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00815943  8b5044               mov edx, dword ptr [eax + 0x44]
// 00815946  53                   push ebx
// 00815947  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081594b  55                   push ebp
// 0081594c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00815950  56                   push esi
// 00815951  8b7048               mov esi, dword ptr [eax + 0x48]
// 00815954  03da                 add ebx, edx
// 00815956  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081595a  03ee                 add ebp, esi
// 0081595c  8b742424             mov esi, dword ptr [esp + 0x24]
// 00815960  57                   push edi
// 00815961  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00815964  8b4050               mov eax, dword ptr [eax + 0x50]
// 00815967  2bf0                 sub esi, eax
// 00815969  2bd7                 sub edx, edi
// 0081596b  83c303               add ebx, 3
// 0081596e  83c503               add ebp, 3
// 00815971  83ea03               sub edx, 3
// 00815974  83ee03               sub esi, 3
// 00815977  8d8138010000         lea eax, [ecx + 0x138]
// 0081597d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00815981  896c2420             mov dword ptr [esp + 0x20], ebp
// 00815985  89542424             mov dword ptr [esp + 0x24], edx
// 00815989  89742428             mov dword ptr [esp + 0x28], esi
// 0081598d  85c0                 test eax, eax
// 0081598f  742a                 je 0x8159bb
// 00815991  83780400             cmp dword ptr [eax + 4], 0
// 00815995  7424                 je 0x8159bb
// 00815997  85c0                 test eax, eax
// 00815999  7403                 je 0x81599e
// 0081599b  8b4004               mov eax, dword ptr [eax + 4]
// 0081599e  6a04                 push 4
// 008159a0  6a00                 push 0
// 008159a2  6a00                 push 0
// 008159a4  55                   push ebp
// 008159a5  53                   push ebx
// 008159a6  6a00                 push 0
// 008159a8  50                   push eax
// 008159a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008159ad  8b4804               mov ecx, dword ptr [eax + 4]
// 008159b0  6a00                 push 0
// 008159b2  6a00                 push 0
// 008159b4  51                   push ecx
// 008159b5  ff15a8ba9e00         call dword ptr [0x9ebaa8]
// 008159bb  5f                   pop edi
// 008159bc  5e                   pop esi
// 008159bd  5d                   pop ebp
// 008159be  5b                   pop ebx
// 008159bf  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
