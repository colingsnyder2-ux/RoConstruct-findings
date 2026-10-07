// roc 2009-06 00592b80  unit: seg_00590000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592b80
//
// 00592b80  53                   push ebx
// 00592b81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00592b85  8b5304               mov edx, dword ptr [ebx + 4]
// 00592b88  8b4244               mov eax, dword ptr [edx + 0x44]
// 00592b8b  55                   push ebp
// 00592b8c  56                   push esi
// 00592b8d  57                   push edi
// 00592b8e  33f6                 xor esi, esi
// 00592b90  33ff                 xor edi, edi
// 00592b92  89542414             mov dword ptr [esp + 0x14], edx
// 00592b96  85c0                 test eax, eax
// 00592b98  7425                 je 0x592bbf
// 00592b9a  8d9b00000000         lea ebx, [ebx]
// 00592ba0  833800               cmp dword ptr [eax], 0
// 00592ba3  7513                 jne 0x592bb8
// 00592ba5  8b4808               mov ecx, dword ptr [eax + 8]
// 00592ba8  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00592bab  0fafe9               imul ebp, ecx
// 00592bae  03f5                 add esi, ebp
// 00592bb0  8b6804               mov ebp, dword ptr [eax + 4]
// 00592bb3  0fafe9               imul ebp, ecx
// 00592bb6  03fd                 add edi, ebp
// 00592bb8  8b4024               mov eax, dword ptr [eax + 0x24]
// 00592bbb  85c0                 test eax, eax
// 00592bbd  75e1                 jne 0x592ba0
// 00592bbf  8b4248               mov eax, dword ptr [edx + 0x48]
// 00592bc2  85c0                 test eax, eax
// 00592bc4  7425                 je 0x592beb
// 00592bc6  833800               cmp dword ptr [eax], 0
// 00592bc9  7519                 jne 0x592be4
// 00592bcb  8b4808               mov ecx, dword ptr [eax + 8]
// 00592bce  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00592bd1  0fafe9               imul ebp, ecx
// 00592bd4  c1e507               shl ebp, 7
// 00592bd7  03f5                 add esi, ebp
// 00592bd9  8b6804               mov ebp, dword ptr [eax + 4]
// 00592bdc  0fafe9               imul ebp, ecx
// 00592bdf  c1e507               shl ebp, 7
// 00592be2  03fd                 add edi, ebp
// 00592be4  8b4024               mov eax, dword ptr [eax + 0x24]
// 00592be7  85c0                 test eax, eax
// 00592be9  75db                 jne 0x592bc6
// 00592beb  85f6                 test esi, esi
// 00592bed  0f8e1b010000         jle 0x592d0e
// 00592bf3  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00592bf6  50                   push eax
// 00592bf7  57                   push edi
// 00592bf8  56                   push esi
// 00592bf9  53                   push ebx
// 00592bfa  e8617e0000           call 0x59aa60
// 00592bff  83c410               add esp, 0x10
// 00592c02  3bc7                 cmp eax, edi
// 00592c04  7c07                 jl 0x592c0d
// 00592c06  bd00ca9a3b           mov ebp, 0x3b9aca00
// 00592c0b  eb0e                 jmp 0x592c1b
// 00592c0d  99                   cdq 
// 00592c0e  f7fe                 idiv esi
// 00592c10  8be8                 mov ebp, eax
// 00592c12  85ed                 test ebp, ebp
// 00592c14  7f05                 jg 0x592c1b
// 00592c16  bd01000000           mov ebp, 1
// 00592c1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00592c1f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00592c22  85f6                 test esi, esi
// 00592c24  746b                 je 0x592c91
// 00592c26  833e00               cmp dword ptr [esi], 0
// 00592c29  755f                 jne 0x592c8a
// 00592c2b  8b7e04               mov edi, dword ptr [esi + 4]
// 00592c2e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00592c31  33d2                 xor edx, edx
// 00592c33  8d47ff               lea eax, [edi - 1]
// 00592c36  f7f1                 div ecx
// 00592c38  40                   inc eax
// 00592c39  3bc5                 cmp eax, ebp
// 00592c3b  7f05                 jg 0x592c42
// 00592c3d  897e10               mov dword ptr [esi + 0x10], edi
// 00592c40  eb1e                 jmp 0x592c60
// 00592c42  8b5608               mov edx, dword ptr [esi + 8]
// 00592c45  0fafcd               imul ecx, ebp
// 00592c48  0fafd7               imul edx, edi
// 00592c4b  52                   push edx
// 00592c4c  8d4628               lea eax, [esi + 0x28]
// 00592c4f  50                   push eax
// 00592c50  53                   push ebx
// 00592c51  894e10               mov dword ptr [esi + 0x10], ecx
// 00592c54  e8077f0000           call 0x59ab60
// 00592c59  83c40c               add esp, 0xc
// 00592c5c  c6462201             mov byte ptr [esi + 0x22], 1
// 00592c60  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00592c63  8b5608               mov edx, dword ptr [esi + 8]
// 00592c66  51                   push ecx
// 00592c67  52                   push edx
// 00592c68  6a01                 push 1
// 00592c6a  53                   push ebx
// 00592c6b  e8d0fcffff           call 0x592940
// 00592c70  8906                 mov dword ptr [esi], eax
// 00592c72  8b442424             mov eax, dword ptr [esp + 0x24]
// 00592c76  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00592c79  83c410               add esp, 0x10
// 00592c7c  33c0                 xor eax, eax
// 00592c7e  894e14               mov dword ptr [esi + 0x14], ecx
// 00592c81  894618               mov dword ptr [esi + 0x18], eax
// 00592c84  89461c               mov dword ptr [esi + 0x1c], eax
// 00592c87  884621               mov byte ptr [esi + 0x21], al
// 00592c8a  8b7624               mov esi, dword ptr [esi + 0x24]
// 00592c8d  85f6                 test esi, esi
// 00592c8f  7595                 jne 0x592c26
// 00592c91  8b542414             mov edx, dword ptr [esp + 0x14]
// 00592c95  8b7248               mov esi, dword ptr [edx + 0x48]
// 00592c98  85f6                 test esi, esi
// 00592c9a  7472                 je 0x592d0e
// 00592c9c  8d642400             lea esp, [esp]
// 00592ca0  833e00               cmp dword ptr [esi], 0
// 00592ca3  7562                 jne 0x592d07
// 00592ca5  8b7e04               mov edi, dword ptr [esi + 4]
// 00592ca8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00592cab  33d2                 xor edx, edx
// 00592cad  8d47ff               lea eax, [edi - 1]
// 00592cb0  f7f1                 div ecx
// 00592cb2  40                   inc eax
// 00592cb3  3bc5                 cmp eax, ebp
// 00592cb5  7f05                 jg 0x592cbc
// 00592cb7  897e10               mov dword ptr [esi + 0x10], edi
// 00592cba  eb21                 jmp 0x592cdd
// 00592cbc  8b4608               mov eax, dword ptr [esi + 8]
// 00592cbf  0fafcd               imul ecx, ebp
// 00592cc2  0fafc7               imul eax, edi
// 00592cc5  c1e007               shl eax, 7
// 00592cc8  894e10               mov dword ptr [esi + 0x10], ecx
// 00592ccb  50                   push eax
// 00592ccc  8d4e28               lea ecx, [esi + 0x28]
// 00592ccf  51                   push ecx
// 00592cd0  53                   push ebx
// 00592cd1  e88a7e0000           call 0x59ab60
// 00592cd6  83c40c               add esp, 0xc
// 00592cd9  c6462201             mov byte ptr [esi + 0x22], 1
// 00592cdd  8b5610               mov edx, dword ptr [esi + 0x10]
// 00592ce0  8b4608               mov eax, dword ptr [esi + 8]
// 00592ce3  52                   push edx
// 00592ce4  50                   push eax
// 00592ce5  6a01                 push 1
// 00592ce7  53                   push ebx
// 00592ce8  e803fdffff           call 0x5929f0
// 00592ced  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00592cf1  8906                 mov dword ptr [esi], eax
// 00592cf3  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00592cf6  83c410               add esp, 0x10
// 00592cf9  33c0                 xor eax, eax
// 00592cfb  895614               mov dword ptr [esi + 0x14], edx
// 00592cfe  894618               mov dword ptr [esi + 0x18], eax
// 00592d01  89461c               mov dword ptr [esi + 0x1c], eax
// 00592d04  884621               mov byte ptr [esi + 0x21], al
// 00592d07  8b7624               mov esi, dword ptr [esi + 0x24]
// 00592d0a  85f6                 test esi, esi
// 00592d0c  7592                 jne 0x592ca0
// 00592d0e  5f                   pop edi
// 00592d0f  5e                   pop esi
// 00592d10  5d                   pop ebp
// 00592d11  5b                   pop ebx
// 00592d12  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
