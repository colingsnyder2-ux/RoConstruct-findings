// roc 2007-08 0050a630  unit: G3D::GCamera  size: 439 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050a630
//
// 0050a630  6aff                 push -1
// 0050a632  6882fb7400           push 0x74fb82
// 0050a637  64a100000000         mov eax, dword ptr fs:[0]
// 0050a63d  50                   push eax
// 0050a63e  83ec4c               sub esp, 0x4c
// 0050a641  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050a646  33c4                 xor eax, esp
// 0050a648  89442448             mov dword ptr [esp + 0x48], eax
// 0050a64c  53                   push ebx
// 0050a64d  55                   push ebp
// 0050a64e  56                   push esi
// 0050a64f  57                   push edi
// 0050a650  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050a655  33c4                 xor eax, esp
// 0050a657  50                   push eax
// 0050a658  8d442460             lea eax, [esp + 0x60]
// 0050a65c  64a300000000         mov dword ptr fs:[0], eax
// 0050a662  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0050a666  8b442474             mov eax, dword ptr [esp + 0x74]
// 0050a66a  6a01                 push 1
// 0050a66c  6a00                 push 0
// 0050a66e  8d4c241c             lea ecx, [esp + 0x1c]
// 0050a672  51                   push ecx
// 0050a673  8bcf                 mov ecx, edi
// 0050a675  8944242c             mov dword ptr [esp + 0x2c], eax
// 0050a679  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0050a67e  ff157ce57700         call dword ptr [0x77e57c]
// 0050a684  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 0050a68a  8bd8                 mov ebx, eax
// 0050a68c  3b1a                 cmp ebx, dword ptr [edx]
// 0050a68e  0f8432010000         je 0x50a7c6
// 0050a694  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0050a698  7205                 jb 0x50a69f
// 0050a69a  8b7704               mov esi, dword ptr [edi + 4]
// 0050a69d  eb03                 jmp 0x50a6a2
// 0050a69f  8d7704               lea esi, [edi + 4]
// 0050a6a2  e8b9feffff           call 0x50a560
// 0050a6a7  8be8                 mov ebp, eax
// 0050a6a9  85ed                 test ebp, ebp
// 0050a6ab  0f8415010000         je 0x50a7c6
// 0050a6b1  a13ce67700           mov eax, dword ptr [0x77e63c]
// 0050a6b6  8b00                 mov eax, dword ptr [eax]
// 0050a6b8  6a01                 push 1
// 0050a6ba  50                   push eax
// 0050a6bb  8d4c241c             lea ecx, [esp + 0x1c]
// 0050a6bf  51                   push ecx
// 0050a6c0  8bcf                 mov ecx, edi
// 0050a6c2  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0050a6c7  ff1578e57700         call dword ptr [0x77e578]
// 0050a6cd  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 0050a6d3  8bf0                 mov esi, eax
// 0050a6d5  3b32                 cmp esi, dword ptr [edx]
// 0050a6d7  0f84e9000000         je 0x50a7c6
// 0050a6dd  2bc3                 sub eax, ebx
// 0050a6df  83e801               sub eax, 1
// 0050a6e2  50                   push eax
// 0050a6e3  83c301               add ebx, 1
// 0050a6e6  53                   push ebx
// 0050a6e7  8d4c2448             lea ecx, [esp + 0x48]
// 0050a6eb  51                   push ecx
// 0050a6ec  8bcf                 mov ecx, edi
// 0050a6ee  ff1538e67700         call dword ptr [0x77e638]
// 0050a6f4  8b4714               mov eax, dword ptr [edi + 0x14]
// 0050a6f7  2bc6                 sub eax, esi
// 0050a6f9  50                   push eax
// 0050a6fa  83c601               add esi, 1
// 0050a6fd  56                   push esi
// 0050a6fe  8d54242c             lea edx, [esp + 0x2c]
// 0050a702  52                   push edx
// 0050a703  8bcf                 mov ecx, edi
// 0050a705  c744247400000000     mov dword ptr [esp + 0x74], 0
// 0050a70d  ff1538e67700         call dword ptr [0x77e638]
// 0050a713  8b442444             mov eax, dword ptr [esp + 0x44]
// 0050a717  be10000000           mov esi, 0x10
// 0050a71c  39742458             cmp dword ptr [esp + 0x58], esi
// 0050a720  7304                 jae 0x50a726
// 0050a722  8d442444             lea eax, [esp + 0x44]
// 0050a726  8d4c2418             lea ecx, [esp + 0x18]
// 0050a72a  51                   push ecx
// 0050a72b  683f000f00           push 0xf003f
// 0050a730  6a00                 push 0
// 0050a732  50                   push eax
// 0050a733  55                   push ebp
// 0050a734  ff1510d07700         call dword ptr [0x77d010]
// 0050a73a  85c0                 test eax, eax
// 0050a73c  7567                 jne 0x50a7a5
// 0050a73e  3974243c             cmp dword ptr [esp + 0x3c], esi
// 0050a742  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050a746  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 0050a74e  7304                 jae 0x50a754
// 0050a750  8d442428             lea eax, [esp + 0x28]
// 0050a754  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050a758  8d54241c             lea edx, [esp + 0x1c]
// 0050a75c  52                   push edx
// 0050a75d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050a761  51                   push ecx
// 0050a762  6a00                 push 0
// 0050a764  6a00                 push 0
// 0050a766  50                   push eax
// 0050a767  52                   push edx
// 0050a768  ff1520d07700         call dword ptr [0x77d020]
// 0050a76e  8bf0                 mov esi, eax
// 0050a770  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050a774  50                   push eax
// 0050a775  ff1508d07700         call dword ptr [0x77d008]
// 0050a77b  85f6                 test esi, esi
// 0050a77d  8d4c2424             lea ecx, [esp + 0x24]
// 0050a781  0f94c3               sete bl
// 0050a784  c644246800           mov byte ptr [esp + 0x68], 0
// 0050a789  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a78f  8d4c2440             lea ecx, [esp + 0x40]
// 0050a793  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0050a79b  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a7a1  8ac3                 mov al, bl
// 0050a7a3  eb23                 jmp 0x50a7c8
// 0050a7a5  8d4c2424             lea ecx, [esp + 0x24]
// 0050a7a9  c644246800           mov byte ptr [esp + 0x68], 0
// 0050a7ae  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a7b4  8d4c2440             lea ecx, [esp + 0x40]
// 0050a7b8  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0050a7c0  ff15ace67700         call dword ptr [0x77e6ac]
// 0050a7c6  32c0                 xor al, al
// 0050a7c8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0050a7cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0050a7d3  59                   pop ecx
// 0050a7d4  5f                   pop edi
// 0050a7d5  5e                   pop esi
// 0050a7d6  5d                   pop ebp
// 0050a7d7  5b                   pop ebx
// 0050a7d8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050a7dc  33cc                 xor ecx, esp
// 0050a7de  e83b621200           call 0x630a1e
// 0050a7e3  83c458               add esp, 0x58
// 0050a7e6  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readInt32@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
