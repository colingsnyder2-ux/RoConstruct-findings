// roc 2009-12 00869e40  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869e40
//
// 00869e40  53                   push ebx
// 00869e41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00869e45  55                   push ebp
// 00869e46  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00869e4a  85db                 test ebx, ebx
// 00869e4c  7409                 je 0x869e57
// 00869e4e  85ed                 test ebp, ebp
// 00869e50  7505                 jne 0x869e57
// 00869e52  e8b59cf8ff           call 0x7f3b0c
// 00869e57  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00869e5b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00869e5e  f7d1                 not ecx
// 00869e60  56                   push esi
// 00869e61  57                   push edi
// 00869e62  f6c101               test cl, 1
// 00869e65  7439                 je 0x869ea0
// 00869e67  85db                 test ebx, ebx
// 00869e69  762e                 jbe 0x869e99
// 00869e6b  eb03                 jmp 0x869e70
// 00869e6d  8d4900               lea ecx, [ecx]
// 00869e70  8bfb                 mov edi, ebx
// 00869e72  81fb66666606         cmp ebx, 0x6666666
// 00869e78  7205                 jb 0x869e7f
// 00869e7a  bf66666606           mov edi, 0x6666666
// 00869e7f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00869e83  8d34bf               lea esi, [edi + edi*4]
// 00869e86  03f6                 add esi, esi
// 00869e88  03f6                 add esi, esi
// 00869e8a  56                   push esi
// 00869e8b  55                   push ebp
// 00869e8c  e84ba5f8ff           call 0x7f43dc
// 00869e91  2bdf                 sub ebx, edi
// 00869e93  03ee                 add ebp, esi
// 00869e95  85db                 test ebx, ebx
// 00869e97  77d7                 ja 0x869e70
// 00869e99  5f                   pop edi
// 00869e9a  5e                   pop esi
// 00869e9b  5d                   pop ebp
// 00869e9c  5b                   pop ebx
// 00869e9d  c20c00               ret 0xc
// 00869ea0  85db                 test ebx, ebx
// 00869ea2  76f5                 jbe 0x869e99
// 00869ea4  8bfb                 mov edi, ebx
// 00869ea6  81fb66666606         cmp ebx, 0x6666666
// 00869eac  7205                 jb 0x869eb3
// 00869eae  bf66666606           mov edi, 0x6666666
// 00869eb3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00869eb7  8d34bf               lea esi, [edi + edi*4]
// 00869eba  03f6                 add esi, esi
// 00869ebc  03f6                 add esi, esi
// 00869ebe  56                   push esi
// 00869ebf  55                   push ebp
// 00869ec0  e811a5f8ff           call 0x7f43d6
// 00869ec5  3bc6                 cmp eax, esi
// 00869ec7  750f                 jne 0x869ed8
// 00869ec9  2bdf                 sub ebx, edi
// 00869ecb  03ee                 add ebp, esi
// 00869ecd  85db                 test ebx, ebx
// 00869ecf  77d3                 ja 0x869ea4
// 00869ed1  5f                   pop edi
// 00869ed2  5e                   pop esi
// 00869ed3  5d                   pop ebp
// 00869ed4  5b                   pop ebx
// 00869ed5  c20c00               ret 0xc
// 00869ed8  6a00                 push 0
// 00869eda  6a03                 push 3
// 00869edc  e8efa4f8ff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp