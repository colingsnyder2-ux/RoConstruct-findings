// roc 2007-03 00519a90  unit: seg_00510000  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519a90
//
// 00519a90  53                   push ebx
// 00519a91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00519a95  8b5304               mov edx, dword ptr [ebx + 4]
// 00519a98  8b4244               mov eax, dword ptr [edx + 0x44]
// 00519a9b  55                   push ebp
// 00519a9c  56                   push esi
// 00519a9d  57                   push edi
// 00519a9e  33f6                 xor esi, esi
// 00519aa0  33ff                 xor edi, edi
// 00519aa2  85c0                 test eax, eax
// 00519aa4  89542414             mov dword ptr [esp + 0x14], edx
// 00519aa8  7425                 je 0x519acf
// 00519aaa  8d9b00000000         lea ebx, [ebx]
// 00519ab0  833800               cmp dword ptr [eax], 0
// 00519ab3  7513                 jne 0x519ac8
// 00519ab5  8b4808               mov ecx, dword ptr [eax + 8]
// 00519ab8  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00519abb  0fafe9               imul ebp, ecx
// 00519abe  03f5                 add esi, ebp
// 00519ac0  8b6804               mov ebp, dword ptr [eax + 4]
// 00519ac3  0fafe9               imul ebp, ecx
// 00519ac6  03fd                 add edi, ebp
// 00519ac8  8b4024               mov eax, dword ptr [eax + 0x24]
// 00519acb  85c0                 test eax, eax
// 00519acd  75e1                 jne 0x519ab0
// 00519acf  8b4248               mov eax, dword ptr [edx + 0x48]
// 00519ad2  85c0                 test eax, eax
// 00519ad4  7425                 je 0x519afb
// 00519ad6  833800               cmp dword ptr [eax], 0
// 00519ad9  7519                 jne 0x519af4
// 00519adb  8b4808               mov ecx, dword ptr [eax + 8]
// 00519ade  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00519ae1  0fafe9               imul ebp, ecx
// 00519ae4  c1e507               shl ebp, 7
// 00519ae7  03f5                 add esi, ebp
// 00519ae9  8b6804               mov ebp, dword ptr [eax + 4]
// 00519aec  0fafe9               imul ebp, ecx
// 00519aef  c1e507               shl ebp, 7
// 00519af2  03fd                 add edi, ebp
// 00519af4  8b4024               mov eax, dword ptr [eax + 0x24]
// 00519af7  85c0                 test eax, eax
// 00519af9  75db                 jne 0x519ad6
// 00519afb  85f6                 test esi, esi
// 00519afd  0f8e1d010000         jle 0x519c20
// 00519b03  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00519b06  50                   push eax
// 00519b07  57                   push edi
// 00519b08  56                   push esi
// 00519b09  53                   push ebx
// 00519b0a  e8a1560000           call 0x51f1b0
// 00519b0f  83c410               add esp, 0x10
// 00519b12  3bc7                 cmp eax, edi
// 00519b14  7c07                 jl 0x519b1d
// 00519b16  bd00ca9a3b           mov ebp, 0x3b9aca00
// 00519b1b  eb0e                 jmp 0x519b2b
// 00519b1d  99                   cdq 
// 00519b1e  f7fe                 idiv esi
// 00519b20  8be8                 mov ebp, eax
// 00519b22  85ed                 test ebp, ebp
// 00519b24  7f05                 jg 0x519b2b
// 00519b26  bd01000000           mov ebp, 1
// 00519b2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00519b2f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00519b32  85f6                 test esi, esi
// 00519b34  746d                 je 0x519ba3
// 00519b36  833e00               cmp dword ptr [esi], 0
// 00519b39  7561                 jne 0x519b9c
// 00519b3b  8b7e04               mov edi, dword ptr [esi + 4]
// 00519b3e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00519b41  33d2                 xor edx, edx
// 00519b43  8d47ff               lea eax, [edi - 1]
// 00519b46  f7f1                 div ecx
// 00519b48  83c001               add eax, 1
// 00519b4b  3bc5                 cmp eax, ebp
// 00519b4d  7f05                 jg 0x519b54
// 00519b4f  897e10               mov dword ptr [esi + 0x10], edi
// 00519b52  eb1e                 jmp 0x519b72
// 00519b54  8b5608               mov edx, dword ptr [esi + 8]
// 00519b57  0fafcd               imul ecx, ebp
// 00519b5a  0fafd7               imul edx, edi
// 00519b5d  52                   push edx
// 00519b5e  8d4628               lea eax, [esi + 0x28]
// 00519b61  50                   push eax
// 00519b62  53                   push ebx
// 00519b63  894e10               mov dword ptr [esi + 0x10], ecx
// 00519b66  e845570000           call 0x51f2b0
// 00519b6b  83c40c               add esp, 0xc
// 00519b6e  c6462201             mov byte ptr [esi + 0x22], 1
// 00519b72  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00519b75  8b5608               mov edx, dword ptr [esi + 8]
// 00519b78  51                   push ecx
// 00519b79  52                   push edx
// 00519b7a  6a01                 push 1
// 00519b7c  53                   push ebx
// 00519b7d  e8cefcffff           call 0x519850
// 00519b82  8906                 mov dword ptr [esi], eax
// 00519b84  8b442424             mov eax, dword ptr [esp + 0x24]
// 00519b88  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00519b8b  83c410               add esp, 0x10
// 00519b8e  33c0                 xor eax, eax
// 00519b90  894e14               mov dword ptr [esi + 0x14], ecx
// 00519b93  894618               mov dword ptr [esi + 0x18], eax
// 00519b96  89461c               mov dword ptr [esi + 0x1c], eax
// 00519b99  884621               mov byte ptr [esi + 0x21], al
// 00519b9c  8b7624               mov esi, dword ptr [esi + 0x24]
// 00519b9f  85f6                 test esi, esi
// 00519ba1  7593                 jne 0x519b36
// 00519ba3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00519ba7  8b7248               mov esi, dword ptr [edx + 0x48]
// 00519baa  85f6                 test esi, esi
// 00519bac  7472                 je 0x519c20
// 00519bae  8bff                 mov edi, edi
// 00519bb0  833e00               cmp dword ptr [esi], 0
// 00519bb3  7564                 jne 0x519c19
// 00519bb5  8b7e04               mov edi, dword ptr [esi + 4]
// 00519bb8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00519bbb  33d2                 xor edx, edx
// 00519bbd  8d47ff               lea eax, [edi - 1]
// 00519bc0  f7f1                 div ecx
// 00519bc2  83c001               add eax, 1
// 00519bc5  3bc5                 cmp eax, ebp
// 00519bc7  7f05                 jg 0x519bce
// 00519bc9  897e10               mov dword ptr [esi + 0x10], edi
// 00519bcc  eb21                 jmp 0x519bef
// 00519bce  8b4608               mov eax, dword ptr [esi + 8]
// 00519bd1  0fafcd               imul ecx, ebp
// 00519bd4  0fafc7               imul eax, edi
// 00519bd7  c1e007               shl eax, 7
// 00519bda  894e10               mov dword ptr [esi + 0x10], ecx
// 00519bdd  50                   push eax
// 00519bde  8d4e28               lea ecx, [esi + 0x28]
// 00519be1  51                   push ecx
// 00519be2  53                   push ebx
// 00519be3  e8c8560000           call 0x51f2b0
// 00519be8  83c40c               add esp, 0xc
// 00519beb  c6462201             mov byte ptr [esi + 0x22], 1
// 00519bef  8b5610               mov edx, dword ptr [esi + 0x10]
// 00519bf2  8b4608               mov eax, dword ptr [esi + 8]
// 00519bf5  52                   push edx
// 00519bf6  50                   push eax
// 00519bf7  6a01                 push 1
// 00519bf9  53                   push ebx
// 00519bfa  e801fdffff           call 0x519900
// 00519bff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00519c03  8906                 mov dword ptr [esi], eax
// 00519c05  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00519c08  83c410               add esp, 0x10
// 00519c0b  33c0                 xor eax, eax
// 00519c0d  895614               mov dword ptr [esi + 0x14], edx
// 00519c10  894618               mov dword ptr [esi + 0x18], eax
// 00519c13  89461c               mov dword ptr [esi + 0x1c], eax
// 00519c16  884621               mov byte ptr [esi + 0x21], al
// 00519c19  8b7624               mov esi, dword ptr [esi + 0x24]
// 00519c1c  85f6                 test esi, esi
// 00519c1e  7590                 jne 0x519bb0
// 00519c20  5f                   pop edi
// 00519c21  5e                   pop esi
// 00519c22  5d                   pop ebp
// 00519c23  5b                   pop ebx
// 00519c24  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
