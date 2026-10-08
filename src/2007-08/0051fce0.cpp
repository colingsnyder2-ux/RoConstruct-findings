// from server: 100% by auto
// roc 2007-08 0051fce0  unit: seg_00510000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051fce0
//
// 0051fce0  53                   push ebx
// 0051fce1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051fce5  55                   push ebp
// 0051fce6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051fcea  85ed                 test ebp, ebp
// 0051fcec  56                   push esi
// 0051fced  8b7304               mov esi, dword ptr [ebx + 4]
// 0051fcf0  57                   push edi
// 0051fcf1  7c05                 jl 0x51fcf8
// 0051fcf3  83fd02               cmp ebp, 2
// 0051fcf6  7c18                 jl 0x51fd10
// 0051fcf8  8b03                 mov eax, dword ptr [ebx]
// 0051fcfa  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0051fd01  8b0b                 mov ecx, dword ptr [ebx]
// 0051fd03  896918               mov dword ptr [ecx + 0x18], ebp
// 0051fd06  8b13                 mov edx, dword ptr [ebx]
// 0051fd08  8b02                 mov eax, dword ptr [edx]
// 0051fd0a  53                   push ebx
// 0051fd0b  ffd0                 call eax
// 0051fd0d  83c404               add esp, 4
// 0051fd10  83fd01               cmp ebp, 1
// 0051fd13  7560                 jne 0x51fd75
// 0051fd15  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0051fd18  85ff                 test edi, edi
// 0051fd1a  7422                 je 0x51fd3e
// 0051fd1c  8d642400             lea esp, [esp]
// 0051fd20  807f2200             cmp byte ptr [edi + 0x22], 0
// 0051fd24  7411                 je 0x51fd37
// 0051fd26  8b5730               mov edx, dword ptr [edi + 0x30]
// 0051fd29  8d4f28               lea ecx, [edi + 0x28]
// 0051fd2c  51                   push ecx
// 0051fd2d  53                   push ebx
// 0051fd2e  c6472200             mov byte ptr [edi + 0x22], 0
// 0051fd32  ffd2                 call edx
// 0051fd34  83c408               add esp, 8
// 0051fd37  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0051fd3a  85ff                 test edi, edi
// 0051fd3c  75e2                 jne 0x51fd20
// 0051fd3e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0051fd41  85ff                 test edi, edi
// 0051fd43  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0051fd4a  7422                 je 0x51fd6e
// 0051fd4c  8d642400             lea esp, [esp]
// 0051fd50  807f2200             cmp byte ptr [edi + 0x22], 0
// 0051fd54  7411                 je 0x51fd67
// 0051fd56  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0051fd59  8d4728               lea eax, [edi + 0x28]
// 0051fd5c  50                   push eax
// 0051fd5d  53                   push ebx
// 0051fd5e  c6472200             mov byte ptr [edi + 0x22], 0
// 0051fd62  ffd1                 call ecx
// 0051fd64  83c408               add esp, 8
// 0051fd67  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0051fd6a  85ff                 test edi, edi
// 0051fd6c  75e2                 jne 0x51fd50
// 0051fd6e  c7464800000000       mov dword ptr [esi + 0x48], 0
// 0051fd75  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 0051fd79  85c0                 test eax, eax
// 0051fd7b  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 0051fd83  7424                 je 0x51fda9
// 0051fd85  8b5008               mov edx, dword ptr [eax + 8]
// 0051fd88  8b4804               mov ecx, dword ptr [eax + 4]
// 0051fd8b  8b38                 mov edi, dword ptr [eax]
// 0051fd8d  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0051fd91  55                   push ebp
// 0051fd92  50                   push eax
// 0051fd93  53                   push ebx
// 0051fd94  e837470000           call 0x5244d0
// 0051fd99  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0051fd9c  83c40c               add esp, 0xc
// 0051fd9f  85ff                 test edi, edi
// 0051fda1  8bc7                 mov eax, edi
// 0051fda3  75e0                 jne 0x51fd85
// 0051fda5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051fda9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 0051fdad  85c0                 test eax, eax
// 0051fdaf  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 0051fdb7  7427                 je 0x51fde0
// 0051fdb9  8da42400000000       lea esp, [esp]
// 0051fdc0  8b5008               mov edx, dword ptr [eax + 8]
// 0051fdc3  8b4804               mov ecx, dword ptr [eax + 4]
// 0051fdc6  8b38                 mov edi, dword ptr [eax]
// 0051fdc8  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0051fdcc  55                   push ebp
// 0051fdcd  50                   push eax
// 0051fdce  53                   push ebx
// 0051fdcf  e8fc460000           call 0x5244d0
// 0051fdd4  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0051fdd7  83c40c               add esp, 0xc
// 0051fdda  85ff                 test edi, edi
// 0051fddc  8bc7                 mov eax, edi
// 0051fdde  75e0                 jne 0x51fdc0
// 0051fde0  5f                   pop edi
// 0051fde1  5e                   pop esi
// 0051fde2  5d                   pop ebp
// 0051fde3  5b                   pop ebx
// 0051fde4  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
