// roc 2009-06 004a3a10  unit: G3D::PBVTextureFormat::?$Table  size: 1955 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a3a10
//
// 004a3a10  6aff                 push -1
// 004a3a12  681b748500           push 0x85741b
// 004a3a17  64a100000000         mov eax, dword ptr fs:[0]
// 004a3a1d  50                   push eax
// 004a3a1e  64892500000000       mov dword ptr fs:[0], esp
// 004a3a25  81ec24010000         sub esp, 0x124
// 004a3a2b  53                   push ebx
// 004a3a2c  55                   push ebp
// 004a3a2d  56                   push esi
// 004a3a2e  8bf1                 mov esi, ecx
// 004a3a30  57                   push edi
// 004a3a31  8bbc2444010000       mov edi, dword ptr [esp + 0x144]
// 004a3a38  33db                 xor ebx, ebx
// 004a3a3a  8d4c2458             lea ecx, [esp + 0x58]
// 004a3a3e  c6461c01             mov byte ptr [esi + 0x1c], 1
// 004a3a42  885e1d               mov byte ptr [esi + 0x1d], bl
// 004a3a45  893e                 mov dword ptr [esi], edi
// 004a3a47  e8e465fbff           call 0x45a030
// 004a3a4c  8b07                 mov eax, dword ptr [edi]
// 004a3a4e  8b10                 mov edx, dword ptr [eax]
// 004a3a50  8d4c2458             lea ecx, [esp + 0x58]
// 004a3a54  51                   push ecx
// 004a3a55  8bcf                 mov ecx, edi
// 004a3a57  899c2440010000       mov dword ptr [esp + 0x140], ebx
// 004a3a5e  ffd2                 call edx
// 004a3a60  8bbc2448010000       mov edi, dword ptr [esp + 0x148]
// 004a3a67  57                   push edi
// 004a3a68  e8333f0000           call 0x4a79a0
// 004a3a6d  83c404               add esp, 4
// 004a3a70  897e08               mov dword ptr [esi + 8], edi
// 004a3a73  895e18               mov dword ptr [esi + 0x18], ebx
// 004a3a76  3bfb                 cmp edi, ebx
// 004a3a78  7435                 je 0x4a3aaf
// 004a3a7a  68040a8c00           push 0x8c0a04
// 004a3a7f  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3a83  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3a89  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3a8c  8d442418             lea eax, [esp + 0x18]
// 004a3a90  50                   push eax
// 004a3a91  c684244001000001     mov byte ptr [esp + 0x140], 1
// 004a3a99  e8e2930c00           call 0x56ce80
// 004a3a9e  8d4c2418             lea ecx, [esp + 0x18]
// 004a3aa2  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 004a3aa9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3aaf  53                   push ebx
// 004a3ab0  ff15d8e18900         call dword ptr [0x89e1d8]
// 004a3ab6  8b442474             mov eax, dword ptr [esp + 0x74]
// 004a3aba  83f810               cmp eax, 0x10
// 004a3abd  89442414             mov dword ptr [esp + 0x14], eax
// 004a3ac1  7e08                 jle 0x4a3acb
// 004a3ac3  c744241410000000     mov dword ptr [esp + 0x14], 0x10
// 004a3acb  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 004a3ad2  89442440             mov dword ptr [esp + 0x40], eax
// 004a3ad6  8b442478             mov eax, dword ptr [esp + 0x78]
// 004a3ada  89442438             mov dword ptr [esp + 0x38], eax
// 004a3ade  8944244c             mov dword ptr [esp + 0x4c], eax
// 004a3ae2  741f                 je 0x4a3b03
// 004a3ae4  68e2840000           push 0x84e2
// 004a3ae9  e8e29d0000           call 0x4ad8d0
// 004a3aee  83c404               add esp, 4
// 004a3af1  83f808               cmp eax, 8
// 004a3af4  7e05                 jle 0x4a3afb
// 004a3af6  b808000000           mov eax, 8
// 004a3afb  898614010000         mov dword ptr [esi + 0x114], eax
// 004a3b01  eb0a                 jmp 0x4a3b0d
// 004a3b03  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 004a3b0d  68ec098c00           push 0x8c09ec
// 004a3b12  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3b16  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3b1c  8d4c2418             lea ecx, [esp + 0x18]
// 004a3b20  51                   push ecx
// 004a3b21  c684244001000002     mov byte ptr [esp + 0x140], 2
// 004a3b29  e822380000           call 0x4a7350
// 004a3b2e  83c404               add esp, 4
// 004a3b31  8d4c2418             lea ecx, [esp + 0x18]
// 004a3b35  8ad8                 mov bl, al
// 004a3b37  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3b3f  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3b45  8dae1c010000         lea ebp, [esi + 0x11c]
// 004a3b4b  84db                 test bl, bl
// 004a3b4d  7456                 je 0x4a3ba5
// 004a3b4f  8b1dd4ea8900         mov ebx, dword ptr [0x89ead4]
// 004a3b55  55                   push ebp
// 004a3b56  6871880000           push 0x8871
// 004a3b5b  ffd3                 call ebx
// 004a3b5d  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 004a3b63  8b4500               mov eax, dword ptr [ebp]
// 004a3b66  3bc1                 cmp eax, ecx
// 004a3b68  7f04                 jg 0x4a3b6e
// 004a3b6a  8bc1                 mov eax, ecx
// 004a3b6c  eb0a                 jmp 0x4a3b78
// 004a3b6e  83f808               cmp eax, 8
// 004a3b71  7c05                 jl 0x4a3b78
// 004a3b73  b808000000           mov eax, 8
// 004a3b78  8dbe18010000         lea edi, [esi + 0x118]
// 004a3b7e  57                   push edi
// 004a3b7f  6872880000           push 0x8872
// 004a3b84  894500               mov dword ptr [ebp], eax
// 004a3b87  ffd3                 call ebx
// 004a3b89  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 004a3b8f  8b07                 mov eax, dword ptr [edi]
// 004a3b91  3bc1                 cmp eax, ecx
// 004a3b93  7f04                 jg 0x4a3b99
// 004a3b95  8bc1                 mov eax, ecx
// 004a3b97  eb1b                 jmp 0x4a3bb4
// 004a3b99  83f808               cmp eax, 8
// 004a3b9c  7c16                 jl 0x4a3bb4
// 004a3b9e  b808000000           mov eax, 8
// 004a3ba3  eb0f                 jmp 0x4a3bb4
// 004a3ba5  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004a3bab  894500               mov dword ptr [ebp], eax
// 004a3bae  8dbe18010000         lea edi, [esi + 0x118]
// 004a3bb4  8907                 mov dword ptr [edi], eax
// 004a3bb6  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 004a3bbd  7570                 jne 0x4a3c2f
// 004a3bbf  837e0800             cmp dword ptr [esi + 8], 0
// 004a3bc3  7436                 je 0x4a3bfb
// 004a3bc5  6898098c00           push 0x8c0998
// 004a3bca  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3bce  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3bd4  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3bd7  8d542418             lea edx, [esp + 0x18]
// 004a3bdb  52                   push edx
// 004a3bdc  c684244001000003     mov byte ptr [esp + 0x140], 3
// 004a3be4  e8f7920c00           call 0x56cee0
// 004a3be9  8d4c2418             lea ecx, [esp + 0x18]
// 004a3bed  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3bf5  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3bfb  8b4500               mov eax, dword ptr [ebp]
// 004a3bfe  83f801               cmp eax, 1
// 004a3c01  7f05                 jg 0x4a3c08
// 004a3c03  b801000000           mov eax, 1
// 004a3c08  894500               mov dword ptr [ebp], eax
// 004a3c0b  8b07                 mov eax, dword ptr [edi]
// 004a3c0d  83f801               cmp eax, 1
// 004a3c10  7f05                 jg 0x4a3c17
// 004a3c12  b801000000           mov eax, 1
// 004a3c17  8907                 mov dword ptr [edi], eax
// 004a3c19  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004a3c1f  83f801               cmp eax, 1
// 004a3c22  7f05                 jg 0x4a3c29
// 004a3c24  b801000000           mov eax, 1
// 004a3c29  898614010000         mov dword ptr [esi + 0x114], eax
// 004a3c2f  837e0800             cmp dword ptr [esi + 8], 0
// 004a3c33  0f848e000000         je 0x4a3cc7
// 004a3c39  33db                 xor ebx, ebx
// 004a3c3b  33c0                 xor eax, eax
// 004a3c3d  381d0ec9a300         cmp byte ptr [0xa3c90e], bl
// 004a3c43  740f                 je 0x4a3c54
// 004a3c45  68e2840000           push 0x84e2
// 004a3c4a  e8819c0000           call 0x4ad8d0
// 004a3c4f  83c404               add esp, 4
// 004a3c52  8bd8                 mov ebx, eax
// 004a3c54  803d0dc9a30000       cmp byte ptr [0xa3c90d], 0
// 004a3c5b  740d                 je 0x4a3c6a
// 004a3c5d  6872880000           push 0x8872
// 004a3c62  e8699c0000           call 0x4ad8d0
// 004a3c67  83c404               add esp, 4
// 004a3c6a  8b0f                 mov ecx, dword ptr [edi]
// 004a3c6c  8b5500               mov edx, dword ptr [ebp]
// 004a3c6f  50                   push eax
// 004a3c70  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004a3c76  53                   push ebx
// 004a3c77  50                   push eax
// 004a3c78  8b4608               mov eax, dword ptr [esi + 8]
// 004a3c7b  51                   push ecx
// 004a3c7c  52                   push edx
// 004a3c7d  68c0088c00           push 0x8c08c0
// 004a3c82  50                   push eax
// 004a3c83  e888940c00           call 0x56d110
// 004a3c88  83c41c               add esp, 0x1c
// 004a3c8b  837e0800             cmp dword ptr [esi + 8], 0
// 004a3c8f  7436                 je 0x4a3cc7
// 004a3c91  68ac088c00           push 0x8c08ac
// 004a3c96  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3c9a  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3ca0  8d4c2418             lea ecx, [esp + 0x18]
// 004a3ca4  51                   push ecx
// 004a3ca5  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3ca8  c684244001000004     mov byte ptr [esp + 0x140], 4
// 004a3cb0  e82b920c00           call 0x56cee0
// 004a3cb5  8d4c2418             lea ecx, [esp + 0x18]
// 004a3cb9  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3cc1  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3cc7  8bce                 mov ecx, esi
// 004a3cc9  e8d2f8ffff           call 0x4a35a0
// 004a3cce  8b1d8cea8900         mov ebx, dword ptr [0x89ea8c]
// 004a3cd4  68011f0000           push 0x1f01
// 004a3cd9  bff4a48b00           mov edi, 0x8ba4f4
// 004a3cde  ffd3                 call ebx
// 004a3ce0  8a08                 mov cl, byte ptr [eax]
// 004a3ce2  3a0f                 cmp cl, byte ptr [edi]
// 004a3ce4  751a                 jne 0x4a3d00
// 004a3ce6  84c9                 test cl, cl
// 004a3ce8  7412                 je 0x4a3cfc
// 004a3cea  8a4801               mov cl, byte ptr [eax + 1]
// 004a3ced  3a4f01               cmp cl, byte ptr [edi + 1]
// 004a3cf0  750e                 jne 0x4a3d00
// 004a3cf2  83c002               add eax, 2
// 004a3cf5  83c702               add edi, 2
// 004a3cf8  84c9                 test cl, cl
// 004a3cfa  75e4                 jne 0x4a3ce0
// 004a3cfc  33c0                 xor eax, eax
// 004a3cfe  eb05                 jmp 0x4a3d05
// 004a3d00  1bc0                 sbb eax, eax
// 004a3d02  83d8ff               sbb eax, -1
// 004a3d05  85c0                 test eax, eax
// 004a3d07  7515                 jne 0x4a3d1e
// 004a3d09  8b4608               mov eax, dword ptr [esi + 8]
// 004a3d0c  85c0                 test eax, eax
// 004a3d0e  740e                 je 0x4a3d1e
// 004a3d10  68d8068c00           push 0x8c06d8
// 004a3d15  50                   push eax
// 004a3d16  e8f5930c00           call 0x56d110
// 004a3d1b  83c408               add esp, 8
// 004a3d1e  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 004a3d24  85c0                 test eax, eax
// 004a3d26  750d                 jne 0x4a3d35
// 004a3d28  8b0e                 mov ecx, dword ptr [esi]
// 004a3d2a  8b11                 mov edx, dword ptr [ecx]
// 004a3d2c  8b4208               mov eax, dword ptr [edx + 8]
// 004a3d2f  ffd0                 call eax
// 004a3d31  8bf8                 mov edi, eax
// 004a3d33  eb03                 jmp 0x4a3d38
// 004a3d35  8b7840               mov edi, dword ptr [eax + 0x40]
// 004a3d38  8b86e8030000         mov eax, dword ptr [esi + 0x3e8]
// 004a3d3e  85c0                 test eax, eax
// 004a3d40  750b                 jne 0x4a3d4d
// 004a3d42  8b0e                 mov ecx, dword ptr [esi]
// 004a3d44  8b11                 mov edx, dword ptr [ecx]
// 004a3d46  8b4204               mov eax, dword ptr [edx + 4]
// 004a3d49  ffd0                 call eax
// 004a3d4b  eb03                 jmp 0x4a3d50
// 004a3d4d  8b4044               mov eax, dword ptr [eax + 0x44]
// 004a3d50  57                   push edi
// 004a3d51  50                   push eax
// 004a3d52  6a00                 push 0
// 004a3d54  6a00                 push 0
// 004a3d56  ff1584eb8900         call dword ptr [0x89eb84]
// 004a3d5c  68560d0000           push 0xd56
// 004a3d61  e86a9b0000           call 0x4ad8d0
// 004a3d66  8bf8                 mov edi, eax
// 004a3d68  68570d0000           push 0xd57
// 004a3d6d  897c2458             mov dword ptr [esp + 0x58], edi
// 004a3d71  e85a9b0000           call 0x4ad8d0
// 004a3d76  8be8                 mov ebp, eax
// 004a3d78  68520d0000           push 0xd52
// 004a3d7d  896c2460             mov dword ptr [esp + 0x60], ebp
// 004a3d81  e84a9b0000           call 0x4ad8d0
// 004a3d86  68530d0000           push 0xd53
// 004a3d8b  8944244c             mov dword ptr [esp + 0x4c], eax
// 004a3d8f  e83c9b0000           call 0x4ad8d0
// 004a3d94  68540d0000           push 0xd54
// 004a3d99  8944245c             mov dword ptr [esp + 0x5c], eax
// 004a3d9d  e82e9b0000           call 0x4ad8d0
// 004a3da2  68550d0000           push 0xd55
// 004a3da7  8944245c             mov dword ptr [esp + 0x5c], eax
// 004a3dab  e8209b0000           call 0x4ad8d0
// 004a3db0  83c418               add esp, 0x18
// 004a3db3  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004a3db7  89442434             mov dword ptr [esp + 0x34], eax
// 004a3dbb  0f9d442413           setge byte ptr [esp + 0x13]
// 004a3dc0  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 004a3dc4  0f9d442412           setge byte ptr [esp + 0x12]
// 004a3dc9  837e0800             cmp dword ptr [esi + 8], 0
// 004a3dcd  0f8429010000         je 0x4a3efc
// 004a3dd3  e8187f0c00           call 0x56bcf0
// 004a3dd8  bf10000000           mov edi, 0x10
// 004a3ddd  397818               cmp dword ptr [eax + 0x18], edi
// 004a3de0  7205                 jb 0x4a3de7
// 004a3de2  8b4004               mov eax, dword ptr [eax + 4]
// 004a3de5  eb03                 jmp 0x4a3dea
// 004a3de7  83c004               add eax, 4
// 004a3dea  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3ded  50                   push eax
// 004a3dee  68bc068c00           push 0x8c06bc
// 004a3df3  51                   push ecx
// 004a3df4  e817930c00           call 0x56d110
// 004a3df9  83c40c               add esp, 0xc
// 004a3dfc  e85f7f0c00           call 0x56bd60
// 004a3e01  397818               cmp dword ptr [eax + 0x18], edi
// 004a3e04  7205                 jb 0x4a3e0b
// 004a3e06  8b4004               mov eax, dword ptr [eax + 4]
// 004a3e09  eb03                 jmp 0x4a3e0e
// 004a3e0b  83c004               add eax, 4
// 004a3e0e  8b5608               mov edx, dword ptr [esi + 8]
// 004a3e11  50                   push eax
// 004a3e12  689c068c00           push 0x8c069c
// 004a3e17  52                   push edx
// 004a3e18  e8f3920c00           call 0x56d110
// 004a3e1d  83c40c               add esp, 0xc
// 004a3e20  e84b2d0000           call 0x4a6b70
// 004a3e25  397818               cmp dword ptr [eax + 0x18], edi
// 004a3e28  7205                 jb 0x4a3e2f
// 004a3e2a  8b4004               mov eax, dword ptr [eax + 4]
// 004a3e2d  eb03                 jmp 0x4a3e32
// 004a3e2f  83c004               add eax, 4
// 004a3e32  50                   push eax
// 004a3e33  8b4608               mov eax, dword ptr [esi + 8]
// 004a3e36  6888068c00           push 0x8c0688
// 004a3e3b  50                   push eax
// 004a3e3c  e8cf920c00           call 0x56d110
// 004a3e41  83c40c               add esp, 0xc
// 004a3e44  e8472e0000           call 0x4a6c90
// 004a3e49  397818               cmp dword ptr [eax + 0x18], edi
// 004a3e4c  7205                 jb 0x4a3e53
// 004a3e4e  8b4004               mov eax, dword ptr [eax + 4]
// 004a3e51  eb03                 jmp 0x4a3e56
// 004a3e53  83c004               add eax, 4
// 004a3e56  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3e59  50                   push eax
// 004a3e5a  6874068c00           push 0x8c0674
// 004a3e5f  51                   push ecx
// 004a3e60  e8ab920c00           call 0x56d110
// 004a3e65  83c40c               add esp, 0xc
// 004a3e68  e8f32b0000           call 0x4a6a60
// 004a3e6d  397818               cmp dword ptr [eax + 0x18], edi
// 004a3e70  7205                 jb 0x4a3e77
// 004a3e72  8b4004               mov eax, dword ptr [eax + 4]
// 004a3e75  eb03                 jmp 0x4a3e7a
// 004a3e77  83c004               add eax, 4
// 004a3e7a  8b5608               mov edx, dword ptr [esi + 8]
// 004a3e7d  50                   push eax
// 004a3e7e  6860068c00           push 0x8c0660
// 004a3e83  52                   push edx
// 004a3e84  e887920c00           call 0x56d110
// 004a3e89  83c40c               add esp, 0xc
// 004a3e8c  e8cf340000           call 0x4a7360
// 004a3e91  397818               cmp dword ptr [eax + 0x18], edi
// 004a3e94  7205                 jb 0x4a3e9b
// 004a3e96  8b4004               mov eax, dword ptr [eax + 4]
// 004a3e99  eb03                 jmp 0x4a3e9e
// 004a3e9b  83c004               add eax, 4
// 004a3e9e  50                   push eax
// 004a3e9f  8b4608               mov eax, dword ptr [esi + 8]
// 004a3ea2  6848068c00           push 0x8c0648
// 004a3ea7  50                   push eax
// 004a3ea8  e863920c00           call 0x56d110
// 004a3ead  83c40c               add esp, 0xc
// 004a3eb0  68031f0000           push 0x1f03
// 004a3eb5  ffd3                 call ebx
// 004a3eb7  50                   push eax
// 004a3eb8  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3ebc  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3ec2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a3ec6  c684243c01000005     mov byte ptr [esp + 0x13c], 5
// 004a3ece  397c2430             cmp dword ptr [esp + 0x30], edi
// 004a3ed2  7304                 jae 0x4a3ed8
// 004a3ed4  8d44241c             lea eax, [esp + 0x1c]
// 004a3ed8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3edb  50                   push eax
// 004a3edc  6830068c00           push 0x8c0630
// 004a3ee1  51                   push ecx
// 004a3ee2  e829920c00           call 0x56d110
// 004a3ee7  83c40c               add esp, 0xc
// 004a3eea  8d4c2418             lea ecx, [esp + 0x18]
// 004a3eee  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3ef6  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3efc  68f8338b00           push 0x8b33f8
// 004a3f01  e88a2d0000           call 0x4a6c90
// 004a3f06  50                   push eax
// 004a3f07  8d9424c0000000       lea edx, [esp + 0xc0]
// 004a3f0e  52                   push edx
// 004a3f0f  ff1548e48900         call dword ptr [0x89e448]
// 004a3f15  8bf8                 mov edi, eax
// 004a3f17  b306                 mov bl, 6
// 004a3f19  889c2448010000       mov byte ptr [esp + 0x148], bl
// 004a3f20  e83b340000           call 0x4a7360
// 004a3f25  50                   push eax
// 004a3f26  8d442428             lea eax, [esp + 0x28]
// 004a3f2a  57                   push edi
// 004a3f2b  50                   push eax
// 004a3f2c  ff150ce58900         call dword ptr [0x89e50c]
// 004a3f32  83c418               add esp, 0x18
// 004a3f35  50                   push eax
// 004a3f36  8d4e50               lea ecx, [esi + 0x50]
// 004a3f39  c684244001000007     mov byte ptr [esp + 0x140], 7
// 004a3f41  ff1564e48900         call dword ptr [0x89e464]
// 004a3f47  8d4c2418             lea ecx, [esp + 0x18]
// 004a3f4b  889c243c010000       mov byte ptr [esp + 0x13c], bl
// 004a3f52  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3f58  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 004a3f5f  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3f67  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3f6d  837e0800             cmp dword ptr [esi + 8], 0
// 004a3f71  0f8443010000         je 0x4a40ba
// 004a3f77  6820068c00           push 0x8c0620
// 004a3f7c  8d4c241c             lea ecx, [esp + 0x1c]
// 004a3f80  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3f86  8d4c2418             lea ecx, [esp + 0x18]
// 004a3f8a  51                   push ecx
// 004a3f8b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a3f8e  c684244001000008     mov byte ptr [esp + 0x140], 8
// 004a3f96  e8e58e0c00           call 0x56ce80
// 004a3f9b  8d4c2418             lea ecx, [esp + 0x18]
// 004a3f9f  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a3fa7  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3fad  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004a3fb4  e87760fbff           call 0x45a030
// 004a3fb9  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 004a3fc0  8b11                 mov edx, dword ptr [ecx]
// 004a3fc2  8b12                 mov edx, dword ptr [edx]
// 004a3fc4  8d8424d4000000       lea eax, [esp + 0xd4]
// 004a3fcb  50                   push eax
// 004a3fcc  c684244001000009     mov byte ptr [esp + 0x140], 9
// 004a3fd4  ffd2                 call edx
// 004a3fd6  80bc248100000000     cmp byte ptr [esp + 0x81], 0
// 004a3fde  bb14068c00           mov ebx, 0x8c0614
// 004a3fe3  7505                 jne 0x4a3fea
// 004a3fe5  bb08068c00           mov ebx, 0x8c0608
// 004a3fea  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 004a3fee  8bac24f8000000       mov ebp, dword ptr [esp + 0xf8]
// 004a3ff5  ba2cff8b00           mov edx, 0x8bff2c
// 004a3ffa  3bfd                 cmp edi, ebp
// 004a3ffc  7405                 je 0x4a4003
// 004a3ffe  ba20ff8b00           mov edx, 0x8bff20
// 004a4003  807c241200           cmp byte ptr [esp + 0x12], 0
// 004a4008  b92cff8b00           mov ecx, 0x8bff2c
// 004a400d  7505                 jne 0x4a4014
// 004a400f  b920ff8b00           mov ecx, 0x8bff20
// 004a4014  807c241300           cmp byte ptr [esp + 0x13], 0
// 004a4019  b82cff8b00           mov eax, 0x8bff2c
// 004a401e  7505                 jne 0x4a4025
// 004a4020  b820ff8b00           mov eax, 0x8bff20
// 004a4025  682cff8b00           push 0x8bff2c
// 004a402a  53                   push ebx
// 004a402b  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 004a402f  682cff8b00           push 0x8bff2c
// 004a4034  53                   push ebx
// 004a4035  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 004a4039  682cff8b00           push 0x8bff2c
// 004a403e  53                   push ebx
// 004a403f  52                   push edx
// 004a4040  8b542460             mov edx, dword ptr [esp + 0x60]
// 004a4044  55                   push ebp
// 004a4045  57                   push edi
// 004a4046  682cff8b00           push 0x8bff2c
// 004a404b  52                   push edx
// 004a404c  8b542474             mov edx, dword ptr [esp + 0x74]
// 004a4050  682cff8b00           push 0x8bff2c
// 004a4055  52                   push edx
// 004a4056  8b542470             mov edx, dword ptr [esp + 0x70]
// 004a405a  682cff8b00           push 0x8bff2c
// 004a405f  52                   push edx
// 004a4060  8b542470             mov edx, dword ptr [esp + 0x70]
// 004a4064  682cff8b00           push 0x8bff2c
// 004a4069  52                   push edx
// 004a406a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 004a4071  51                   push ecx
// 004a4072  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 004a4079  51                   push ecx
// 004a407a  52                   push edx
// 004a407b  8bca                 mov ecx, edx
// 004a407d  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 004a4084  51                   push ecx
// 004a4085  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004a4089  50                   push eax
// 004a408a  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004a4091  52                   push edx
// 004a4092  8b5608               mov edx, dword ptr [esi + 8]
// 004a4095  50                   push eax
// 004a4096  51                   push ecx
// 004a4097  68d8038c00           push 0x8c03d8
// 004a409c  52                   push edx
// 004a409d  e86e900c00           call 0x56d110
// 004a40a2  83c46c               add esp, 0x6c
// 004a40a5  8d8c2414010000       lea ecx, [esp + 0x114]
// 004a40ac  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a40b4  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a40ba  837e0800             cmp dword ptr [esi + 8], 0
// 004a40be  c6861001000000       mov byte ptr [esi + 0x110], 0
// 004a40c5  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004a40cc  7436                 je 0x4a4104
// 004a40ce  68b0038c00           push 0x8c03b0
// 004a40d3  8d4c241c             lea ecx, [esp + 0x1c]
// 004a40d7  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a40dd  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a40e0  8d442418             lea eax, [esp + 0x18]
// 004a40e4  50                   push eax
// 004a40e5  c68424400100000a     mov byte ptr [esp + 0x140], 0xa
// 004a40ed  e8ee8d0c00           call 0x56cee0
// 004a40f2  8d4c2418             lea ecx, [esp + 0x18]
// 004a40f6  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a40fe  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a4104  837c243400           cmp dword ptr [esp + 0x34], 0
// 004a4109  c6869808000001       mov byte ptr [esi + 0x898], 1
// 004a4110  7430                 je 0x4a4142
// 004a4112  b901000000           mov ecx, 1
// 004a4117  014e78               add dword ptr [esi + 0x78], ecx
// 004a411a  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 004a4121  751f                 jne 0x4a4142
// 004a4123  014e70               add dword ptr [esi + 0x70], ecx
// 004a4126  33c0                 xor eax, eax
// 004a4128  3886e2030000         cmp byte ptr [esi + 0x3e2], al
// 004a412e  51                   push ecx
// 004a412f  0f95c0               setne al
// 004a4132  50                   push eax
// 004a4133  50                   push eax
// 004a4134  50                   push eax
// 004a4135  ff159cea8900         call dword ptr [0x89ea9c]
// 004a413b  c686e303000001       mov byte ptr [esi + 0x3e3], 1
// 004a4142  68ac038c00           push 0x8c03ac
// 004a4147  8d4c241c             lea ecx, [esp + 0x1c]
// 004a414b  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a4151  8b0e                 mov ecx, dword ptr [esi]
// 004a4153  8b11                 mov edx, dword ptr [ecx]
// 004a4155  8b5228               mov edx, dword ptr [edx + 0x28]
// 004a4158  8d442418             lea eax, [esp + 0x18]
// 004a415c  50                   push eax
// 004a415d  c68424400100000b     mov byte ptr [esp + 0x140], 0xb
// 004a4165  ffd2                 call edx
// 004a4167  8d4c2418             lea ecx, [esp + 0x18]
// 004a416b  c684243c01000000     mov byte ptr [esp + 0x13c], 0
// 004a4173  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a4179  8b06                 mov eax, dword ptr [esi]
// 004a417b  8d8c2498000000       lea ecx, [esp + 0x98]
// 004a4182  897018               mov dword ptr [eax + 0x18], esi
// 004a4185  c784243c010000ffffffff mov dword ptr [esp + 0x13c], 0xffffffff
// 004a4190  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a4196  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 004a419d  5f                   pop edi
// 004a419e  5e                   pop esi
// 004a419f  5d                   pop ebp
// 004a41a0  b001                 mov al, 1
// 004a41a2  5b                   pop ebx
// 004a41a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a41aa  81c430010000         add esp, 0x130
// 004a41b0  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?init@RenderDevice@G3D@@QAE_NPAVGWindow@2@PAVLog@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
