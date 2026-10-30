// from server: 100% by auto
// roc 2008-06 006d3ca0  unit: CXTPReportControl  size: 1169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d3ca0
//
// 006d3ca0  55                   push ebp
// 006d3ca1  8dac24f8fbffff       lea ebp, [esp - 0x408]
// 006d3ca8  81ec08040000         sub esp, 0x408
// 006d3cae  6aff                 push -1
// 006d3cb0  68621a7e00           push 0x7e1a62
// 006d3cb5  64a100000000         mov eax, dword ptr fs:[0]
// 006d3cbb  50                   push eax
// 006d3cbc  81ecf4000000         sub esp, 0xf4
// 006d3cc2  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006d3cc7  33c5                 xor eax, ebp
// 006d3cc9  898504040000         mov dword ptr [ebp + 0x404], eax
// 006d3ccf  53                   push ebx
// 006d3cd0  56                   push esi
// 006d3cd1  57                   push edi
// 006d3cd2  50                   push eax
// 006d3cd3  8d45f4               lea eax, [ebp - 0xc]
// 006d3cd6  64a300000000         mov dword ptr fs:[0], eax
// 006d3cdc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006d3cdf  8bbd10040000         mov edi, dword ptr [ebp + 0x410]
// 006d3ce5  8bf1                 mov esi, ecx
// 006d3ce7  8b06                 mov eax, dword ptr [esi]
// 006d3ce9  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 006d3cef  8975ec               mov dword ptr [ebp - 0x14], esi
// 006d3cf2  897de8               mov dword ptr [ebp - 0x18], edi
// 006d3cf5  ffd2                 call edx
// 006d3cf7  8bce                 mov ecx, esi
// 006d3cf9  8975d0               mov dword ptr [ebp - 0x30], esi
// 006d3cfc  e84f53ffff           call 0x6c9050
// 006d3d01  8b86a0020000         mov eax, dword ptr [esi + 0x2a0]
// 006d3d07  8945e4               mov dword ptr [ebp - 0x1c], eax
// 006d3d0a  8b8514040000         mov eax, dword ptr [ebp + 0x414]
// 006d3d10  83cbff               or ebx, 0xffffffff
// 006d3d13  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006d3d1a  899ea0020000         mov dword ptr [esi + 0x2a0], ebx
// 006d3d20  83f801               cmp eax, 1
// 006d3d23  7409                 je 0x6d3d2e
// 006d3d25  83f802               cmp eax, 2
// 006d3d28  0f85d0030000         jne 0x6d40fe
// 006d3d2e  8bce                 mov ecx, esi
// 006d3d30  e85b73ffff           call 0x6cb090
// 006d3d35  85c0                 test eax, eax
// 006d3d37  0f85c1030000         jne 0x6d40fe
// 006d3d3d  85ff                 test edi, edi
// 006d3d3f  0f84b9030000         je 0x6d40fe
// 006d3d45  0fb78e90020000       movzx ecx, word ptr [esi + 0x290]
// 006d3d4c  50                   push eax
// 006d3d4d  51                   push ecx
// 006d3d4e  8bcf                 mov ecx, edi
// 006d3d50  e807850e00           call 0x7bc25c
// 006d3d55  85c0                 test eax, eax
// 006d3d57  0f84a1030000         je 0x6d40fe
// 006d3d5d  f6869c02000001       test byte ptr [esi + 0x29c], 1
// 006d3d64  0f8494030000         je 0x6d40fe
// 006d3d6a  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 006d3d70  e8db620000           call 0x6da050
// 006d3d75  8b951c040000         mov edx, dword ptr [ebp + 0x41c]
// 006d3d7b  8945dc               mov dword ptr [ebp - 0x24], eax
// 006d3d7e  8b8518040000         mov eax, dword ptr [ebp + 0x418]
// 006d3d84  52                   push edx
// 006d3d85  33db                 xor ebx, ebx
// 006d3d87  50                   push eax
// 006d3d88  8bce                 mov ecx, esi
// 006d3d8a  c745d801000000       mov dword ptr [ebp - 0x28], 1
// 006d3d91  895de0               mov dword ptr [ebp - 0x20], ebx
// 006d3d94  e89763ffff           call 0x6ca130
// 006d3d99  8bf8                 mov edi, eax
// 006d3d9b  85ff                 test edi, edi
// 006d3d9d  7457                 je 0x6d3df6
// 006d3d9f  8b17                 mov edx, dword ptr [edi]
// 006d3da1  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 006d3da7  8d4dd4               lea ecx, [ebp - 0x2c]
// 006d3daa  51                   push ecx
// 006d3dab  8d45c0               lea eax, [ebp - 0x40]
// 006d3dae  50                   push eax
// 006d3daf  8bcf                 mov ecx, edi
// 006d3db1  ffd2                 call edx
// 006d3db3  8bc8                 mov ecx, eax
// 006d3db5  e8e6e0d4ff           call 0x421ea0
// 006d3dba  8b5004               mov edx, dword ptr [eax + 4]
// 006d3dbd  8b07                 mov eax, dword ptr [edi]
// 006d3dbf  33c9                 xor ecx, ecx
// 006d3dc1  3b951c040000         cmp edx, dword ptr [ebp + 0x41c]
// 006d3dc7  8b5060               mov edx, dword ptr [eax + 0x60]
// 006d3dca  0f9dc1               setge cl
// 006d3dcd  894dd8               mov dword ptr [ebp - 0x28], ecx
// 006d3dd0  8bcf                 mov ecx, edi
// 006d3dd2  ffd2                 call edx
// 006d3dd4  8945e0               mov dword ptr [ebp - 0x20], eax
// 006d3dd7  85c0                 test eax, eax
// 006d3dd9  7419                 je 0x6d3df4
// 006d3ddb  8bc8                 mov ecx, eax
// 006d3ddd  e84e72ffff           call 0x6cb030
// 006d3de2  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 006d3de5  33c9                 xor ecx, ecx
// 006d3de7  394dd8               cmp dword ptr [ebp - 0x28], ecx
// 006d3dea  0f94c1               sete cl
// 006d3ded  03c1                 add eax, ecx
// 006d3def  8945dc               mov dword ptr [ebp - 0x24], eax
// 006d3df2  eb02                 jmp 0x6d3df6
// 006d3df4  8bd8                 mov ebx, eax
// 006d3df6  83be9802000000       cmp dword ptr [esi + 0x298], 0
// 006d3dfd  0f84f4000000         je 0x6d3ef7
// 006d3e03  83bd1404000002       cmp dword ptr [ebp + 0x414], 2
// 006d3e0a  0f85e7000000         jne 0x6d3ef7
// 006d3e10  83c8ff               or eax, 0xffffffff
// 006d3e13  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 006d3e16  7508                 jne 0x6d3e20
// 006d3e18  8945fc               mov dword ptr [ebp - 4], eax
// 006d3e1b  e9e1020000           jmp 0x6d4101
// 006d3e20  6a48                 push 0x48
// 006d3e22  e8c943ffff           call 0x6c81f0
// 006d3e27  8945ec               mov dword ptr [ebp - 0x14], eax
// 006d3e2a  c645fc01             mov byte ptr [ebp - 4], 1
// 006d3e2e  85c0                 test eax, eax
// 006d3e30  740d                 je 0x6d3e3f
// 006d3e32  6a01                 push 1
// 006d3e34  8bc8                 mov ecx, eax
// 006d3e36  e8353d0000           call 0x6d7b70
// 006d3e3b  8bf8                 mov edi, eax
// 006d3e3d  eb02                 jmp 0x6d3e41
// 006d3e3f  33ff                 xor edi, edi
// 006d3e41  6a00                 push 0
// 006d3e43  57                   push edi
// 006d3e44  8bce                 mov ecx, esi
// 006d3e46  c645fc00             mov byte ptr [ebp - 4], 0
// 006d3e4a  e88173ffff           call 0x6cb1d0
// 006d3e4f  85c0                 test eax, eax
// 006d3e51  7517                 jne 0x6d3e6a
// 006d3e53  85ff                 test edi, edi
// 006d3e55  7407                 je 0x6d3e5e
// 006d3e57  8bcf                 mov ecx, edi
// 006d3e59  e886cdfcff           call 0x6a0be4
// 006d3e5e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006d3e65  e997020000           jmp 0x6d4101
// 006d3e6a  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 006d3e6d  897dc0               mov dword ptr [ebp - 0x40], edi
// 006d3e70  895dc4               mov dword ptr [ebp - 0x3c], ebx
// 006d3e73  8955c8               mov dword ptr [ebp - 0x38], edx
// 006d3e76  c745cc02000000       mov dword ptr [ebp - 0x34], 2
// 006d3e7d  85db                 test ebx, ebx
// 006d3e7f  740a                 je 0x6d3e8b
// 006d3e81  8d4304               lea eax, [ebx + 4]
// 006d3e84  50                   push eax
// 006d3e85  ff15b0218000         call dword ptr [0x8021b0]
// 006d3e8b  8d4db4               lea ecx, [ebp - 0x4c]
// 006d3e8e  51                   push ecx
// 006d3e8f  6ab9                 push -0x47
// 006d3e91  8bce                 mov ecx, esi
// 006d3e93  e888beffff           call 0x6cfd20
// 006d3e98  83f8ff               cmp eax, -1
// 006d3e9b  74b6                 je 0x6d3e53
// 006d3e9d  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 006d3ea0  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 006d3ea6  57                   push edi
// 006d3ea7  52                   push edx
// 006d3ea8  e8b33a0000           call 0x6d7960
// 006d3ead  8b06                 mov eax, dword ptr [esi]
// 006d3eaf  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006d3eb5  8bce                 mov ecx, esi
// 006d3eb7  ffd2                 call edx
// 006d3eb9  57                   push edi
// 006d3eba  8bce                 mov ecx, esi
// 006d3ebc  e8cff8ffff           call 0x6d3790
// 006d3ec1  8bce                 mov ecx, esi
// 006d3ec3  e86880ffff           call 0x6cbf30
// 006d3ec8  8d45b4               lea eax, [ebp - 0x4c]
// 006d3ecb  50                   push eax
// 006d3ecc  6ab5                 push -0x4b
// 006d3ece  8bce                 mov ecx, esi
// 006d3ed0  e84bbeffff           call 0x6cfd20
// 006d3ed5  85ff                 test edi, edi
// 006d3ed7  7407                 je 0x6d3ee0
// 006d3ed9  8bcf                 mov ecx, edi
// 006d3edb  e804cdfcff           call 0x6a0be4
// 006d3ee0  85db                 test ebx, ebx
// 006d3ee2  7407                 je 0x6d3eeb
// 006d3ee4  8bcb                 mov ecx, ebx
// 006d3ee6  e8f9ccfcff           call 0x6a0be4
// 006d3eeb  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006d3ef2  e90a020000           jmp 0x6d4101
// 006d3ef7  0fb78e90020000       movzx ecx, word ptr [esi + 0x290]
// 006d3efe  6a00                 push 0
// 006d3f00  51                   push ecx
// 006d3f01  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006d3f04  e8ad830e00           call 0x7bc2b6
// 006d3f09  8bf8                 mov edi, eax
// 006d3f0b  897de4               mov dword ptr [ebp - 0x1c], edi
// 006d3f0e  85ff                 test edi, edi
// 006d3f10  0f8448ffffff         je 0x6d3e5e
// 006d3f16  6a48                 push 0x48
// 006d3f18  e8d342ffff           call 0x6c81f0
// 006d3f1d  8945e8               mov dword ptr [ebp - 0x18], eax
// 006d3f20  c645fc02             mov byte ptr [ebp - 4], 2
// 006d3f24  85c0                 test eax, eax
// 006d3f26  7410                 je 0x6d3f38
// 006d3f28  6a00                 push 0
// 006d3f2a  8bc8                 mov ecx, eax
// 006d3f2c  e83f3c0000           call 0x6d7b70
// 006d3f31  8bd8                 mov ebx, eax
// 006d3f33  8945e8               mov dword ptr [ebp - 0x18], eax
// 006d3f36  eb05                 jmp 0x6d3f3d
// 006d3f38  33db                 xor ebx, ebx
// 006d3f3a  895de8               mov dword ptr [ebp - 0x18], ebx
// 006d3f3d  6a00                 push 0
// 006d3f3f  6800100000           push 0x1000
// 006d3f44  6a01                 push 1
// 006d3f46  57                   push edi
// 006d3f47  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 006d3f4d  c645fc03             mov byte ptr [ebp - 4], 3
// 006d3f51  e8ec810e00           call 0x7bc142
// 006d3f56  8d9548ffffff         lea edx, [ebp - 0xb8]
// 006d3f5c  52                   push edx
// 006d3f5d  8d8d00ffffff         lea ecx, [ebp - 0x100]
// 006d3f63  c645fc04             mov byte ptr [ebp - 4], 4
// 006d3f67  e8c4a40200           call 0x6fe430
// 006d3f6c  8b06                 mov eax, dword ptr [esi]
// 006d3f6e  8b904c020000         mov edx, dword ptr [eax + 0x24c]
// 006d3f74  53                   push ebx
// 006d3f75  8d8d00ffffff         lea ecx, [ebp - 0x100]
// 006d3f7b  51                   push ecx
// 006d3f7c  8bce                 mov ecx, esi
// 006d3f7e  c645fc05             mov byte ptr [ebp - 4], 5
// 006d3f82  ffd2                 call edx
// 006d3f84  85c0                 test eax, eax
// 006d3f86  7507                 jne 0x6d3f8f
// 006d3f88  8bcb                 mov ecx, ebx
// 006d3f8a  e8c1380000           call 0x6d7850
// 006d3f8f  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 006d3f95  e896810e00           call 0x7bc130
// 006d3f9a  8d8d00ffffff         lea ecx, [ebp - 0x100]
// 006d3fa0  c645fc04             mov byte ptr [ebp - 4], 4
// 006d3fa4  e8f7890200           call 0x6fc9a0
// 006d3fa9  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 006d3faf  c645fc03             mov byte ptr [ebp - 4], 3
// 006d3fb3  e86c810e00           call 0x7bc124
// 006d3fb8  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006d3fbf  eb6c                 jmp 0x6d402d
// 006d3fc1  8b75b0               mov esi, dword ptr [ebp - 0x50]
// 006d3fc4  8b06                 mov eax, dword ptr [esi]
// 006d3fc6  8b5018               mov edx, dword ptr [eax + 0x18]
// 006d3fc9  6a00                 push 0
// 006d3fcb  6800040000           push 0x400
// 006d3fd0  8d4d00               lea ecx, [ebp]
// 006d3fd3  51                   push ecx
// 006d3fd4  8bce                 mov ecx, esi
// 006d3fd6  ffd2                 call edx
// 006d3fd8  8bce                 mov ecx, esi
// 006d3fda  e871c9fcff           call 0x6a0950
// 006d3fdf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006d3fe6  b824406d00           mov eax, 0x6d4024
// 006d3feb  c3                   ret 
// 006d3fec  8b75ac               mov esi, dword ptr [ebp - 0x54]
// 006d3fef  8b06                 mov eax, dword ptr [esi]
// 006d3ff1  8b5018               mov edx, dword ptr [eax + 0x18]
// 006d3ff4  6a00                 push 0
// 006d3ff6  6800040000           push 0x400
// 006d3ffb  8d4d00               lea ecx, [ebp]
// 006d3ffe  51                   push ecx
// 006d3fff  8bce                 mov ecx, esi
// 006d4001  ffd2                 call edx
// 006d4003  8bce                 mov ecx, esi
// 006d4005  e846c9fcff           call 0x6a0950
// 006d400a  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006d4011  b824406d00           mov eax, 0x6d4024
// 006d4016  c3                   ret 
// 006d4017  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006d401e  b824406d00           mov eax, 0x6d4024
// 006d4023  c3                   ret 
// 006d4024  8b7de4               mov edi, dword ptr [ebp - 0x1c]
// 006d4027  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 006d402a  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 006d402d  8b07                 mov eax, dword ptr [edi]
// 006d402f  8b5004               mov edx, dword ptr [eax + 4]
// 006d4032  6a01                 push 1
// 006d4034  8bcf                 mov ecx, edi
// 006d4036  ffd2                 call edx
// 006d4038  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 006d403b  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 006d403e  8b9514040000         mov edx, dword ptr [ebp + 0x414]
// 006d4044  8945a0               mov dword ptr [ebp - 0x60], eax
// 006d4047  8d4590               lea eax, [ebp - 0x70]
// 006d404a  50                   push eax
// 006d404b  894da4               mov dword ptr [ebp - 0x5c], ecx
// 006d404e  6ab9                 push -0x47
// 006d4050  8bce                 mov ecx, esi
// 006d4052  895d9c               mov dword ptr [ebp - 0x64], ebx
// 006d4055  8955a8               mov dword ptr [ebp - 0x58], edx
// 006d4058  e8c3bcffff           call 0x6cfd20
// 006d405d  83f8ff               cmp eax, -1
// 006d4060  0f847afeffff         je 0x6d3ee0
// 006d4066  8bcb                 mov ecx, ebx
// 006d4068  e8e35f0000           call 0x6da050
// 006d406d  8945e4               mov dword ptr [ebp - 0x1c], eax
// 006d4070  85c0                 test eax, eax
// 006d4072  7e6a                 jle 0x6d40de
// 006d4074  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 006d407b  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006d407e  51                   push ecx
// 006d407f  8bcb                 mov ecx, ebx
// 006d4081  e89a380000           call 0x6d7920
// 006d4086  8bf8                 mov edi, eax
// 006d4088  85ff                 test edi, edi
// 006d408a  741e                 je 0x6d40aa
// 006d408c  8d5704               lea edx, [edi + 4]
// 006d408f  52                   push edx
// 006d4090  ff15b0218000         call dword ptr [0x8021b0]
// 006d4096  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 006d409c  57                   push edi
// 006d409d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 006d40a0  57                   push edi
// 006d40a1  e84a380000           call 0x6d78f0
// 006d40a6  47                   inc edi
// 006d40a7  897ddc               mov dword ptr [ebp - 0x24], edi
// 006d40aa  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006d40ad  40                   inc eax
// 006d40ae  3b45e4               cmp eax, dword ptr [ebp - 0x1c]
// 006d40b1  8945ec               mov dword ptr [ebp - 0x14], eax
// 006d40b4  7cc5                 jl 0x6d407b
// 006d40b6  8b06                 mov eax, dword ptr [esi]
// 006d40b8  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006d40be  8bce                 mov ecx, esi
// 006d40c0  ffd2                 call edx
// 006d40c2  53                   push ebx
// 006d40c3  8bce                 mov ecx, esi
// 006d40c5  e8c6f6ffff           call 0x6d3790
// 006d40ca  8bce                 mov ecx, esi
// 006d40cc  e85f7effff           call 0x6cbf30
// 006d40d1  8d4590               lea eax, [ebp - 0x70]
// 006d40d4  50                   push eax
// 006d40d5  6ab5                 push -0x4b
// 006d40d7  8bce                 mov ecx, esi
// 006d40d9  e842bcffff           call 0x6cfd20
// 006d40de  85db                 test ebx, ebx
// 006d40e0  7407                 je 0x6d40e9
// 006d40e2  8bcb                 mov ecx, ebx
// 006d40e4  e8fbcafcff           call 0x6a0be4
// 006d40e9  8bce                 mov ecx, esi
// 006d40eb  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006d40f2  e8a9b7ffff           call 0x6cf8a0
// 006d40f7  b801000000           mov eax, 1
// 006d40fc  eb0c                 jmp 0x6d410a
// 006d40fe  895dfc               mov dword ptr [ebp - 4], ebx
// 006d4101  8bce                 mov ecx, esi
// 006d4103  e898b7ffff           call 0x6cf8a0
// 006d4108  33c0                 xor eax, eax
// 006d410a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d410d  64890d00000000       mov dword ptr fs:[0], ecx
// 006d4114  59                   pop ecx
// 006d4115  5f                   pop edi
// 006d4116  5e                   pop esi
// 006d4117  5b                   pop ebx
// 006d4118  8b8d04040000         mov ecx, dword ptr [ebp + 0x404]
// 006d411e  33cd                 xor ecx, ebp
// 006d4120  e8addcfcff           call 0x6a1dd2
// 006d4125  81c508040000         add ebp, 0x408
// 006d412b  8be5                 mov esp, ebp
// 006d412d  5d                   pop ebp
// 006d412e  c21000               ret 0x10

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportControl.cpp
