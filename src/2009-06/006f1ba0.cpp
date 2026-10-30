// roc 2009-06 006f1ba0  unit: seg_006f0000  size: 1156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1ba0
//
// 006f1ba0  83ec50               sub esp, 0x50
// 006f1ba3  53                   push ebx
// 006f1ba4  56                   push esi
// 006f1ba5  8bd8                 mov ebx, eax
// 006f1ba7  8b03                 mov eax, dword ptr [ebx]
// 006f1ba9  57                   push edi
// 006f1baa  50                   push eax
// 006f1bab  e880f5ffff           call 0x6f1130
// 006f1bb0  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1bb3  8b08                 mov ecx, dword ptr [eax]
// 006f1bb5  83c404               add esp, 4
// 006f1bb8  8d51ff               lea edx, [ecx - 1]
// 006f1bbb  8910                 mov dword ptr [eax], edx
// 006f1bbd  85c9                 test ecx, ecx
// 006f1bbf  760f                 jbe 0x6f1bd0
// 006f1bc1  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1bc4  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1bc7  0fb602               movzx eax, byte ptr [edx]
// 006f1bca  42                   inc edx
// 006f1bcb  895104               mov dword ptr [ecx + 4], edx
// 006f1bce  eb0c                 jmp 0x6f1bdc
// 006f1bd0  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1bd3  50                   push eax
// 006f1bd4  e8a7b4ffff           call 0x6ed080
// 006f1bd9  83c404               add esp, 4
// 006f1bdc  8903                 mov dword ptr [ebx], eax
// 006f1bde  3b442460             cmp eax, dword ptr [esp + 0x60]
// 006f1be2  0f849d020000         je 0x6f1e85
// 006f1be8  55                   push ebp
// 006f1be9  8b2d44e88900         mov ebp, dword ptr [0x89e844]
// 006f1bef  90                   nop 
// 006f1bf0  8b03                 mov eax, dword ptr [ebx]
// 006f1bf2  8d4801               lea ecx, [eax + 1]
// 006f1bf5  83f95d               cmp ecx, 0x5d
// 006f1bf8  0f873a010000         ja 0x6f1d38
// 006f1bfe  0fb689241f6f00       movzx ecx, byte ptr [ecx + 0x6f1f24]
// 006f1c05  ff248d141f6f00       jmp dword ptr [ecx*4 + 0x6f1f14]
// 006f1c0c  8b5340               mov edx, dword ptr [ebx + 0x40]
// 006f1c0f  6a50                 push 0x50
// 006f1c11  83c210               add edx, 0x10
// 006f1c14  52                   push edx
// 006f1c15  8d442418             lea eax, [esp + 0x18]
// 006f1c19  50                   push eax
// 006f1c1a  e8a174fdff           call 0x6c90c0
// 006f1c1f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006f1c22  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006f1c25  6880e28e00           push 0x8ee280
// 006f1c2a  51                   push ecx
// 006f1c2b  8d542424             lea edx, [esp + 0x24]
// 006f1c2f  52                   push edx
// 006f1c30  68c4c28e00           push 0x8ec2c4
// 006f1c35  50                   push eax
// 006f1c36  e86574fdff           call 0x6c90a0
// 006f1c3b  8b0db8e18e00         mov ecx, dword ptr [0x8ee1b8]
// 006f1c41  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1c44  51                   push ecx
// 006f1c45  50                   push eax
// 006f1c46  68ece18e00           push 0x8ee1ec
// 006f1c4b  52                   push edx
// 006f1c4c  e84f74fdff           call 0x6c90a0
// 006f1c51  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006f1c54  6a03                 push 3
// 006f1c56  50                   push eax
// 006f1c57  e88416fdff           call 0x6c32e0
// 006f1c5c  83c438               add esp, 0x38
// 006f1c5f  e914020000           jmp 0x6f1e78
// 006f1c64  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 006f1c67  6a50                 push 0x50
// 006f1c69  83c110               add ecx, 0x10
// 006f1c6c  51                   push ecx
// 006f1c6d  8d542418             lea edx, [esp + 0x18]
// 006f1c71  52                   push edx
// 006f1c72  e84974fdff           call 0x6c90c0
// 006f1c77  8b4304               mov eax, dword ptr [ebx + 4]
// 006f1c7a  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1c7d  6880e28e00           push 0x8ee280
// 006f1c82  50                   push eax
// 006f1c83  8d4c2424             lea ecx, [esp + 0x24]
// 006f1c87  51                   push ecx
// 006f1c88  68c4c28e00           push 0x8ec2c4
// 006f1c8d  52                   push edx
// 006f1c8e  e80d74fdff           call 0x6c90a0
// 006f1c93  6a00                 push 0
// 006f1c95  8bf0                 mov esi, eax
// 006f1c97  e894f4ffff           call 0x6f1130
// 006f1c9c  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 006f1c9f  8b00                 mov eax, dword ptr [eax]
// 006f1ca1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006f1ca4  50                   push eax
// 006f1ca5  56                   push esi
// 006f1ca6  68ece18e00           push 0x8ee1ec
// 006f1cab  51                   push ecx
// 006f1cac  e8ef73fdff           call 0x6c90a0
// 006f1cb1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1cb4  6a03                 push 3
// 006f1cb6  52                   push edx
// 006f1cb7  e82416fdff           call 0x6c32e0
// 006f1cbc  83c43c               add esp, 0x3c
// 006f1cbf  e9b4010000           jmp 0x6f1e78
// 006f1cc4  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1cc7  8b08                 mov ecx, dword ptr [eax]
// 006f1cc9  8d51ff               lea edx, [ecx - 1]
// 006f1ccc  8910                 mov dword ptr [eax], edx
// 006f1cce  85c9                 test ecx, ecx
// 006f1cd0  760f                 jbe 0x6f1ce1
// 006f1cd2  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1cd5  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1cd8  0fb602               movzx eax, byte ptr [edx]
// 006f1cdb  42                   inc edx
// 006f1cdc  895104               mov dword ptr [ecx + 4], edx
// 006f1cdf  eb0c                 jmp 0x6f1ced
// 006f1ce1  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1ce4  50                   push eax
// 006f1ce5  e896b3ffff           call 0x6ed080
// 006f1cea  83c404               add esp, 4
// 006f1ced  8d4801               lea ecx, [eax + 1]
// 006f1cf0  8903                 mov dword ptr [ebx], eax
// 006f1cf2  83f977               cmp ecx, 0x77
// 006f1cf5  0f8780000000         ja 0x6f1d7b
// 006f1cfb  0fb689ac1f6f00       movzx ecx, byte ptr [ecx + 0x6f1fac]
// 006f1d02  ff248d841f6f00       jmp dword ptr [ecx*4 + 0x6f1f84]
// 006f1d09  b807000000           mov eax, 7
// 006f1d0e  eb28                 jmp 0x6f1d38
// 006f1d10  b808000000           mov eax, 8
// 006f1d15  eb21                 jmp 0x6f1d38
// 006f1d17  b80c000000           mov eax, 0xc
// 006f1d1c  eb1a                 jmp 0x6f1d38
// 006f1d1e  b80a000000           mov eax, 0xa
// 006f1d23  eb13                 jmp 0x6f1d38
// 006f1d25  b80d000000           mov eax, 0xd
// 006f1d2a  eb0c                 jmp 0x6f1d38
// 006f1d2c  b809000000           mov eax, 9
// 006f1d31  eb05                 jmp 0x6f1d38
// 006f1d33  b80b000000           mov eax, 0xb
// 006f1d38  50                   push eax
// 006f1d39  e8f2f3ffff           call 0x6f1130
// 006f1d3e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1d41  8b08                 mov ecx, dword ptr [eax]
// 006f1d43  83c404               add esp, 4
// 006f1d46  8d51ff               lea edx, [ecx - 1]
// 006f1d49  8910                 mov dword ptr [eax], edx
// 006f1d4b  85c9                 test ecx, ecx
// 006f1d4d  0f8617010000         jbe 0x6f1e6a
// 006f1d53  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1d56  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1d59  0fb602               movzx eax, byte ptr [edx]
// 006f1d5c  42                   inc edx
// 006f1d5d  895104               mov dword ptr [ecx + 4], edx
// 006f1d60  e911010000           jmp 0x6f1e76
// 006f1d65  6a0a                 push 0xa
// 006f1d67  e8c4f3ffff           call 0x6f1130
// 006f1d6c  83c404               add esp, 4
// 006f1d6f  8bf3                 mov esi, ebx
// 006f1d71  e8eaf5ffff           call 0x6f1360
// 006f1d76  e9fd000000           jmp 0x6f1e78
// 006f1d7b  50                   push eax
// 006f1d7c  ffd5                 call ebp
// 006f1d7e  83c404               add esp, 4
// 006f1d81  85c0                 test eax, eax
// 006f1d83  752f                 jne 0x6f1db4
// 006f1d85  8b0b                 mov ecx, dword ptr [ebx]
// 006f1d87  51                   push ecx
// 006f1d88  e8a3f3ffff           call 0x6f1130
// 006f1d8d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1d90  8b08                 mov ecx, dword ptr [eax]
// 006f1d92  83c404               add esp, 4
// 006f1d95  8d51ff               lea edx, [ecx - 1]
// 006f1d98  8910                 mov dword ptr [eax], edx
// 006f1d9a  85c9                 test ecx, ecx
// 006f1d9c  0f86c8000000         jbe 0x6f1e6a
// 006f1da2  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1da5  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1da8  0fb602               movzx eax, byte ptr [edx]
// 006f1dab  42                   inc edx
// 006f1dac  895104               mov dword ptr [ecx + 4], edx
// 006f1daf  e9c2000000           jmp 0x6f1e76
// 006f1db4  33f6                 xor esi, esi
// 006f1db6  33ff                 xor edi, edi
// 006f1db8  8b13                 mov edx, dword ptr [ebx]
// 006f1dba  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1dbd  8d0cbf               lea ecx, [edi + edi*4]
// 006f1dc0  8d7c4ad0             lea edi, [edx + ecx*2 - 0x30]
// 006f1dc4  8b08                 mov ecx, dword ptr [eax]
// 006f1dc6  8d51ff               lea edx, [ecx - 1]
// 006f1dc9  8910                 mov dword ptr [eax], edx
// 006f1dcb  85c9                 test ecx, ecx
// 006f1dcd  760f                 jbe 0x6f1dde
// 006f1dcf  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1dd2  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1dd5  0fb602               movzx eax, byte ptr [edx]
// 006f1dd8  42                   inc edx
// 006f1dd9  895104               mov dword ptr [ecx + 4], edx
// 006f1ddc  eb0c                 jmp 0x6f1dea
// 006f1dde  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1de1  50                   push eax
// 006f1de2  e899b2ffff           call 0x6ed080
// 006f1de7  83c404               add esp, 4
// 006f1dea  46                   inc esi
// 006f1deb  83fe03               cmp esi, 3
// 006f1dee  8903                 mov dword ptr [ebx], eax
// 006f1df0  7d0a                 jge 0x6f1dfc
// 006f1df2  50                   push eax
// 006f1df3  ffd5                 call ebp
// 006f1df5  83c404               add esp, 4
// 006f1df8  85c0                 test eax, eax
// 006f1dfa  75bc                 jne 0x6f1db8
// 006f1dfc  81ffff000000         cmp edi, 0xff
// 006f1e02  7e5b                 jle 0x6f1e5f
// 006f1e04  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 006f1e07  6a50                 push 0x50
// 006f1e09  83c110               add ecx, 0x10
// 006f1e0c  51                   push ecx
// 006f1e0d  8d542418             lea edx, [esp + 0x18]
// 006f1e11  52                   push edx
// 006f1e12  e8a972fdff           call 0x6c90c0
// 006f1e17  8b4304               mov eax, dword ptr [ebx + 4]
// 006f1e1a  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1e1d  6864e28e00           push 0x8ee264
// 006f1e22  50                   push eax
// 006f1e23  8d4c2424             lea ecx, [esp + 0x24]
// 006f1e27  51                   push ecx
// 006f1e28  68c4c28e00           push 0x8ec2c4
// 006f1e2d  52                   push edx
// 006f1e2e  e86d72fdff           call 0x6c90a0
// 006f1e33  6a00                 push 0
// 006f1e35  8bf0                 mov esi, eax
// 006f1e37  e8f4f2ffff           call 0x6f1130
// 006f1e3c  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 006f1e3f  8b00                 mov eax, dword ptr [eax]
// 006f1e41  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006f1e44  50                   push eax
// 006f1e45  56                   push esi
// 006f1e46  68ece18e00           push 0x8ee1ec
// 006f1e4b  51                   push ecx
// 006f1e4c  e84f72fdff           call 0x6c90a0
// 006f1e51  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1e54  6a03                 push 3
// 006f1e56  52                   push edx
// 006f1e57  e88414fdff           call 0x6c32e0
// 006f1e5c  83c43c               add esp, 0x3c
// 006f1e5f  57                   push edi
// 006f1e60  e8cbf2ffff           call 0x6f1130
// 006f1e65  83c404               add esp, 4
// 006f1e68  eb0e                 jmp 0x6f1e78
// 006f1e6a  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1e6d  50                   push eax
// 006f1e6e  e80db2ffff           call 0x6ed080
// 006f1e73  83c404               add esp, 4
// 006f1e76  8903                 mov dword ptr [ebx], eax
// 006f1e78  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006f1e7c  390b                 cmp dword ptr [ebx], ecx
// 006f1e7e  0f856cfdffff         jne 0x6f1bf0
// 006f1e84  5d                   pop ebp
// 006f1e85  8b13                 mov edx, dword ptr [ebx]
// 006f1e87  52                   push edx
// 006f1e88  e8a3f2ffff           call 0x6f1130
// 006f1e8d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1e90  8b08                 mov ecx, dword ptr [eax]
// 006f1e92  83c404               add esp, 4
// 006f1e95  8d51ff               lea edx, [ecx - 1]
// 006f1e98  8910                 mov dword ptr [eax], edx
// 006f1e9a  85c9                 test ecx, ecx
// 006f1e9c  760f                 jbe 0x6f1ead
// 006f1e9e  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1ea1  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1ea4  0fb602               movzx eax, byte ptr [edx]
// 006f1ea7  42                   inc edx
// 006f1ea8  895104               mov dword ptr [ecx + 4], edx
// 006f1eab  eb0c                 jmp 0x6f1eb9
// 006f1ead  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1eb0  50                   push eax
// 006f1eb1  e8cab1ffff           call 0x6ed080
// 006f1eb6  83c404               add esp, 4
// 006f1eb9  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006f1ebc  8b7334               mov esi, dword ptr [ebx + 0x34]
// 006f1ebf  8903                 mov dword ptr [ebx], eax
// 006f1ec1  8b4104               mov eax, dword ptr [ecx + 4]
// 006f1ec4  8b09                 mov ecx, dword ptr [ecx]
// 006f1ec6  83e802               sub eax, 2
// 006f1ec9  50                   push eax
// 006f1eca  41                   inc ecx
// 006f1ecb  51                   push ecx
// 006f1ecc  56                   push esi
// 006f1ecd  e86eacffff           call 0x6ecb40
// 006f1ed2  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006f1ed5  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1ed8  8bf8                 mov edi, eax
// 006f1eda  57                   push edi
// 006f1edb  52                   push edx
// 006f1edc  56                   push esi
// 006f1edd  e8aeaaffff           call 0x6ec990
// 006f1ee2  83c418               add esp, 0x18
// 006f1ee5  83780800             cmp dword ptr [eax + 8], 0
// 006f1ee9  751a                 jne 0x6f1f05
// 006f1eeb  c70001000000         mov dword ptr [eax], 1
// 006f1ef1  c7400801000000       mov dword ptr [eax + 8], 1
// 006f1ef8  8b442464             mov eax, dword ptr [esp + 0x64]
// 006f1efc  8938                 mov dword ptr [eax], edi
// 006f1efe  5f                   pop edi
// 006f1eff  5e                   pop esi
// 006f1f00  5b                   pop ebx
// 006f1f01  83c450               add esp, 0x50
// 006f1f04  c3                   ret 
// 006f1f05  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006f1f09  8939                 mov dword ptr [ecx], edi
// 006f1f0b  5f                   pop edi
// 006f1f0c  5e                   pop esi
// 006f1f0d  5b                   pop ebx
// 006f1f0e  83c450               add esp, 0x50
// 006f1f11  c3                   ret 
// 006f1f12  8bff                 mov edi, edi
// 006f1f14  0c1c                 or al, 0x1c
// 006f1f16  6f                   outsd dx, dword ptr [esi]
// 006f1f17  00641c6f             add byte ptr [esp + ebx + 0x6f], ah
// 006f1f1b  00c4                 add ah, al
// 006f1f1d  1c6f                 sbb al, 0x6f
// 006f1f1f  0038                 add byte ptr [eax], bh
// 006f1f21  1d6f000003           sbb eax, 0x300006f
// 006f1f26  0303                 add eax, dword ptr [ebx]
// 006f1f28  0303                 add eax, dword ptr [ebx]
// 006f1f2a  0303                 add eax, dword ptr [ebx]
// 006f1f2c  0303                 add eax, dword ptr [ebx]
// 006f1f2e  0301                 add eax, dword ptr [ecx]
// 006f1f30  0303                 add eax, dword ptr [ebx]
// 006f1f32  0103                 add dword ptr [ebx], eax
// 006f1f34  0303                 add eax, dword ptr [ebx]
// 006f1f36  0303                 add eax, dword ptr [ebx]
// 006f1f38  0303                 add eax, dword ptr [ebx]
// 006f1f3a  0303                 add eax, dword ptr [ebx]
// 006f1f3c  0303                 add eax, dword ptr [ebx]
// 006f1f3e  0303                 add eax, dword ptr [ebx]
// 006f1f40  0303                 add eax, dword ptr [ebx]
// 006f1f42  0303                 add eax, dword ptr [ebx]
// 006f1f44  0303                 add eax, dword ptr [ebx]
// 006f1f46  0303                 add eax, dword ptr [ebx]
// 006f1f48  0303                 add eax, dword ptr [ebx]
// 006f1f4a  0303                 add eax, dword ptr [ebx]
// 006f1f4c  0303                 add eax, dword ptr [ebx]
// 006f1f4e  0303                 add eax, dword ptr [ebx]
// 006f1f50  0303                 add eax, dword ptr [ebx]
// 006f1f52  0303                 add eax, dword ptr [ebx]
// 006f1f54  0303                 add eax, dword ptr [ebx]
// 006f1f56  0303                 add eax, dword ptr [ebx]
// 006f1f58  0303                 add eax, dword ptr [ebx]
// 006f1f5a  0303                 add eax, dword ptr [ebx]
// 006f1f5c  0303                 add eax, dword ptr [ebx]
// 006f1f5e  0303                 add eax, dword ptr [ebx]
// 006f1f60  0303                 add eax, dword ptr [ebx]
// 006f1f62  0303                 add eax, dword ptr [ebx]
// 006f1f64  0303                 add eax, dword ptr [ebx]
// 006f1f66  0303                 add eax, dword ptr [ebx]
// 006f1f68  0303                 add eax, dword ptr [ebx]
// 006f1f6a  0303                 add eax, dword ptr [ebx]
// 006f1f6c  0303                 add eax, dword ptr [ebx]
// 006f1f6e  0303                 add eax, dword ptr [ebx]
// 006f1f70  0303                 add eax, dword ptr [ebx]
// 006f1f72  0303                 add eax, dword ptr [ebx]
// 006f1f74  0303                 add eax, dword ptr [ebx]
// 006f1f76  0303                 add eax, dword ptr [ebx]
// 006f1f78  0303                 add eax, dword ptr [ebx]
// 006f1f7a  0303                 add eax, dword ptr [ebx]
// 006f1f7c  0303                 add eax, dword ptr [ebx]
// 006f1f7e  0303                 add eax, dword ptr [ebx]
// 006f1f80  0302                 add eax, dword ptr [edx]
// 006f1f82  8bff                 mov edi, edi
// 006f1f84  781e                 js 0x6f1fa4
// 006f1f86  6f                   outsd dx, dword ptr [esi]
// 006f1f87  00651d               add byte ptr [ebp + 0x1d], ah
// 006f1f8a  6f                   outsd dx, dword ptr [esi]
// 006f1f8b  0009                 add byte ptr [ecx], cl
// 006f1f8d  1d6f00101d           sbb eax, 0x1d10006f
// 006f1f92  6f                   outsd dx, dword ptr [esi]
// 006f1f93  0017                 add byte ptr [edi], dl
// 006f1f95  1d6f001e1d           sbb eax, 0x1d1e006f
// 006f1f9a  6f                   outsd dx, dword ptr [esi]
// 006f1f9b  00251d6f002c         add byte ptr [0x2c006f1d], ah
// 006f1fa1  1d6f00331d           sbb eax, 0x1d33006f
// 006f1fa6  6f                   outsd dx, dword ptr [esi]
// 006f1fa7  007b1d               add byte ptr [ebx + 0x1d], bh
// 006f1faa  6f                   outsd dx, dword ptr [esi]
// 006f1fab  0000                 add byte ptr [eax], al
// 006f1fad  0909                 or dword ptr [ecx], ecx
// 006f1faf  0909                 or dword ptr [ecx], ecx
// 006f1fb1  0909                 or dword ptr [ecx], ecx
// 006f1fb3  0909                 or dword ptr [ecx], ecx
// 006f1fb5  0909                 or dword ptr [ecx], ecx
// 006f1fb7  0109                 add dword ptr [ecx], ecx
// 006f1fb9  0901                 or dword ptr [ecx], eax
// 006f1fbb  0909                 or dword ptr [ecx], ecx
// 006f1fbd  0909                 or dword ptr [ecx], ecx
// 006f1fbf  0909                 or dword ptr [ecx], ecx
// 006f1fc1  0909                 or dword ptr [ecx], ecx
// 006f1fc3  0909                 or dword ptr [ecx], ecx
// 006f1fc5  0909                 or dword ptr [ecx], ecx
// 006f1fc7  0909                 or dword ptr [ecx], ecx
// 006f1fc9  0909                 or dword ptr [ecx], ecx
// 006f1fcb  0909                 or dword ptr [ecx], ecx
// 006f1fcd  0909                 or dword ptr [ecx], ecx
// 006f1fcf  0909                 or dword ptr [ecx], ecx
// 006f1fd1  0909                 or dword ptr [ecx], ecx
// 006f1fd3  0909                 or dword ptr [ecx], ecx
// 006f1fd5  0909                 or dword ptr [ecx], ecx
// 006f1fd7  0909                 or dword ptr [ecx], ecx
// 006f1fd9  0909                 or dword ptr [ecx], ecx
// 006f1fdb  0909                 or dword ptr [ecx], ecx
// 006f1fdd  0909                 or dword ptr [ecx], ecx
// 006f1fdf  0909                 or dword ptr [ecx], ecx
// 006f1fe1  0909                 or dword ptr [ecx], ecx
// 006f1fe3  0909                 or dword ptr [ecx], ecx
// 006f1fe5  0909                 or dword ptr [ecx], ecx
// 006f1fe7  0909                 or dword ptr [ecx], ecx
// 006f1fe9  0909                 or dword ptr [ecx], ecx
// 006f1feb  0909                 or dword ptr [ecx], ecx
// 006f1fed  0909                 or dword ptr [ecx], ecx
// 006f1fef  0909                 or dword ptr [ecx], ecx
// 006f1ff1  0909                 or dword ptr [ecx], ecx
// 006f1ff3  0909                 or dword ptr [ecx], ecx
// 006f1ff5  0909                 or dword ptr [ecx], ecx
// 006f1ff7  0909                 or dword ptr [ecx], ecx
// 006f1ff9  0909                 or dword ptr [ecx], ecx
// 006f1ffb  0909                 or dword ptr [ecx], ecx
// 006f1ffd  0909                 or dword ptr [ecx], ecx
// 006f1fff  0909                 or dword ptr [ecx], ecx
// 006f2001  0909                 or dword ptr [ecx], ecx
// 006f2003  0909                 or dword ptr [ecx], ecx
// 006f2005  0909                 or dword ptr [ecx], ecx
// 006f2007  0909                 or dword ptr [ecx], ecx
// 006f2009  0909                 or dword ptr [ecx], ecx
// 006f200b  0909                 or dword ptr [ecx], ecx
// 006f200d  0902                 or dword ptr [edx], eax
// 006f200f  0309                 add ecx, dword ptr [ecx]
// 006f2011  0909                 or dword ptr [ecx], ecx
// 006f2013  0409                 add al, 9
// 006f2015  0909                 or dword ptr [ecx], ecx
// 006f2017  0909                 or dword ptr [ecx], ecx
// 006f2019  0909                 or dword ptr [ecx], ecx
// 006f201b  0509090906           add eax, 0x6090909
// 006f2020  0907                 or dword ptr [edi], eax
// 006f2022  0908                 or dword ptr [eax], ecx
// copied from an identical function in another client (function _read_string)

// roc-cl: 30729
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll llex.c