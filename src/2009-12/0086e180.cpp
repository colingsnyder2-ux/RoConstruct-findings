// roc 2009-12 0086e180  unit: CXTPResourceManager  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e180
//
// 0086e180  837c240400           cmp dword ptr [esp + 4], 0
// 0086e185  7505                 jne 0x86e18c
// 0086e187  33c0                 xor eax, eax
// 0086e189  c20800               ret 8
// 0086e18c  53                   push ebx
// 0086e18d  55                   push ebp
// 0086e18e  56                   push esi
// 0086e18f  57                   push edi
// 0086e190  e82bffffff           call 0x86e0c0
// 0086e195  0fb75c2418           movzx ebx, word ptr [esp + 0x18]
// 0086e19a  8b2decb19800         mov ebp, dword ptr [0x98b1ec]
// 0086e1a0  6a17                 push 0x17
// 0086e1a2  8bf0                 mov esi, eax
// 0086e1a4  53                   push ebx
// 0086e1a5  56                   push esi
// 0086e1a6  ffd5                 call ebp
// 0086e1a8  8bf8                 mov edi, eax
// 0086e1aa  85ff                 test edi, edi
// 0086e1ac  751a                 jne 0x86e1c8
// 0086e1ae  6a17                 push 0x17
// 0086e1b0  53                   push ebx
// 0086e1b1  e82860f8ff           call 0x7f41de
// 0086e1b6  8bf0                 mov esi, eax
// 0086e1b8  85f6                 test esi, esi
// 0086e1ba  7445                 je 0x86e201
// 0086e1bc  6a17                 push 0x17
// 0086e1be  53                   push ebx
// 0086e1bf  56                   push esi
// 0086e1c0  ffd5                 call ebp
// 0086e1c2  8bf8                 mov edi, eax
// 0086e1c4  85ff                 test edi, edi
// 0086e1c6  7439                 je 0x86e201
// 0086e1c8  57                   push edi
// 0086e1c9  56                   push esi
// 0086e1ca  ff15f0b19800         call dword ptr [0x98b1f0]
// 0086e1d0  8bd8                 mov ebx, eax
// 0086e1d2  85db                 test ebx, ebx
// 0086e1d4  742b                 je 0x86e201
// 0086e1d6  57                   push edi
// 0086e1d7  56                   push esi
// 0086e1d8  ff15f4b19800         call dword ptr [0x98b1f4]
// 0086e1de  53                   push ebx
// 0086e1df  8bf0                 mov esi, eax
// 0086e1e1  ff157cb29800         call dword ptr [0x98b27c]
// 0086e1e7  8be8                 mov ebp, eax
// 0086e1e9  85ed                 test ebp, ebp
// 0086e1eb  7414                 je 0x86e201
// 0086e1ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086e1f1  8d5e01               lea ebx, [esi + 1]
// 0086e1f4  53                   push ebx
// 0086e1f5  ff155cd29800         call dword ptr [0x98d25c]
// 0086e1fb  8bf8                 mov edi, eax
// 0086e1fd  85ff                 test edi, edi
// 0086e1ff  7509                 jne 0x86e20a
// 0086e201  5f                   pop edi
// 0086e202  5e                   pop esi
// 0086e203  5d                   pop ebp
// 0086e204  33c0                 xor eax, eax
// 0086e206  5b                   pop ebx
// 0086e207  c20800               ret 8
// 0086e20a  53                   push ebx
// 0086e20b  6a00                 push 0
// 0086e20d  57                   push edi
// 0086e20e  e89168f8ff           call 0x7f4aa4
// 0086e213  56                   push esi
// 0086e214  55                   push ebp
// 0086e215  57                   push edi
// 0086e216  e8cb6af8ff           call 0x7f4ce6
// 0086e21b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086e21f  83c418               add esp, 0x18
// 0086e222  6aff                 push -1
// 0086e224  ff1560d29800         call dword ptr [0x98d260]
// 0086e22a  5f                   pop edi
// 0086e22b  33c0                 xor eax, eax
// 0086e22d  85f6                 test esi, esi
// 0086e22f  5e                   pop esi
// 0086e230  5d                   pop ebp
// 0086e231  0f9fc0               setg al
// 0086e234  5b                   pop ebx
// 0086e235  c20800               ret 8
// copied from an identical function in another client (function ?LoadHTML@CXTPResourceManager@@UAEHPAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp