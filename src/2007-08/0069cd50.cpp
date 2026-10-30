// roc 2007-08 0069cd50  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cd50
//
// 0069cd50  53                   push ebx
// 0069cd51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0069cd55  85db                 test ebx, ebx
// 0069cd57  55                   push ebp
// 0069cd58  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0069cd5c  7409                 je 0x69cd67
// 0069cd5e  85ed                 test ebp, ebp
// 0069cd60  7505                 jne 0x69cd67
// 0069cd62  e8b931f9ff           call 0x62ff20
// 0069cd67  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069cd6b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0069cd6e  f7d1                 not ecx
// 0069cd70  f6c101               test cl, 1
// 0069cd73  56                   push esi
// 0069cd74  57                   push edi
// 0069cd75  7439                 je 0x69cdb0
// 0069cd77  85db                 test ebx, ebx
// 0069cd79  762e                 jbe 0x69cda9
// 0069cd7b  eb03                 jmp 0x69cd80
// 0069cd7d  8d4900               lea ecx, [ecx]
// 0069cd80  81fb66666606         cmp ebx, 0x6666666
// 0069cd86  8bfb                 mov edi, ebx
// 0069cd88  7205                 jb 0x69cd8f
// 0069cd8a  bf66666606           mov edi, 0x6666666
// 0069cd8f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069cd93  8d34bf               lea esi, [edi + edi*4]
// 0069cd96  03f6                 add esi, esi
// 0069cd98  03f6                 add esi, esi
// 0069cd9a  56                   push esi
// 0069cd9b  55                   push ebp
// 0069cd9c  e8f338f9ff           call 0x630694
// 0069cda1  2bdf                 sub ebx, edi
// 0069cda3  03ee                 add ebp, esi
// 0069cda5  85db                 test ebx, ebx
// 0069cda7  77d7                 ja 0x69cd80
// 0069cda9  5f                   pop edi
// 0069cdaa  5e                   pop esi
// 0069cdab  5d                   pop ebp
// 0069cdac  5b                   pop ebx
// 0069cdad  c20c00               ret 0xc
// 0069cdb0  85db                 test ebx, ebx
// 0069cdb2  76f5                 jbe 0x69cda9
// 0069cdb4  81fb66666606         cmp ebx, 0x6666666
// 0069cdba  8bfb                 mov edi, ebx
// 0069cdbc  7205                 jb 0x69cdc3
// 0069cdbe  bf66666606           mov edi, 0x6666666
// 0069cdc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069cdc7  8d34bf               lea esi, [edi + edi*4]
// 0069cdca  03f6                 add esi, esi
// 0069cdcc  03f6                 add esi, esi
// 0069cdce  56                   push esi
// 0069cdcf  55                   push ebp
// 0069cdd0  e8b938f9ff           call 0x63068e
// 0069cdd5  3bc6                 cmp eax, esi
// 0069cdd7  750f                 jne 0x69cde8
// 0069cdd9  2bdf                 sub ebx, edi
// 0069cddb  03ee                 add ebp, esi
// 0069cddd  85db                 test ebx, ebx
// 0069cddf  77d3                 ja 0x69cdb4
// 0069cde1  5f                   pop edi
// 0069cde2  5e                   pop esi
// 0069cde3  5d                   pop ebp
// 0069cde4  5b                   pop ebx
// 0069cde5  c20c00               ret 0xc
// 0069cde8  6a00                 push 0
// 0069cdea  6a03                 push 3
// 0069cdec  e89738f9ff           call 0x630688
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp