// from server: 100% by auto
// roc 2010-06 0090ca90  unit: G3D::TextureManager::TextureArgs  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090ca90
//
// 0090ca90  6aff                 push -1
// 0090ca92  6821119c00           push 0x9c1121
// 0090ca97  64a100000000         mov eax, dword ptr fs:[0]
// 0090ca9d  50                   push eax
// 0090ca9e  64892500000000       mov dword ptr fs:[0], esp
// 0090caa5  83ec08               sub esp, 8
// 0090caa8  53                   push ebx
// 0090caa9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0090caad  55                   push ebp
// 0090caae  56                   push esi
// 0090caaf  8bf1                 mov esi, ecx
// 0090cab1  8b6e04               mov ebp, dword ptr [esi + 4]
// 0090cab4  3bdd                 cmp ebx, ebp
// 0090cab6  57                   push edi
// 0090cab7  89742414             mov dword ptr [esp + 0x14], esi
// 0090cabb  896c2410             mov dword ptr [esp + 0x10], ebp
// 0090cabf  895e04               mov dword ptr [esi + 4], ebx
// 0090cac2  7d2c                 jge 0x90caf0
// 0090cac4  8d3cdd00000000       lea edi, [ebx*8]
// 0090cacb  2bfb                 sub edi, ebx
// 0090cacd  03ff                 add edi, edi
// 0090cacf  03ff                 add edi, edi
// 0090cad1  03ff                 add edi, edi
// 0090cad3  2beb                 sub ebp, ebx
// 0090cad5  8b06                 mov eax, dword ptr [esi]
// 0090cad7  8b1407               mov edx, dword ptr [edi + eax]
// 0090cada  8d0c07               lea ecx, [edi + eax]
// 0090cadd  8b4204               mov eax, dword ptr [edx + 4]
// 0090cae0  6a00                 push 0
// 0090cae2  ffd0                 call eax
// 0090cae4  83c738               add edi, 0x38
// 0090cae7  83ed01               sub ebp, 1
// 0090caea  75e9                 jne 0x90cad5
// 0090caec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0090caf0  f605e8cbc20001       test byte ptr [0xc2cbe8], 1
// 0090caf7  7514                 jne 0x90cb0d
// 0090caf9  830de8cbc20001       or dword ptr [0xc2cbe8], 1
// 0090cb00  bf0a000000           mov edi, 0xa
// 0090cb05  893de4cbc200         mov dword ptr [0xc2cbe4], edi
// 0090cb0b  eb06                 jmp 0x90cb13
// 0090cb0d  8b3de4cbc200         mov edi, dword ptr [0xc2cbe4]
// 0090cb13  8b4e04               mov ecx, dword ptr [esi + 4]
// 0090cb16  8b5608               mov edx, dword ptr [esi + 8]
// 0090cb19  3bca                 cmp ecx, edx
// 0090cb1b  7e77                 jle 0x90cb94
// 0090cb1d  85d2                 test edx, edx
// 0090cb1f  7509                 jne 0x90cb2a
// 0090cb21  895e08               mov dword ptr [esi + 8], ebx
// 0090cb24  55                   push ebp
// 0090cb25  e992000000           jmp 0x90cbbc
// 0090cb2a  3bcf                 cmp ecx, edi
// 0090cb2c  7d09                 jge 0x90cb37
// 0090cb2e  897e08               mov dword ptr [esi + 8], edi
// 0090cb31  55                   push ebp
// 0090cb32  e985000000           jmp 0x90cbbc
// 0090cb37  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0090cb3f  8d04d500000000       lea eax, [edx*8]
// 0090cb46  2bc2                 sub eax, edx
// 0090cb48  03c0                 add eax, eax
// 0090cb4a  03c0                 add eax, eax
// 0090cb4c  03c0                 add eax, eax
// 0090cb4e  3d801a0600           cmp eax, 0x61a80
// 0090cb53  760a                 jbe 0x90cb5f
// 0090cb55  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0090cb5d  eb0f                 jmp 0x90cb6e
// 0090cb5f  3d00fa0000           cmp eax, 0xfa00
// 0090cb64  7608                 jbe 0x90cb6e
// 0090cb66  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0090cb6e  8bc2                 mov eax, edx
// 0090cb70  f30f2ac8             cvtsi2ss xmm1, eax
// 0090cb74  f30f59c8             mulss xmm1, xmm0
// 0090cb78  f30f2cd1             cvttss2si edx, xmm1
// 0090cb7c  2bd0                 sub edx, eax
// 0090cb7e  8d040a               lea eax, [edx + ecx]
// 0090cb81  894608               mov dword ptr [esi + 8], eax
// 0090cb84  8b0de4cbc200         mov ecx, dword ptr [0xc2cbe4]
// 0090cb8a  3bc1                 cmp eax, ecx
// 0090cb8c  7d03                 jge 0x90cb91
// 0090cb8e  894e08               mov dword ptr [esi + 8], ecx
// 0090cb91  55                   push ebp
// 0090cb92  eb28                 jmp 0x90cbbc
// 0090cb94  b856555555           mov eax, 0x55555556
// 0090cb99  f7ea                 imul edx
// 0090cb9b  8bc2                 mov eax, edx
// 0090cb9d  c1e81f               shr eax, 0x1f
// 0090cba0  03c2                 add eax, edx
// 0090cba2  3bc8                 cmp ecx, eax
// 0090cba4  7f1d                 jg 0x90cbc3
// 0090cba6  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 0090cbab  7416                 je 0x90cbc3
// 0090cbad  3bcf                 cmp ecx, edi
// 0090cbaf  7e12                 jle 0x90cbc3
// 0090cbb1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0090cbb5  3bc8                 cmp ecx, eax
// 0090cbb7  7c02                 jl 0x90cbbb
// 0090cbb9  8bc8                 mov ecx, eax
// 0090cbbb  51                   push ecx
// 0090cbbc  8bce                 mov ecx, esi
// 0090cbbe  e88dfbffff           call 0x90c750
// 0090cbc3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0090cbc7  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0090cbca  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0090cbce  7d45                 jge 0x90cc15
// 0090cbd0  8b16                 mov edx, dword ptr [esi]
// 0090cbd2  8d0ced00000000       lea ecx, [ebp*8]
// 0090cbd9  2bcd                 sub ecx, ebp
// 0090cbdb  8d3cca               lea edi, [edx + ecx*8]
// 0090cbde  897c2428             mov dword ptr [esp + 0x28], edi
// 0090cbe2  33db                 xor ebx, ebx
// 0090cbe4  895c2420             mov dword ptr [esp + 0x20], ebx
// 0090cbe8  3bfb                 cmp edi, ebx
// 0090cbea  7417                 je 0x90cc03
// 0090cbec  8d4f04               lea ecx, [edi + 4]
// 0090cbef  c644242001           mov byte ptr [esp + 0x20], 1
// 0090cbf4  c70744e8a100         mov dword ptr [edi], 0xa1e844
// 0090cbfa  ff1504a49e00         call dword ptr [0x9ea404]
// 0090cc00  895f20               mov dword ptr [edi + 0x20], ebx
// 0090cc03  45                   inc ebp
// 0090cc04  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0090cc07  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0090cc0f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0090cc13  7cbb                 jl 0x90cbd0
// 0090cc15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0090cc19  5f                   pop edi
// 0090cc1a  5e                   pop esi
// 0090cc1b  5d                   pop ebp
// 0090cc1c  5b                   pop ebx
// 0090cc1d  64890d00000000       mov dword ptr fs:[0], ecx
// 0090cc24  83c414               add esp, 0x14
// 0090cc27  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
