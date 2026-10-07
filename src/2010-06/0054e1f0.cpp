// roc 2010-06 0054e1f0  unit: G3D::Shader  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e1f0
//
// 0054e1f0  6aff                 push -1
// 0054e1f2  6869099900           push 0x990969
// 0054e1f7  64a100000000         mov eax, dword ptr fs:[0]
// 0054e1fd  50                   push eax
// 0054e1fe  64892500000000       mov dword ptr fs:[0], esp
// 0054e205  83ec08               sub esp, 8
// 0054e208  53                   push ebx
// 0054e209  55                   push ebp
// 0054e20a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0054e20e  56                   push esi
// 0054e20f  8bf1                 mov esi, ecx
// 0054e211  8b4604               mov eax, dword ptr [esi + 4]
// 0054e214  3be8                 cmp ebp, eax
// 0054e216  57                   push edi
// 0054e217  89742414             mov dword ptr [esp + 0x14], esi
// 0054e21b  89442410             mov dword ptr [esp + 0x10], eax
// 0054e21f  896e04               mov dword ptr [esi + 4], ebp
// 0054e222  7d27                 jge 0x54e24b
// 0054e224  8d3ced00000000       lea edi, [ebp*8]
// 0054e22b  2bfd                 sub edi, ebp
// 0054e22d  03ff                 add edi, edi
// 0054e22f  8bd8                 mov ebx, eax
// 0054e231  03ff                 add edi, edi
// 0054e233  2bdd                 sub ebx, ebp
// 0054e235  8b0e                 mov ecx, dword ptr [esi]
// 0054e237  03cf                 add ecx, edi
// 0054e239  ff1500a49e00         call dword ptr [0x9ea400]
// 0054e23f  83c71c               add edi, 0x1c
// 0054e242  83eb01               sub ebx, 1
// 0054e245  75ee                 jne 0x54e235
// 0054e247  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054e24b  f605689ec00001       test byte ptr [0xc09e68], 1
// 0054e252  7514                 jne 0x54e268
// 0054e254  830d689ec00001       or dword ptr [0xc09e68], 1
// 0054e25b  bf0a000000           mov edi, 0xa
// 0054e260  893d649ec000         mov dword ptr [0xc09e64], edi
// 0054e266  eb06                 jmp 0x54e26e
// 0054e268  8b3d649ec000         mov edi, dword ptr [0xc09e64]
// 0054e26e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054e271  8b5608               mov edx, dword ptr [esi + 8]
// 0054e274  33db                 xor ebx, ebx
// 0054e276  3bca                 cmp ecx, edx
// 0054e278  7e79                 jle 0x54e2f3
// 0054e27a  3bd3                 cmp edx, ebx
// 0054e27c  7509                 jne 0x54e287
// 0054e27e  896e08               mov dword ptr [esi + 8], ebp
// 0054e281  50                   push eax
// 0054e282  e993000000           jmp 0x54e31a
// 0054e287  3bcf                 cmp ecx, edi
// 0054e289  7d09                 jge 0x54e294
// 0054e28b  897e08               mov dword ptr [esi + 8], edi
// 0054e28e  50                   push eax
// 0054e28f  e986000000           jmp 0x54e31a
// 0054e294  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0054e29c  8d04d500000000       lea eax, [edx*8]
// 0054e2a3  2bc2                 sub eax, edx
// 0054e2a5  03c0                 add eax, eax
// 0054e2a7  03c0                 add eax, eax
// 0054e2a9  3d801a0600           cmp eax, 0x61a80
// 0054e2ae  760a                 jbe 0x54e2ba
// 0054e2b0  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0054e2b8  eb0f                 jmp 0x54e2c9
// 0054e2ba  3d00fa0000           cmp eax, 0xfa00
// 0054e2bf  7608                 jbe 0x54e2c9
// 0054e2c1  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0054e2c9  8bc2                 mov eax, edx
// 0054e2cb  f30f2ac8             cvtsi2ss xmm1, eax
// 0054e2cf  f30f59c8             mulss xmm1, xmm0
// 0054e2d3  f30f2cd1             cvttss2si edx, xmm1
// 0054e2d7  2bd0                 sub edx, eax
// 0054e2d9  8d040a               lea eax, [edx + ecx]
// 0054e2dc  894608               mov dword ptr [esi + 8], eax
// 0054e2df  8b0d649ec000         mov ecx, dword ptr [0xc09e64]
// 0054e2e5  3bc1                 cmp eax, ecx
// 0054e2e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054e2eb  7d03                 jge 0x54e2f0
// 0054e2ed  894e08               mov dword ptr [esi + 8], ecx
// 0054e2f0  50                   push eax
// 0054e2f1  eb27                 jmp 0x54e31a
// 0054e2f3  b856555555           mov eax, 0x55555556
// 0054e2f8  f7ea                 imul edx
// 0054e2fa  8bc2                 mov eax, edx
// 0054e2fc  c1e81f               shr eax, 0x1f
// 0054e2ff  03c2                 add eax, edx
// 0054e301  3bc8                 cmp ecx, eax
// 0054e303  7f1c                 jg 0x54e321
// 0054e305  385c242c             cmp byte ptr [esp + 0x2c], bl
// 0054e309  7416                 je 0x54e321
// 0054e30b  3bcf                 cmp ecx, edi
// 0054e30d  7e12                 jle 0x54e321
// 0054e30f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054e313  3bc8                 cmp ecx, eax
// 0054e315  7c02                 jl 0x54e319
// 0054e317  8bc8                 mov ecx, eax
// 0054e319  51                   push ecx
// 0054e31a  8bce                 mov ecx, esi
// 0054e31c  e88ffaffff           call 0x54ddb0
// 0054e321  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0054e325  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054e328  897c242c             mov dword ptr [esp + 0x2c], edi
// 0054e32c  7d31                 jge 0x54e35f
// 0054e32e  83cdff               or ebp, 0xffffffff
// 0054e331  8b16                 mov edx, dword ptr [esi]
// 0054e333  8d0cfd00000000       lea ecx, [edi*8]
// 0054e33a  2bcf                 sub ecx, edi
// 0054e33c  8d0c8a               lea ecx, [edx + ecx*4]
// 0054e33f  894c2428             mov dword ptr [esp + 0x28], ecx
// 0054e343  895c2420             mov dword ptr [esp + 0x20], ebx
// 0054e347  3bcb                 cmp ecx, ebx
// 0054e349  7406                 je 0x54e351
// 0054e34b  ff1504a49e00         call dword ptr [0x9ea404]
// 0054e351  47                   inc edi
// 0054e352  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054e355  896c2420             mov dword ptr [esp + 0x20], ebp
// 0054e359  897c242c             mov dword ptr [esp + 0x2c], edi
// 0054e35d  7cd2                 jl 0x54e331
// 0054e35f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054e363  5f                   pop edi
// 0054e364  5e                   pop esi
// 0054e365  5d                   pop ebp
// 0054e366  5b                   pop ebx
// 0054e367  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e36e  83c414               add esp, 0x14
// 0054e371  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
