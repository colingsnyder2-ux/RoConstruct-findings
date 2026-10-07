// roc 2007-08 0050a7f0  unit: G3D::GCamera  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050a7f0
//
// 0050a7f0  6aff                 push -1
// 0050a7f2  6882fb7400           push 0x74fb82
// 0050a7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0050a7fd  50                   push eax
// 0050a7fe  83ec4c               sub esp, 0x4c
// 0050a801  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050a806  33c4                 xor eax, esp
// 0050a808  89442448             mov dword ptr [esp + 0x48], eax
// 0050a80c  53                   push ebx
// 0050a80d  55                   push ebp
// 0050a80e  56                   push esi
// 0050a80f  57                   push edi
// 0050a810  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050a815  33c4                 xor eax, esp
// 0050a817  50                   push eax
// 0050a818  8d442460             lea eax, [esp + 0x60]
// 0050a81c  64a300000000         mov dword ptr fs:[0], eax
// 0050a822  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0050a826  8b442474             mov eax, dword ptr [esp + 0x74]
// 0050a82a  6a01                 push 1
// 0050a82c  6a00                 push 0
// 0050a82e  8d4c241c             lea ecx, [esp + 0x1c]
// 0050a832  51                   push ecx
// 0050a833  8bcf                 mov ecx, edi
// 0050a835  8944242c             mov dword ptr [esp + 0x2c], eax
// 0050a839  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0050a83e  ff157ce57700         call dword ptr [0x77e57c]
// 0050a844  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 0050a84a  8bd8                 mov ebx, eax
// 0050a84c  3b1a                 cmp ebx, dword ptr [edx]
// 0050a84e  0f8481010000         je 0x50a9d5
// 0050a854  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0050a858  7205                 jb 0x50a85f
// 0050a85a  8b7704               mov esi, dword ptr [edi + 4]
// 0050a85d  eb03                 jmp 0x50a862
// 0050a85f  8d7704               lea esi, [edi + 4]
// 0050a862  e8f9fcffff           call 0x50a560
// 0050a867  8be8                 mov ebp, eax
// 0050a869  85ed                 test ebp, ebp
// 0050a86b  0f8464010000         je 0x50a9d5
// 0050a871  a13ce67700           mov eax, dword ptr [0x77e63c]
// 0050a876  8b00                 mov eax, dword ptr [eax]
// 0050a878  6a01                 push 1
// 0050a87a  50                   push eax
// 0050a87b  8d4c241c             lea ecx, [esp + 0x1c]
// 0050a87f  51                   push ecx
// 0050a880  8bcf                 mov ecx, edi
// 0050a882  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0050a887  ff1578e57700         call dword ptr [0x77e578]
// 0050a88d  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 0050a893  8bf0                 mov esi, eax
// 0050a895  3b32                 cmp esi, dword ptr [edx]
// 0050a897  0f8438010000         je 0x50a9d5
// 0050a89d  2bc3                 sub eax, ebx
// 0050a89f  83e801               sub eax, 1
// 0050a8a2  50                   push eax
// 0050a8a3  83c301               add ebx, 1
// 0050a8a6  53                   push ebx
// 0050a8a7  8d4c2448             lea ecx, [esp + 0x48]
// 0050a8ab  51                   push ecx
// 0050a8ac  8bcf                 mov ecx, edi
// 0050a8ae  ff1538e67700         call dword ptr [0x77e638]
// 0050a8b4  8b4714               mov eax, dword ptr [edi + 0x14]
// 0050a8b7  2bc6                 sub eax, esi
// 0050a8b9  50                   push eax
// 0050a8ba  83c601               add esi, 1
// 0050a8bd  56                   push esi
// 0050a8be  8d54242c             lea edx, [esp + 0x2c]
// 0050a8c2  33db                 xor ebx, ebx
// 0050a8c4  52                   push edx
// 0050a8c5  8bcf                 mov ecx, edi
// 0050a8c7  895c2474             mov dword ptr [esp + 0x74], ebx
// 0050a8cb  ff1538e67700         call dword ptr [0x77e638]
// 0050a8d1  8b442444             mov eax, dword ptr [esp + 0x44]
// 0050a8d5  be10000000           mov esi, 0x10
// 0050a8da  39742458             cmp dword ptr [esp + 0x58], esi
// 0050a8de  c644246801           mov byte ptr [esp + 0x68], 1
// 0050a8e3  7304                 jae 0x50a8e9
// 0050a8e5  8d442444             lea eax, [esp + 0x44]
// 0050a8e9  8d4c241c             lea ecx, [esp + 0x1c]
// 0050a8ed  51                   push ecx
// 0050a8ee  683f000f00           push 0xf003f
// 0050a8f3  53                   push ebx
// 0050a8f4  50                   push eax
// 0050a8f5  55                   push ebp
// 0050a8f6  ff1510d07700         call dword ptr [0x77d010]
// 0050a8fc  3bc3                 cmp eax, ebx
// 0050a8fe  0f85b0000000         jne 0x50a9b4
// 0050a904  3974243c             cmp dword ptr [esp + 0x3c], esi
// 0050a908  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050a90c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0050a910  7304                 jae 0x50a916
// 0050a912  8d442428             lea eax, [esp + 0x28]
// 0050a916  8d542418             lea edx, [esp + 0x18]
// 0050a91a  52                   push edx
// 0050a91b  53                   push ebx
// 0050a91c  53                   push ebx
// 0050a91d  53                   push ebx
// 0050a91e  8b1d20d07700         mov ebx, dword ptr [0x77d020]
// 0050a924  50                   push eax
// 0050a925  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050a929  50                   push eax
// 0050a92a  ffd3                 call ebx
// 0050a92c  8bf0                 mov esi, eax
// 0050a92e  85f6                 test esi, esi
// 0050a930  754d                 jne 0x50a97f
// 0050a932  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050a936  51                   push ecx
// 0050a937  e8d456ffff           call 0x500010
// 0050a93c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050a940  52                   push edx
// 0050a941  8bf8                 mov edi, eax
// 0050a943  56                   push esi
// 0050a944  57                   push edi
// 0050a945  e8365cffff           call 0x500580
// 0050a94a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0050a94e  83c410               add esp, 0x10
// 0050a951  837c243c10           cmp dword ptr [esp + 0x3c], 0x10
// 0050a956  7304                 jae 0x50a95c
// 0050a958  8d442428             lea eax, [esp + 0x28]
// 0050a95c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050a960  8d4c2418             lea ecx, [esp + 0x18]
// 0050a964  51                   push ecx
// 0050a965  57                   push edi
// 0050a966  6a00                 push 0
// 0050a968  6a00                 push 0
// 0050a96a  50                   push eax
// 0050a96b  52                   push edx
// 0050a96c  ffd3                 call ebx
// 0050a96e  8bf0                 mov esi, eax
// 0050a970  85f6                 test esi, esi
// 0050a972  750b                 jne 0x50a97f
// 0050a974  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050a978  57                   push edi
// 0050a979  ff152ce67700         call dword ptr [0x77e62c]
// 0050a97f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050a983  50                   push eax
// 0050a984  ff1508d07700         call dword ptr [0x77d008]
// 0050a98a  85f6                 test esi, esi
// 0050a98c  8d4c2424             lea ecx, [esp + 0x24]
// 0050a990  0f94c3               sete bl
// 0050a993  c644246800           mov byte ptr [esp + 0x68], 0
// 0050a998  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a99e  8d4c2440             lea ecx, [esp + 0x40]
// 0050a9a2  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0050a9aa  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a9b0  8ac3                 mov al, bl
// 0050a9b2  eb23                 jmp 0x50a9d7
// 0050a9b4  8d4c2424             lea ecx, [esp + 0x24]
// 0050a9b8  c644246800           mov byte ptr [esp + 0x68], 0
// 0050a9bd  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a9c3  8d4c2440             lea ecx, [esp + 0x40]
// 0050a9c7  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0050a9cf  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a9d5  32c0                 xor al, al
// 0050a9d7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0050a9db  64890d00000000       mov dword ptr fs:[0], ecx
// 0050a9e2  59                   pop ecx
// 0050a9e3  5f                   pop edi
// 0050a9e4  5e                   pop esi
// 0050a9e5  5d                   pop ebp
// 0050a9e6  5b                   pop ebx
// 0050a9e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050a9eb  33cc                 xor ecx, esp
// 0050a9ed  e82c601200           call 0x630a1e
// 0050a9f2  83c458               add esp, 0x58
// 0050a9f5  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readString@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
