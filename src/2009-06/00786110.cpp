// roc 2009-06 00786110  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786110
//
// 00786110  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00786113  8b5044               mov edx, dword ptr [eax + 0x44]
// 00786116  53                   push ebx
// 00786117  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0078611b  56                   push esi
// 0078611c  8b7048               mov esi, dword ptr [eax + 0x48]
// 0078611f  03da                 add ebx, edx
// 00786121  8b542418             mov edx, dword ptr [esp + 0x18]
// 00786125  57                   push edi
// 00786126  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00786129  8b4050               mov eax, dword ptr [eax + 0x50]
// 0078612c  03d6                 add edx, esi
// 0078612e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00786132  2bf7                 sub esi, edi
// 00786134  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00786138  2bf8                 sub edi, eax
// 0078613a  83c203               add edx, 3
// 0078613d  8d442418             lea eax, [esp + 0x18]
// 00786141  8954241c             mov dword ptr [esp + 0x1c], edx
// 00786145  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786149  50                   push eax
// 0078614a  83c303               add ebx, 3
// 0078614d  83ee03               sub esi, 3
// 00786150  83ef03               sub edi, 3
// 00786153  52                   push edx
// 00786154  81c130010000         add ecx, 0x130
// 0078615a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0078615e  89742428             mov dword ptr [esp + 0x28], esi
// 00786162  897c242c             mov dword ptr [esp + 0x2c], edi
// 00786166  e895ed0700           call 0x804f00
// 0078616b  5f                   pop edi
// 0078616c  5e                   pop esi
// 0078616d  5b                   pop ebx
// 0078616e  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
