// roc 2009-12 00877e40  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877e40
//
// 00877e40  53                   push ebx
// 00877e41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00877e45  55                   push ebp
// 00877e46  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00877e4a  85db                 test ebx, ebx
// 00877e4c  7409                 je 0x877e57
// 00877e4e  85ed                 test ebp, ebp
// 00877e50  7505                 jne 0x877e57
// 00877e52  e8b5bcf7ff           call 0x7f3b0c
// 00877e57  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00877e5b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00877e5e  f7d1                 not ecx
// 00877e60  56                   push esi
// 00877e61  57                   push edi
// 00877e62  f6c101               test cl, 1
// 00877e65  743b                 je 0x877ea2
// 00877e67  85db                 test ebx, ebx
// 00877e69  7630                 jbe 0x877e9b
// 00877e6b  eb03                 jmp 0x877e70
// 00877e6d  8d4900               lea ecx, [ecx]
// 00877e70  8bfb                 mov edi, ebx
// 00877e72  81fb55555505         cmp ebx, 0x5555555
// 00877e78  7205                 jb 0x877e7f
// 00877e7a  bf55555505           mov edi, 0x5555555
// 00877e7f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00877e83  8d347f               lea esi, [edi + edi*2]
// 00877e86  03f6                 add esi, esi
// 00877e88  03f6                 add esi, esi
// 00877e8a  03f6                 add esi, esi
// 00877e8c  56                   push esi
// 00877e8d  55                   push ebp
// 00877e8e  e849c5f7ff           call 0x7f43dc
// 00877e93  2bdf                 sub ebx, edi
// 00877e95  03ee                 add ebp, esi
// 00877e97  85db                 test ebx, ebx
// 00877e99  77d5                 ja 0x877e70
// 00877e9b  5f                   pop edi
// 00877e9c  5e                   pop esi
// 00877e9d  5d                   pop ebp
// 00877e9e  5b                   pop ebx
// 00877e9f  c20c00               ret 0xc
// 00877ea2  85db                 test ebx, ebx
// 00877ea4  76f5                 jbe 0x877e9b
// 00877ea6  8bfb                 mov edi, ebx
// 00877ea8  81fb55555505         cmp ebx, 0x5555555
// 00877eae  7205                 jb 0x877eb5
// 00877eb0  bf55555505           mov edi, 0x5555555
// 00877eb5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00877eb9  8d347f               lea esi, [edi + edi*2]
// 00877ebc  03f6                 add esi, esi
// 00877ebe  03f6                 add esi, esi
// 00877ec0  03f6                 add esi, esi
// 00877ec2  56                   push esi
// 00877ec3  55                   push ebp
// 00877ec4  e80dc5f7ff           call 0x7f43d6
// 00877ec9  3bc6                 cmp eax, esi
// 00877ecb  750f                 jne 0x877edc
// 00877ecd  2bdf                 sub ebx, edi
// 00877ecf  03ee                 add ebp, esi
// 00877ed1  85db                 test ebx, ebx
// 00877ed3  77d1                 ja 0x877ea6
// 00877ed5  5f                   pop edi
// 00877ed6  5e                   pop esi
// 00877ed7  5d                   pop ebp
// 00877ed8  5b                   pop ebx
// 00877ed9  c20c00               ret 0xc
// 00877edc  6a00                 push 0
// 00877ede  6a03                 push 3
// 00877ee0  e8ebc4f7ff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@UGALLERYITEM_POSITION@CXTPControlGallery@@@@YGXAAVCArchive@@PAUGALLERYITEM_POSITION@CXTPControlGallery@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp