// from server: 100% by auto
// roc 2008-06 0052b510  unit: seg_00520000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b510
//
// 0052b510  53                   push ebx
// 0052b511  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052b515  55                   push ebp
// 0052b516  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052b51a  56                   push esi
// 0052b51b  8b7304               mov esi, dword ptr [ebx + 4]
// 0052b51e  57                   push edi
// 0052b51f  85ed                 test ebp, ebp
// 0052b521  7c05                 jl 0x52b528
// 0052b523  83fd02               cmp ebp, 2
// 0052b526  7c18                 jl 0x52b540
// 0052b528  8b03                 mov eax, dword ptr [ebx]
// 0052b52a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0052b531  8b0b                 mov ecx, dword ptr [ebx]
// 0052b533  896918               mov dword ptr [ecx + 0x18], ebp
// 0052b536  8b13                 mov edx, dword ptr [ebx]
// 0052b538  8b02                 mov eax, dword ptr [edx]
// 0052b53a  53                   push ebx
// 0052b53b  ffd0                 call eax
// 0052b53d  83c404               add esp, 4
// 0052b540  83fd01               cmp ebp, 1
// 0052b543  7560                 jne 0x52b5a5
// 0052b545  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0052b548  85ff                 test edi, edi
// 0052b54a  7422                 je 0x52b56e
// 0052b54c  8d642400             lea esp, [esp]
// 0052b550  807f2200             cmp byte ptr [edi + 0x22], 0
// 0052b554  7411                 je 0x52b567
// 0052b556  8b5730               mov edx, dword ptr [edi + 0x30]
// 0052b559  8d4f28               lea ecx, [edi + 0x28]
// 0052b55c  51                   push ecx
// 0052b55d  53                   push ebx
// 0052b55e  c6472200             mov byte ptr [edi + 0x22], 0
// 0052b562  ffd2                 call edx
// 0052b564  83c408               add esp, 8
// 0052b567  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0052b56a  85ff                 test edi, edi
// 0052b56c  75e2                 jne 0x52b550
// 0052b56e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0052b571  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0052b578  85ff                 test edi, edi
// 0052b57a  7422                 je 0x52b59e
// 0052b57c  8d642400             lea esp, [esp]
// 0052b580  807f2200             cmp byte ptr [edi + 0x22], 0
// 0052b584  7411                 je 0x52b597
// 0052b586  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0052b589  8d4728               lea eax, [edi + 0x28]
// 0052b58c  50                   push eax
// 0052b58d  53                   push ebx
// 0052b58e  c6472200             mov byte ptr [edi + 0x22], 0
// 0052b592  ffd1                 call ecx
// 0052b594  83c408               add esp, 8
// 0052b597  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0052b59a  85ff                 test edi, edi
// 0052b59c  75e2                 jne 0x52b580
// 0052b59e  c7464800000000       mov dword ptr [esi + 0x48], 0
// 0052b5a5  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 0052b5a9  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 0052b5b1  85c0                 test eax, eax
// 0052b5b3  7424                 je 0x52b5d9
// 0052b5b5  8b5008               mov edx, dword ptr [eax + 8]
// 0052b5b8  8b4804               mov ecx, dword ptr [eax + 4]
// 0052b5bb  8b38                 mov edi, dword ptr [eax]
// 0052b5bd  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0052b5c1  55                   push ebp
// 0052b5c2  50                   push eax
// 0052b5c3  53                   push ebx
// 0052b5c4  e8a7510000           call 0x530770
// 0052b5c9  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0052b5cc  83c40c               add esp, 0xc
// 0052b5cf  8bc7                 mov eax, edi
// 0052b5d1  85ff                 test edi, edi
// 0052b5d3  75e0                 jne 0x52b5b5
// 0052b5d5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052b5d9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 0052b5dd  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 0052b5e5  85c0                 test eax, eax
// 0052b5e7  7427                 je 0x52b610
// 0052b5e9  8da42400000000       lea esp, [esp]
// 0052b5f0  8b5008               mov edx, dword ptr [eax + 8]
// 0052b5f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0052b5f6  8b38                 mov edi, dword ptr [eax]
// 0052b5f8  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0052b5fc  55                   push ebp
// 0052b5fd  50                   push eax
// 0052b5fe  53                   push ebx
// 0052b5ff  e86c510000           call 0x530770
// 0052b604  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0052b607  83c40c               add esp, 0xc
// 0052b60a  8bc7                 mov eax, edi
// 0052b60c  85ff                 test edi, edi
// 0052b60e  75e0                 jne 0x52b5f0
// 0052b610  5f                   pop edi
// 0052b611  5e                   pop esi
// 0052b612  5d                   pop ebp
// 0052b613  5b                   pop ebx
// 0052b614  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
