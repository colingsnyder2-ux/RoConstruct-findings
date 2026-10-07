// roc 2010-06 004857e0  unit: G3D::Texture  size: 396 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004857e0
//
// 004857e0  6aff                 push -1
// 004857e2  68795c9800           push 0x985c79
// 004857e7  64a100000000         mov eax, dword ptr fs:[0]
// 004857ed  50                   push eax
// 004857ee  64892500000000       mov dword ptr fs:[0], esp
// 004857f5  83ec10               sub esp, 0x10
// 004857f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 004857fc  53                   push ebx
// 004857fd  55                   push ebp
// 004857fe  56                   push esi
// 004857ff  57                   push edi
// 00485800  8bf9                 mov edi, ecx
// 00485802  8b5f04               mov ebx, dword ptr [edi + 4]
// 00485805  3bc3                 cmp eax, ebx
// 00485807  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0048580b  894704               mov dword ptr [edi + 4], eax
// 0048580e  7d3a                 jge 0x48584a
// 00485810  8d2c40               lea ebp, [eax + eax*2]
// 00485813  03ed                 add ebp, ebp
// 00485815  03ed                 add ebp, ebp
// 00485817  2bd8                 sub ebx, eax
// 00485819  8da42400000000       lea esp, [esp]
// 00485820  8b37                 mov esi, dword ptr [edi]
// 00485822  8b042e               mov eax, dword ptr [esi + ebp]
// 00485825  03f5                 add esi, ebp
// 00485827  50                   push eax
// 00485828  e893810c00           call 0x54d9c0
// 0048582d  33c0                 xor eax, eax
// 0048582f  83c404               add esp, 4
// 00485832  83c50c               add ebp, 0xc
// 00485835  83eb01               sub ebx, 1
// 00485838  8906                 mov dword ptr [esi], eax
// 0048583a  894604               mov dword ptr [esi + 4], eax
// 0048583d  894608               mov dword ptr [esi + 8], eax
// 00485840  75de                 jne 0x485820
// 00485842  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00485846  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048584a  f6051031c00001       test byte ptr [0xc03110], 1
// 00485851  7514                 jne 0x485867
// 00485853  830d1031c00001       or dword ptr [0xc03110], 1
// 0048585a  be0a000000           mov esi, 0xa
// 0048585f  89350c31c000         mov dword ptr [0xc0310c], esi
// 00485865  eb06                 jmp 0x48586d
// 00485867  8b350c31c000         mov esi, dword ptr [0xc0310c]
// 0048586d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00485870  8b5708               mov edx, dword ptr [edi + 8]
// 00485873  3bca                 cmp ecx, edx
// 00485875  0f8e88000000         jle 0x485903
// 0048587b  33ed                 xor ebp, ebp
// 0048587d  3bd5                 cmp edx, ebp
// 0048587f  7510                 jne 0x485891
// 00485881  53                   push ebx
// 00485882  8bcf                 mov ecx, edi
// 00485884  894708               mov dword ptr [edi + 8], eax
// 00485887  e874feffff           call 0x485700
// 0048588c  e99f000000           jmp 0x485930
// 00485891  3bce                 cmp ecx, esi
// 00485893  7d10                 jge 0x4858a5
// 00485895  53                   push ebx
// 00485896  8bcf                 mov ecx, edi
// 00485898  897708               mov dword ptr [edi + 8], esi
// 0048589b  e860feffff           call 0x485700
// 004858a0  e98b000000           jmp 0x485930
// 004858a5  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 004858ad  8bc2                 mov eax, edx
// 004858af  8d0440               lea eax, [eax + eax*2]
// 004858b2  03c0                 add eax, eax
// 004858b4  03c0                 add eax, eax
// 004858b6  3d801a0600           cmp eax, 0x61a80
// 004858bb  760a                 jbe 0x4858c7
// 004858bd  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 004858c5  eb0f                 jmp 0x4858d6
// 004858c7  3d00fa0000           cmp eax, 0xfa00
// 004858cc  7608                 jbe 0x4858d6
// 004858ce  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 004858d6  8bc2                 mov eax, edx
// 004858d8  f30f2ac8             cvtsi2ss xmm1, eax
// 004858dc  f30f59c8             mulss xmm1, xmm0
// 004858e0  f30f2cd1             cvttss2si edx, xmm1
// 004858e4  2bd0                 sub edx, eax
// 004858e6  8d040a               lea eax, [edx + ecx]
// 004858e9  894708               mov dword ptr [edi + 8], eax
// 004858ec  8b0d0c31c000         mov ecx, dword ptr [0xc0310c]
// 004858f2  3bc1                 cmp eax, ecx
// 004858f4  7d03                 jge 0x4858f9
// 004858f6  894f08               mov dword ptr [edi + 8], ecx
// 004858f9  53                   push ebx
// 004858fa  8bcf                 mov ecx, edi
// 004858fc  e8fffdffff           call 0x485700
// 00485901  eb2d                 jmp 0x485930
// 00485903  b856555555           mov eax, 0x55555556
// 00485908  f7ea                 imul edx
// 0048590a  8bc2                 mov eax, edx
// 0048590c  c1e81f               shr eax, 0x1f
// 0048590f  03c2                 add eax, edx
// 00485911  3bc8                 cmp ecx, eax
// 00485913  7f19                 jg 0x48592e
// 00485915  807c243400           cmp byte ptr [esp + 0x34], 0
// 0048591a  7412                 je 0x48592e
// 0048591c  3bce                 cmp ecx, esi
// 0048591e  7e0e                 jle 0x48592e
// 00485920  3bcb                 cmp ecx, ebx
// 00485922  7c02                 jl 0x485926
// 00485924  8bcb                 mov ecx, ebx
// 00485926  51                   push ecx
// 00485927  8bcf                 mov ecx, edi
// 00485929  e8d2fdffff           call 0x485700
// 0048592e  33ed                 xor ebp, ebp
// 00485930  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00485933  8bd3                 mov edx, ebx
// 00485935  7d20                 jge 0x485957
// 00485937  8d0c5b               lea ecx, [ebx + ebx*2]
// 0048593a  03c9                 add ecx, ecx
// 0048593c  03c9                 add ecx, ecx
// 0048593e  8bff                 mov edi, edi
// 00485940  8b07                 mov eax, dword ptr [edi]
// 00485942  03c1                 add eax, ecx
// 00485944  7408                 je 0x48594e
// 00485946  896804               mov dword ptr [eax + 4], ebp
// 00485949  896808               mov dword ptr [eax + 8], ebp
// 0048594c  8928                 mov dword ptr [eax], ebp
// 0048594e  42                   inc edx
// 0048594f  83c10c               add ecx, 0xc
// 00485952  3b5704               cmp edx, dword ptr [edi + 4]
// 00485955  7ce9                 jl 0x485940
// 00485957  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048595b  5f                   pop edi
// 0048595c  5e                   pop esi
// 0048595d  5d                   pop ebp
// 0048595e  5b                   pop ebx
// 0048595f  64890d00000000       mov dword ptr fs:[0], ecx
// 00485966  83c41c               add esp, 0x1c
// 00485969  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@V?$Array@H@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
