// roc 2010-06 0081de40  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081de40
//
// 0081de40  53                   push ebx
// 0081de41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081de45  55                   push ebp
// 0081de46  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0081de4a  85db                 test ebx, ebx
// 0081de4c  7409                 je 0x81de57
// 0081de4e  85ed                 test ebp, ebp
// 0081de50  7505                 jne 0x81de57
// 0081de52  e8f59df8ff           call 0x7a7c4c
// 0081de57  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081de5b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0081de5e  f7d1                 not ecx
// 0081de60  56                   push esi
// 0081de61  57                   push edi
// 0081de62  f6c101               test cl, 1
// 0081de65  7439                 je 0x81dea0
// 0081de67  85db                 test ebx, ebx
// 0081de69  762e                 jbe 0x81de99
// 0081de6b  eb03                 jmp 0x81de70
// 0081de6d  8d4900               lea ecx, [ecx]
// 0081de70  8bfb                 mov edi, ebx
// 0081de72  81fb66666606         cmp ebx, 0x6666666
// 0081de78  7205                 jb 0x81de7f
// 0081de7a  bf66666606           mov edi, 0x6666666
// 0081de7f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081de83  8d34bf               lea esi, [edi + edi*4]
// 0081de86  03f6                 add esi, esi
// 0081de88  03f6                 add esi, esi
// 0081de8a  56                   push esi
// 0081de8b  55                   push ebp
// 0081de8c  e88ba6f8ff           call 0x7a851c
// 0081de91  2bdf                 sub ebx, edi
// 0081de93  03ee                 add ebp, esi
// 0081de95  85db                 test ebx, ebx
// 0081de97  77d7                 ja 0x81de70
// 0081de99  5f                   pop edi
// 0081de9a  5e                   pop esi
// 0081de9b  5d                   pop ebp
// 0081de9c  5b                   pop ebx
// 0081de9d  c20c00               ret 0xc
// 0081dea0  85db                 test ebx, ebx
// 0081dea2  76f5                 jbe 0x81de99
// 0081dea4  8bfb                 mov edi, ebx
// 0081dea6  81fb66666606         cmp ebx, 0x6666666
// 0081deac  7205                 jb 0x81deb3
// 0081deae  bf66666606           mov edi, 0x6666666
// 0081deb3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081deb7  8d34bf               lea esi, [edi + edi*4]
// 0081deba  03f6                 add esi, esi
// 0081debc  03f6                 add esi, esi
// 0081debe  56                   push esi
// 0081debf  55                   push ebp
// 0081dec0  e851a6f8ff           call 0x7a8516
// 0081dec5  3bc6                 cmp eax, esi
// 0081dec7  750f                 jne 0x81ded8
// 0081dec9  2bdf                 sub ebx, edi
// 0081decb  03ee                 add ebp, esi
// 0081decd  85db                 test ebx, ebx
// 0081decf  77d3                 ja 0x81dea4
// 0081ded1  5f                   pop edi
// 0081ded2  5e                   pop esi
// 0081ded3  5d                   pop ebp
// 0081ded4  5b                   pop ebx
// 0081ded5  c20c00               ret 0xc
// 0081ded8  6a00                 push 0
// 0081deda  6a03                 push 3
// 0081dedc  e82fa6f8ff           call 0x7a8510
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp