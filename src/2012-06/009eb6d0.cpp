// roc 2012-06 009eb6d0  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eb6d0
//
// 009eb6d0  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 009eb6d3  8b5044               mov edx, dword ptr [eax + 0x44]
// 009eb6d6  53                   push ebx
// 009eb6d7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009eb6db  55                   push ebp
// 009eb6dc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009eb6e0  56                   push esi
// 009eb6e1  8b7048               mov esi, dword ptr [eax + 0x48]
// 009eb6e4  03da                 add ebx, edx
// 009eb6e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 009eb6ea  03ee                 add ebp, esi
// 009eb6ec  8b742424             mov esi, dword ptr [esp + 0x24]
// 009eb6f0  57                   push edi
// 009eb6f1  8b784c               mov edi, dword ptr [eax + 0x4c]
// 009eb6f4  8b4050               mov eax, dword ptr [eax + 0x50]
// 009eb6f7  2bf0                 sub esi, eax
// 009eb6f9  2bd7                 sub edx, edi
// 009eb6fb  83c303               add ebx, 3
// 009eb6fe  83c503               add ebp, 3
// 009eb701  83ea03               sub edx, 3
// 009eb704  83ee03               sub esi, 3
// 009eb707  8d8138010000         lea eax, [ecx + 0x138]
// 009eb70d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 009eb711  896c2420             mov dword ptr [esp + 0x20], ebp
// 009eb715  89542424             mov dword ptr [esp + 0x24], edx
// 009eb719  89742428             mov dword ptr [esp + 0x28], esi
// 009eb71d  85c0                 test eax, eax
// 009eb71f  742a                 je 0x9eb74b
// 009eb721  83780400             cmp dword ptr [eax + 4], 0
// 009eb725  7424                 je 0x9eb74b
// 009eb727  85c0                 test eax, eax
// 009eb729  7403                 je 0x9eb72e
// 009eb72b  8b4004               mov eax, dword ptr [eax + 4]
// 009eb72e  6a04                 push 4
// 009eb730  6a00                 push 0
// 009eb732  6a00                 push 0
// 009eb734  55                   push ebp
// 009eb735  53                   push ebx
// 009eb736  6a00                 push 0
// 009eb738  50                   push eax
// 009eb739  8b442430             mov eax, dword ptr [esp + 0x30]
// 009eb73d  8b4804               mov ecx, dword ptr [eax + 4]
// 009eb740  6a00                 push 0
// 009eb742  6a00                 push 0
// 009eb744  51                   push ecx
// 009eb745  ff15183db200         call dword ptr [0xb23d18]
// 009eb74b  5f                   pop edi
// 009eb74c  5e                   pop esi
// 009eb74d  5d                   pop ebp
// 009eb74e  5b                   pop ebx
// 009eb74f  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
