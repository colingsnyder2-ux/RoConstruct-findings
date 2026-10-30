// roc 2010-06 008353e0  unit: CXTPControlGalleryOffice2007Theme  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008353e0
//
// 008353e0  6aff                 push -1
// 008353e2  68a1669b00           push 0x9b66a1
// 008353e7  64a100000000         mov eax, dword ptr fs:[0]
// 008353ed  50                   push eax
// 008353ee  83ec20               sub esp, 0x20
// 008353f1  53                   push ebx
// 008353f2  56                   push esi
// 008353f3  57                   push edi
// 008353f4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008353f9  33c4                 xor eax, esp
// 008353fb  50                   push eax
// 008353fc  8d442430             lea eax, [esp + 0x30]
// 00835400  64a300000000         mov dword ptr fs:[0], eax
// 00835406  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00835409  6a38                 push 0x38
// 0083540b  8bcf                 mov ecx, edi
// 0083540d  e8fe7cf7ff           call 0x7ad110
// 00835412  8b742440             mov esi, dword ptr [esp + 0x40]
// 00835416  50                   push eax
// 00835417  8d44244c             lea eax, [esp + 0x4c]
// 0083541b  50                   push eax
// 0083541c  8bce                 mov ecx, esi
// 0083541e  e81b33f7ff           call 0x7a873e
// 00835423  8b442448             mov eax, dword ptr [esp + 0x48]
// 00835427  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0083542b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0083542f  68c5c5c500           push 0xc5c5c5
// 00835434  6a01                 push 1
// 00835436  2bc8                 sub ecx, eax
// 00835438  51                   push ecx
// 00835439  4a                   dec edx
// 0083543a  52                   push edx
// 0083543b  50                   push eax
// 0083543c  8bce                 mov ecx, esi
// 0083543e  e847791400           call 0x97cd8a
// 00835443  8d87f8000000         lea eax, [edi + 0xf8]
// 00835449  50                   push eax
// 0083544a  56                   push esi
// 0083544b  8d4c2428             lea ecx, [esp + 0x28]
// 0083544f  e84ca2fcff           call 0x7ff6a0
// 00835454  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00835458  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0083545c  8b442450             mov eax, dword ptr [esp + 0x50]
// 00835460  6a00                 push 0
// 00835462  89542418             mov dword ptr [esp + 0x18], edx
// 00835466  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083546a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0083546e  6af6                 push -0xa
// 00835470  8d542418             lea edx, [esp + 0x18]
// 00835474  52                   push edx
// 00835475  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0083547d  89442424             mov dword ptr [esp + 0x24], eax
// 00835481  894c2428             mov dword ptr [esp + 0x28], ecx
// 00835485  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0083548b  8b1e                 mov ebx, dword ptr [esi]
// 0083548d  6a2c                 push 0x2c
// 0083548f  8bcf                 mov ecx, edi
// 00835491  e87a7cf7ff           call 0x7ad110
// 00835496  50                   push eax
// 00835497  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0083549a  8bce                 mov ecx, esi
// 0083549c  ffd0                 call eax
// 0083549e  8d4c2440             lea ecx, [esp + 0x40]
// 008354a2  51                   push ecx
// 008354a3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008354a7  e834f0feff           call 0x8244e0
// 008354ac  8bf8                 mov edi, eax
// 008354ae  8b1e                 mov ebx, dword ptr [esi]
// 008354b0  6824800000           push 0x8024
// 008354b5  8d542414             lea edx, [esp + 0x14]
// 008354b9  52                   push edx
// 008354ba  8bcf                 mov ecx, edi
// 008354bc  c644244001           mov byte ptr [esp + 0x40], 1
// 008354c1  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008354c7  50                   push eax
// 008354c8  8bcf                 mov ecx, edi
// 008354ca  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008354d0  50                   push eax
// 008354d1  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008354d4  8bce                 mov ecx, esi
// 008354d6  ffd0                 call eax
// 008354d8  8d4c2440             lea ecx, [esp + 0x40]
// 008354dc  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008354e2  8d4c2420             lea ecx, [esp + 0x20]
// 008354e6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008354ee  e82da2fcff           call 0x7ff720
// 008354f3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008354f7  64890d00000000       mov dword ptr fs:[0], ecx
// 008354fe  59                   pop ecx
// 008354ff  5f                   pop edi
// 00835500  5e                   pop esi
// 00835501  5b                   pop ebx
// 00835502  83c42c               add esp, 0x2c
// 00835505  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp