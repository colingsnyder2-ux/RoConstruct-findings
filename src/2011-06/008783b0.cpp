// roc 2011-06 008783b0  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008783b0
//
// 008783b0  53                   push ebx
// 008783b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008783b5  55                   push ebp
// 008783b6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008783ba  85db                 test ebx, ebx
// 008783bc  7409                 je 0x8783c7
// 008783be  85ed                 test ebp, ebp
// 008783c0  7505                 jne 0x8783c7
// 008783c2  e8431ff9ff           call 0x80a30a
// 008783c7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008783cb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008783ce  f7d1                 not ecx
// 008783d0  56                   push esi
// 008783d1  57                   push edi
// 008783d2  f6c101               test cl, 1
// 008783d5  7439                 je 0x878410
// 008783d7  85db                 test ebx, ebx
// 008783d9  762e                 jbe 0x878409
// 008783db  eb03                 jmp 0x8783e0
// 008783dd  8d4900               lea ecx, [ecx]
// 008783e0  8bfb                 mov edi, ebx
// 008783e2  81fb66666606         cmp ebx, 0x6666666
// 008783e8  7205                 jb 0x8783ef
// 008783ea  bf66666606           mov edi, 0x6666666
// 008783ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008783f3  8d34bf               lea esi, [edi + edi*4]
// 008783f6  03f6                 add esi, esi
// 008783f8  03f6                 add esi, esi
// 008783fa  56                   push esi
// 008783fb  55                   push ebp
// 008783fc  e8df27f9ff           call 0x80abe0
// 00878401  2bdf                 sub ebx, edi
// 00878403  03ee                 add ebp, esi
// 00878405  85db                 test ebx, ebx
// 00878407  77d7                 ja 0x8783e0
// 00878409  5f                   pop edi
// 0087840a  5e                   pop esi
// 0087840b  5d                   pop ebp
// 0087840c  5b                   pop ebx
// 0087840d  c20c00               ret 0xc
// 00878410  85db                 test ebx, ebx
// 00878412  76f5                 jbe 0x878409
// 00878414  8bfb                 mov edi, ebx
// 00878416  81fb66666606         cmp ebx, 0x6666666
// 0087841c  7205                 jb 0x878423
// 0087841e  bf66666606           mov edi, 0x6666666
// 00878423  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00878427  8d34bf               lea esi, [edi + edi*4]
// 0087842a  03f6                 add esi, esi
// 0087842c  03f6                 add esi, esi
// 0087842e  56                   push esi
// 0087842f  55                   push ebp
// 00878430  e8a527f9ff           call 0x80abda
// 00878435  3bc6                 cmp eax, esi
// 00878437  750f                 jne 0x878448
// 00878439  2bdf                 sub ebx, edi
// 0087843b  03ee                 add ebp, esi
// 0087843d  85db                 test ebx, ebx
// 0087843f  77d3                 ja 0x878414
// 00878441  5f                   pop edi
// 00878442  5e                   pop esi
// 00878443  5d                   pop ebp
// 00878444  5b                   pop ebx
// 00878445  c20c00               ret 0xc
// 00878448  6a00                 push 0
// 0087844a  6a03                 push 3
// 0087844c  e88327f9ff           call 0x80abd4
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp