// roc 2009-12 004d3bb0  unit: G3D::TextureManager::TextureArgs  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3bb0
//
// 004d3bb0  6aff                 push -1
// 004d3bb2  68aa379300           push 0x9337aa
// 004d3bb7  64a100000000         mov eax, dword ptr fs:[0]
// 004d3bbd  50                   push eax
// 004d3bbe  64892500000000       mov dword ptr fs:[0], esp
// 004d3bc5  81ec7c040000         sub esp, 0x47c
// 004d3bcb  56                   push esi
// 004d3bcc  c744240800000000     mov dword ptr [esp + 8], 0
// 004d3bd4  e8d7feffff           call 0x4d3ab0
// 004d3bd9  83f802               cmp eax, 2
// 004d3bdc  0f85cb000000         jne 0x4d3cad
// 004d3be2  f6055cd1b70001       test byte ptr [0xb7d15c], 1
// 004d3be9  753e                 jne 0x4d3c29
// 004d3beb  b801000000           mov eax, 1
// 004d3bf0  09055cd1b700         or dword ptr [0xb7d15c], eax
// 004d3bf6  68021f0000           push 0x1f02
// 004d3bfb  8984248c040000       mov dword ptr [esp + 0x48c], eax
// 004d3c02  ff150cbc9800         call dword ptr [0x98bc0c]
// 004d3c08  50                   push eax
// 004d3c09  b940d1b700           mov ecx, 0xb7d140
// 004d3c0e  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d3c14  68a0ef9700           push 0x97efa0
// 004d3c19  e80b0d3200           call 0x7f4929
// 004d3c1e  83c404               add esp, 4
// 004d3c21  c684248804000000     mov byte ptr [esp + 0x488], 0
// 004d3c29  a1a4b69800           mov eax, dword ptr [0x98b6a4]
// 004d3c2e  8b00                 mov eax, dword ptr [eax]
// 004d3c30  6a01                 push 1
// 004d3c32  50                   push eax
// 004d3c33  8d4c240c             lea ecx, [esp + 0xc]
// 004d3c37  51                   push ecx
// 004d3c38  b940d1b700           mov ecx, 0xb7d140
// 004d3c3d  c644241020           mov byte ptr [esp + 0x10], 0x20
// 004d3c42  ff156cb59800         call dword ptr [0x98b56c]
// 004d3c48  8b15a4b69800         mov edx, dword ptr [0x98b6a4]
// 004d3c4e  8bb42490040000       mov esi, dword ptr [esp + 0x490]
// 004d3c55  3b02                 cmp eax, dword ptr [edx]
// 004d3c57  7525                 jne 0x4d3c7e
// 004d3c59  6858679b00           push 0x9b6758
// 004d3c5e  8bce                 mov ecx, esi
// 004d3c60  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d3c66  8bc6                 mov eax, esi
// 004d3c68  5e                   pop esi
// 004d3c69  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004d3c70  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3c77  81c488040000         add esp, 0x488
// 004d3c7d  c3                   ret 
// 004d3c7e  8b0d54d1b700         mov ecx, dword ptr [0xb7d154]
// 004d3c84  2bc8                 sub ecx, eax
// 004d3c86  51                   push ecx
// 004d3c87  40                   inc eax
// 004d3c88  50                   push eax
// 004d3c89  56                   push esi
// 004d3c8a  b940d1b700           mov ecx, 0xb7d140
// 004d3c8f  ff15a8b69800         call dword ptr [0x98b6a8]
// 004d3c95  8bc6                 mov eax, esi
// 004d3c97  5e                   pop esi
// 004d3c98  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004d3c9f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3ca6  81c488040000         add esp, 0x488
// 004d3cac  c3                   ret 
// 004d3cad  8d4c240c             lea ecx, [esp + 0xc]
// 004d3cb1  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d3cb7  6800040000           push 0x400
// 004d3cbc  8d942484000000       lea edx, [esp + 0x84]
// 004d3cc3  52                   push edx
// 004d3cc4  c784249004000002000000 mov dword ptr [esp + 0x490], 2
// 004d3ccf  ff15bcb29800         call dword ptr [0x98b2bc]
// 004d3cd5  85c0                 test eax, eax
// 004d3cd7  7546                 jne 0x4d3d1f
// 004d3cd9  6830679b00           push 0x9b6730
// 004d3cde  8bb42494040000       mov esi, dword ptr [esp + 0x494]
// 004d3ce5  8bce                 mov ecx, esi
// 004d3ce7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d3ced  8d4c240c             lea ecx, [esp + 0xc]
// 004d3cf1  c744240801000000     mov dword ptr [esp + 8], 1
// 004d3cf9  c684248804000000     mov byte ptr [esp + 0x488], 0
// 004d3d01  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3d07  8bc6                 mov eax, esi
// 004d3d09  5e                   pop esi
// 004d3d0a  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004d3d11  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3d18  81c488040000         add esp, 0x488
// 004d3d1e  c3                   ret 
// 004d3d1f  8d842480000000       lea eax, [esp + 0x80]
// 004d3d26  50                   push eax
// 004d3d27  8d4c2410             lea ecx, [esp + 0x10]
// 004d3d2b  ff1500b79800         call dword ptr [0x98b700]
// 004d3d31  e87afdffff           call 0x4d3ab0
// 004d3d36  83e800               sub eax, 0
// 004d3d39  743d                 je 0x4d3d78
// 004d3d3b  83e801               sub eax, 1
// 004d3d3e  7407                 je 0x4d3d47
// 004d3d40  6814679b00           push 0x9b6714
// 004d3d45  eb97                 jmp 0x4d3cde
// 004d3d47  6804679b00           push 0x9b6704
// 004d3d4c  8d4c2410             lea ecx, [esp + 0x10]
// 004d3d50  51                   push ecx
// 004d3d51  8d54246c             lea edx, [esp + 0x6c]
// 004d3d55  52                   push edx
// 004d3d56  ff1580b69800         call dword ptr [0x98b680]
// 004d3d5c  83c40c               add esp, 0xc
// 004d3d5f  50                   push eax
// 004d3d60  8d4c2410             lea ecx, [esp + 0x10]
// 004d3d64  c684248c04000004     mov byte ptr [esp + 0x48c], 4
// 004d3d6c  ff159cb69800         call dword ptr [0x98b69c]
// 004d3d72  8d4c2464             lea ecx, [esp + 0x64]
// 004d3d76  eb2f                 jmp 0x4d3da7
// 004d3d78  68f4669b00           push 0x9b66f4
// 004d3d7d  8d442410             lea eax, [esp + 0x10]
// 004d3d81  50                   push eax
// 004d3d82  8d4c2450             lea ecx, [esp + 0x50]
// 004d3d86  51                   push ecx
// 004d3d87  ff1580b69800         call dword ptr [0x98b680]
// 004d3d8d  83c40c               add esp, 0xc
// 004d3d90  50                   push eax
// 004d3d91  8d4c2410             lea ecx, [esp + 0x10]
// 004d3d95  c684248c04000003     mov byte ptr [esp + 0x48c], 3
// 004d3d9d  ff159cb69800         call dword ptr [0x98b69c]
// 004d3da3  8d4c2448             lea ecx, [esp + 0x48]
// 004d3da7  c684248804000002     mov byte ptr [esp + 0x488], 2
// 004d3daf  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3db5  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 004d3dba  55                   push ebp
// 004d3dbb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d3dbf  7304                 jae 0x4d3dc5
// 004d3dc1  8d6c2414             lea ebp, [esp + 0x14]
// 004d3dc5  57                   push edi
// 004d3dc6  8d542430             lea edx, [esp + 0x30]
// 004d3dca  52                   push edx
// 004d3dcb  55                   push ebp
// 004d3dcc  e8d9204200           call 0x8f5eaa
// 004d3dd1  8bf8                 mov edi, eax
// 004d3dd3  85ff                 test edi, edi
// 004d3dd5  7521                 jne 0x4d3df8
// 004d3dd7  68d8669b00           push 0x9b66d8
// 004d3ddc  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 004d3de3  8bce                 mov ecx, esi
// 004d3de5  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d3deb  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004d3df3  e9f0000000           jmp 0x4d3ee8
// 004d3df8  57                   push edi
// 004d3df9  e844fd3100           call 0x7f3b42
// 004d3dfe  83c404               add esp, 4
// 004d3e01  8bf0                 mov esi, eax
// 004d3e03  56                   push esi
// 004d3e04  57                   push edi
// 004d3e05  6a00                 push 0
// 004d3e07  55                   push ebp
// 004d3e08  e897204200           call 0x8f5ea4
// 004d3e0d  85c0                 test eax, eax
// 004d3e0f  7510                 jne 0x4d3e21
// 004d3e11  56                   push esi
// 004d3e12  e8effc3100           call 0x7f3b06
// 004d3e17  83c404               add esp, 4
// 004d3e1a  68e82d9b00           push 0x9b2de8
// 004d3e1f  ebbb                 jmp 0x4d3ddc
// 004d3e21  8d4606               lea eax, [esi + 6]
// 004d3e24  8d5002               lea edx, [eax + 2]
// 004d3e27  668b08               mov cx, word ptr [eax]
// 004d3e2a  83c002               add eax, 2
// 004d3e2d  6685c9               test cx, cx
// 004d3e30  75f5                 jne 0x4d3e27
// 004d3e32  2bc2                 sub eax, edx
// 004d3e34  d1f8                 sar eax, 1
// 004d3e36  8d444608             lea eax, [esi + eax*2 + 8]
// 004d3e3a  2bc6                 sub eax, esi
// 004d3e3c  83c003               add eax, 3
// 004d3e3f  83e0fc               and eax, 0xfffffffc
// 004d3e42  03c6                 add eax, esi
// 004d3e44  68bc669b00           push 0x9b66bc
// 004d3e49  8d4c2438             lea ecx, [esp + 0x38]
// 004d3e4d  8bf8                 mov edi, eax
// 004d3e4f  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d3e55  66837e0200           cmp word ptr [esi + 2], 0
// 004d3e5a  c684249004000005     mov byte ptr [esp + 0x490], 5
// 004d3e62  744d                 je 0x4d3eb1
// 004d3e64  8b4714               mov eax, dword ptr [edi + 0x14]
// 004d3e67  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 004d3e6a  0fb7d0               movzx edx, ax
// 004d3e6d  52                   push edx
// 004d3e6e  c1e810               shr eax, 0x10
// 004d3e71  50                   push eax
// 004d3e72  0fb7c1               movzx eax, cx
// 004d3e75  50                   push eax
// 004d3e76  c1e910               shr ecx, 0x10
// 004d3e79  51                   push ecx
// 004d3e7a  8d4c2460             lea ecx, [esp + 0x60]
// 004d3e7e  68b0669b00           push 0x9b66b0
// 004d3e83  51                   push ecx
// 004d3e84  e8b75a1200           call 0x5f9940
// 004d3e89  83c418               add esp, 0x18
// 004d3e8c  50                   push eax
// 004d3e8d  8d4c2438             lea ecx, [esp + 0x38]
// 004d3e91  c684249404000006     mov byte ptr [esp + 0x494], 6
// 004d3e99  ff159cb69800         call dword ptr [0x98b69c]
// 004d3e9f  8d4c2450             lea ecx, [esp + 0x50]
// 004d3ea3  c684249004000005     mov byte ptr [esp + 0x490], 5
// 004d3eab  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3eb1  56                   push esi
// 004d3eb2  e84ffc3100           call 0x7f3b06
// 004d3eb7  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 004d3ebe  83c404               add esp, 4
// 004d3ec1  8d542434             lea edx, [esp + 0x34]
// 004d3ec5  52                   push edx
// 004d3ec6  8bce                 mov ecx, esi
// 004d3ec8  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d3ece  8d4c2434             lea ecx, [esp + 0x34]
// 004d3ed2  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004d3eda  c684249004000002     mov byte ptr [esp + 0x490], 2
// 004d3ee2  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3ee8  8d4c2414             lea ecx, [esp + 0x14]
// 004d3eec  c684249004000000     mov byte ptr [esp + 0x490], 0
// 004d3ef4  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3efa  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 004d3f01  5f                   pop edi
// 004d3f02  5d                   pop ebp
// 004d3f03  8bc6                 mov eax, esi
// 004d3f05  5e                   pop esi
// 004d3f06  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3f0d  81c488040000         add esp, 0x488
// 004d3f13  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
