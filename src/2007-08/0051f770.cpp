// from server: 100% by auto
// roc 2007-08 0051f770  unit: seg_00510000  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f770
//
// 0051f770  53                   push ebx
// 0051f771  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051f775  8b5304               mov edx, dword ptr [ebx + 4]
// 0051f778  8b4244               mov eax, dword ptr [edx + 0x44]
// 0051f77b  55                   push ebp
// 0051f77c  56                   push esi
// 0051f77d  57                   push edi
// 0051f77e  33f6                 xor esi, esi
// 0051f780  33ff                 xor edi, edi
// 0051f782  85c0                 test eax, eax
// 0051f784  89542414             mov dword ptr [esp + 0x14], edx
// 0051f788  7425                 je 0x51f7af
// 0051f78a  8d9b00000000         lea ebx, [ebx]
// 0051f790  833800               cmp dword ptr [eax], 0
// 0051f793  7513                 jne 0x51f7a8
// 0051f795  8b4808               mov ecx, dword ptr [eax + 8]
// 0051f798  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0051f79b  0fafe9               imul ebp, ecx
// 0051f79e  03f5                 add esi, ebp
// 0051f7a0  8b6804               mov ebp, dword ptr [eax + 4]
// 0051f7a3  0fafe9               imul ebp, ecx
// 0051f7a6  03fd                 add edi, ebp
// 0051f7a8  8b4024               mov eax, dword ptr [eax + 0x24]
// 0051f7ab  85c0                 test eax, eax
// 0051f7ad  75e1                 jne 0x51f790
// 0051f7af  8b4248               mov eax, dword ptr [edx + 0x48]
// 0051f7b2  85c0                 test eax, eax
// 0051f7b4  7425                 je 0x51f7db
// 0051f7b6  833800               cmp dword ptr [eax], 0
// 0051f7b9  7519                 jne 0x51f7d4
// 0051f7bb  8b4808               mov ecx, dword ptr [eax + 8]
// 0051f7be  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0051f7c1  0fafe9               imul ebp, ecx
// 0051f7c4  c1e507               shl ebp, 7
// 0051f7c7  03f5                 add esi, ebp
// 0051f7c9  8b6804               mov ebp, dword ptr [eax + 4]
// 0051f7cc  0fafe9               imul ebp, ecx
// 0051f7cf  c1e507               shl ebp, 7
// 0051f7d2  03fd                 add edi, ebp
// 0051f7d4  8b4024               mov eax, dword ptr [eax + 0x24]
// 0051f7d7  85c0                 test eax, eax
// 0051f7d9  75db                 jne 0x51f7b6
// 0051f7db  85f6                 test esi, esi
// 0051f7dd  0f8e1d010000         jle 0x51f900
// 0051f7e3  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0051f7e6  50                   push eax
// 0051f7e7  57                   push edi
// 0051f7e8  56                   push esi
// 0051f7e9  53                   push ebx
// 0051f7ea  e8f14c0000           call 0x5244e0
// 0051f7ef  83c410               add esp, 0x10
// 0051f7f2  3bc7                 cmp eax, edi
// 0051f7f4  7c07                 jl 0x51f7fd
// 0051f7f6  bd00ca9a3b           mov ebp, 0x3b9aca00
// 0051f7fb  eb0e                 jmp 0x51f80b
// 0051f7fd  99                   cdq 
// 0051f7fe  f7fe                 idiv esi
// 0051f800  8be8                 mov ebp, eax
// 0051f802  85ed                 test ebp, ebp
// 0051f804  7f05                 jg 0x51f80b
// 0051f806  bd01000000           mov ebp, 1
// 0051f80b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051f80f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 0051f812  85f6                 test esi, esi
// 0051f814  746d                 je 0x51f883
// 0051f816  833e00               cmp dword ptr [esi], 0
// 0051f819  7561                 jne 0x51f87c
// 0051f81b  8b7e04               mov edi, dword ptr [esi + 4]
// 0051f81e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051f821  33d2                 xor edx, edx
// 0051f823  8d47ff               lea eax, [edi - 1]
// 0051f826  f7f1                 div ecx
// 0051f828  83c001               add eax, 1
// 0051f82b  3bc5                 cmp eax, ebp
// 0051f82d  7f05                 jg 0x51f834
// 0051f82f  897e10               mov dword ptr [esi + 0x10], edi
// 0051f832  eb1e                 jmp 0x51f852
// 0051f834  8b5608               mov edx, dword ptr [esi + 8]
// 0051f837  0fafcd               imul ecx, ebp
// 0051f83a  0fafd7               imul edx, edi
// 0051f83d  52                   push edx
// 0051f83e  8d4628               lea eax, [esi + 0x28]
// 0051f841  50                   push eax
// 0051f842  53                   push ebx
// 0051f843  894e10               mov dword ptr [esi + 0x10], ecx
// 0051f846  e8954d0000           call 0x5245e0
// 0051f84b  83c40c               add esp, 0xc
// 0051f84e  c6462201             mov byte ptr [esi + 0x22], 1
// 0051f852  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051f855  8b5608               mov edx, dword ptr [esi + 8]
// 0051f858  51                   push ecx
// 0051f859  52                   push edx
// 0051f85a  6a01                 push 1
// 0051f85c  53                   push ebx
// 0051f85d  e8cefcffff           call 0x51f530
// 0051f862  8906                 mov dword ptr [esi], eax
// 0051f864  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051f868  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0051f86b  83c410               add esp, 0x10
// 0051f86e  33c0                 xor eax, eax
// 0051f870  894e14               mov dword ptr [esi + 0x14], ecx
// 0051f873  894618               mov dword ptr [esi + 0x18], eax
// 0051f876  89461c               mov dword ptr [esi + 0x1c], eax
// 0051f879  884621               mov byte ptr [esi + 0x21], al
// 0051f87c  8b7624               mov esi, dword ptr [esi + 0x24]
// 0051f87f  85f6                 test esi, esi
// 0051f881  7593                 jne 0x51f816
// 0051f883  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051f887  8b7248               mov esi, dword ptr [edx + 0x48]
// 0051f88a  85f6                 test esi, esi
// 0051f88c  7472                 je 0x51f900
// 0051f88e  8bff                 mov edi, edi
// 0051f890  833e00               cmp dword ptr [esi], 0
// 0051f893  7564                 jne 0x51f8f9
// 0051f895  8b7e04               mov edi, dword ptr [esi + 4]
// 0051f898  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051f89b  33d2                 xor edx, edx
// 0051f89d  8d47ff               lea eax, [edi - 1]
// 0051f8a0  f7f1                 div ecx
// 0051f8a2  83c001               add eax, 1
// 0051f8a5  3bc5                 cmp eax, ebp
// 0051f8a7  7f05                 jg 0x51f8ae
// 0051f8a9  897e10               mov dword ptr [esi + 0x10], edi
// 0051f8ac  eb21                 jmp 0x51f8cf
// 0051f8ae  8b4608               mov eax, dword ptr [esi + 8]
// 0051f8b1  0fafcd               imul ecx, ebp
// 0051f8b4  0fafc7               imul eax, edi
// 0051f8b7  c1e007               shl eax, 7
// 0051f8ba  894e10               mov dword ptr [esi + 0x10], ecx
// 0051f8bd  50                   push eax
// 0051f8be  8d4e28               lea ecx, [esi + 0x28]
// 0051f8c1  51                   push ecx
// 0051f8c2  53                   push ebx
// 0051f8c3  e8184d0000           call 0x5245e0
// 0051f8c8  83c40c               add esp, 0xc
// 0051f8cb  c6462201             mov byte ptr [esi + 0x22], 1
// 0051f8cf  8b5610               mov edx, dword ptr [esi + 0x10]
// 0051f8d2  8b4608               mov eax, dword ptr [esi + 8]
// 0051f8d5  52                   push edx
// 0051f8d6  50                   push eax
// 0051f8d7  6a01                 push 1
// 0051f8d9  53                   push ebx
// 0051f8da  e801fdffff           call 0x51f5e0
// 0051f8df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051f8e3  8906                 mov dword ptr [esi], eax
// 0051f8e5  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0051f8e8  83c410               add esp, 0x10
// 0051f8eb  33c0                 xor eax, eax
// 0051f8ed  895614               mov dword ptr [esi + 0x14], edx
// 0051f8f0  894618               mov dword ptr [esi + 0x18], eax
// 0051f8f3  89461c               mov dword ptr [esi + 0x1c], eax
// 0051f8f6  884621               mov byte ptr [esi + 0x21], al
// 0051f8f9  8b7624               mov esi, dword ptr [esi + 0x24]
// 0051f8fc  85f6                 test esi, esi
// 0051f8fe  7590                 jne 0x51f890
// 0051f900  5f                   pop edi
// 0051f901  5e                   pop esi
// 0051f902  5d                   pop ebp
// 0051f903  5b                   pop ebx
// 0051f904  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
