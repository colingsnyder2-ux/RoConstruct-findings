// roc 2009-12 008479c0  unit: CXTPControls  size: 996 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008479c0
//
// 008479c0  83ec10               sub esp, 0x10
// 008479c3  53                   push ebx
// 008479c4  55                   push ebp
// 008479c5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008479c9  56                   push esi
// 008479ca  8bf1                 mov esi, ecx
// 008479cc  c7450000000000       mov dword ptr [ebp], 0
// 008479d3  c7450400000000       mov dword ptr [ebp + 4], 0
// 008479da  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008479dd  57                   push edi
// 008479de  e8adcbfbff           call 0x804590
// 008479e3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008479e6  8b10                 mov edx, dword ptr [eax]
// 008479e8  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008479ee  6a00                 push 0
// 008479f0  6a00                 push 0
// 008479f2  51                   push ecx
// 008479f3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008479f7  51                   push ecx
// 008479f8  8d4c2420             lea ecx, [esp + 0x20]
// 008479fc  51                   push ecx
// 008479fd  8bc8                 mov ecx, eax
// 008479ff  ffd2                 call edx
// 00847a01  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 00847a04  83ef01               sub edi, 1
// 00847a07  782e                 js 0x847a37
// 00847a09  8da42400000000       lea esp, [esp]
// 00847a10  85ff                 test edi, edi
// 00847a12  7c0d                 jl 0x847a21
// 00847a14  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00847a17  7d08                 jge 0x847a21
// 00847a19  8b4628               mov eax, dword ptr [esi + 0x28]
// 00847a1c  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00847a1f  eb02                 jmp 0x847a23
// 00847a21  33c9                 xor ecx, ecx
// 00847a23  8b11                 mov edx, dword ptr [ecx]
// 00847a25  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847a29  8b92a4000000         mov edx, dword ptr [edx + 0xa4]
// 00847a2f  50                   push eax
// 00847a30  ffd2                 call edx
// 00847a32  83ef01               sub edi, 1
// 00847a35  79d9                 jns 0x847a10
// 00847a37  6a00                 push 0
// 00847a39  8bce                 mov ecx, esi
// 00847a3b  e890e8ffff           call 0x8462d0
// 00847a40  85c0                 test eax, eax
// 00847a42  0f8e06030000         jle 0x847d4e
// 00847a48  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00847a4b  33c9                 xor ecx, ecx
// 00847a4d  ba40000000           mov edx, 0x40
// 00847a52  f7e2                 mul edx
// 00847a54  0f90c1               seto cl
// 00847a57  f7d9                 neg ecx
// 00847a59  0bc8                 or ecx, eax
// 00847a5b  51                   push ecx
// 00847a5c  e8e1c0faff           call 0x7f3b42
// 00847a61  8bc8                 mov ecx, eax
// 00847a63  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00847a66  83c404               add esp, 4
// 00847a69  33ff                 xor edi, edi
// 00847a6b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00847a6f  85c0                 test eax, eax
// 00847a71  7e35                 jle 0x847aa8
// 00847a73  8bd9                 mov ebx, ecx
// 00847a75  85ff                 test edi, edi
// 00847a77  7c11                 jl 0x847a8a
// 00847a79  3bf8                 cmp edi, eax
// 00847a7b  7d0d                 jge 0x847a8a
// 00847a7d  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00847a80  7d3a                 jge 0x847abc
// 00847a82  8b4628               mov eax, dword ptr [esi + 0x28]
// 00847a85  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00847a88  eb02                 jmp 0x847a8c
// 00847a8a  33c0                 xor eax, eax
// 00847a8c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00847a90  50                   push eax
// 00847a91  51                   push ecx
// 00847a92  8bcb                 mov ecx, ebx
// 00847a94  e807dcffff           call 0x8456a0
// 00847a99  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00847a9c  47                   inc edi
// 00847a9d  83c340               add ebx, 0x40
// 00847aa0  3bf8                 cmp edi, eax
// 00847aa2  7cd1                 jl 0x847a75
// 00847aa4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00847aa8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00847aac  f6c204               test dl, 4
// 00847aaf  7410                 je 0x847ac1
// 00847ab1  8b4620               mov eax, dword ptr [esi + 0x20]
// 00847ab4  8b98c8000000         mov ebx, dword ptr [eax + 0xc8]
// 00847aba  eb09                 jmp 0x847ac5
// 00847abc  e84bc0faff           call 0x7f3b0c
// 00847ac1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00847ac5  8b4620               mov eax, dword ptr [esi + 0x20]
// 00847ac8  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 00847ad2  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00847ad6  7459                 je 0x847b31
// 00847ad8  f6c210               test dl, 0x10
// 00847adb  7425                 je 0x847b02
// 00847add  8bc3                 mov eax, ebx
// 00847adf  2b470c               sub eax, dword ptr [edi + 0xc]
// 00847ae2  8d542430             lea edx, [esp + 0x30]
// 00847ae6  2b4704               sub eax, dword ptr [edi + 4]
// 00847ae9  52                   push edx
// 00847aea  50                   push eax
// 00847aeb  51                   push ecx
// 00847aec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00847af0  51                   push ecx
// 00847af1  8d542428             lea edx, [esp + 0x28]
// 00847af5  52                   push edx
// 00847af6  8bce                 mov ecx, esi
// 00847af8  e8f3fcffff           call 0x8477f0
// 00847afd  e940010000           jmp 0x847c42
// 00847b02  8bd3                 mov edx, ebx
// 00847b04  2b5708               sub edx, dword ptr [edi + 8]
// 00847b07  8d442430             lea eax, [esp + 0x30]
// 00847b0b  2b17                 sub edx, dword ptr [edi]
// 00847b0d  50                   push eax
// 00847b0e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00847b12  52                   push edx
// 00847b13  51                   push ecx
// 00847b14  50                   push eax
// 00847b15  8d4c2428             lea ecx, [esp + 0x28]
// 00847b19  51                   push ecx
// 00847b1a  8bce                 mov ecx, esi
// 00847b1c  e8cffcffff           call 0x8477f0
// 00847b21  8b10                 mov edx, dword ptr [eax]
// 00847b23  895500               mov dword ptr [ebp], edx
// 00847b26  8b4004               mov eax, dword ptr [eax + 4]
// 00847b29  894504               mov dword ptr [ebp + 4], eax
// 00847b2c  e91c010000           jmp 0x847c4d
// 00847b31  f7c200010000         test edx, 0x100
// 00847b37  747e                 je 0x847bb7
// 00847b39  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 00847b3f  8d542410             lea edx, [esp + 0x10]
// 00847b43  52                   push edx
// 00847b44  8d542434             lea edx, [esp + 0x34]
// 00847b48  52                   push edx
// 00847b49  50                   push eax
// 00847b4a  51                   push ecx
// 00847b4b  8bce                 mov ecx, esi
// 00847b4d  e88eddffff           call 0x8458e0
// 00847b52  8b542424             mov edx, dword ptr [esp + 0x24]
// 00847b56  6a00                 push 0
// 00847b58  8d4c2414             lea ecx, [esp + 0x14]
// 00847b5c  51                   push ecx
// 00847b5d  52                   push edx
// 00847b5e  8d442424             lea eax, [esp + 0x24]
// 00847b62  50                   push eax
// 00847b63  8bce                 mov ecx, esi
// 00847b65  e8d6dbffff           call 0x845740
// 00847b6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00847b6e  8d0c40               lea ecx, [eax + eax*2]
// 00847b71  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00847b75  7e27                 jle 0x847b9e
// 00847b77  8b5620               mov edx, dword ptr [esi + 0x20]
// 00847b7a  83bac800000000       cmp dword ptr [edx + 0xc8], 0
// 00847b81  7f1b                 jg 0x847b9e
// 00847b83  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00847b87  8b542424             mov edx, dword ptr [esp + 0x24]
// 00847b8b  8d442410             lea eax, [esp + 0x10]
// 00847b8f  50                   push eax
// 00847b90  51                   push ecx
// 00847b91  52                   push edx
// 00847b92  8bce                 mov ecx, esi
// 00847b94  e837dfffff           call 0x845ad0
// 00847b99  e986000000           jmp 0x847c24
// 00847b9e  8d4c2410             lea ecx, [esp + 0x10]
// 00847ba2  51                   push ecx
// 00847ba3  8d542434             lea edx, [esp + 0x34]
// 00847ba7  52                   push edx
// 00847ba8  50                   push eax
// 00847ba9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847bad  50                   push eax
// 00847bae  8bce                 mov ecx, esi
// 00847bb0  e82bddffff           call 0x8458e0
// 00847bb5  eb6d                 jmp 0x847c24
// 00847bb7  8a442430             mov al, byte ptr [esp + 0x30]
// 00847bbb  a808                 test al, 8
// 00847bbd  741c                 je 0x847bdb
// 00847bbf  8d542410             lea edx, [esp + 0x10]
// 00847bc3  52                   push edx
// 00847bc4  8bd3                 mov edx, ebx
// 00847bc6  2b5708               sub edx, dword ptr [edi + 8]
// 00847bc9  8d442434             lea eax, [esp + 0x34]
// 00847bcd  2b17                 sub edx, dword ptr [edi]
// 00847bcf  50                   push eax
// 00847bd0  52                   push edx
// 00847bd1  51                   push ecx
// 00847bd2  8bce                 mov ecx, esi
// 00847bd4  e807ddffff           call 0x8458e0
// 00847bd9  eb49                 jmp 0x847c24
// 00847bdb  a810                 test al, 0x10
// 00847bdd  741d                 je 0x847bfc
// 00847bdf  8d442410             lea eax, [esp + 0x10]
// 00847be3  50                   push eax
// 00847be4  8bc3                 mov eax, ebx
// 00847be6  2b470c               sub eax, dword ptr [edi + 0xc]
// 00847be9  8d542434             lea edx, [esp + 0x34]
// 00847bed  2b4704               sub eax, dword ptr [edi + 4]
// 00847bf0  52                   push edx
// 00847bf1  50                   push eax
// 00847bf2  51                   push ecx
// 00847bf3  8bce                 mov ecx, esi
// 00847bf5  e8e6dcffff           call 0x8458e0
// 00847bfa  eb28                 jmp 0x847c24
// 00847bfc  a820                 test al, 0x20
// 00847bfe  7408                 je 0x847c08
// 00847c00  8b470c               mov eax, dword ptr [edi + 0xc]
// 00847c03  034704               add eax, dword ptr [edi + 4]
// 00847c06  eb05                 jmp 0x847c0d
// 00847c08  8b4708               mov eax, dword ptr [edi + 8]
// 00847c0b  0307                 add eax, dword ptr [edi]
// 00847c0d  8d542410             lea edx, [esp + 0x10]
// 00847c11  52                   push edx
// 00847c12  8b542434             mov edx, dword ptr [esp + 0x34]
// 00847c16  52                   push edx
// 00847c17  8bd3                 mov edx, ebx
// 00847c19  2bd0                 sub edx, eax
// 00847c1b  52                   push edx
// 00847c1c  51                   push ecx
// 00847c1d  8bce                 mov ecx, esi
// 00847c1f  e87cdfffff           call 0x845ba0
// 00847c24  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847c28  8b542424             mov edx, dword ptr [esp + 0x24]
// 00847c2c  83e010               and eax, 0x10
// 00847c2f  50                   push eax
// 00847c30  8d4c2414             lea ecx, [esp + 0x14]
// 00847c34  51                   push ecx
// 00847c35  52                   push edx
// 00847c36  8d442424             lea eax, [esp + 0x24]
// 00847c3a  50                   push eax
// 00847c3b  8bce                 mov ecx, esi
// 00847c3d  e8fedaffff           call 0x845740
// 00847c42  8b08                 mov ecx, dword ptr [eax]
// 00847c44  894d00               mov dword ptr [ebp], ecx
// 00847c47  8b5004               mov edx, dword ptr [eax + 4]
// 00847c4a  895504               mov dword ptr [ebp + 4], edx
// 00847c4d  8b442438             mov eax, dword ptr [esp + 0x38]
// 00847c51  8b542430             mov edx, dword ptr [esp + 0x30]
// 00847c55  85c0                 test eax, eax
// 00847c57  7e2a                 jle 0x847c83
// 00847c59  f6c208               test dl, 8
// 00847c5c  7414                 je 0x847c72
// 00847c5e  2b470c               sub eax, dword ptr [edi + 0xc]
// 00847c61  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00847c64  2b4704               sub eax, dword ptr [edi + 4]
// 00847c67  3bc1                 cmp eax, ecx
// 00847c69  7f02                 jg 0x847c6d
// 00847c6b  8bc1                 mov eax, ecx
// 00847c6d  894504               mov dword ptr [ebp + 4], eax
// 00847c70  eb11                 jmp 0x847c83
// 00847c72  2b4708               sub eax, dword ptr [edi + 8]
// 00847c75  8b4d00               mov ecx, dword ptr [ebp]
// 00847c78  2b07                 sub eax, dword ptr [edi]
// 00847c7a  3bc1                 cmp eax, ecx
// 00847c7c  7f02                 jg 0x847c80
// 00847c7e  8bc1                 mov eax, ecx
// 00847c80  894500               mov dword ptr [ebp], eax
// 00847c83  f6c201               test dl, 1
// 00847c86  742a                 je 0x847cb2
// 00847c88  f6c210               test dl, 0x10
// 00847c8b  7414                 je 0x847ca1
// 00847c8d  2b5f0c               sub ebx, dword ptr [edi + 0xc]
// 00847c90  8b4504               mov eax, dword ptr [ebp + 4]
// 00847c93  2b5f04               sub ebx, dword ptr [edi + 4]
// 00847c96  3bd8                 cmp ebx, eax
// 00847c98  7e02                 jle 0x847c9c
// 00847c9a  8bc3                 mov eax, ebx
// 00847c9c  894504               mov dword ptr [ebp + 4], eax
// 00847c9f  eb11                 jmp 0x847cb2
// 00847ca1  2b5f08               sub ebx, dword ptr [edi + 8]
// 00847ca4  8b4500               mov eax, dword ptr [ebp]
// 00847ca7  2b1f                 sub ebx, dword ptr [edi]
// 00847ca9  3bd8                 cmp ebx, eax
// 00847cab  7e02                 jle 0x847caf
// 00847cad  8bc3                 mov eax, ebx
// 00847caf  894500               mov dword ptr [ebp], eax
// 00847cb2  8b0f                 mov ecx, dword ptr [edi]
// 00847cb4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00847cb8  83ec10               sub esp, 0x10
// 00847cbb  8bc4                 mov eax, esp
// 00847cbd  8908                 mov dword ptr [eax], ecx
// 00847cbf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00847cc2  894804               mov dword ptr [eax + 4], ecx
// 00847cc5  8b4f08               mov ecx, dword ptr [edi + 8]
// 00847cc8  894808               mov dword ptr [eax + 8], ecx
// 00847ccb  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00847cce  52                   push edx
// 00847ccf  55                   push ebp
// 00847cd0  89480c               mov dword ptr [eax + 0xc], ecx
// 00847cd3  53                   push ebx
// 00847cd4  8bce                 mov ecx, esi
// 00847cd6  e885e1ffff           call 0x845e60
// 00847cdb  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847cdf  a840                 test al, 0x40
// 00847ce1  7456                 je 0x847d39
// 00847ce3  8b5620               mov edx, dword ptr [esi + 0x20]
// 00847ce6  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 00847cf0  752c                 jne 0x847d1e
// 00847cf2  8b0f                 mov ecx, dword ptr [edi]
// 00847cf4  8b5704               mov edx, dword ptr [edi + 4]
// 00847cf7  50                   push eax
// 00847cf8  83ec10               sub esp, 0x10
// 00847cfb  8bc4                 mov eax, esp
// 00847cfd  8908                 mov dword ptr [eax], ecx
// 00847cff  8b4f08               mov ecx, dword ptr [edi + 8]
// 00847d02  895004               mov dword ptr [eax + 4], edx
// 00847d05  8b570c               mov edx, dword ptr [edi + 0xc]
// 00847d08  894808               mov dword ptr [eax + 8], ecx
// 00847d0b  8b4d00               mov ecx, dword ptr [ebp]
// 00847d0e  89500c               mov dword ptr [eax + 0xc], edx
// 00847d11  8b4504               mov eax, dword ptr [ebp + 4]
// 00847d14  50                   push eax
// 00847d15  51                   push ecx
// 00847d16  53                   push ebx
// 00847d17  8bce                 mov ecx, esi
// 00847d19  e8c2e2ffff           call 0x845fe0
// 00847d1e  33ff                 xor edi, edi
// 00847d20  397e2c               cmp dword ptr [esi + 0x2c], edi
// 00847d23  7e14                 jle 0x847d39
// 00847d25  8bcb                 mov ecx, ebx
// 00847d27  e844d4ffff           call 0x845170
// 00847d2c  47                   inc edi
// 00847d2d  83c340               add ebx, 0x40
// 00847d30  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00847d33  7cf0                 jl 0x847d25
// 00847d35  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00847d39  53                   push ebx
// 00847d3a  e8c7bdfaff           call 0x7f3b06
// 00847d3f  83c404               add esp, 4
// 00847d42  8bc5                 mov eax, ebp
// 00847d44  5f                   pop edi
// 00847d45  5e                   pop esi
// 00847d46  5d                   pop ebp
// 00847d47  5b                   pop ebx
// 00847d48  83c410               add esp, 0x10
// 00847d4b  c21800               ret 0x18
// 00847d4e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00847d52  8b4808               mov ecx, dword ptr [eax + 8]
// 00847d55  0308                 add ecx, dword ptr [eax]
// 00847d57  8b500c               mov edx, dword ptr [eax + 0xc]
// 00847d5a  035004               add edx, dword ptr [eax + 4]
// 00847d5d  f644243008           test byte ptr [esp + 0x30], 8
// 00847d62  8d4117               lea eax, [ecx + 0x17]
// 00847d65  8d4a16               lea ecx, [edx + 0x16]
// 00847d68  894500               mov dword ptr [ebp], eax
// 00847d6b  894d04               mov dword ptr [ebp + 4], ecx
// 00847d6e  741b                 je 0x847d8b
// 00847d70  8bc1                 mov eax, ecx
// 00847d72  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00847d76  3bc8                 cmp ecx, eax
// 00847d78  7e02                 jle 0x847d7c
// 00847d7a  8bc1                 mov eax, ecx
// 00847d7c  894504               mov dword ptr [ebp + 4], eax
// 00847d7f  8bc5                 mov eax, ebp
// 00847d81  5f                   pop edi
// 00847d82  5e                   pop esi
// 00847d83  5d                   pop ebp
// 00847d84  5b                   pop ebx
// 00847d85  83c410               add esp, 0x10
// 00847d88  c21800               ret 0x18
// 00847d8b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00847d8f  3bc8                 cmp ecx, eax
// 00847d91  7e02                 jle 0x847d95
// 00847d93  8bc1                 mov eax, ecx
// 00847d95  5f                   pop edi
// 00847d96  894500               mov dword ptr [ebp], eax
// 00847d99  5e                   pop esi
// 00847d9a  8bc5                 mov eax, ebp
// 00847d9c  5d                   pop ebp
// 00847d9d  5b                   pop ebx
// 00847d9e  83c410               add esp, 0x10
// 00847da1  c21800               ret 0x18
// copied from an identical function in another client (function ?CalcDynamicSize@CXTPControls@@QAE?AVCSize@@PAVCDC@@HKABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp