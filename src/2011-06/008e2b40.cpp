// roc 2011-06 008e2b40  unit: CXTPPropertyGridPaintManager  size: 1472 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e2b40
//
// 008e2b40  6aff                 push -1
// 008e2b42  68f1dba000           push 0xa0dbf1
// 008e2b47  64a100000000         mov eax, dword ptr fs:[0]
// 008e2b4d  50                   push eax
// 008e2b4e  83ec38               sub esp, 0x38
// 008e2b51  53                   push ebx
// 008e2b52  55                   push ebp
// 008e2b53  56                   push esi
// 008e2b54  57                   push edi
// 008e2b55  a12058c900           mov eax, dword ptr [0xc95820]
// 008e2b5a  33c4                 xor eax, esp
// 008e2b5c  50                   push eax
// 008e2b5d  8d44244c             lea eax, [esp + 0x4c]
// 008e2b61  64a300000000         mov dword ptr fs:[0], eax
// 008e2b67  8be9                 mov ebp, ecx
// 008e2b69  896c2414             mov dword ptr [esp + 0x14], ebp
// 008e2b6d  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008e2b71  8b4738               mov eax, dword ptr [edi + 0x38]
// 008e2b74  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008e2b77  8b5f3c               mov ebx, dword ptr [edi + 0x3c]
// 008e2b7a  8b7734               mov esi, dword ptr [edi + 0x34]
// 008e2b7d  89442430             mov dword ptr [esp + 0x30], eax
// 008e2b81  03c1                 add eax, ecx
// 008e2b83  99                   cdq 
// 008e2b84  2bc2                 sub eax, edx
// 008e2b86  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e2b8a  8bc8                 mov ecx, eax
// 008e2b8c  8d0433               lea eax, [ebx + esi]
// 008e2b8f  99                   cdq 
// 008e2b90  d1f9                 sar ecx, 1
// 008e2b92  895c2434             mov dword ptr [esp + 0x34], ebx
// 008e2b96  2bc2                 sub eax, edx
// 008e2b98  83c103               add ecx, 3
// 008e2b9b  8bd8                 mov ebx, eax
// 008e2b9d  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e2ba1  d1fb                 sar ebx, 1
// 008e2ba3  8bcf                 mov ecx, edi
// 008e2ba5  8974242c             mov dword ptr [esp + 0x2c], esi
// 008e2ba9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008e2bad  e81e1eb4ff           call 0x4249d0
// 008e2bb2  8bf0                 mov esi, eax
// 008e2bb4  f7de                 neg esi
// 008e2bb6  1bf6                 sbb esi, esi
// 008e2bb8  f7de                 neg esi
// 008e2bba  83c611               add esi, 0x11
// 008e2bbd  e81e28f6ff           call 0x8453e0
// 008e2bc2  56                   push esi
// 008e2bc3  8bc8                 mov ecx, eax
// 008e2bc5  e8e61ff6ff           call 0x844bb0
// 008e2bca  837d0401             cmp dword ptr [ebp + 4], 1
// 008e2bce  89442460             mov dword ptr [esp + 0x60], eax
// 008e2bd2  0f851f010000         jne 0x8e2cf7
// 008e2bd8  8d4d14               lea ecx, [ebp + 0x14]
// 008e2bdb  e8f0a6f9ff           call 0x87d2d0
// 008e2be0  85c0                 test eax, eax
// 008e2be2  0f840f010000         je 0x8e2cf7
// 008e2be8  8d4d20               lea ecx, [ebp + 0x20]
// 008e2beb  e8e0a6f9ff           call 0x87d2d0
// 008e2bf0  85c0                 test eax, eax
// 008e2bf2  0f84ff000000         je 0x8e2cf7
// 008e2bf8  8b4574               mov eax, dword ptr [ebp + 0x74]
// 008e2bfb  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008e2bfe  83c070               add eax, 0x70
// 008e2c01  83f9ff               cmp ecx, -1
// 008e2c04  7505                 jne 0x8e2c0b
// 008e2c06  8b4004               mov eax, dword ptr [eax + 4]
// 008e2c09  eb02                 jmp 0x8e2c0d
// 008e2c0b  8bc1                 mov eax, ecx
// 008e2c0d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008e2c11  50                   push eax
// 008e2c12  8d442430             lea eax, [esp + 0x30]
// 008e2c16  50                   push eax
// 008e2c17  8bce                 mov ecx, esi
// 008e2c19  e80282f2ff           call 0x80ae20
// 008e2c1e  8b4730               mov eax, dword ptr [edi + 0x30]
// 008e2c21  8bcf                 mov ecx, edi
// 008e2c23  83f865               cmp eax, 0x65
// 008e2c26  7471                 je 0x8e2c99
// 008e2c28  e8a31db4ff           call 0x4249d0
// 008e2c2d  85c0                 test eax, eax
// 008e2c2f  7507                 jne 0x8e2c38
// 008e2c31  b804000000           mov eax, 4
// 008e2c36  eb3e                 jmp 0x8e2c76
// 008e2c38  8bcf                 mov ecx, edi
// 008e2c3a  e8b121c5ff           call 0x534df0
// 008e2c3f  85c0                 test eax, eax
// 008e2c41  7412                 je 0x8e2c55
// 008e2c43  8bcf                 mov ecx, edi
// 008e2c45  e8e6b4ffff           call 0x8de130
// 008e2c4a  85c0                 test eax, eax
// 008e2c4c  7407                 je 0x8e2c55
// 008e2c4e  b803000000           mov eax, 3
// 008e2c53  eb21                 jmp 0x8e2c76
// 008e2c55  8bcf                 mov ecx, edi
// 008e2c57  e8d4b4ffff           call 0x8de130
// 008e2c5c  85c0                 test eax, eax
// 008e2c5e  7407                 je 0x8e2c67
// 008e2c60  b802000000           mov eax, 2
// 008e2c65  eb0f                 jmp 0x8e2c76
// 008e2c67  8bcf                 mov ecx, edi
// 008e2c69  e8a2b4ffff           call 0x8de110
// 008e2c6e  f7d8                 neg eax
// 008e2c70  1bc0                 sbb eax, eax
// 008e2c72  83e004               and eax, 4
// 008e2c75  40                   inc eax
// 008e2c76  85f6                 test esi, esi
// 008e2c78  7504                 jne 0x8e2c7e
// 008e2c7a  33c9                 xor ecx, ecx
// 008e2c7c  eb03                 jmp 0x8e2c81
// 008e2c7e  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e2c81  6a00                 push 0
// 008e2c83  8d542430             lea edx, [esp + 0x30]
// 008e2c87  52                   push edx
// 008e2c88  50                   push eax
// 008e2c89  6a01                 push 1
// 008e2c8b  51                   push ecx
// 008e2c8c  8d4d14               lea ecx, [ebp + 0x14]
// 008e2c8f  e86ca3f9ff           call 0x87d000
// 008e2c94  e9b2020000           jmp 0x8e2f4b
// 008e2c99  e8321db4ff           call 0x4249d0
// 008e2c9e  85c0                 test eax, eax
// 008e2ca0  7507                 jne 0x8e2ca9
// 008e2ca2  b804000000           mov eax, 4
// 008e2ca7  eb2b                 jmp 0x8e2cd4
// 008e2ca9  8bcf                 mov ecx, edi
// 008e2cab  e84021c5ff           call 0x534df0
// 008e2cb0  85c0                 test eax, eax
// 008e2cb2  7412                 je 0x8e2cc6
// 008e2cb4  8bcf                 mov ecx, edi
// 008e2cb6  e875b4ffff           call 0x8de130
// 008e2cbb  85c0                 test eax, eax
// 008e2cbd  7407                 je 0x8e2cc6
// 008e2cbf  b803000000           mov eax, 3
// 008e2cc4  eb0e                 jmp 0x8e2cd4
// 008e2cc6  8bcf                 mov ecx, edi
// 008e2cc8  e863b4ffff           call 0x8de130
// 008e2ccd  f7d8                 neg eax
// 008e2ccf  1bc0                 sbb eax, eax
// 008e2cd1  f7d8                 neg eax
// 008e2cd3  40                   inc eax
// 008e2cd4  85f6                 test esi, esi
// 008e2cd6  7504                 jne 0x8e2cdc
// 008e2cd8  33c9                 xor ecx, ecx
// 008e2cda  eb03                 jmp 0x8e2cdf
// 008e2cdc  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e2cdf  6a00                 push 0
// 008e2ce1  8d542430             lea edx, [esp + 0x30]
// 008e2ce5  52                   push edx
// 008e2ce6  50                   push eax
// 008e2ce7  6a01                 push 1
// 008e2ce9  51                   push ecx
// 008e2cea  8d4d20               lea ecx, [ebp + 0x20]
// 008e2ced  e80ea3f9ff           call 0x87d000
// 008e2cf2  e954020000           jmp 0x8e2f4b
// 008e2cf7  8b4504               mov eax, dword ptr [ebp + 4]
// 008e2cfa  83f803               cmp eax, 3
// 008e2cfd  0f859e000000         jne 0x8e2da1
// 008e2d03  8bcf                 mov ecx, edi
// 008e2d05  e8e620c5ff           call 0x534df0
// 008e2d0a  85c0                 test eax, eax
// 008e2d0c  7412                 je 0x8e2d20
// 008e2d0e  8bcf                 mov ecx, edi
// 008e2d10  e81bb4ffff           call 0x8de130
// 008e2d15  85c0                 test eax, eax
// 008e2d17  7407                 je 0x8e2d20
// 008e2d19  b8ffab3f00           mov eax, 0x3fabff
// 008e2d1e  eb1d                 jmp 0x8e2d3d
// 008e2d20  8bcf                 mov ecx, edi
// 008e2d22  e809b4ffff           call 0x8de130
// 008e2d27  85c0                 test eax, eax
// 008e2d29  7407                 je 0x8e2d32
// 008e2d2b  b8ffe7a200           mov eax, 0xa2e7ff
// 008e2d30  eb0b                 jmp 0x8e2d3d
// 008e2d32  8b4538               mov eax, dword ptr [ebp + 0x38]
// 008e2d35  83f8ff               cmp eax, -1
// 008e2d38  7503                 jne 0x8e2d3d
// 008e2d3a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008e2d3d  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008e2d41  50                   push eax
// 008e2d42  8d442430             lea eax, [esp + 0x30]
// 008e2d46  50                   push eax
// 008e2d47  8bce                 mov ecx, esi
// 008e2d49  e8d280f2ff           call 0x80ae20
// 008e2d4e  8bcf                 mov ecx, edi
// 008e2d50  e89b20c5ff           call 0x534df0
// 008e2d55  85c0                 test eax, eax
// 008e2d57  7412                 je 0x8e2d6b
// 008e2d59  8bcf                 mov ecx, edi
// 008e2d5b  e8d0b3ffff           call 0x8de130
// 008e2d60  85c0                 test eax, eax
// 008e2d62  7407                 je 0x8e2d6b
// 008e2d64  bbfb8c3c00           mov ebx, 0x3c8cfb
// 008e2d69  eb1d                 jmp 0x8e2d88
// 008e2d6b  8bcf                 mov ecx, edi
// 008e2d6d  e8beb3ffff           call 0x8de130
// 008e2d72  85c0                 test eax, eax
// 008e2d74  7407                 je 0x8e2d7d
// 008e2d76  bbffbd6900           mov ebx, 0x69bdff
// 008e2d7b  eb0b                 jmp 0x8e2d88
// 008e2d7d  8b5d44               mov ebx, dword ptr [ebp + 0x44]
// 008e2d80  83fbff               cmp ebx, -1
// 008e2d83  7503                 jne 0x8e2d88
// 008e2d85  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 008e2d88  e85326f6ff           call 0x8453e0
// 008e2d8d  53                   push ebx
// 008e2d8e  8bc8                 mov ecx, eax
// 008e2d90  e81b1ef6ff           call 0x844bb0
// 008e2d95  50                   push eax
// 008e2d96  50                   push eax
// 008e2d97  8d4c2434             lea ecx, [esp + 0x34]
// 008e2d9b  51                   push ecx
// 008e2d9c  e94d010000           jmp 0x8e2eee
// 008e2da1  83f802               cmp eax, 2
// 008e2da4  0f8596000000         jne 0x8e2e40
// 008e2daa  8bcf                 mov ecx, edi
// 008e2dac  e83f20c5ff           call 0x534df0
// 008e2db1  85c0                 test eax, eax
// 008e2db3  7412                 je 0x8e2dc7
// 008e2db5  8bcf                 mov ecx, edi
// 008e2db7  e874b3ffff           call 0x8de130
// 008e2dbc  85c0                 test eax, eax
// 008e2dbe  7407                 je 0x8e2dc7
// 008e2dc0  be21000000           mov esi, 0x21
// 008e2dc5  eb12                 jmp 0x8e2dd9
// 008e2dc7  8bcf                 mov ecx, edi
// 008e2dc9  e862b3ffff           call 0x8de130
// 008e2dce  8bf0                 mov esi, eax
// 008e2dd0  f7de                 neg esi
// 008e2dd2  1bf6                 sbb esi, esi
// 008e2dd4  f7de                 neg esi
// 008e2dd6  83c61e               add esi, 0x1e
// 008e2dd9  e80226f6ff           call 0x8453e0
// 008e2dde  56                   push esi
// 008e2ddf  8bc8                 mov ecx, eax
// 008e2de1  e8ca1df6ff           call 0x844bb0
// 008e2de6  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008e2dea  50                   push eax
// 008e2deb  8d542430             lea edx, [esp + 0x30]
// 008e2def  52                   push edx
// 008e2df0  8bce                 mov ecx, esi
// 008e2df2  e82980f2ff           call 0x80ae20
// 008e2df7  8bcf                 mov ecx, edi
// 008e2df9  e8f21fc5ff           call 0x534df0
// 008e2dfe  85c0                 test eax, eax
// 008e2e00  7412                 je 0x8e2e14
// 008e2e02  8bcf                 mov ecx, edi
// 008e2e04  e827b3ffff           call 0x8de130
// 008e2e09  85c0                 test eax, eax
// 008e2e0b  7407                 je 0x8e2e14
// 008e2e0d  bb32000000           mov ebx, 0x32
// 008e2e12  eb13                 jmp 0x8e2e27
// 008e2e14  8bcf                 mov ecx, edi
// 008e2e16  e815b3ffff           call 0x8de130
// 008e2e1b  8bd8                 mov ebx, eax
// 008e2e1d  f7db                 neg ebx
// 008e2e1f  1bdb                 sbb ebx, ebx
// 008e2e21  83e310               and ebx, 0x10
// 008e2e24  83c310               add ebx, 0x10
// 008e2e27  e8b425f6ff           call 0x8453e0
// 008e2e2c  53                   push ebx
// 008e2e2d  8bc8                 mov ecx, eax
// 008e2e2f  e87c1df6ff           call 0x844bb0
// 008e2e34  50                   push eax
// 008e2e35  50                   push eax
// 008e2e36  8d442434             lea eax, [esp + 0x34]
// 008e2e3a  50                   push eax
// 008e2e3b  e9ae000000           jmp 0x8e2eee
// 008e2e40  e89b25f6ff           call 0x8453e0
// 008e2e45  6a0f                 push 0xf
// 008e2e47  8bc8                 mov ecx, eax
// 008e2e49  e8621df6ff           call 0x844bb0
// 008e2e4e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008e2e52  50                   push eax
// 008e2e53  8d4c2430             lea ecx, [esp + 0x30]
// 008e2e57  51                   push ecx
// 008e2e58  8bce                 mov ecx, esi
// 008e2e5a  e8c17ff2ff           call 0x80ae20
// 008e2e5f  8bcf                 mov ecx, edi
// 008e2e61  e88a1fc5ff           call 0x534df0
// 008e2e66  85c0                 test eax, eax
// 008e2e68  7424                 je 0x8e2e8e
// 008e2e6a  8bcf                 mov ecx, edi
// 008e2e6c  e8bfb2ffff           call 0x8de130
// 008e2e71  85c0                 test eax, eax
// 008e2e73  7419                 je 0x8e2e8e
// 008e2e75  e86625f6ff           call 0x8453e0
// 008e2e7a  6a10                 push 0x10
// 008e2e7c  8bc8                 mov ecx, eax
// 008e2e7e  e82d1df6ff           call 0x844bb0
// 008e2e83  8bd8                 mov ebx, eax
// 008e2e85  e85625f6ff           call 0x8453e0
// 008e2e8a  6a10                 push 0x10
// 008e2e8c  eb52                 jmp 0x8e2ee0
// 008e2e8e  e84d25f6ff           call 0x8453e0
// 008e2e93  6a15                 push 0x15
// 008e2e95  8bc8                 mov ecx, eax
// 008e2e97  e8141df6ff           call 0x844bb0
// 008e2e9c  8bd8                 mov ebx, eax
// 008e2e9e  e83d25f6ff           call 0x8453e0
// 008e2ea3  6a0f                 push 0xf
// 008e2ea5  8bc8                 mov ecx, eax
// 008e2ea7  e8041df6ff           call 0x844bb0
// 008e2eac  53                   push ebx
// 008e2ead  50                   push eax
// 008e2eae  8d442434             lea eax, [esp + 0x34]
// 008e2eb2  50                   push eax
// 008e2eb3  8bce                 mov ecx, esi
// 008e2eb5  e8607ff2ff           call 0x80ae1a
// 008e2eba  6aff                 push -1
// 008e2ebc  6aff                 push -1
// 008e2ebe  8d4c2434             lea ecx, [esp + 0x34]
// 008e2ec2  51                   push ecx
// 008e2ec3  ff15e41ba400         call dword ptr [0xa41be4]
// 008e2ec9  e81225f6ff           call 0x8453e0
// 008e2ece  6a10                 push 0x10
// 008e2ed0  8bc8                 mov ecx, eax
// 008e2ed2  e8d91cf6ff           call 0x844bb0
// 008e2ed7  8bd8                 mov ebx, eax
// 008e2ed9  e80225f6ff           call 0x8453e0
// 008e2ede  6a05                 push 5
// 008e2ee0  8bc8                 mov ecx, eax
// 008e2ee2  e8c91cf6ff           call 0x844bb0
// 008e2ee7  53                   push ebx
// 008e2ee8  50                   push eax
// 008e2ee9  8d542434             lea edx, [esp + 0x34]
// 008e2eed  52                   push edx
// 008e2eee  8bce                 mov ecx, esi
// 008e2ef0  e8257ff2ff           call 0x80ae1a
// 008e2ef5  8b4730               mov eax, dword ptr [edi + 0x30]
// 008e2ef8  83f865               cmp eax, 0x65
// 008e2efb  754a                 jne 0x8e2f47
// 008e2efd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e2f01  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e2f05  03c1                 add eax, ecx
// 008e2f07  99                   cdq 
// 008e2f08  2bc2                 sub eax, edx
// 008e2f0a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008e2f0e  8bc8                 mov ecx, eax
// 008e2f10  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e2f14  03c2                 add eax, edx
// 008e2f16  99                   cdq 
// 008e2f17  2bc2                 sub eax, edx
// 008e2f19  d1f8                 sar eax, 1
// 008e2f1b  8d68fd               lea ebp, [eax - 3]
// 008e2f1e  d1f9                 sar ecx, 1
// 008e2f20  896c2424             mov dword ptr [esp + 0x24], ebp
// 008e2f24  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008e2f28  55                   push ebp
// 008e2f29  8d5102               lea edx, [ecx + 2]
// 008e2f2c  52                   push edx
// 008e2f2d  50                   push eax
// 008e2f2e  49                   dec ecx
// 008e2f2f  51                   push ecx
// 008e2f30  8d5803               lea ebx, [eax + 3]
// 008e2f33  53                   push ebx
// 008e2f34  51                   push ecx
// 008e2f35  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e2f39  51                   push ecx
// 008e2f3a  56                   push esi
// 008e2f3b  e870d6f2ff           call 0x8105b0
// 008e2f40  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008e2f44  83c420               add esp, 0x20
// 008e2f47  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008e2f4b  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 008e2f4f  0f84f6000000         je 0x8e304b
// 008e2f55  8b17                 mov edx, dword ptr [edi]
// 008e2f57  8b4258               mov eax, dword ptr [edx + 0x58]
// 008e2f5a  8bcf                 mov ecx, edi
// 008e2f5c  ffd0                 call eax
// 008e2f5e  8bd8                 mov ebx, eax
// 008e2f60  85db                 test ebx, ebx
// 008e2f62  744b                 je 0x8e2faf
// 008e2f64  8bcb                 mov ecx, ebx
// 008e2f66  e86512fcff           call 0x8a41d0
// 008e2f6b  8bcb                 mov ecx, ebx
// 008e2f6d  8be8                 mov ebp, eax
// 008e2f6f  e81c64f8ff           call 0x869390
// 008e2f74  8bc8                 mov ecx, eax
// 008e2f76  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e2f7a  2bc1                 sub eax, ecx
// 008e2f7c  0344242c             add eax, dword ptr [esp + 0x2c]
// 008e2f80  894c2424             mov dword ptr [esp + 0x24], ecx
// 008e2f84  99                   cdq 
// 008e2f85  2bc2                 sub eax, edx
// 008e2f87  8bc8                 mov ecx, eax
// 008e2f89  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e2f8d  2bc5                 sub eax, ebp
// 008e2f8f  03442430             add eax, dword ptr [esp + 0x30]
// 008e2f93  55                   push ebp
// 008e2f94  99                   cdq 
// 008e2f95  2bc2                 sub eax, edx
// 008e2f97  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e2f9b  52                   push edx
// 008e2f9c  d1f8                 sar eax, 1
// 008e2f9e  d1f9                 sar ecx, 1
// 008e2fa0  50                   push eax
// 008e2fa1  51                   push ecx
// 008e2fa2  56                   push esi
// 008e2fa3  8bcb                 mov ecx, ebx
// 008e2fa5  e8a63cf4ff           call 0x826c50
// 008e2faa  e9e2000000           jmp 0x8e3091
// 008e2faf  8d44245c             lea eax, [esp + 0x5c]
// 008e2fb3  50                   push eax
// 008e2fb4  8bcf                 mov ecx, edi
// 008e2fb6  e845d3b4ff           call 0x430300
// 008e2fbb  8bc8                 mov ecx, eax
// 008e2fbd  ff15b026a400         call dword ptr [0xa426b0]
// 008e2fc3  84c0                 test al, al
// 008e2fc5  8d4c245c             lea ecx, [esp + 0x5c]
// 008e2fc9  0f94c3               sete bl
// 008e2fcc  ff15082ea400         call dword ptr [0xa42e08]
// 008e2fd2  84db                 test bl, bl
// 008e2fd4  7471                 je 0x8e3047
// 008e2fd6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008e2fd9  8b5500               mov edx, dword ptr [ebp]
// 008e2fdc  6a01                 push 1
// 008e2fde  50                   push eax
// 008e2fdf  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e2fe2  8bcd                 mov ecx, ebp
// 008e2fe4  ffd0                 call eax
// 008e2fe6  50                   push eax
// 008e2fe7  56                   push esi
// 008e2fe8  8d4c2444             lea ecx, [esp + 0x44]
// 008e2fec  e82fa1f7ff           call 0x85d120
// 008e2ff1  8b16                 mov edx, dword ptr [esi]
// 008e2ff3  8b442460             mov eax, dword ptr [esp + 0x60]
// 008e2ff7  8b5238               mov edx, dword ptr [edx + 0x38]
// 008e2ffa  50                   push eax
// 008e2ffb  8bce                 mov ecx, esi
// 008e2ffd  c744245800000000     mov dword ptr [esp + 0x58], 0
// 008e3005  ffd2                 call edx
// 008e3007  8d442460             lea eax, [esp + 0x60]
// 008e300b  50                   push eax
// 008e300c  8bcf                 mov ecx, edi
// 008e300e  e8edd2b4ff           call 0x430300
// 008e3013  6825080000           push 0x825
// 008e3018  8d4c2430             lea ecx, [esp + 0x30]
// 008e301c  51                   push ecx
// 008e301d  50                   push eax
// 008e301e  8bce                 mov ecx, esi
// 008e3020  c644246001           mov byte ptr [esp + 0x60], 1
// 008e3025  e8c6d0f2ff           call 0x8100f0
// 008e302a  8d4c2460             lea ecx, [esp + 0x60]
// 008e302e  ff15082ea400         call dword ptr [0xa42e08]
// 008e3034  8d4c243c             lea ecx, [esp + 0x3c]
// 008e3038  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008e3040  e85ba1f7ff           call 0x85d1a0
// 008e3045  eb4a                 jmp 0x8e3091
// 008e3047  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008e304b  837f3064             cmp dword ptr [edi + 0x30], 0x64
// 008e304f  7540                 jne 0x8e3091
// 008e3051  8b542460             mov edx, dword ptr [esp + 0x60]
// 008e3055  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008e3059  52                   push edx
// 008e305a  6a02                 push 2
// 008e305c  6a02                 push 2
// 008e305e  55                   push ebp
// 008e305f  8d43fc               lea eax, [ebx - 4]
// 008e3062  50                   push eax
// 008e3063  8bce                 mov ecx, esi
// 008e3065  e86c950e00           call 0x9cc5d6
// 008e306a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008e306e  51                   push ecx
// 008e306f  6a02                 push 2
// 008e3071  6a02                 push 2
// 008e3073  55                   push ebp
// 008e3074  53                   push ebx
// 008e3075  8bce                 mov ecx, esi
// 008e3077  e85a950e00           call 0x9cc5d6
// 008e307c  8b542460             mov edx, dword ptr [esp + 0x60]
// 008e3080  52                   push edx
// 008e3081  6a02                 push 2
// 008e3083  6a02                 push 2
// 008e3085  55                   push ebp
// 008e3086  83c304               add ebx, 4
// 008e3089  53                   push ebx
// 008e308a  8bce                 mov ecx, esi
// 008e308c  e845950e00           call 0x9cc5d6
// 008e3091  8bcf                 mov ecx, edi
// 008e3093  e878b0ffff           call 0x8de110
// 008e3098  85c0                 test eax, eax
// 008e309a  744e                 je 0x8e30ea
// 008e309c  e83f23f6ff           call 0x8453e0
// 008e30a1  6a12                 push 0x12
// 008e30a3  8bc8                 mov ecx, eax
// 008e30a5  e8061bf6ff           call 0x844bb0
// 008e30aa  8b16                 mov edx, dword ptr [esi]
// 008e30ac  50                   push eax
// 008e30ad  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e30b0  8bce                 mov ecx, esi
// 008e30b2  ffd0                 call eax
// 008e30b4  e82723f6ff           call 0x8453e0
// 008e30b9  6a0f                 push 0xf
// 008e30bb  8bc8                 mov ecx, eax
// 008e30bd  e8ee1af6ff           call 0x844bb0
// 008e30c2  8b16                 mov edx, dword ptr [esi]
// 008e30c4  50                   push eax
// 008e30c5  8b4234               mov eax, dword ptr [edx + 0x34]
// 008e30c8  8bce                 mov ecx, esi
// 008e30ca  ffd0                 call eax
// 008e30cc  6afe                 push -2
// 008e30ce  6afe                 push -2
// 008e30d0  8d4c2434             lea ecx, [esp + 0x34]
// 008e30d4  51                   push ecx
// 008e30d5  ff15e41ba400         call dword ptr [0xa41be4]
// 008e30db  8b4604               mov eax, dword ptr [esi + 4]
// 008e30de  8d54242c             lea edx, [esp + 0x2c]
// 008e30e2  52                   push edx
// 008e30e3  50                   push eax
// 008e30e4  ff151c1ba400         call dword ptr [0xa41b1c]
// 008e30ea  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e30ee  64890d00000000       mov dword ptr fs:[0], ecx
// 008e30f5  59                   pop ecx
// 008e30f6  5f                   pop edi
// 008e30f7  5e                   pop esi
// 008e30f8  5d                   pop ebp
// 008e30f9  5b                   pop ebx
// 008e30fa  83c444               add esp, 0x44
// 008e30fd  c20800               ret 8
// copied from an identical function in another client (function ?FillInplaceButton@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp