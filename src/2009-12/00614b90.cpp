// roc 2009-12 00614b90  unit: seg_00610000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614b90
//
// 00614b90  53                   push ebx
// 00614b91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00614b95  8b5304               mov edx, dword ptr [ebx + 4]
// 00614b98  8b4244               mov eax, dword ptr [edx + 0x44]
// 00614b9b  55                   push ebp
// 00614b9c  56                   push esi
// 00614b9d  57                   push edi
// 00614b9e  33f6                 xor esi, esi
// 00614ba0  33ff                 xor edi, edi
// 00614ba2  89542414             mov dword ptr [esp + 0x14], edx
// 00614ba6  85c0                 test eax, eax
// 00614ba8  7425                 je 0x614bcf
// 00614baa  8d9b00000000         lea ebx, [ebx]
// 00614bb0  833800               cmp dword ptr [eax], 0
// 00614bb3  7513                 jne 0x614bc8
// 00614bb5  8b4808               mov ecx, dword ptr [eax + 8]
// 00614bb8  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00614bbb  0fafe9               imul ebp, ecx
// 00614bbe  03f5                 add esi, ebp
// 00614bc0  8b6804               mov ebp, dword ptr [eax + 4]
// 00614bc3  0fafe9               imul ebp, ecx
// 00614bc6  03fd                 add edi, ebp
// 00614bc8  8b4024               mov eax, dword ptr [eax + 0x24]
// 00614bcb  85c0                 test eax, eax
// 00614bcd  75e1                 jne 0x614bb0
// 00614bcf  8b4248               mov eax, dword ptr [edx + 0x48]
// 00614bd2  85c0                 test eax, eax
// 00614bd4  7425                 je 0x614bfb
// 00614bd6  833800               cmp dword ptr [eax], 0
// 00614bd9  7519                 jne 0x614bf4
// 00614bdb  8b4808               mov ecx, dword ptr [eax + 8]
// 00614bde  8b680c               mov ebp, dword ptr [eax + 0xc]
// 00614be1  0fafe9               imul ebp, ecx
// 00614be4  c1e507               shl ebp, 7
// 00614be7  03f5                 add esi, ebp
// 00614be9  8b6804               mov ebp, dword ptr [eax + 4]
// 00614bec  0fafe9               imul ebp, ecx
// 00614bef  c1e507               shl ebp, 7
// 00614bf2  03fd                 add edi, ebp
// 00614bf4  8b4024               mov eax, dword ptr [eax + 0x24]
// 00614bf7  85c0                 test eax, eax
// 00614bf9  75db                 jne 0x614bd6
// 00614bfb  85f6                 test esi, esi
// 00614bfd  0f8e1b010000         jle 0x614d1e
// 00614c03  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00614c06  50                   push eax
// 00614c07  57                   push edi
// 00614c08  56                   push esi
// 00614c09  53                   push ebx
// 00614c0a  e8817e0000           call 0x61ca90
// 00614c0f  83c410               add esp, 0x10
// 00614c12  3bc7                 cmp eax, edi
// 00614c14  7c07                 jl 0x614c1d
// 00614c16  bd00ca9a3b           mov ebp, 0x3b9aca00
// 00614c1b  eb0e                 jmp 0x614c2b
// 00614c1d  99                   cdq 
// 00614c1e  f7fe                 idiv esi
// 00614c20  8be8                 mov ebp, eax
// 00614c22  85ed                 test ebp, ebp
// 00614c24  7f05                 jg 0x614c2b
// 00614c26  bd01000000           mov ebp, 1
// 00614c2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00614c2f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 00614c32  85f6                 test esi, esi
// 00614c34  746b                 je 0x614ca1
// 00614c36  833e00               cmp dword ptr [esi], 0
// 00614c39  755f                 jne 0x614c9a
// 00614c3b  8b7e04               mov edi, dword ptr [esi + 4]
// 00614c3e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00614c41  33d2                 xor edx, edx
// 00614c43  8d47ff               lea eax, [edi - 1]
// 00614c46  f7f1                 div ecx
// 00614c48  40                   inc eax
// 00614c49  3bc5                 cmp eax, ebp
// 00614c4b  7f05                 jg 0x614c52
// 00614c4d  897e10               mov dword ptr [esi + 0x10], edi
// 00614c50  eb1e                 jmp 0x614c70
// 00614c52  8b5608               mov edx, dword ptr [esi + 8]
// 00614c55  0fafcd               imul ecx, ebp
// 00614c58  0fafd7               imul edx, edi
// 00614c5b  52                   push edx
// 00614c5c  8d4628               lea eax, [esi + 0x28]
// 00614c5f  50                   push eax
// 00614c60  53                   push ebx
// 00614c61  894e10               mov dword ptr [esi + 0x10], ecx
// 00614c64  e8277f0000           call 0x61cb90
// 00614c69  83c40c               add esp, 0xc
// 00614c6c  c6462201             mov byte ptr [esi + 0x22], 1
// 00614c70  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00614c73  8b5608               mov edx, dword ptr [esi + 8]
// 00614c76  51                   push ecx
// 00614c77  52                   push edx
// 00614c78  6a01                 push 1
// 00614c7a  53                   push ebx
// 00614c7b  e8d0fcffff           call 0x614950
// 00614c80  8906                 mov dword ptr [esi], eax
// 00614c82  8b442424             mov eax, dword ptr [esp + 0x24]
// 00614c86  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00614c89  83c410               add esp, 0x10
// 00614c8c  33c0                 xor eax, eax
// 00614c8e  894e14               mov dword ptr [esi + 0x14], ecx
// 00614c91  894618               mov dword ptr [esi + 0x18], eax
// 00614c94  89461c               mov dword ptr [esi + 0x1c], eax
// 00614c97  884621               mov byte ptr [esi + 0x21], al
// 00614c9a  8b7624               mov esi, dword ptr [esi + 0x24]
// 00614c9d  85f6                 test esi, esi
// 00614c9f  7595                 jne 0x614c36
// 00614ca1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00614ca5  8b7248               mov esi, dword ptr [edx + 0x48]
// 00614ca8  85f6                 test esi, esi
// 00614caa  7472                 je 0x614d1e
// 00614cac  8d642400             lea esp, [esp]
// 00614cb0  833e00               cmp dword ptr [esi], 0
// 00614cb3  7562                 jne 0x614d17
// 00614cb5  8b7e04               mov edi, dword ptr [esi + 4]
// 00614cb8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00614cbb  33d2                 xor edx, edx
// 00614cbd  8d47ff               lea eax, [edi - 1]
// 00614cc0  f7f1                 div ecx
// 00614cc2  40                   inc eax
// 00614cc3  3bc5                 cmp eax, ebp
// 00614cc5  7f05                 jg 0x614ccc
// 00614cc7  897e10               mov dword ptr [esi + 0x10], edi
// 00614cca  eb21                 jmp 0x614ced
// 00614ccc  8b4608               mov eax, dword ptr [esi + 8]
// 00614ccf  0fafcd               imul ecx, ebp
// 00614cd2  0fafc7               imul eax, edi
// 00614cd5  c1e007               shl eax, 7
// 00614cd8  894e10               mov dword ptr [esi + 0x10], ecx
// 00614cdb  50                   push eax
// 00614cdc  8d4e28               lea ecx, [esi + 0x28]
// 00614cdf  51                   push ecx
// 00614ce0  53                   push ebx
// 00614ce1  e8aa7e0000           call 0x61cb90
// 00614ce6  83c40c               add esp, 0xc
// 00614ce9  c6462201             mov byte ptr [esi + 0x22], 1
// 00614ced  8b5610               mov edx, dword ptr [esi + 0x10]
// 00614cf0  8b4608               mov eax, dword ptr [esi + 8]
// 00614cf3  52                   push edx
// 00614cf4  50                   push eax
// 00614cf5  6a01                 push 1
// 00614cf7  53                   push ebx
// 00614cf8  e803fdffff           call 0x614a00
// 00614cfd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00614d01  8906                 mov dword ptr [esi], eax
// 00614d03  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00614d06  83c410               add esp, 0x10
// 00614d09  33c0                 xor eax, eax
// 00614d0b  895614               mov dword ptr [esi + 0x14], edx
// 00614d0e  894618               mov dword ptr [esi + 0x18], eax
// 00614d11  89461c               mov dword ptr [esi + 0x1c], eax
// 00614d14  884621               mov byte ptr [esi + 0x21], al
// 00614d17  8b7624               mov esi, dword ptr [esi + 0x24]
// 00614d1a  85f6                 test esi, esi
// 00614d1c  7592                 jne 0x614cb0
// 00614d1e  5f                   pop edi
// 00614d1f  5e                   pop esi
// 00614d20  5d                   pop ebp
// 00614d21  5b                   pop ebx
// 00614d22  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
