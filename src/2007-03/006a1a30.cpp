// roc 2007-03 006a1a30  unit: seg_006a0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a1a30
//
// 006a1a30  53                   push ebx
// 006a1a31  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a1a35  85db                 test ebx, ebx
// 006a1a37  55                   push ebp
// 006a1a38  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006a1a3c  7409                 je 0x6a1a47
// 006a1a3e  85ed                 test ebp, ebp
// 006a1a40  7505                 jne 0x6a1a47
// 006a1a42  e867c9f7ff           call 0x61e3ae
// 006a1a47  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a1a4b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006a1a4e  f7d1                 not ecx
// 006a1a50  f6c101               test cl, 1
// 006a1a53  56                   push esi
// 006a1a54  57                   push edi
// 006a1a55  743b                 je 0x6a1a92
// 006a1a57  85db                 test ebx, ebx
// 006a1a59  7630                 jbe 0x6a1a8b
// 006a1a5b  eb03                 jmp 0x6a1a60
// 006a1a5d  8d4900               lea ecx, [ecx]
// 006a1a60  81fb55555505         cmp ebx, 0x5555555
// 006a1a66  8bfb                 mov edi, ebx
// 006a1a68  7205                 jb 0x6a1a6f
// 006a1a6a  bf55555505           mov edi, 0x5555555
// 006a1a6f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a1a73  8d347f               lea esi, [edi + edi*2]
// 006a1a76  03f6                 add esi, esi
// 006a1a78  03f6                 add esi, esi
// 006a1a7a  03f6                 add esi, esi
// 006a1a7c  56                   push esi
// 006a1a7d  55                   push ebp
// 006a1a7e  e84bd3f7ff           call 0x61edce
// 006a1a83  2bdf                 sub ebx, edi
// 006a1a85  03ee                 add ebp, esi
// 006a1a87  85db                 test ebx, ebx
// 006a1a89  77d5                 ja 0x6a1a60
// 006a1a8b  5f                   pop edi
// 006a1a8c  5e                   pop esi
// 006a1a8d  5d                   pop ebp
// 006a1a8e  5b                   pop ebx
// 006a1a8f  c20c00               ret 0xc
// 006a1a92  85db                 test ebx, ebx
// 006a1a94  76f5                 jbe 0x6a1a8b
// 006a1a96  81fb55555505         cmp ebx, 0x5555555
// 006a1a9c  8bfb                 mov edi, ebx
// 006a1a9e  7205                 jb 0x6a1aa5
// 006a1aa0  bf55555505           mov edi, 0x5555555
// 006a1aa5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a1aa9  8d347f               lea esi, [edi + edi*2]
// 006a1aac  03f6                 add esi, esi
// 006a1aae  03f6                 add esi, esi
// 006a1ab0  03f6                 add esi, esi
// 006a1ab2  56                   push esi
// 006a1ab3  55                   push ebp
// 006a1ab4  e80fd3f7ff           call 0x61edc8
// 006a1ab9  3bc6                 cmp eax, esi
// 006a1abb  750f                 jne 0x6a1acc
// 006a1abd  2bdf                 sub ebx, edi
// 006a1abf  03ee                 add ebp, esi
// 006a1ac1  85db                 test ebx, ebx
// 006a1ac3  77d1                 ja 0x6a1a96
// 006a1ac5  5f                   pop edi
// 006a1ac6  5e                   pop esi
// 006a1ac7  5d                   pop ebp
// 006a1ac8  5b                   pop ebx
// 006a1ac9  c20c00               ret 0xc
// 006a1acc  6a00                 push 0
// 006a1ace  6a03                 push 3
// 006a1ad0  e8edd2f7ff           call 0x61edc2
// copied from an identical function in another client (function ??$SerializeElements@UGALLERYITEM_POSITION@CXTPControlGallery@@@@YGXAAVCArchive@@PAUGALLERYITEM_POSITION@CXTPControlGallery@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp