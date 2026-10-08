// roc 2007-03 0051a000  unit: seg_00510000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a000
//
// 0051a000  53                   push ebx
// 0051a001  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051a005  55                   push ebp
// 0051a006  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051a00a  85ed                 test ebp, ebp
// 0051a00c  56                   push esi
// 0051a00d  8b7304               mov esi, dword ptr [ebx + 4]
// 0051a010  57                   push edi
// 0051a011  7c05                 jl 0x51a018
// 0051a013  83fd02               cmp ebp, 2
// 0051a016  7c18                 jl 0x51a030
// 0051a018  8b03                 mov eax, dword ptr [ebx]
// 0051a01a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0051a021  8b0b                 mov ecx, dword ptr [ebx]
// 0051a023  896918               mov dword ptr [ecx + 0x18], ebp
// 0051a026  8b13                 mov edx, dword ptr [ebx]
// 0051a028  8b02                 mov eax, dword ptr [edx]
// 0051a02a  53                   push ebx
// 0051a02b  ffd0                 call eax
// 0051a02d  83c404               add esp, 4
// 0051a030  83fd01               cmp ebp, 1
// 0051a033  7560                 jne 0x51a095
// 0051a035  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0051a038  85ff                 test edi, edi
// 0051a03a  7422                 je 0x51a05e
// 0051a03c  8d642400             lea esp, [esp]
// 0051a040  807f2200             cmp byte ptr [edi + 0x22], 0
// 0051a044  7411                 je 0x51a057
// 0051a046  8b5730               mov edx, dword ptr [edi + 0x30]
// 0051a049  8d4f28               lea ecx, [edi + 0x28]
// 0051a04c  51                   push ecx
// 0051a04d  53                   push ebx
// 0051a04e  c6472200             mov byte ptr [edi + 0x22], 0
// 0051a052  ffd2                 call edx
// 0051a054  83c408               add esp, 8
// 0051a057  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0051a05a  85ff                 test edi, edi
// 0051a05c  75e2                 jne 0x51a040
// 0051a05e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0051a061  85ff                 test edi, edi
// 0051a063  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0051a06a  7422                 je 0x51a08e
// 0051a06c  8d642400             lea esp, [esp]
// 0051a070  807f2200             cmp byte ptr [edi + 0x22], 0
// 0051a074  7411                 je 0x51a087
// 0051a076  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0051a079  8d4728               lea eax, [edi + 0x28]
// 0051a07c  50                   push eax
// 0051a07d  53                   push ebx
// 0051a07e  c6472200             mov byte ptr [edi + 0x22], 0
// 0051a082  ffd1                 call ecx
// 0051a084  83c408               add esp, 8
// 0051a087  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0051a08a  85ff                 test edi, edi
// 0051a08c  75e2                 jne 0x51a070
// 0051a08e  c7464800000000       mov dword ptr [esi + 0x48], 0
// 0051a095  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 0051a099  85c0                 test eax, eax
// 0051a09b  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 0051a0a3  7424                 je 0x51a0c9
// 0051a0a5  8b5008               mov edx, dword ptr [eax + 8]
// 0051a0a8  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a0ab  8b38                 mov edi, dword ptr [eax]
// 0051a0ad  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0051a0b1  55                   push ebp
// 0051a0b2  50                   push eax
// 0051a0b3  53                   push ebx
// 0051a0b4  e807962000           call 0x7236c0
// 0051a0b9  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0051a0bc  83c40c               add esp, 0xc
// 0051a0bf  85ff                 test edi, edi
// 0051a0c1  8bc7                 mov eax, edi
// 0051a0c3  75e0                 jne 0x51a0a5
// 0051a0c5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051a0c9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 0051a0cd  85c0                 test eax, eax
// 0051a0cf  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 0051a0d7  7427                 je 0x51a100
// 0051a0d9  8da42400000000       lea esp, [esp]
// 0051a0e0  8b5008               mov edx, dword ptr [eax + 8]
// 0051a0e3  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a0e6  8b38                 mov edi, dword ptr [eax]
// 0051a0e8  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0051a0ec  55                   push ebp
// 0051a0ed  50                   push eax
// 0051a0ee  53                   push ebx
// 0051a0ef  e8cc952000           call 0x7236c0
// 0051a0f4  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0051a0f7  83c40c               add esp, 0xc
// 0051a0fa  85ff                 test edi, edi
// 0051a0fc  8bc7                 mov eax, edi
// 0051a0fe  75e0                 jne 0x51a0e0
// 0051a100  5f                   pop edi
// 0051a101  5e                   pop esi
// 0051a102  5d                   pop ebp
// 0051a103  5b                   pop ebx
// 0051a104  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
