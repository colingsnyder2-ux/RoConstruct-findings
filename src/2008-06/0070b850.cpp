// from server: 100% by auto
// roc 2008-06 0070b850  unit: CXTPToolTipContext::CHTMLToolTip  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b850
//
// 0070b850  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0070b853  8b5044               mov edx, dword ptr [eax + 0x44]
// 0070b856  53                   push ebx
// 0070b857  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0070b85b  55                   push ebp
// 0070b85c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0070b860  56                   push esi
// 0070b861  8b7048               mov esi, dword ptr [eax + 0x48]
// 0070b864  03da                 add ebx, edx
// 0070b866  8b542420             mov edx, dword ptr [esp + 0x20]
// 0070b86a  03ee                 add ebp, esi
// 0070b86c  8b742424             mov esi, dword ptr [esp + 0x24]
// 0070b870  57                   push edi
// 0070b871  8b784c               mov edi, dword ptr [eax + 0x4c]
// 0070b874  8b4050               mov eax, dword ptr [eax + 0x50]
// 0070b877  2bf0                 sub esi, eax
// 0070b879  2bd7                 sub edx, edi
// 0070b87b  83c303               add ebx, 3
// 0070b87e  83c503               add ebp, 3
// 0070b881  83ea03               sub edx, 3
// 0070b884  83ee03               sub esi, 3
// 0070b887  8d8138010000         lea eax, [ecx + 0x138]
// 0070b88d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0070b891  896c2420             mov dword ptr [esp + 0x20], ebp
// 0070b895  89542424             mov dword ptr [esp + 0x24], edx
// 0070b899  89742428             mov dword ptr [esp + 0x28], esi
// 0070b89d  85c0                 test eax, eax
// 0070b89f  742a                 je 0x70b8cb
// 0070b8a1  83780400             cmp dword ptr [eax + 4], 0
// 0070b8a5  7424                 je 0x70b8cb
// 0070b8a7  85c0                 test eax, eax
// 0070b8a9  7403                 je 0x70b8ae
// 0070b8ab  8b4004               mov eax, dword ptr [eax + 4]
// 0070b8ae  6a04                 push 4
// 0070b8b0  6a00                 push 0
// 0070b8b2  6a00                 push 0
// 0070b8b4  55                   push ebp
// 0070b8b5  53                   push ebx
// 0070b8b6  6a00                 push 0
// 0070b8b8  50                   push eax
// 0070b8b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070b8bd  8b4804               mov ecx, dword ptr [eax + 4]
// 0070b8c0  6a00                 push 0
// 0070b8c2  6a00                 push 0
// 0070b8c4  51                   push ecx
// 0070b8c5  ff15782b8000         call dword ptr [0x802b78]
// 0070b8cb  5f                   pop edi
// 0070b8cc  5e                   pop esi
// 0070b8cd  5d                   pop ebp
// 0070b8ce  5b                   pop ebx
// 0070b8cf  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CHTMLToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
