// roc 2011-06 00842a90  unit: PAVCXTPReportRecord::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842a90
//
// 00842a90  55                   push ebp
// 00842a91  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00842a95  57                   push edi
// 00842a96  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00842a9a  85ff                 test edi, edi
// 00842a9c  7409                 je 0x842aa7
// 00842a9e  85ed                 test ebp, ebp
// 00842aa0  7505                 jne 0x842aa7
// 00842aa2  e86378fcff           call 0x80a30a
// 00842aa7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00842aab  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00842aae  f7d1                 not ecx
// 00842ab0  53                   push ebx
// 00842ab1  56                   push esi
// 00842ab2  f6c101               test cl, 1
// 00842ab5  7439                 je 0x842af0
// 00842ab7  85ff                 test edi, edi
// 00842ab9  762e                 jbe 0x842ae9
// 00842abb  eb03                 jmp 0x842ac0
// 00842abd  8d4900               lea ecx, [ecx]
// 00842ac0  8bdf                 mov ebx, edi
// 00842ac2  81ffffffff1f         cmp edi, 0x1fffffff
// 00842ac8  7205                 jb 0x842acf
// 00842aca  bbffffff1f           mov ebx, 0x1fffffff
// 00842acf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00842ad3  8d349d00000000       lea esi, [ebx*4]
// 00842ada  56                   push esi
// 00842adb  55                   push ebp
// 00842adc  e8ff80fcff           call 0x80abe0
// 00842ae1  2bfb                 sub edi, ebx
// 00842ae3  03ee                 add ebp, esi
// 00842ae5  85ff                 test edi, edi
// 00842ae7  77d7                 ja 0x842ac0
// 00842ae9  5e                   pop esi
// 00842aea  5b                   pop ebx
// 00842aeb  5f                   pop edi
// 00842aec  5d                   pop ebp
// 00842aed  c20c00               ret 0xc
// 00842af0  85ff                 test edi, edi
// 00842af2  76f5                 jbe 0x842ae9
// 00842af4  8bdf                 mov ebx, edi
// 00842af6  81ffffffff1f         cmp edi, 0x1fffffff
// 00842afc  7205                 jb 0x842b03
// 00842afe  bbffffff1f           mov ebx, 0x1fffffff
// 00842b03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00842b07  8d349d00000000       lea esi, [ebx*4]
// 00842b0e  56                   push esi
// 00842b0f  55                   push ebp
// 00842b10  e8c580fcff           call 0x80abda
// 00842b15  3bc6                 cmp eax, esi
// 00842b17  750f                 jne 0x842b28
// 00842b19  2bfb                 sub edi, ebx
// 00842b1b  03ee                 add ebp, esi
// 00842b1d  85ff                 test edi, edi
// 00842b1f  77d3                 ja 0x842af4
// 00842b21  5e                   pop esi
// 00842b22  5b                   pop ebx
// 00842b23  5f                   pop edi
// 00842b24  5d                   pop ebp
// 00842b25  c20c00               ret 0xc
// 00842b28  6a00                 push 0
// 00842b2a  6a03                 push 3
// 00842b2c  e8a380fcff           call 0x80abd4
// copied from an identical function in another client (function ??$SerializeElements@H@@YGXAAVCArchive@@PAHH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/winctrl3.cpp