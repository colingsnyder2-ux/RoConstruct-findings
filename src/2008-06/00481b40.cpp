// roc 2008-06 00481b40  unit: G3D::Win32Window  size: 1016 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481b40
//
// 00481b40  83ec2c               sub esp, 0x2c
// 00481b43  53                   push ebx
// 00481b44  55                   push ebp
// 00481b45  56                   push esi
// 00481b46  57                   push edi
// 00481b47  bb01000000           mov ebx, 1
// 00481b4c  53                   push ebx
// 00481b4d  6a00                 push 0
// 00481b4f  8be9                 mov ebp, ecx
// 00481b51  8b85e8010000         mov eax, dword ptr [ebp + 0x1e8]
// 00481b57  6a00                 push 0
// 00481b59  50                   push eax
// 00481b5a  8d4c2430             lea ecx, [esp + 0x30]
// 00481b5e  51                   push ecx
// 00481b5f  ff15b02d8000         call dword ptr [0x802db0]
// 00481b65  8b742440             mov esi, dword ptr [esp + 0x40]
// 00481b69  85c0                 test eax, eax
// 00481b6b  0f84b9000000         je 0x481c2a
// 00481b71  8d542420             lea edx, [esp + 0x20]
// 00481b75  52                   push edx
// 00481b76  ff15c42c8000         call dword ptr [0x802cc4]
// 00481b7c  8d442420             lea eax, [esp + 0x20]
// 00481b80  50                   push eax
// 00481b81  ff15c82c8000         call dword ptr [0x802cc8]
// 00481b87  8b442424             mov eax, dword ptr [esp + 0x24]
// 00481b8b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00481b8f  3d12010000           cmp eax, 0x112
// 00481b94  751a                 jne 0x481bb0
// 00481b96  8bcf                 mov ecx, edi
// 00481b98  81e1f0ff0000         and ecx, 0xfff0
// 00481b9e  c60602               mov byte ptr [esi], 2
// 00481ba1  885e02               mov byte ptr [esi + 2], bl
// 00481ba4  81f900f10000         cmp ecx, 0xf100
// 00481baa  0f8414010000         je 0x481cc4
// 00481bb0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00481bb4  3b95e8010000         cmp edx, dword ptr [ebp + 0x1e8]
// 00481bba  754f                 jne 0x481c0b
// 00481bbc  3d12010000           cmp eax, 0x112
// 00481bc1  0f8717010000         ja 0x481cde
// 00481bc7  0f84df000000         je 0x481cac
// 00481bcd  0500ffffff           add eax, 0xffffff00
// 00481bd2  83f805               cmp eax, 5
// 00481bd5  7734                 ja 0x481c0b
// 00481bd7  ff2485001f4800       jmp dword ptr [eax*4 + 0x481f00]
// 00481bde  c60602               mov byte ptr [esi], 2
// 00481be1  885e02               mov byte ptr [esi + 2], bl
// 00481be4  80bde401000000       cmp byte ptr [ebp + 0x1e4], 0
// 00481beb  740f                 je 0x481bfc
// 00481bed  8164242cffffffbf     and dword ptr [esp + 0x2c], 0xbfffffff
// 00481bf5  c685e401000000       mov byte ptr [ebp + 0x1e4], 0
// 00481bfc  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00481c00  a900000040           test eax, 0x40000000
// 00481c05  0f84e8000000         je 0x481cf3
// 00481c0b  8b85e8010000         mov eax, dword ptr [ebp + 0x1e8]
// 00481c11  53                   push ebx
// 00481c12  6a00                 push 0
// 00481c14  6a00                 push 0
// 00481c16  50                   push eax
// 00481c17  8d4c2430             lea ecx, [esp + 0x30]
// 00481c1b  51                   push ecx
// 00481c1c  ff15b02d8000         call dword ptr [0x802db0]
// 00481c22  85c0                 test eax, eax
// 00481c24  0f8547ffffff         jne 0x481b71
// 00481c2a  80bdaf00000000       cmp byte ptr [ebp + 0xaf], 0
// 00481c31  0f84c6010000         je 0x481dfd
// 00481c37  5f                   pop edi
// 00481c38  c685af00000000       mov byte ptr [ebp + 0xaf], 0
// 00481c3f  c6060c               mov byte ptr [esi], 0xc
// 00481c42  5e                   pop esi
// 00481c43  5d                   pop ebp
// 00481c44  8ac3                 mov al, bl
// 00481c46  5b                   pop ebx
// 00481c47  83c42c               add esp, 0x2c
// 00481c4a  c20400               ret 4
// 00481c4d  c60602               mov byte ptr [esi], 2
// 00481c50  885e02               mov byte ptr [esi + 2], bl
// 00481c53  83ff79               cmp edi, 0x79
// 00481c56  75b3                 jne 0x481c0b
// 00481c58  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00481c5c  a900000040           test eax, 0x40000000
// 00481c61  75a8                 jne 0x481c0b
// 00481c63  e8a8d4ffff           call 0x47f110
// 00481c68  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00481c6c  5f                   pop edi
// 00481c6d  5e                   pop esi
// 00481c6e  889c29b3000000       mov byte ptr [ecx + ebp + 0xb3], bl
// 00481c75  5d                   pop ebp
// 00481c76  8ac3                 mov al, bl
// 00481c78  5b                   pop ebx
// 00481c79  83c42c               add esp, 0x2c
// 00481c7c  c20400               ret 4
// 00481c7f  c60603               mov byte ptr [esi], 3
// 00481c82  c6460200             mov byte ptr [esi + 2], 0
// 00481c86  83ff79               cmp edi, 0x79
// 00481c89  7580                 jne 0x481c0b
// 00481c8b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00481c8f  e87cd4ffff           call 0x47f110
// 00481c94  8b542428             mov edx, dword ptr [esp + 0x28]
// 00481c98  5f                   pop edi
// 00481c99  5e                   pop esi
// 00481c9a  c6842ab300000000     mov byte ptr [edx + ebp + 0xb3], 0
// 00481ca2  5d                   pop ebp
// 00481ca3  8ac3                 mov al, bl
// 00481ca5  5b                   pop ebx
// 00481ca6  83c42c               add esp, 0x2c
// 00481ca9  c20400               ret 4
// 00481cac  81e7f0ff0000         and edi, 0xfff0
// 00481cb2  c60602               mov byte ptr [esi], 2
// 00481cb5  885e02               mov byte ptr [esi + 2], bl
// 00481cb8  81ff00f10000         cmp edi, 0xf100
// 00481cbe  0f8547ffffff         jne 0x481c0b
// 00481cc4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00481cc8  bf12000000           mov edi, 0x12
// 00481ccd  e83ed4ffff           call 0x47f110
// 00481cd2  5f                   pop edi
// 00481cd3  5e                   pop esi
// 00481cd4  5d                   pop ebp
// 00481cd5  8ac3                 mov al, bl
// 00481cd7  5b                   pop ebx
// 00481cd8  83c42c               add esp, 0x2c
// 00481cdb  c20400               ret 4
// 00481cde  05fffdffff           add eax, 0xfffffdff
// 00481ce3  83f807               cmp eax, 7
// 00481ce6  0f871fffffff         ja 0x481c0b
// 00481cec  ff2485181f4800       jmp dword ptr [eax*4 + 0x481f18]
// 00481cf3  e818d4ffff           call 0x47f110
// 00481cf8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00481cfc  5f                   pop edi
// 00481cfd  5e                   pop esi
// 00481cfe  889c2ab3000000       mov byte ptr [edx + ebp + 0xb3], bl
// 00481d05  5d                   pop ebp
// 00481d06  8ac3                 mov al, bl
// 00481d08  5b                   pop ebx
// 00481d09  83c42c               add esp, 0x2c
// 00481d0c  c20400               ret 4
// 00481d0f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00481d13  c60603               mov byte ptr [esi], 3
// 00481d16  c6460200             mov byte ptr [esi + 2], 0
// 00481d1a  e8f1d3ffff           call 0x47f110
// 00481d1f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00481d23  5f                   pop edi
// 00481d24  5e                   pop esi
// 00481d25  c68428b300000000     mov byte ptr [eax + ebp + 0xb3], 0
// 00481d2d  5d                   pop ebp
// 00481d2e  8ac3                 mov al, bl
// 00481d30  5b                   pop ebx
// 00481d31  83c42c               add esp, 0x2c
// 00481d34  c20400               ret 4
// 00481d37  53                   push ebx
// 00481d38  b944010000           mov ecx, 0x144
// 00481d3d  e8ced4ffff           call 0x47f210
// 00481d42  83c404               add esp, 4
// 00481d45  5f                   pop edi
// 00481d46  5e                   pop esi
// 00481d47  889db0000000         mov byte ptr [ebp + 0xb0], bl
// 00481d4d  5d                   pop ebp
// 00481d4e  8ac3                 mov al, bl
// 00481d50  5b                   pop ebx
// 00481d51  83c42c               add esp, 0x2c
// 00481d54  c20400               ret 4
// 00481d57  53                   push ebx
// 00481d58  b945010000           mov ecx, 0x145
// 00481d5d  e8aed4ffff           call 0x47f210
// 00481d62  83c404               add esp, 4
// 00481d65  5f                   pop edi
// 00481d66  5e                   pop esi
// 00481d67  889db1000000         mov byte ptr [ebp + 0xb1], bl
// 00481d6d  5d                   pop ebp
// 00481d6e  8ac3                 mov al, bl
// 00481d70  5b                   pop ebx
// 00481d71  83c42c               add esp, 0x2c
// 00481d74  c20400               ret 4
// 00481d77  53                   push ebx
// 00481d78  b946010000           mov ecx, 0x146
// 00481d7d  e88ed4ffff           call 0x47f210
// 00481d82  83c404               add esp, 4
// 00481d85  5f                   pop edi
// 00481d86  5e                   pop esi
// 00481d87  889db2000000         mov byte ptr [ebp + 0xb2], bl
// 00481d8d  5d                   pop ebp
// 00481d8e  8ac3                 mov al, bl
// 00481d90  5b                   pop ebx
// 00481d91  83c42c               add esp, 0x2c
// 00481d94  c20400               ret 4
// 00481d97  6a00                 push 0
// 00481d99  b944010000           mov ecx, 0x144
// 00481d9e  e86dd4ffff           call 0x47f210
// 00481da3  83c404               add esp, 4
// 00481da6  5f                   pop edi
// 00481da7  5e                   pop esi
// 00481da8  c685b000000000       mov byte ptr [ebp + 0xb0], 0
// 00481daf  5d                   pop ebp
// 00481db0  8ac3                 mov al, bl
// 00481db2  5b                   pop ebx
// 00481db3  83c42c               add esp, 0x2c
// 00481db6  c20400               ret 4
// 00481db9  6a00                 push 0
// 00481dbb  b945010000           mov ecx, 0x145
// 00481dc0  e84bd4ffff           call 0x47f210
// 00481dc5  83c404               add esp, 4
// 00481dc8  5f                   pop edi
// 00481dc9  5e                   pop esi
// 00481dca  c685b100000000       mov byte ptr [ebp + 0xb1], 0
// 00481dd1  5d                   pop ebp
// 00481dd2  8ac3                 mov al, bl
// 00481dd4  5b                   pop ebx
// 00481dd5  83c42c               add esp, 0x2c
// 00481dd8  c20400               ret 4
// 00481ddb  6a00                 push 0
// 00481ddd  b946010000           mov ecx, 0x146
// 00481de2  e829d4ffff           call 0x47f210
// 00481de7  83c404               add esp, 4
// 00481dea  5f                   pop edi
// 00481deb  5e                   pop esi
// 00481dec  c685b200000000       mov byte ptr [ebp + 0xb2], 0
// 00481df3  5d                   pop ebp
// 00481df4  8ac3                 mov al, bl
// 00481df6  5b                   pop ebx
// 00481df7  83c42c               add esp, 0x2c
// 00481dfa  c20400               ret 4
// 00481dfd  8b8de8010000         mov ecx, dword ptr [ebp + 0x1e8]
// 00481e03  8d442410             lea eax, [esp + 0x10]
// 00481e07  50                   push eax
// 00481e08  51                   push ecx
// 00481e09  ff15342e8000         call dword ptr [0x802e34]
// 00481e0f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00481e13  8b442414             mov eax, dword ptr [esp + 0x14]
// 00481e17  8d4c2410             lea ecx, [esp + 0x10]
// 00481e1b  895530               mov dword ptr [ebp + 0x30], edx
// 00481e1e  8b95e8010000         mov edx, dword ptr [ebp + 0x1e8]
// 00481e24  51                   push ecx
// 00481e25  52                   push edx
// 00481e26  894534               mov dword ptr [ebp + 0x34], eax
// 00481e29  ff15842d8000         call dword ptr [0x802d84]
// 00481e2f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00481e33  2b442410             sub eax, dword ptr [esp + 0x10]
// 00481e37  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00481e3b  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00481e3f  807d6500             cmp byte ptr [ebp + 0x65], 0
// 00481e43  8b5530               mov edx, dword ptr [ebp + 0x30]
// 00481e46  894528               mov dword ptr [ebp + 0x28], eax
// 00481e49  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00481e4c  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00481e4f  8995cc010000         mov dword ptr [ebp + 0x1cc], edx
// 00481e55  8985d0010000         mov dword ptr [ebp + 0x1d0], eax
// 00481e5b  7442                 je 0x481e9f
// 00481e5d  0fb64d64             movzx ecx, byte ptr [ebp + 0x64]
// 00481e61  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 00481e67  f7d9                 neg ecx
// 00481e69  1bc9                 sbb ecx, ecx
// 00481e6b  83e119               and ecx, 0x19
// 00481e6e  83c107               add ecx, 7
// 00481e71  51                   push ecx
// 00481e72  ffd7                 call edi
// 00481e74  0fb65564             movzx edx, byte ptr [ebp + 0x64]
// 00481e78  0185cc010000         add dword ptr [ebp + 0x1cc], eax
// 00481e7e  f7da                 neg edx
// 00481e80  1bd2                 sbb edx, edx
// 00481e82  83e219               and edx, 0x19
// 00481e85  83c208               add edx, 8
// 00481e88  52                   push edx
// 00481e89  ffd7                 call edi
// 00481e8b  6a04                 push 4
// 00481e8d  89442444             mov dword ptr [esp + 0x44], eax
// 00481e91  ffd7                 call edi
// 00481e93  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00481e97  03c8                 add ecx, eax
// 00481e99  018dd0010000         add dword ptr [ebp + 0x1d0], ecx
// 00481e9f  83bddc01000000       cmp dword ptr [ebp + 0x1dc], 0
// 00481ea6  7e49                 jle 0x481ef1
// 00481ea8  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 00481eae  8b95d8010000         mov edx, dword ptr [ebp + 0x1d8]
// 00481eb4  8d8dd8010000         lea ecx, [ebp + 0x1d8]
// 00481eba  8d0480               lea eax, [eax + eax*4]
// 00481ebd  8d4482ec             lea eax, [edx + eax*4 - 0x14]
// 00481ec1  8b10                 mov edx, dword ptr [eax]
// 00481ec3  8916                 mov dword ptr [esi], edx
// 00481ec5  8b5004               mov edx, dword ptr [eax + 4]
// 00481ec8  895604               mov dword ptr [esi + 4], edx
// 00481ecb  8b5008               mov edx, dword ptr [eax + 8]
// 00481ece  895608               mov dword ptr [esi + 8], edx
// 00481ed1  8b500c               mov edx, dword ptr [eax + 0xc]
// 00481ed4  89560c               mov dword ptr [esi + 0xc], edx
// 00481ed7  8b4010               mov eax, dword ptr [eax + 0x10]
// 00481eda  53                   push ebx
// 00481edb  6a00                 push 0
// 00481edd  894610               mov dword ptr [esi + 0x10], eax
// 00481ee0  e8bbe5ffff           call 0x4804a0
// 00481ee5  5f                   pop edi
// 00481ee6  5e                   pop esi
// 00481ee7  5d                   pop ebp
// 00481ee8  8ac3                 mov al, bl
// 00481eea  5b                   pop ebx
// 00481eeb  83c42c               add esp, 0x2c
// 00481eee  c20400               ret 4
// 00481ef1  5f                   pop edi
// 00481ef2  5e                   pop esi
// 00481ef3  5d                   pop ebp
// 00481ef4  32c0                 xor al, al
// 00481ef6  5b                   pop ebx
// 00481ef7  83c42c               add esp, 0x2c
// 00481efa  c20400               ret 4
// 00481efd  8d4900               lea ecx, [ecx]
// 00481f00  de1b                 ficomp word ptr [ebx]
// 00481f02  48                   dec eax
// 00481f03  000f                 add byte ptr [edi], cl
// 00481f05  1d48000b1c           sbb eax, 0x1c0b0048
// 00481f0a  48                   dec eax
// 00481f0b  000b                 add byte ptr [ebx], cl
// 00481f0d  1c48                 sbb al, 0x48
// 00481f0f  004d1c               add byte ptr [ebp + 0x1c], cl
// 00481f12  48                   dec eax
// 00481f13  007f1c               add byte ptr [edi + 0x1c], bh
// 00481f16  48                   dec eax
// 00481f17  0037                 add byte ptr [edi], dh
// 00481f19  1d4800971d           sbb eax, 0x1d970048
// 00481f1e  48                   dec eax
// 00481f1f  000b                 add byte ptr [ebx], cl
// 00481f21  1c48                 sbb al, 0x48
// 00481f23  00771d               add byte ptr [edi + 0x1d], dh
// 00481f26  48                   dec eax
// 00481f27  00db                 add bl, bl
// 00481f29  1d48000b1c           sbb eax, 0x1c0b0048
// 00481f2e  48                   dec eax
// 00481f2f  00571d               add byte ptr [edi + 0x1d], dl
// 00481f32  48                   dec eax
// library rbxgs/roc_expanded_parser_native_family_4cf965f3a92f49c0.cpp (function ?pollEvent@Win32Window@G3D@@UAE_NAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_expanded_parser_native_family_4cf965f3a92f49c0.cpp
