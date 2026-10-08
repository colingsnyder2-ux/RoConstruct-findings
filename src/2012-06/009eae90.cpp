// roc 2012-06 009eae90  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eae90
//
// 009eae90  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 009eae93  8b5044               mov edx, dword ptr [eax + 0x44]
// 009eae96  53                   push ebx
// 009eae97  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009eae9b  56                   push esi
// 009eae9c  8b7048               mov esi, dword ptr [eax + 0x48]
// 009eae9f  03da                 add ebx, edx
// 009eaea1  8b542418             mov edx, dword ptr [esp + 0x18]
// 009eaea5  57                   push edi
// 009eaea6  8b784c               mov edi, dword ptr [eax + 0x4c]
// 009eaea9  8b4050               mov eax, dword ptr [eax + 0x50]
// 009eaeac  03d6                 add edx, esi
// 009eaeae  8b742420             mov esi, dword ptr [esp + 0x20]
// 009eaeb2  2bf7                 sub esi, edi
// 009eaeb4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009eaeb8  2bf8                 sub edi, eax
// 009eaeba  83c203               add edx, 3
// 009eaebd  8d442418             lea eax, [esp + 0x18]
// 009eaec1  8954241c             mov dword ptr [esp + 0x1c], edx
// 009eaec5  8b542410             mov edx, dword ptr [esp + 0x10]
// 009eaec9  50                   push eax
// 009eaeca  83c303               add ebx, 3
// 009eaecd  83ee03               sub esi, 3
// 009eaed0  83ef03               sub edi, 3
// 009eaed3  52                   push edx
// 009eaed4  81c130010000         add ecx, 0x130
// 009eaeda  895c2420             mov dword ptr [esp + 0x20], ebx
// 009eaede  89742428             mov dword ptr [esp + 0x28], esi
// 009eaee2  897c242c             mov dword ptr [esp + 0x2c], edi
// 009eaee6  e8459d0700           call 0xa64c30
// 009eaeeb  5f                   pop edi
// 009eaeec  5e                   pop esi
// 009eaeed  5b                   pop ebx
// 009eaeee  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
