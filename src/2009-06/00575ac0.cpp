// roc 2009-06 00575ac0  unit: G3D::BinaryInput  size: 1376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575ac0
//
// 00575ac0  6aff                 push -1
// 00575ac2  68ee068600           push 0x8606ee
// 00575ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00575acd  50                   push eax
// 00575ace  64892500000000       mov dword ptr fs:[0], esp
// 00575ad5  83ec40               sub esp, 0x40
// 00575ad8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00575adc  56                   push esi
// 00575add  50                   push eax
// 00575ade  8d4c2410             lea ecx, [esp + 0x10]
// 00575ae2  ff15b8e48900         call dword ptr [0x89e4b8]
// 00575ae8  8b742458             mov esi, dword ptr [esp + 0x58]
// 00575aec  6816d28a00           push 0x8ad216
// 00575af1  8bce                 mov ecx, esi
// 00575af3  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00575afb  ff15a8e48900         call dword ptr [0x89e4a8]
// 00575b01  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00575b05  6a01                 push 1
// 00575b07  6a00                 push 0
// 00575b09  e8d25fffff           call 0x56bae0
// 00575b0e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00575b12  6816d28a00           push 0x8ad216
// 00575b17  ff15a8e48900         call dword ptr [0x89e4a8]
// 00575b1d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00575b21  6816d28a00           push 0x8ad216
// 00575b26  ff15a8e48900         call dword ptr [0x89e4a8]
// 00575b2c  8d4c240c             lea ecx, [esp + 0xc]
// 00575b30  6816d28a00           push 0x8ad216
// 00575b35  51                   push ecx
// 00575b36  ff1574e48900         call dword ptr [0x89e474]
// 00575b3c  83c408               add esp, 8
// 00575b3f  84c0                 test al, al
// 00575b41  7422                 je 0x575b65
// 00575b43  8d4c240c             lea ecx, [esp + 0xc]
// 00575b47  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00575b4f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575b55  5e                   pop esi
// 00575b56  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00575b5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00575b61  83c44c               add esp, 0x4c
// 00575b64  c3                   ret 
// 00575b65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575b69  53                   push ebx
// 00575b6a  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 00575b70  55                   push ebp
// 00575b71  57                   push edi
// 00575b72  83f902               cmp ecx, 2
// 00575b75  0f82fc000000         jb 0x575c77
// 00575b7b  83f901               cmp ecx, 1
// 00575b7e  7306                 jae 0x575b86
// 00575b80  ffd3                 call ebx
// 00575b82  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00575b86  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00575b8a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00575b8e  8bc5                 mov eax, ebp
// 00575b90  83ff10               cmp edi, 0x10
// 00575b93  7304                 jae 0x575b99
// 00575b95  8d44241c             lea eax, [esp + 0x1c]
// 00575b99  8078013a             cmp byte ptr [eax + 1], 0x3a
// 00575b9d  0f85dc000000         jne 0x575c7f
// 00575ba3  83f902               cmp ecx, 2
// 00575ba6  7675                 jbe 0x575c1d
// 00575ba8  730a                 jae 0x575bb4
// 00575baa  ffd3                 call ebx
// 00575bac  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00575bb0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00575bb4  8bc5                 mov eax, ebp
// 00575bb6  83ff10               cmp edi, 0x10
// 00575bb9  7304                 jae 0x575bbf
// 00575bbb  8d44241c             lea eax, [esp + 0x1c]
// 00575bbf  8a4002               mov al, byte ptr [eax + 2]
// 00575bc2  3c5c                 cmp al, 0x5c
// 00575bc4  7404                 je 0x575bca
// 00575bc6  3c2f                 cmp al, 0x2f
// 00575bc8  7553                 jne 0x575c1d
// 00575bca  6a03                 push 3
// 00575bcc  6a00                 push 0
// 00575bce  8d54243c             lea edx, [esp + 0x3c]
// 00575bd2  52                   push edx
// 00575bd3  8d4c2424             lea ecx, [esp + 0x24]
// 00575bd7  ff1570e48900         call dword ptr [0x89e470]
// 00575bdd  50                   push eax
// 00575bde  8bce                 mov ecx, esi
// 00575be0  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00575be5  ff1564e48900         call dword ptr [0x89e464]
// 00575beb  8d4c2434             lea ecx, [esp + 0x34]
// 00575bef  c644245800           mov byte ptr [esp + 0x58], 0
// 00575bf4  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575bfa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00575bfe  83c0fd               add eax, -3
// 00575c01  50                   push eax
// 00575c02  6a03                 push 3
// 00575c04  8d4c243c             lea ecx, [esp + 0x3c]
// 00575c08  51                   push ecx
// 00575c09  8d4c2424             lea ecx, [esp + 0x24]
// 00575c0d  ff1570e48900         call dword ptr [0x89e470]
// 00575c13  c644245802           mov byte ptr [esp + 0x58], 2
// 00575c18  e960010000           jmp 0x575d7d
// 00575c1d  8b156ce48900         mov edx, dword ptr [0x89e46c]
// 00575c23  8b02                 mov eax, dword ptr [edx]
// 00575c25  50                   push eax
// 00575c26  6a02                 push 2
// 00575c28  8d4c243c             lea ecx, [esp + 0x3c]
// 00575c2c  51                   push ecx
// 00575c2d  8d4c2424             lea ecx, [esp + 0x24]
// 00575c31  ff1570e48900         call dword ptr [0x89e470]
// 00575c37  50                   push eax
// 00575c38  8bce                 mov ecx, esi
// 00575c3a  c644245c03           mov byte ptr [esp + 0x5c], 3
// 00575c3f  ff1564e48900         call dword ptr [0x89e464]
// 00575c45  8d4c2434             lea ecx, [esp + 0x34]
// 00575c49  c644245800           mov byte ptr [esp + 0x58], 0
// 00575c4e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575c54  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00575c58  83c2fe               add edx, -2
// 00575c5b  52                   push edx
// 00575c5c  6a02                 push 2
// 00575c5e  8d44243c             lea eax, [esp + 0x3c]
// 00575c62  50                   push eax
// 00575c63  8d4c2424             lea ecx, [esp + 0x24]
// 00575c67  ff1570e48900         call dword ptr [0x89e470]
// 00575c6d  c644245804           mov byte ptr [esp + 0x58], 4
// 00575c72  e906010000           jmp 0x575d7d
// 00575c77  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00575c7b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00575c7f  8bc5                 mov eax, ebp
// 00575c81  83ff10               cmp edi, 0x10
// 00575c84  7304                 jae 0x575c8a
// 00575c86  8d44241c             lea eax, [esp + 0x1c]
// 00575c8a  8a00                 mov al, byte ptr [eax]
// 00575c8c  3c5c                 cmp al, 0x5c
// 00575c8e  7408                 je 0x575c98
// 00575c90  3c2f                 cmp al, 0x2f
// 00575c92  7404                 je 0x575c98
// 00575c94  33c0                 xor eax, eax
// 00575c96  eb05                 jmp 0x575c9d
// 00575c98  b801000000           mov eax, 1
// 00575c9d  83f902               cmp ecx, 2
// 00575ca0  1bd2                 sbb edx, edx
// 00575ca2  42                   inc edx
// 00575ca3  84d0                 test al, dl
// 00575ca5  7475                 je 0x575d1c
// 00575ca7  83f901               cmp ecx, 1
// 00575caa  730a                 jae 0x575cb6
// 00575cac  ffd3                 call ebx
// 00575cae  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00575cb2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00575cb6  8bc5                 mov eax, ebp
// 00575cb8  83ff10               cmp edi, 0x10
// 00575cbb  7304                 jae 0x575cc1
// 00575cbd  8d44241c             lea eax, [esp + 0x1c]
// 00575cc1  8a4001               mov al, byte ptr [eax + 1]
// 00575cc4  3c5c                 cmp al, 0x5c
// 00575cc6  7404                 je 0x575ccc
// 00575cc8  3c2f                 cmp al, 0x2f
// 00575cca  7550                 jne 0x575d1c
// 00575ccc  6a02                 push 2
// 00575cce  6a00                 push 0
// 00575cd0  8d44243c             lea eax, [esp + 0x3c]
// 00575cd4  50                   push eax
// 00575cd5  8d4c2424             lea ecx, [esp + 0x24]
// 00575cd9  ff1570e48900         call dword ptr [0x89e470]
// 00575cdf  50                   push eax
// 00575ce0  8bce                 mov ecx, esi
// 00575ce2  c644245c05           mov byte ptr [esp + 0x5c], 5
// 00575ce7  ff1564e48900         call dword ptr [0x89e464]
// 00575ced  8d4c2434             lea ecx, [esp + 0x34]
// 00575cf1  c644245800           mov byte ptr [esp + 0x58], 0
// 00575cf6  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575cfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00575d00  83c1fe               add ecx, -2
// 00575d03  51                   push ecx
// 00575d04  6a02                 push 2
// 00575d06  8d54243c             lea edx, [esp + 0x3c]
// 00575d0a  52                   push edx
// 00575d0b  8d4c2424             lea ecx, [esp + 0x24]
// 00575d0f  ff1570e48900         call dword ptr [0x89e470]
// 00575d15  c644245806           mov byte ptr [esp + 0x58], 6
// 00575d1a  eb61                 jmp 0x575d7d
// 00575d1c  8bc5                 mov eax, ebp
// 00575d1e  83ff10               cmp edi, 0x10
// 00575d21  7304                 jae 0x575d27
// 00575d23  8d44241c             lea eax, [esp + 0x1c]
// 00575d27  8a00                 mov al, byte ptr [eax]
// 00575d29  3c5c                 cmp al, 0x5c
// 00575d2b  7404                 je 0x575d31
// 00575d2d  3c2f                 cmp al, 0x2f
// 00575d2f  7566                 jne 0x575d97
// 00575d31  6a01                 push 1
// 00575d33  6a00                 push 0
// 00575d35  8d44243c             lea eax, [esp + 0x3c]
// 00575d39  50                   push eax
// 00575d3a  8d4c2424             lea ecx, [esp + 0x24]
// 00575d3e  ff1570e48900         call dword ptr [0x89e470]
// 00575d44  50                   push eax
// 00575d45  8bce                 mov ecx, esi
// 00575d47  c644245c07           mov byte ptr [esp + 0x5c], 7
// 00575d4c  ff1564e48900         call dword ptr [0x89e464]
// 00575d52  8d4c2434             lea ecx, [esp + 0x34]
// 00575d56  c644245800           mov byte ptr [esp + 0x58], 0
// 00575d5b  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575d61  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00575d65  49                   dec ecx
// 00575d66  51                   push ecx
// 00575d67  6a01                 push 1
// 00575d69  8d54243c             lea edx, [esp + 0x3c]
// 00575d6d  52                   push edx
// 00575d6e  8d4c2424             lea ecx, [esp + 0x24]
// 00575d72  ff1570e48900         call dword ptr [0x89e470]
// 00575d78  c644245808           mov byte ptr [esp + 0x58], 8
// 00575d7d  50                   push eax
// 00575d7e  8d4c241c             lea ecx, [esp + 0x1c]
// 00575d82  ff1564e48900         call dword ptr [0x89e464]
// 00575d88  8d4c2434             lea ecx, [esp + 0x34]
// 00575d8c  c644245800           mov byte ptr [esp + 0x58], 0
// 00575d91  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575d97  a16ce48900           mov eax, dword ptr [0x89e46c]
// 00575d9c  8b00                 mov eax, dword ptr [eax]
// 00575d9e  6a01                 push 1
// 00575da0  50                   push eax
// 00575da1  8d4c2418             lea ecx, [esp + 0x18]
// 00575da5  51                   push ecx
// 00575da6  8d4c2424             lea ecx, [esp + 0x24]
// 00575daa  c644241c2e           mov byte ptr [esp + 0x1c], 0x2e
// 00575daf  ff1540e58900         call dword ptr [0x89e540]
// 00575db5  8b156ce48900         mov edx, dword ptr [0x89e46c]
// 00575dbb  8bf0                 mov esi, eax
// 00575dbd  8b02                 mov eax, dword ptr [edx]
// 00575dbf  6a01                 push 1
// 00575dc1  50                   push eax
// 00575dc2  8d442418             lea eax, [esp + 0x18]
// 00575dc6  50                   push eax
// 00575dc7  8d4c2424             lea ecx, [esp + 0x24]
// 00575dcb  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 00575dd0  ff1540e58900         call dword ptr [0x89e540]
// 00575dd6  8b0d6ce48900         mov ecx, dword ptr [0x89e46c]
// 00575ddc  8bf8                 mov edi, eax
// 00575dde  8b01                 mov eax, dword ptr [ecx]
// 00575de0  6a01                 push 1
// 00575de2  50                   push eax
// 00575de3  8d54241c             lea edx, [esp + 0x1c]
// 00575de7  52                   push edx
// 00575de8  8d4c2424             lea ecx, [esp + 0x24]
// 00575dec  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 00575df1  ff1540e58900         call dword ptr [0x89e540]
// 00575df7  3bc7                 cmp eax, edi
// 00575df9  7d02                 jge 0x575dfd
// 00575dfb  8bc7                 mov eax, edi
// 00575dfd  8b0d6ce48900         mov ecx, dword ptr [0x89e46c]
// 00575e03  3b31                 cmp esi, dword ptr [ecx]
// 00575e05  746f                 je 0x575e76
// 00575e07  3bf0                 cmp esi, eax
// 00575e09  766b                 jbe 0x575e76
// 00575e0b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00575e0f  2bd6                 sub edx, esi
// 00575e11  4a                   dec edx
// 00575e12  52                   push edx
// 00575e13  8d4601               lea eax, [esi + 1]
// 00575e16  50                   push eax
// 00575e17  8d4c243c             lea ecx, [esp + 0x3c]
// 00575e1b  51                   push ecx
// 00575e1c  8d4c2424             lea ecx, [esp + 0x24]
// 00575e20  ff1570e48900         call dword ptr [0x89e470]
// 00575e26  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00575e2a  50                   push eax
// 00575e2b  c644245c09           mov byte ptr [esp + 0x5c], 9
// 00575e30  ff1564e48900         call dword ptr [0x89e464]
// 00575e36  8d4c2434             lea ecx, [esp + 0x34]
// 00575e3a  c644245800           mov byte ptr [esp + 0x58], 0
// 00575e3f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575e45  56                   push esi
// 00575e46  6a00                 push 0
// 00575e48  8d54243c             lea edx, [esp + 0x3c]
// 00575e4c  52                   push edx
// 00575e4d  8d4c2424             lea ecx, [esp + 0x24]
// 00575e51  ff1570e48900         call dword ptr [0x89e470]
// 00575e57  50                   push eax
// 00575e58  8d4c241c             lea ecx, [esp + 0x1c]
// 00575e5c  c644245c0a           mov byte ptr [esp + 0x5c], 0xa
// 00575e61  ff1564e48900         call dword ptr [0x89e464]
// 00575e67  8d4c2434             lea ecx, [esp + 0x34]
// 00575e6b  c644245800           mov byte ptr [esp + 0x58], 0
// 00575e70  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575e76  a16ce48900           mov eax, dword ptr [0x89e46c]
// 00575e7b  8b00                 mov eax, dword ptr [eax]
// 00575e7d  6a01                 push 1
// 00575e7f  50                   push eax
// 00575e80  8d4c241c             lea ecx, [esp + 0x1c]
// 00575e84  51                   push ecx
// 00575e85  8d4c2424             lea ecx, [esp + 0x24]
// 00575e89  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 00575e8e  ff1540e58900         call dword ptr [0x89e540]
// 00575e94  8b156ce48900         mov edx, dword ptr [0x89e46c]
// 00575e9a  8bf0                 mov esi, eax
// 00575e9c  8b02                 mov eax, dword ptr [edx]
// 00575e9e  6a01                 push 1
// 00575ea0  50                   push eax
// 00575ea1  8d442418             lea eax, [esp + 0x18]
// 00575ea5  50                   push eax
// 00575ea6  8d4c2424             lea ecx, [esp + 0x24]
// 00575eaa  c644241c2f           mov byte ptr [esp + 0x1c], 0x2f
// 00575eaf  ff1540e58900         call dword ptr [0x89e540]
// 00575eb5  3bc6                 cmp eax, esi
// 00575eb7  7c02                 jl 0x575ebb
// 00575eb9  8bf0                 mov esi, eax
// 00575ebb  8b0d6ce48900         mov ecx, dword ptr [0x89e46c]
// 00575ec1  3b31                 cmp esi, dword ptr [ecx]
// 00575ec3  7520                 jne 0x575ee5
// 00575ec5  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00575ec9  8d542418             lea edx, [esp + 0x18]
// 00575ecd  52                   push edx
// 00575ece  ff1564e48900         call dword ptr [0x89e464]
// 00575ed4  6816d28a00           push 0x8ad216
// 00575ed9  8d4c241c             lea ecx, [esp + 0x1c]
// 00575edd  ff15a8e48900         call dword ptr [0x89e4a8]
// 00575ee3  eb72                 jmp 0x575f57
// 00575ee5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00575ee9  8d48ff               lea ecx, [eax - 1]
// 00575eec  3bf1                 cmp esi, ecx
// 00575eee  7367                 jae 0x575f57
// 00575ef0  2bc6                 sub eax, esi
// 00575ef2  48                   dec eax
// 00575ef3  50                   push eax
// 00575ef4  8d5601               lea edx, [esi + 1]
// 00575ef7  52                   push edx
// 00575ef8  8d44243c             lea eax, [esp + 0x3c]
// 00575efc  50                   push eax
// 00575efd  8d4c2424             lea ecx, [esp + 0x24]
// 00575f01  ff1570e48900         call dword ptr [0x89e470]
// 00575f07  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00575f0b  50                   push eax
// 00575f0c  c644245c0b           mov byte ptr [esp + 0x5c], 0xb
// 00575f11  ff1564e48900         call dword ptr [0x89e464]
// 00575f17  8d4c2434             lea ecx, [esp + 0x34]
// 00575f1b  c644245800           mov byte ptr [esp + 0x58], 0
// 00575f20  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575f26  56                   push esi
// 00575f27  6a00                 push 0
// 00575f29  8d4c243c             lea ecx, [esp + 0x3c]
// 00575f2d  51                   push ecx
// 00575f2e  8d4c2424             lea ecx, [esp + 0x24]
// 00575f32  ff1570e48900         call dword ptr [0x89e470]
// 00575f38  50                   push eax
// 00575f39  8d4c241c             lea ecx, [esp + 0x1c]
// 00575f3d  c644245c0c           mov byte ptr [esp + 0x5c], 0xc
// 00575f42  ff1564e48900         call dword ptr [0x89e464]
// 00575f48  8d4c2434             lea ecx, [esp + 0x34]
// 00575f4c  c644245800           mov byte ptr [esp + 0x58], 0
// 00575f51  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575f57  33f6                 xor esi, esi
// 00575f59  3974242c             cmp dword ptr [esp + 0x2c], esi
// 00575f5d  0f8698000000         jbe 0x575ffb
// 00575f63  b30d                 mov bl, 0xd
// 00575f65  6a01                 push 1
// 00575f67  8d7e01               lea edi, [esi + 1]
// 00575f6a  57                   push edi
// 00575f6b  8d54241c             lea edx, [esp + 0x1c]
// 00575f6f  52                   push edx
// 00575f70  8d4c2424             lea ecx, [esp + 0x24]
// 00575f74  8bee                 mov ebp, esi
// 00575f76  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 00575f7b  ff1524e58900         call dword ptr [0x89e524]
// 00575f81  6a01                 push 1
// 00575f83  8bf0                 mov esi, eax
// 00575f85  57                   push edi
// 00575f86  8d44241c             lea eax, [esp + 0x1c]
// 00575f8a  50                   push eax
// 00575f8b  8d4c2424             lea ecx, [esp + 0x24]
// 00575f8f  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 00575f94  ff1524e58900         call dword ptr [0x89e524]
// 00575f9a  8b0d6ce48900         mov ecx, dword ptr [0x89e46c]
// 00575fa0  8b09                 mov ecx, dword ptr [ecx]
// 00575fa2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00575fa6  3bf1                 cmp esi, ecx
// 00575fa8  7502                 jne 0x575fac
// 00575faa  8bf2                 mov esi, edx
// 00575fac  3bc1                 cmp eax, ecx
// 00575fae  7502                 jne 0x575fb2
// 00575fb0  8bc2                 mov eax, edx
// 00575fb2  3bf0                 cmp esi, eax
// 00575fb4  7c02                 jl 0x575fb8
// 00575fb6  8bf0                 mov esi, eax
// 00575fb8  3bf1                 cmp esi, ecx
// 00575fba  7502                 jne 0x575fbe
// 00575fbc  8bf2                 mov esi, edx
// 00575fbe  8bd6                 mov edx, esi
// 00575fc0  2bd5                 sub edx, ebp
// 00575fc2  52                   push edx
// 00575fc3  55                   push ebp
// 00575fc4  8d44243c             lea eax, [esp + 0x3c]
// 00575fc8  50                   push eax
// 00575fc9  8d4c2424             lea ecx, [esp + 0x24]
// 00575fcd  ff1570e48900         call dword ptr [0x89e470]
// 00575fd3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00575fd7  50                   push eax
// 00575fd8  885c245c             mov byte ptr [esp + 0x5c], bl
// 00575fdc  e89f69ffff           call 0x56c980
// 00575fe1  8d4c2434             lea ecx, [esp + 0x34]
// 00575fe5  c644245800           mov byte ptr [esp + 0x58], 0
// 00575fea  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575ff0  46                   inc esi
// 00575ff1  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00575ff5  0f826affffff         jb 0x575f65
// 00575ffb  8d4c2418             lea ecx, [esp + 0x18]
// 00575fff  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00576007  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057600d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00576011  5f                   pop edi
// 00576012  5d                   pop ebp
// 00576013  5b                   pop ebx
// 00576014  5e                   pop esi
// 00576015  64890d00000000       mov dword ptr fs:[0], ecx
// 0057601c  83c44c               add esp, 0x4c
// 0057601f  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?parseFilename@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@AAV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
