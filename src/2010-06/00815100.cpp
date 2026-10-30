// roc 2010-06 00815100  unit: CXTPToolTipContext::CRichEditToolTip  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815100
//
// 00815100  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00815103  8b5044               mov edx, dword ptr [eax + 0x44]
// 00815106  53                   push ebx
// 00815107  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081510b  56                   push esi
// 0081510c  8b7048               mov esi, dword ptr [eax + 0x48]
// 0081510f  03da                 add ebx, edx
// 00815111  8b542418             mov edx, dword ptr [esp + 0x18]
// 00815115  57                   push edi
// 00815116  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00815119  8b4050               mov eax, dword ptr [eax + 0x50]
// 0081511c  03d6                 add edx, esi
// 0081511e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00815122  2bf7                 sub esi, edi
// 00815124  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00815128  2bf8                 sub edi, eax
// 0081512a  83c203               add edx, 3
// 0081512d  8d442418             lea eax, [esp + 0x18]
// 00815131  8954241c             mov dword ptr [esp + 0x1c], edx
// 00815135  8b542410             mov edx, dword ptr [esp + 0x10]
// 00815139  50                   push eax
// 0081513a  83c303               add ebx, 3
// 0081513d  83ee03               sub esi, 3
// 00815140  83ef03               sub edi, 3
// 00815143  52                   push edx
// 00815144  81c130010000         add ecx, 0x130
// 0081514a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0081514e  89742428             mov dword ptr [esp + 0x28], esi
// 00815152  897c242c             mov dword ptr [esp + 0x2c], edi
// 00815156  e815eb0700           call 0x893c70
// 0081515b  5f                   pop edi
// 0081515c  5e                   pop esi
// 0081515d  5b                   pop ebx
// 0081515e  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?DrawEntry@CRichEditToolTip@CXTPToolTipContext@@MAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
