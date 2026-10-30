// from server: 100% by auto
// roc 2008-06 0070b010  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b010
//
// 0070b010  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0070b013  8b5044               mov edx, dword ptr [eax + 0x44]
// 0070b016  53                   push ebx
// 0070b017  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0070b01b  56                   push esi
// 0070b01c  8b7048               mov esi, dword ptr [eax + 0x48]
// 0070b01f  03da                 add ebx, edx
// 0070b021  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070b025  57                   push edi
// 0070b026  8b784c               mov edi, dword ptr [eax + 0x4c]
// 0070b029  8b4050               mov eax, dword ptr [eax + 0x50]
// 0070b02c  03d6                 add edx, esi
// 0070b02e  8b742420             mov esi, dword ptr [esp + 0x20]
// 0070b032  2bf7                 sub esi, edi
// 0070b034  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0070b038  2bf8                 sub edi, eax
// 0070b03a  83c203               add edx, 3
// 0070b03d  8d442418             lea eax, [esp + 0x18]
// 0070b041  8954241c             mov dword ptr [esp + 0x1c], edx
// 0070b045  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070b049  50                   push eax
// 0070b04a  83c303               add ebx, 3
// 0070b04d  83ee03               sub esi, 3
// 0070b050  83ef03               sub edi, 3
// 0070b053  52                   push edx
// 0070b054  81c130010000         add ecx, 0x130
// 0070b05a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0070b05e  89742428             mov dword ptr [esp + 0x28], esi
// 0070b062  897c242c             mov dword ptr [esp + 0x2c], edi
// 0070b066  e805180800           call 0x78c870
// 0070b06b  5f                   pop edi
// 0070b06c  5e                   pop esi
// 0070b06d  5b                   pop ebx
// 0070b06e  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
