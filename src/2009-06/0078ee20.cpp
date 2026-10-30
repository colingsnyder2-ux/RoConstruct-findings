// roc 2009-06 0078ee20  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ee20
//
// 0078ee20  53                   push ebx
// 0078ee21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0078ee25  55                   push ebp
// 0078ee26  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0078ee2a  85db                 test ebx, ebx
// 0078ee2c  7409                 je 0x78ee37
// 0078ee2e  85ed                 test ebp, ebp
// 0078ee30  7505                 jne 0x78ee37
// 0078ee32  e8ad9ef8ff           call 0x718ce4
// 0078ee37  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078ee3b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0078ee3e  f7d1                 not ecx
// 0078ee40  56                   push esi
// 0078ee41  57                   push edi
// 0078ee42  f6c101               test cl, 1
// 0078ee45  7439                 je 0x78ee80
// 0078ee47  85db                 test ebx, ebx
// 0078ee49  762e                 jbe 0x78ee79
// 0078ee4b  eb03                 jmp 0x78ee50
// 0078ee4d  8d4900               lea ecx, [ecx]
// 0078ee50  8bfb                 mov edi, ebx
// 0078ee52  81fb66666606         cmp ebx, 0x6666666
// 0078ee58  7205                 jb 0x78ee5f
// 0078ee5a  bf66666606           mov edi, 0x6666666
// 0078ee5f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078ee63  8d34bf               lea esi, [edi + edi*4]
// 0078ee66  03f6                 add esi, esi
// 0078ee68  03f6                 add esi, esi
// 0078ee6a  56                   push esi
// 0078ee6b  55                   push ebp
// 0078ee6c  e83da7f8ff           call 0x7195ae
// 0078ee71  2bdf                 sub ebx, edi
// 0078ee73  03ee                 add ebp, esi
// 0078ee75  85db                 test ebx, ebx
// 0078ee77  77d7                 ja 0x78ee50
// 0078ee79  5f                   pop edi
// 0078ee7a  5e                   pop esi
// 0078ee7b  5d                   pop ebp
// 0078ee7c  5b                   pop ebx
// 0078ee7d  c20c00               ret 0xc
// 0078ee80  85db                 test ebx, ebx
// 0078ee82  76f5                 jbe 0x78ee79
// 0078ee84  8bfb                 mov edi, ebx
// 0078ee86  81fb66666606         cmp ebx, 0x6666666
// 0078ee8c  7205                 jb 0x78ee93
// 0078ee8e  bf66666606           mov edi, 0x6666666
// 0078ee93  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078ee97  8d34bf               lea esi, [edi + edi*4]
// 0078ee9a  03f6                 add esi, esi
// 0078ee9c  03f6                 add esi, esi
// 0078ee9e  56                   push esi
// 0078ee9f  55                   push ebp
// 0078eea0  e803a7f8ff           call 0x7195a8
// 0078eea5  3bc6                 cmp eax, esi
// 0078eea7  750f                 jne 0x78eeb8
// 0078eea9  2bdf                 sub ebx, edi
// 0078eeab  03ee                 add ebp, esi
// 0078eead  85db                 test ebx, ebx
// 0078eeaf  77d3                 ja 0x78ee84
// 0078eeb1  5f                   pop edi
// 0078eeb2  5e                   pop esi
// 0078eeb3  5d                   pop ebp
// 0078eeb4  5b                   pop ebx
// 0078eeb5  c20c00               ret 0xc
// 0078eeb8  6a00                 push 0
// 0078eeba  6a03                 push 3
// 0078eebc  e8e1a6f8ff           call 0x7195a2
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp