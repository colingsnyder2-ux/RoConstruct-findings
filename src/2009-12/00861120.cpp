// roc 2009-12 00861120  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861120
//
// 00861120  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00861123  8b5044               mov edx, dword ptr [eax + 0x44]
// 00861126  53                   push ebx
// 00861127  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0086112b  56                   push esi
// 0086112c  8b7048               mov esi, dword ptr [eax + 0x48]
// 0086112f  03da                 add ebx, edx
// 00861131  8b542418             mov edx, dword ptr [esp + 0x18]
// 00861135  57                   push edi
// 00861136  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00861139  8b4050               mov eax, dword ptr [eax + 0x50]
// 0086113c  03d6                 add edx, esi
// 0086113e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00861142  2bf7                 sub esi, edi
// 00861144  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00861148  2bf8                 sub edi, eax
// 0086114a  83c203               add edx, 3
// 0086114d  8d442418             lea eax, [esp + 0x18]
// 00861151  8954241c             mov dword ptr [esp + 0x1c], edx
// 00861155  8b542410             mov edx, dword ptr [esp + 0x10]
// 00861159  50                   push eax
// 0086115a  83c303               add ebx, 3
// 0086115d  83ee03               sub esi, 3
// 00861160  83ef03               sub edi, 3
// 00861163  52                   push edx
// 00861164  81c130010000         add ecx, 0x130
// 0086116a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0086116e  89742428             mov dword ptr [esp + 0x28], esi
// 00861172  897c242c             mov dword ptr [esp + 0x2c], edi
// 00861176  e885e80700           call 0x8dfa00
// 0086117b  5f                   pop edi
// 0086117c  5e                   pop esi
// 0086117d  5b                   pop ebx
// 0086117e  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
