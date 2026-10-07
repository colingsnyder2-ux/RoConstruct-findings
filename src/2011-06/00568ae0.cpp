// roc 2011-06 00568ae0  unit: seg_00560000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568ae0
//
// 00568ae0  53                   push ebx
// 00568ae1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00568ae5  8b5304               mov edx, dword ptr [ebx + 4]
// 00568ae8  8b4244               mov eax, dword ptr [edx + 0x44]
// 00568aeb  55                   push ebp
// 00568aec  56                   push esi
// 00568aed  57                   push edi
// 00568aee  33f6                 xor esi, esi
// 00568af0  33ff                 xor edi, edi
// 00568af2  89542414             mov dword ptr [esp + 0x14], edx
// 00568af6  85c0                 test eax, eax
// 00568af8  7425                 je 0x568b1f
// 00568afa  8d9b00000000         lea ebx, [ebx]
// 00568b00  833800               cmp dword ptr [eax], 0
// 00568b03  7513                 jne 0x568b18
// 00568b05  8b4808               mov ecx, dword ptr [eax + 8]
// 00568b08  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00568b0b  0fafe9               imul ebp, ecx
// 00568b0e  03f5                 add esi, ebp
// 00568b10  8b6804               mov ebp, dword ptr [eax + 4]
// 00568b13  0fafe9               imul ebp, ecx
// 00568b16  03fd                 add edi, ebp
// 00568b18  8b4024               mov eax, dword ptr [eax + 0x24]
// 00568b1b  85c0                 test eax, eax
// 00568b1d  75e1                 jne 0x568b00
// 00568b1f  8b4248               mov eax, dword ptr [edx + 0x48]
// 00568b22  85c0                 test eax, eax
// 00568b24  7425                 je 0x568b4b
// 00568b26  833800               cmp dword ptr [eax], 0
// 00568b29  7519                 jne 0x568b44
// 00568b2b  8b4808               mov ecx, dword ptr [eax + 8]
// 00568b2e  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00568b31  0fafe9               imul ebp, ecx
// 00568b34  c1e507               shl ebp, 7
// 00568b37  03f5                 add esi, ebp
// 00568b39  8b6804               mov ebp, dword ptr [eax + 4]
// 00568b3c  0fafe9               imul ebp, ecx
// 00568b3f  c1e507               shl ebp, 7
// 00568b42  03fd                 add edi, ebp
// 00568b44  8b4024               mov eax, dword ptr [eax + 0x24]
// 00568b47  85c0                 test eax, eax
// 00568b49  75db                 jne 0x568b26
// 00568b4b  85f6                 test esi, esi
// 00568b4d  0f8e1b010000         jle 0x568c6e
// 00568b53  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00568b56  50                   push eax
// 00568b57  57                   push edi
// 00568b58  56                   push esi
// 00568b59  53                   push ebx
// 00568b5a  e841bd0000           call 0x5748a0
// 00568b5f  83c410               add esp, 0x10
// 00568b62  3bc7                 cmp eax, edi
// 00568b64  7c07                 jl 0x568b6d
// 00568b66  bd00ca9a3b           mov ebp, 0x3b9aca00
// 00568b6b  eb0e                 jmp 0x568b7b
// 00568b6d  99                   cdq 
// 00568b6e  f7fe                 idiv esi
// 00568b70  8be8                 mov ebp, eax
// 00568b72  85ed                 test ebp, ebp
// 00568b74  7f05                 jg 0x568b7b
// 00568b76  bd01000000           mov ebp, 1
// 00568b7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00568b7f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00568b82  85f6                 test esi, esi
// 00568b84  746b                 je 0x568bf1
// 00568b86  833e00               cmp dword ptr [esi], 0
// 00568b89  755f                 jne 0x568bea
// 00568b8b  8b7e04               mov edi, dword ptr [esi + 4]
// 00568b8e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568b91  33d2                 xor edx, edx
// 00568b93  8d47ff               lea eax, [edi - 1]
// 00568b96  f7f1                 div ecx
// 00568b98  40                   inc eax
// 00568b99  3bc5                 cmp eax, ebp
// 00568b9b  7f05                 jg 0x568ba2
// 00568b9d  897e10               mov dword ptr [esi + 0x10], edi
// 00568ba0  eb1e                 jmp 0x568bc0
// 00568ba2  8b5608               mov edx, dword ptr [esi + 8]
// 00568ba5  0fafcd               imul ecx, ebp
// 00568ba8  0fafd7               imul edx, edi
// 00568bab  52                   push edx
// 00568bac  8d4628               lea eax, [esi + 0x28]
// 00568baf  50                   push eax
// 00568bb0  53                   push ebx
// 00568bb1  894e10               mov dword ptr [esi + 0x10], ecx
// 00568bb4  e8e7bd0000           call 0x5749a0
// 00568bb9  83c40c               add esp, 0xc
// 00568bbc  c6462201             mov byte ptr [esi + 0x22], 1
// 00568bc0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00568bc3  8b5608               mov edx, dword ptr [esi + 8]
// 00568bc6  51                   push ecx
// 00568bc7  52                   push edx
// 00568bc8  6a01                 push 1
// 00568bca  53                   push ebx
// 00568bcb  e8d0fcffff           call 0x5688a0
// 00568bd0  8906                 mov dword ptr [esi], eax
// 00568bd2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00568bd6  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00568bd9  83c410               add esp, 0x10
// 00568bdc  33c0                 xor eax, eax
// 00568bde  894e14               mov dword ptr [esi + 0x14], ecx
// 00568be1  894618               mov dword ptr [esi + 0x18], eax
// 00568be4  89461c               mov dword ptr [esi + 0x1c], eax
// 00568be7  884621               mov byte ptr [esi + 0x21], al
// 00568bea  8b7624               mov esi, dword ptr [esi + 0x24]
// 00568bed  85f6                 test esi, esi
// 00568bef  7595                 jne 0x568b86
// 00568bf1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00568bf5  8b7248               mov esi, dword ptr [edx + 0x48]
// 00568bf8  85f6                 test esi, esi
// 00568bfa  7472                 je 0x568c6e
// 00568bfc  8d642400             lea esp, [esp]
// 00568c00  833e00               cmp dword ptr [esi], 0
// 00568c03  7562                 jne 0x568c67
// 00568c05  8b7e04               mov edi, dword ptr [esi + 4]
// 00568c08  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568c0b  33d2                 xor edx, edx
// 00568c0d  8d47ff               lea eax, [edi - 1]
// 00568c10  f7f1                 div ecx
// 00568c12  40                   inc eax
// 00568c13  3bc5                 cmp eax, ebp
// 00568c15  7f05                 jg 0x568c1c
// 00568c17  897e10               mov dword ptr [esi + 0x10], edi
// 00568c1a  eb21                 jmp 0x568c3d
// 00568c1c  8b4608               mov eax, dword ptr [esi + 8]
// 00568c1f  0fafcd               imul ecx, ebp
// 00568c22  0fafc7               imul eax, edi
// 00568c25  c1e007               shl eax, 7
// 00568c28  894e10               mov dword ptr [esi + 0x10], ecx
// 00568c2b  50                   push eax
// 00568c2c  8d4e28               lea ecx, [esi + 0x28]
// 00568c2f  51                   push ecx
// 00568c30  53                   push ebx
// 00568c31  e86abd0000           call 0x5749a0
// 00568c36  83c40c               add esp, 0xc
// 00568c39  c6462201             mov byte ptr [esi + 0x22], 1
// 00568c3d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00568c40  8b4608               mov eax, dword ptr [esi + 8]
// 00568c43  52                   push edx
// 00568c44  50                   push eax
// 00568c45  6a01                 push 1
// 00568c47  53                   push ebx
// 00568c48  e803fdffff           call 0x568950
// 00568c4d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00568c51  8906                 mov dword ptr [esi], eax
// 00568c53  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00568c56  83c410               add esp, 0x10
// 00568c59  33c0                 xor eax, eax
// 00568c5b  895614               mov dword ptr [esi + 0x14], edx
// 00568c5e  894618               mov dword ptr [esi + 0x18], eax
// 00568c61  89461c               mov dword ptr [esi + 0x1c], eax
// 00568c64  884621               mov byte ptr [esi + 0x21], al
// 00568c67  8b7624               mov esi, dword ptr [esi + 0x24]
// 00568c6a  85f6                 test esi, esi
// 00568c6c  7592                 jne 0x568c00
// 00568c6e  5f                   pop edi
// 00568c6f  5e                   pop esi
// 00568c70  5d                   pop ebp
// 00568c71  5b                   pop ebx
// 00568c72  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
