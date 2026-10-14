// roc 2008-06 007b9940  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 2872 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9940
//
// 007b9940  6aff                 push -1
// 007b9942  68a8e67e00           push 0x7ee6a8
// 007b9947  64a100000000         mov eax, dword ptr fs:[0]
// 007b994d  50                   push eax
// 007b994e  64892500000000       mov dword ptr fs:[0], esp
// 007b9955  81ec84000000         sub esp, 0x84
// 007b995b  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007b9962  53                   push ebx
// 007b9963  55                   push ebp
// 007b9964  56                   push esi
// 007b9965  57                   push edi
// 007b9966  6a01                 push 1
// 007b9968  33f6                 xor esi, esi
// 007b996a  56                   push esi
// 007b996b  e8c03ad9ff           call 0x54d430
// 007b9970  8bbc24b4000000       mov edi, dword ptr [esp + 0xb4]
// 007b9977  6a01                 push 1
// 007b9979  56                   push esi
// 007b997a  8bcf                 mov ecx, edi
// 007b997c  e8ef62d9ff           call 0x54fc70
// 007b9981  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007b9988  6a01                 push 1
// 007b998a  56                   push esi
// 007b998b  e8503dd9ff           call 0x54d6e0
// 007b9990  b958c19600           mov ecx, 0x96c158
// 007b9995  e8b6fbffff           call 0x7b9550
// 007b999a  6a10                 push 0x10
// 007b999c  6a50                 push 0x50
// 007b999e  c70564c1960014000000 mov dword ptr [0x96c164], 0x14
// 007b99a8  89355cc19600         mov dword ptr [0x96c15c], esi
// 007b99ae  e8cdebd4ff           call 0x508580
// 007b99b3  8b0d64c19600         mov ecx, dword ptr [0x96c164]
// 007b99b9  8d148d00000000       lea edx, [ecx*4]
// 007b99c0  52                   push edx
// 007b99c1  56                   push esi
// 007b99c2  50                   push eax
// 007b99c3  a360c19600           mov dword ptr [0x96c160], eax
// 007b99c8  e863f0d4ff           call 0x508a30
// 007b99cd  83c414               add esp, 0x14
// 007b99d0  8974245c             mov dword ptr [esp + 0x5c], esi
// 007b99d4  89742460             mov dword ptr [esp + 0x60], esi
// 007b99d8  89742458             mov dword ptr [esp + 0x58], esi
// 007b99dc  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007b99e3  8b4004               mov eax, dword ptr [eax + 4]
// 007b99e6  6a01                 push 1
// 007b99e8  50                   push eax
// 007b99e9  8bcf                 mov ecx, edi
// 007b99eb  89b424a4000000       mov dword ptr [esp + 0xa4], esi
// 007b99f2  e87962d9ff           call 0x54fc70
// 007b99f7  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007b99fe  8b4104               mov eax, dword ptr [ecx + 4]
// 007b9a01  3bc6                 cmp eax, esi
// 007b9a03  89742418             mov dword ptr [esp + 0x18], esi
// 007b9a07  0f8e3c020000         jle 0x7b9c49
// 007b9a0d  8974241c             mov dword ptr [esp + 0x1c], esi
// 007b9a11  d9ee                 fldz 
// 007b9a13  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 007b9a1a  8b4604               mov eax, dword ptr [esi + 4]
// 007b9a1d  d9542464             fst dword ptr [esp + 0x64]
// 007b9a21  d9542468             fst dword ptr [esp + 0x68]
// 007b9a25  89442410             mov dword ptr [esp + 0x10], eax
// 007b9a29  d954246c             fst dword ptr [esp + 0x6c]
// 007b9a2d  6a00                 push 0
// 007b9a2f  d9542474             fst dword ptr [esp + 0x74]
// 007b9a33  40                   inc eax
// 007b9a34  d9542478             fst dword ptr [esp + 0x78]
// 007b9a38  50                   push eax
// 007b9a39  d9942480000000       fst dword ptr [esp + 0x80]
// 007b9a40  8bce                 mov ecx, esi
// 007b9a42  d9942484000000       fst dword ptr [esp + 0x84]
// 007b9a49  d9942488000000       fst dword ptr [esp + 0x88]
// 007b9a50  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 007b9a57  e8843cd9ff           call 0x54d6e0
// 007b9a5c  8b4604               mov eax, dword ptr [esi + 4]
// 007b9a5f  8d1440               lea edx, [eax + eax*2]
// 007b9a62  8b06                 mov eax, dword ptr [esi]
// 007b9a64  8d4cd0e8             lea ecx, [eax + edx*8 - 0x18]
// 007b9a68  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b9a6c  894c2424             mov dword ptr [esp + 0x24], ecx
// 007b9a70  33ed                 xor ebp, ebp
// 007b9a72  89542414             mov dword ptr [esp + 0x14], edx
// 007b9a76  8d5c246c             lea ebx, [esp + 0x6c]
// 007b9a7a  8d9b00000000         lea ebx, [ebx]
// 007b9a80  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 007b9a87  8b08                 mov ecx, dword ptr [eax]
// 007b9a89  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9a8d  8b3c0a               mov edi, dword ptr [edx + ecx]
// 007b9a90  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b9a94  893ca8               mov dword ptr [eax + ebp*4], edi
// 007b9a97  8b0d605d8700         mov ecx, dword ptr [0x875d60]
// 007b9a9d  894ca80c             mov dword ptr [eax + ebp*4 + 0xc], ecx
// 007b9aa1  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 007b9aa8  8b08                 mov ecx, dword ptr [eax]
// 007b9aaa  8d147f               lea edx, [edi + edi*2]
// 007b9aad  8b44d110             mov eax, dword ptr [ecx + edx*8 + 0x10]
// 007b9ab1  3b44d114             cmp eax, dword ptr [ecx + edx*8 + 0x14]
// 007b9ab5  8d74d10c             lea esi, [ecx + edx*8 + 0xc]
// 007b9ab9  7d14                 jge 0x7b9acf
// 007b9abb  8b16                 mov edx, dword ptr [esi]
// 007b9abd  8d0482               lea eax, [edx + eax*4]
// 007b9ac0  85c0                 test eax, eax
// 007b9ac2  7406                 je 0x7b9aca
// 007b9ac4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b9ac8  8908                 mov dword ptr [eax], ecx
// 007b9aca  ff4604               inc dword ptr [esi + 4]
// 007b9acd  eb3f                 jmp 0x7b9b0e
// 007b9acf  8b0e                 mov ecx, dword ptr [esi]
// 007b9ad1  8d542420             lea edx, [esp + 0x20]
// 007b9ad5  3bd1                 cmp edx, ecx
// 007b9ad7  721d                 jb 0x7b9af6
// 007b9ad9  8d0c81               lea ecx, [ecx + eax*4]
// 007b9adc  3bd1                 cmp edx, ecx
// 007b9ade  7316                 jae 0x7b9af6
// 007b9ae0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b9ae4  8d4c2420             lea ecx, [esp + 0x20]
// 007b9ae8  51                   push ecx
// 007b9ae9  8bce                 mov ecx, esi
// 007b9aeb  89442424             mov dword ptr [esp + 0x24], eax
// 007b9aef  e87c12d9ff           call 0x54ad70
// 007b9af4  eb18                 jmp 0x7b9b0e
// 007b9af6  6a00                 push 0
// 007b9af8  40                   inc eax
// 007b9af9  50                   push eax
// 007b9afa  8bce                 mov ecx, esi
// 007b9afc  e81f65ccff           call 0x480020
// 007b9b01  8b5604               mov edx, dword ptr [esi + 4]
// 007b9b04  8b06                 mov eax, dword ptr [esi]
// 007b9b06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b9b0a  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007b9b0e  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007b9b15  8b08                 mov ecx, dword ptr [eax]
// 007b9b17  8344241404           add dword ptr [esp + 0x14], 4
// 007b9b1c  8d147f               lea edx, [edi + edi*2]
// 007b9b1f  d90491               fld dword ptr [ecx + edx*4]
// 007b9b22  8d0491               lea eax, [ecx + edx*4]
// 007b9b25  d95bf8               fstp dword ptr [ebx - 8]
// 007b9b28  45                   inc ebp
// 007b9b29  d94004               fld dword ptr [eax + 4]
// 007b9b2c  83c30c               add ebx, 0xc
// 007b9b2f  83fd03               cmp ebp, 3
// 007b9b32  d95bf0               fstp dword ptr [ebx - 0x10]
// 007b9b35  d94008               fld dword ptr [eax + 8]
// 007b9b38  d95bf4               fstp dword ptr [ebx - 0xc]
// 007b9b3b  0f8c3fffffff         jl 0x7b9a80
// 007b9b41  d944247c             fld dword ptr [esp + 0x7c]
// 007b9b45  8d542434             lea edx, [esp + 0x34]
// 007b9b49  d9442464             fld dword ptr [esp + 0x64]
// 007b9b4d  52                   push edx
// 007b9b4e  dce9                 fsub st(1), st(0)
// 007b9b50  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007b9b57  d9842484000000       fld dword ptr [esp + 0x84]
// 007b9b5e  d944246c             fld dword ptr [esp + 0x6c]
// 007b9b62  dce9                 fsub st(1), st(0)
// 007b9b64  d9842488000000       fld dword ptr [esp + 0x88]
// 007b9b6b  d9442470             fld dword ptr [esp + 0x70]
// 007b9b6f  dce9                 fsub st(1), st(0)
// 007b9b71  d9442474             fld dword ptr [esp + 0x74]
// 007b9b75  dee5                 fsubrp st(5)
// 007b9b77  d9442478             fld dword ptr [esp + 0x78]
// 007b9b7b  dee3                 fsubrp st(3)
// 007b9b7d  d86c247c             fsubr dword ptr [esp + 0x7c]
// 007b9b81  d9c2                 fld st(2)
// 007b9b83  d8ca                 fmul st(2)
// 007b9b85  d9c1                 fld st(1)
// 007b9b87  d8cd                 fmul st(5)
// 007b9b89  dee9                 fsubp st(1)
// 007b9b8b  d9c9                 fxch st(1)
// 007b9b8d  d8ce                 fmul st(6)
// 007b9b8f  d9c5                 fld st(5)
// 007b9b91  decb                 fmulp st(3)
// 007b9b93  dee2                 fsubrp st(2)
// 007b9b95  d9cc                 fxch st(4)
// 007b9b97  decb                 fmulp st(3)
// 007b9b99  d9c9                 fxch st(1)
// 007b9b9b  decc                 fmulp st(4)
// 007b9b9d  d9c9                 fxch st(1)
// 007b9b9f  dee3                 fsubrp st(3)
// 007b9ba1  d9c9                 fxch st(1)
// 007b9ba3  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 007b9baa  d99c2490000000       fstp dword ptr [esp + 0x90]
// 007b9bb1  d99c2494000000       fstp dword ptr [esp + 0x94]
// 007b9bb8  e893f8ffff           call 0x7b9450
// 007b9bbd  50                   push eax
// 007b9bbe  8d4c245c             lea ecx, [esp + 0x5c]
// 007b9bc2  e88993d4ff           call 0x502f50
// 007b9bc7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b9bcb  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 007b9bd2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b9bd6  be305d8700           mov esi, 0x875d30
// 007b9bdb  eb03                 jmp 0x7b9be0
// 007b9bdd  8d4900               lea ecx, [ecx]
// 007b9be0  8b4500               mov eax, dword ptr [ebp]
// 007b9be3  8b16                 mov edx, dword ptr [esi]
// 007b9be5  8b0c07               mov ecx, dword ptr [edi + eax]
// 007b9be8  03d3                 add edx, ebx
// 007b9bea  8b0490               mov eax, dword ptr [eax + edx*4]
// 007b9bed  3bc8                 cmp ecx, eax
// 007b9bef  7f14                 jg 0x7b9c05
// 007b9bf1  89442450             mov dword ptr [esp + 0x50], eax
// 007b9bf5  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b9bf9  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007b9bfd  50                   push eax
// 007b9bfe  8d4c2450             lea ecx, [esp + 0x50]
// 007b9c02  51                   push ecx
// 007b9c03  eb14                 jmp 0x7b9c19
// 007b9c05  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b9c09  f7d2                 not edx
// 007b9c0b  8944244c             mov dword ptr [esp + 0x4c], eax
// 007b9c0f  52                   push edx
// 007b9c10  8d442450             lea eax, [esp + 0x50]
// 007b9c14  894c2454             mov dword ptr [esp + 0x54], ecx
// 007b9c18  50                   push eax
// 007b9c19  b958c19600           mov ecx, 0x96c158
// 007b9c1e  e86dfcffff           call 0x7b9890
// 007b9c23  83c604               add esi, 4
// 007b9c26  83c704               add edi, 4
// 007b9c29  81fe3c5d8700         cmp esi, 0x875d3c
// 007b9c2f  7caf                 jl 0x7b9be0
// 007b9c31  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b9c35  83c303               add ebx, 3
// 007b9c38  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 007b9c3b  895c2418             mov dword ptr [esp + 0x18], ebx
// 007b9c3f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007b9c43  0f8cc8fdffff         jl 0x7b9a11
// 007b9c49  8b3564c19600         mov esi, dword ptr [0x96c164]
// 007b9c4f  8b1560c19600         mov edx, dword ptr [0x96c160]
// 007b9c55  33ff                 xor edi, edi
// 007b9c57  89742440             mov dword ptr [esp + 0x40], esi
// 007b9c5b  89542444             mov dword ptr [esp + 0x44], edx
// 007b9c5f  3bf7                 cmp esi, edi
// 007b9c61  742e                 je 0x7b9c91
// 007b9c63  8b0a                 mov ecx, dword ptr [edx]
// 007b9c65  33c0                 xor eax, eax
// 007b9c67  89442434             mov dword ptr [esp + 0x34], eax
// 007b9c6b  894c2438             mov dword ptr [esp + 0x38], ecx
// 007b9c6f  88442448             mov byte ptr [esp + 0x48], al
// 007b9c73  3bcf                 cmp ecx, edi
// 007b9c75  751f                 jne 0x7b9c96
// 007b9c77  40                   inc eax
// 007b9c78  3bc6                 cmp eax, esi
// 007b9c7a  7d11                 jge 0x7b9c8d
// 007b9c7c  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 007b9c7f  894c2438             mov dword ptr [esp + 0x38], ecx
// 007b9c83  3bcf                 cmp ecx, edi
// 007b9c85  74f0                 je 0x7b9c77
// 007b9c87  89442434             mov dword ptr [esp + 0x34], eax
// 007b9c8b  eb09                 jmp 0x7b9c96
// 007b9c8d  89442434             mov dword ptr [esp + 0x34], eax
// 007b9c91  c644244801           mov byte ptr [esp + 0x48], 1
// 007b9c96  897c242c             mov dword ptr [esp + 0x2c], edi
// 007b9c9a  897c2430             mov dword ptr [esp + 0x30], edi
// 007b9c9e  897c2428             mov dword ptr [esp + 0x28], edi
// 007b9ca2  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 007b9caa  8d9b00000000         lea ebx, [ebx]
// 007b9cb0  807c244801           cmp byte ptr [esp + 0x48], 1
// 007b9cb5  0f848c040000         je 0x7ba147
// 007b9cbb  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b9cbf  83c00c               add eax, 0xc
// 007b9cc2  83780400             cmp dword ptr [eax + 4], 0
// 007b9cc6  89442414             mov dword ptr [esp + 0x14], eax
// 007b9cca  0f8e2e040000         jle 0x7ba0fe
// 007b9cd0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b9cd4  8b4104               mov eax, dword ptr [ecx + 4]
// 007b9cd7  8b11                 mov edx, dword ptr [ecx]
// 007b9cd9  8b6c82fc             mov ebp, dword ptr [edx + eax*4 - 4]
// 007b9cdd  6a00                 push 0
// 007b9cdf  48                   dec eax
// 007b9ce0  50                   push eax
// 007b9ce1  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007b9ce5  e83663ccff           call 0x480020
// 007b9cea  8bc5                 mov eax, ebp
// 007b9cec  85ed                 test ebp, ebp
// 007b9cee  7d02                 jge 0x7b9cf2
// 007b9cf0  f7d0                 not eax
// 007b9cf2  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b9cf6  dd0548888200         fld qword ptr [0x828848]
// 007b9cfc  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9d00  8d0440               lea eax, [eax + eax*2]
// 007b9d03  8d0c81               lea ecx, [ecx + eax*4]
// 007b9d06  8b4204               mov eax, dword ptr [edx + 4]
// 007b9d09  8d70ff               lea esi, [eax - 1]
// 007b9d0c  83cfff               or edi, 0xffffffff
// 007b9d0f  8d4601               lea eax, [esi + 1]
// 007b9d12  32db                 xor bl, bl
// 007b9d14  83f804               cmp eax, 4
// 007b9d17  897c2418             mov dword ptr [esp + 0x18], edi
// 007b9d1b  0f8cd8010000         jl 0x7b9ef9
// 007b9d21  33d2                 xor edx, edx
// 007b9d23  85ed                 test ebp, ebp
// 007b9d25  0f9dc2               setge dl
// 007b9d28  8d46fe               lea eax, [esi - 2]
// 007b9d2b  8944241c             mov dword ptr [esp + 0x1c], eax
// 007b9d2f  89542410             mov dword ptr [esp + 0x10], edx
// 007b9d33  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9d37  8b12                 mov edx, dword ptr [edx]
// 007b9d39  8d0482               lea eax, [edx + eax*4]
// 007b9d3c  89442414             mov dword ptr [esp + 0x14], eax
// 007b9d40  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9d44  8b5208               mov edx, dword ptr [edx + 8]
// 007b9d47  33c0                 xor eax, eax
// 007b9d49  85d2                 test edx, edx
// 007b9d4b  0f9dc0               setge al
// 007b9d4e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007b9d52  744d                 je 0x7b9da1
// 007b9d54  8bc2                 mov eax, edx
// 007b9d56  85d2                 test edx, edx
// 007b9d58  7d02                 jge 0x7b9d5c
// 007b9d5a  f7d0                 not eax
// 007b9d5c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007b9d60  8d0440               lea eax, [eax + eax*2]
// 007b9d63  d9448508             fld dword ptr [ebp + eax*4 + 8]
// 007b9d67  8d448500             lea eax, [ebp + eax*4]
// 007b9d6b  d84908               fmul dword ptr [ecx + 8]
// 007b9d6e  d94004               fld dword ptr [eax + 4]
// 007b9d71  d84904               fmul dword ptr [ecx + 4]
// 007b9d74  dec1                 faddp st(1)
// 007b9d76  d901                 fld dword ptr [ecx]
// 007b9d78  d808                 fmul dword ptr [eax]
// 007b9d7a  dec1                 faddp st(1)
// 007b9d7c  84db                 test bl, bl
// 007b9d7e  7413                 je 0x7b9d93
// 007b9d80  d8d1                 fcom st(1)
// 007b9d82  dfe0                 fnstsw ax
// 007b9d84  f6c441               test ah, 0x41
// 007b9d87  7516                 jne 0x7b9d9f
// 007b9d89  ddd9                 fstp st(1)
// 007b9d8b  8bfa                 mov edi, edx
// 007b9d8d  89742418             mov dword ptr [esp + 0x18], esi
// 007b9d91  eb0e                 jmp 0x7b9da1
// 007b9d93  ddd9                 fstp st(1)
// 007b9d95  b301                 mov bl, 1
// 007b9d97  8bfa                 mov edi, edx
// 007b9d99  89742418             mov dword ptr [esp + 0x18], esi
// 007b9d9d  eb02                 jmp 0x7b9da1
// 007b9d9f  ddd8                 fstp st(0)
// 007b9da1  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9da5  8b5204               mov edx, dword ptr [edx + 4]
// 007b9da8  33c0                 xor eax, eax
// 007b9daa  85d2                 test edx, edx
// 007b9dac  0f9dc0               setge al
// 007b9daf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007b9db3  7457                 je 0x7b9e0c
// 007b9db5  8bc2                 mov eax, edx
// 007b9db7  85d2                 test edx, edx
// 007b9db9  7d02                 jge 0x7b9dbd
// 007b9dbb  f7d0                 not eax
// 007b9dbd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007b9dc1  8d0440               lea eax, [eax + eax*2]
// 007b9dc4  d9448508             fld dword ptr [ebp + eax*4 + 8]
// 007b9dc8  8d448500             lea eax, [ebp + eax*4]
// 007b9dcc  d84908               fmul dword ptr [ecx + 8]
// 007b9dcf  d94004               fld dword ptr [eax + 4]
// 007b9dd2  d84904               fmul dword ptr [ecx + 4]
// 007b9dd5  dec1                 faddp st(1)
// 007b9dd7  d901                 fld dword ptr [ecx]
// 007b9dd9  d808                 fmul dword ptr [eax]
// 007b9ddb  dec1                 faddp st(1)
// 007b9ddd  84db                 test bl, bl
// 007b9ddf  7418                 je 0x7b9df9
// 007b9de1  d8d1                 fcom st(1)
// 007b9de3  dfe0                 fnstsw ax
// 007b9de5  f6c441               test ah, 0x41
// 007b9de8  7520                 jne 0x7b9e0a
// 007b9dea  8bfa                 mov edi, edx
// 007b9dec  ddd9                 fstp st(1)
// 007b9dee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b9df2  42                   inc edx
// 007b9df3  89542418             mov dword ptr [esp + 0x18], edx
// 007b9df7  eb13                 jmp 0x7b9e0c
// 007b9df9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9dfd  ddd9                 fstp st(1)
// 007b9dff  40                   inc eax
// 007b9e00  b301                 mov bl, 1
// 007b9e02  8bfa                 mov edi, edx
// 007b9e04  89442418             mov dword ptr [esp + 0x18], eax
// 007b9e08  eb02                 jmp 0x7b9e0c
// 007b9e0a  ddd8                 fstp st(0)
// 007b9e0c  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9e10  8b12                 mov edx, dword ptr [edx]
// 007b9e12  33c0                 xor eax, eax
// 007b9e14  85d2                 test edx, edx
// 007b9e16  0f9dc0               setge al
// 007b9e19  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007b9e1d  7455                 je 0x7b9e74
// 007b9e1f  8bc2                 mov eax, edx
// 007b9e21  85d2                 test edx, edx
// 007b9e23  7d02                 jge 0x7b9e27
// 007b9e25  f7d0                 not eax
// 007b9e27  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007b9e2b  8d0440               lea eax, [eax + eax*2]
// 007b9e2e  d9448508             fld dword ptr [ebp + eax*4 + 8]
// 007b9e32  8d448500             lea eax, [ebp + eax*4]
// 007b9e36  d84908               fmul dword ptr [ecx + 8]
// 007b9e39  d94004               fld dword ptr [eax + 4]
// 007b9e3c  d84904               fmul dword ptr [ecx + 4]
// 007b9e3f  dec1                 faddp st(1)
// 007b9e41  d901                 fld dword ptr [ecx]
// 007b9e43  d808                 fmul dword ptr [eax]
// 007b9e45  dec1                 faddp st(1)
// 007b9e47  84db                 test bl, bl
// 007b9e49  7417                 je 0x7b9e62
// 007b9e4b  d8d1                 fcom st(1)
// 007b9e4d  dfe0                 fnstsw ax
// 007b9e4f  f6c441               test ah, 0x41
// 007b9e52  751e                 jne 0x7b9e72
// 007b9e54  8bfa                 mov edi, edx
// 007b9e56  ddd9                 fstp st(1)
// 007b9e58  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b9e5c  89542418             mov dword ptr [esp + 0x18], edx
// 007b9e60  eb12                 jmp 0x7b9e74
// 007b9e62  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9e66  ddd9                 fstp st(1)
// 007b9e68  b301                 mov bl, 1
// 007b9e6a  8bfa                 mov edi, edx
// 007b9e6c  89442418             mov dword ptr [esp + 0x18], eax
// 007b9e70  eb02                 jmp 0x7b9e74
// 007b9e72  ddd8                 fstp st(0)
// 007b9e74  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9e78  8b52fc               mov edx, dword ptr [edx - 4]
// 007b9e7b  33c0                 xor eax, eax
// 007b9e7d  85d2                 test edx, edx
// 007b9e7f  0f9dc0               setge al
// 007b9e82  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007b9e86  7457                 je 0x7b9edf
// 007b9e88  8bc2                 mov eax, edx
// 007b9e8a  85d2                 test edx, edx
// 007b9e8c  7d02                 jge 0x7b9e90
// 007b9e8e  f7d0                 not eax
// 007b9e90  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007b9e94  8d0440               lea eax, [eax + eax*2]
// 007b9e97  d9448508             fld dword ptr [ebp + eax*4 + 8]
// 007b9e9b  8d448500             lea eax, [ebp + eax*4]
// 007b9e9f  d84908               fmul dword ptr [ecx + 8]
// 007b9ea2  d94004               fld dword ptr [eax + 4]
// 007b9ea5  d84904               fmul dword ptr [ecx + 4]
// 007b9ea8  dec1                 faddp st(1)
// 007b9eaa  d901                 fld dword ptr [ecx]
// 007b9eac  d808                 fmul dword ptr [eax]
// 007b9eae  dec1                 faddp st(1)
// 007b9eb0  84db                 test bl, bl
// 007b9eb2  7418                 je 0x7b9ecc
// 007b9eb4  d8d1                 fcom st(1)
// 007b9eb6  dfe0                 fnstsw ax
// 007b9eb8  f6c441               test ah, 0x41
// 007b9ebb  7520                 jne 0x7b9edd
// 007b9ebd  8bfa                 mov edi, edx
// 007b9ebf  ddd9                 fstp st(1)
// 007b9ec1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b9ec5  4a                   dec edx
// 007b9ec6  89542418             mov dword ptr [esp + 0x18], edx
// 007b9eca  eb13                 jmp 0x7b9edf
// 007b9ecc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9ed0  ddd9                 fstp st(1)
// 007b9ed2  48                   dec eax
// 007b9ed3  b301                 mov bl, 1
// 007b9ed5  8bfa                 mov edi, edx
// 007b9ed7  89442418             mov dword ptr [esp + 0x18], eax
// 007b9edb  eb02                 jmp 0x7b9edf
// 007b9edd  ddd8                 fstp st(0)
// 007b9edf  836c241410           sub dword ptr [esp + 0x14], 0x10
// 007b9ee4  836c241c04           sub dword ptr [esp + 0x1c], 4
// 007b9ee9  83ee04               sub esi, 4
// 007b9eec  83fe03               cmp esi, 3
// 007b9eef  0f8d4bfeffff         jge 0x7b9d40
// 007b9ef5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007b9ef9  85f6                 test esi, esi
// 007b9efb  0f8c89000000         jl 0x7b9f8a
// 007b9f01  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b9f05  33d2                 xor edx, edx
// 007b9f07  85ed                 test ebp, ebp
// 007b9f09  0f9dc2               setge dl
// 007b9f0c  83c00c               add eax, 0xc
// 007b9f0f  8b00                 mov eax, dword ptr [eax]
// 007b9f11  89542410             mov dword ptr [esp + 0x10], edx
// 007b9f15  8d14b0               lea edx, [eax + esi*4]
// 007b9f18  89542414             mov dword ptr [esp + 0x14], edx
// 007b9f1c  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b9f20  8b10                 mov edx, dword ptr [eax]
// 007b9f22  33c0                 xor eax, eax
// 007b9f24  85d2                 test edx, edx
// 007b9f26  0f9dc0               setge al
// 007b9f29  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007b9f2d  744d                 je 0x7b9f7c
// 007b9f2f  8bc2                 mov eax, edx
// 007b9f31  85d2                 test edx, edx
// 007b9f33  7d02                 jge 0x7b9f37
// 007b9f35  f7d0                 not eax
// 007b9f37  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007b9f3b  8d0440               lea eax, [eax + eax*2]
// 007b9f3e  d9448508             fld dword ptr [ebp + eax*4 + 8]
// 007b9f42  8d448500             lea eax, [ebp + eax*4]
// 007b9f46  d84908               fmul dword ptr [ecx + 8]
// 007b9f49  d94004               fld dword ptr [eax + 4]
// 007b9f4c  d84904               fmul dword ptr [ecx + 4]
// 007b9f4f  dec1                 faddp st(1)
// 007b9f51  d901                 fld dword ptr [ecx]
// 007b9f53  d808                 fmul dword ptr [eax]
// 007b9f55  dec1                 faddp st(1)
// 007b9f57  84db                 test bl, bl
// 007b9f59  7413                 je 0x7b9f6e
// 007b9f5b  d8d1                 fcom st(1)
// 007b9f5d  dfe0                 fnstsw ax
// 007b9f5f  f6c441               test ah, 0x41
// 007b9f62  7516                 jne 0x7b9f7a
// 007b9f64  ddd9                 fstp st(1)
// 007b9f66  8bfa                 mov edi, edx
// 007b9f68  89742418             mov dword ptr [esp + 0x18], esi
// 007b9f6c  eb0e                 jmp 0x7b9f7c
// 007b9f6e  ddd9                 fstp st(1)
// 007b9f70  b301                 mov bl, 1
// 007b9f72  8bfa                 mov edi, edx
// 007b9f74  89742418             mov dword ptr [esp + 0x18], esi
// 007b9f78  eb02                 jmp 0x7b9f7c
// 007b9f7a  ddd8                 fstp st(0)
// 007b9f7c  836c241404           sub dword ptr [esp + 0x14], 4
// 007b9f81  4e                   dec esi
// 007b9f82  85f6                 test esi, esi
// 007b9f84  7d96                 jge 0x7b9f1c
// 007b9f86  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007b9f8a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b9f8e  ddd8                 fstp st(0)
// 007b9f90  89442410             mov dword ptr [esp + 0x10], eax
// 007b9f94  6a00                 push 0
// 007b9f96  40                   inc eax
// 007b9f97  50                   push eax
// 007b9f98  8d4c2430             lea ecx, [esp + 0x30]
// 007b9f9c  e88f34d9ff           call 0x54d430
// 007b9fa1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b9fa5  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b9fa9  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b9fad  c1e104               shl ecx, 4
// 007b9fb0  8d7411f0             lea esi, [ecx + edx - 0x10]
// 007b9fb4  8b4804               mov ecx, dword ptr [eax + 4]
// 007b9fb7  890e                 mov dword ptr [esi], ecx
// 007b9fb9  8b5008               mov edx, dword ptr [eax + 8]
// 007b9fbc  895604               mov dword ptr [esi + 4], edx
// 007b9fbf  85ed                 test ebp, ebp
// 007b9fc1  7c42                 jl 0x7ba005
// 007b9fc3  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 007b9fca  896e08               mov dword ptr [esi + 8], ebp
// 007b9fcd  a1605d8700           mov eax, dword ptr [0x875d60]
// 007b9fd2  89460c               mov dword ptr [esi + 0xc], eax
// 007b9fd5  8b02                 mov eax, dword ptr [edx]
// 007b9fd7  8d4c6d00             lea ecx, [ebp + ebp*2]
// 007b9fdb  8b2d605d8700         mov ebp, dword ptr [0x875d60]
// 007b9fe1  8d14c8               lea edx, [eax + ecx*8]
// 007b9fe4  33c0                 xor eax, eax
// 007b9fe6  8d4a0c               lea ecx, [edx + 0xc]
// 007b9fe9  8da42400000000       lea esp, [esp]
// 007b9ff0  3929                 cmp dword ptr [ecx], ebp
// 007b9ff2  740b                 je 0x7b9fff
// 007b9ff4  40                   inc eax
// 007b9ff5  83c104               add ecx, 4
// 007b9ff8  83f803               cmp eax, 3
// 007b9ffb  7cf3                 jl 0x7b9ff0
// 007b9ffd  eb4a                 jmp 0x7ba049
// 007b9fff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ba003  eb40                 jmp 0x7ba045
// 007ba005  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007ba00c  8bc5                 mov eax, ebp
// 007ba00e  f7d0                 not eax
// 007ba010  89460c               mov dword ptr [esi + 0xc], eax
// 007ba013  8b15605d8700         mov edx, dword ptr [0x875d60]
// 007ba019  895608               mov dword ptr [esi + 8], edx
// 007ba01c  8b11                 mov edx, dword ptr [ecx]
// 007ba01e  8b2d605d8700         mov ebp, dword ptr [0x875d60]
// 007ba024  8d0440               lea eax, [eax + eax*2]
// 007ba027  8d14c2               lea edx, [edx + eax*8]
// 007ba02a  33c0                 xor eax, eax
// 007ba02c  8d4a0c               lea ecx, [edx + 0xc]
// 007ba02f  90                   nop 
// 007ba030  3929                 cmp dword ptr [ecx], ebp
// 007ba032  740b                 je 0x7ba03f
// 007ba034  40                   inc eax
// 007ba035  83c104               add ecx, 4
// 007ba038  83f803               cmp eax, 3
// 007ba03b  7cf3                 jl 0x7ba030
// 007ba03d  eb0a                 jmp 0x7ba049
// 007ba03f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ba043  f7d1                 not ecx
// 007ba045  894c820c             mov dword ptr [edx + eax*4 + 0xc], ecx
// 007ba049  84db                 test bl, bl
// 007ba04b  0f8498000000         je 0x7ba0e9
// 007ba051  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007ba055  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007ba058  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007ba05b  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 007ba05f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007ba063  83c10c               add ecx, 0xc
// 007ba066  891498               mov dword ptr [eax + ebx*4], edx
// 007ba069  8b4104               mov eax, dword ptr [ecx + 4]
// 007ba06c  6a01                 push 1
// 007ba06e  48                   dec eax
// 007ba06f  50                   push eax
// 007ba070  e8ab5fccff           call 0x480020
// 007ba075  85ff                 test edi, edi
// 007ba077  7c32                 jl 0x7ba0ab
// 007ba079  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 007ba080  897e08               mov dword ptr [esi + 8], edi
// 007ba083  8b02                 mov eax, dword ptr [edx]
// 007ba085  8b35605d8700         mov esi, dword ptr [0x875d60]
// 007ba08b  8d0c7f               lea ecx, [edi + edi*2]
// 007ba08e  8d14c8               lea edx, [eax + ecx*8]
// 007ba091  33c0                 xor eax, eax
// 007ba093  8d4a0c               lea ecx, [edx + 0xc]
// 007ba096  3931                 cmp dword ptr [ecx], esi
// 007ba098  740b                 je 0x7ba0a5
// 007ba09a  40                   inc eax
// 007ba09b  83c104               add ecx, 4
// 007ba09e  83f803               cmp eax, 3
// 007ba0a1  7cf3                 jl 0x7ba096
// 007ba0a3  eb44                 jmp 0x7ba0e9
// 007ba0a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ba0a9  eb3a                 jmp 0x7ba0e5
// 007ba0ab  8bc7                 mov eax, edi
// 007ba0ad  f7d0                 not eax
// 007ba0af  89460c               mov dword ptr [esi + 0xc], eax
// 007ba0b2  8b35605d8700         mov esi, dword ptr [0x875d60]
// 007ba0b8  8d1440               lea edx, [eax + eax*2]
// 007ba0bb  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 007ba0c2  8b08                 mov ecx, dword ptr [eax]
// 007ba0c4  8d14d1               lea edx, [ecx + edx*8]
// 007ba0c7  33c0                 xor eax, eax
// 007ba0c9  8d4a0c               lea ecx, [edx + 0xc]
// 007ba0cc  8d642400             lea esp, [esp]
// 007ba0d0  3931                 cmp dword ptr [ecx], esi
// 007ba0d2  740b                 je 0x7ba0df
// 007ba0d4  40                   inc eax
// 007ba0d5  83c104               add ecx, 4
// 007ba0d8  83f803               cmp eax, 3
// 007ba0db  7cf3                 jl 0x7ba0d0
// 007ba0dd  eb0a                 jmp 0x7ba0e9
// 007ba0df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ba0e3  f7d1                 not ecx
// 007ba0e5  894c820c             mov dword ptr [edx + eax*4 + 0xc], ecx
// 007ba0e9  8b442438             mov eax, dword ptr [esp + 0x38]
// 007ba0ed  83c00c               add eax, 0xc
// 007ba0f0  83780400             cmp dword ptr [eax + 4], 0
// 007ba0f4  89442414             mov dword ptr [esp + 0x14], eax
// 007ba0f8  0f8fd2fbffff         jg 0x7b9cd0
// 007ba0fe  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ba102  8b4218               mov eax, dword ptr [edx + 0x18]
// 007ba105  89442438             mov dword ptr [esp + 0x38], eax
// 007ba109  85c0                 test eax, eax
// 007ba10b  0f859ffbffff         jne 0x7b9cb0
// 007ba111  8b742440             mov esi, dword ptr [esp + 0x40]
// 007ba115  8b542444             mov edx, dword ptr [esp + 0x44]
// 007ba119  8b442434             mov eax, dword ptr [esp + 0x34]
// 007ba11d  8d4900               lea ecx, [ecx]
// 007ba120  40                   inc eax
// 007ba121  3bc6                 cmp eax, esi
// 007ba123  7d14                 jge 0x7ba139
// 007ba125  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 007ba128  894c2438             mov dword ptr [esp + 0x38], ecx
// 007ba12c  85c9                 test ecx, ecx
// 007ba12e  74f0                 je 0x7ba120
// 007ba130  89442434             mov dword ptr [esp + 0x34], eax
// 007ba134  e977fbffff           jmp 0x7b9cb0
// 007ba139  89442434             mov dword ptr [esp + 0x34], eax
// 007ba13d  c644244801           mov byte ptr [esp + 0x48], 1
// 007ba142  e969fbffff           jmp 0x7b9cb0
// 007ba147  b958c19600           mov ecx, 0x96c158
// 007ba14c  e8fff3ffff           call 0x7b9550
// 007ba151  6a10                 push 0x10
// 007ba153  33ed                 xor ebp, ebp
// 007ba155  6a50                 push 0x50
// 007ba157  c70564c1960014000000 mov dword ptr [0x96c164], 0x14
// 007ba161  892d5cc19600         mov dword ptr [0x96c15c], ebp
// 007ba167  e814e4d4ff           call 0x508580
// 007ba16c  8b0d64c19600         mov ecx, dword ptr [0x96c164]
// 007ba172  8d148d00000000       lea edx, [ecx*4]
// 007ba179  52                   push edx
// 007ba17a  55                   push ebp
// 007ba17b  50                   push eax
// 007ba17c  a360c19600           mov dword ptr [0x96c160], eax
// 007ba181  e8aae8d4ff           call 0x508a30
// 007ba186  8b442440             mov eax, dword ptr [esp + 0x40]
// 007ba18a  83c414               add esp, 0x14
// 007ba18d  3bc5                 cmp eax, ebp
// 007ba18f  896c2450             mov dword ptr [esp + 0x50], ebp
// 007ba193  896c2454             mov dword ptr [esp + 0x54], ebp
// 007ba197  896c244c             mov dword ptr [esp + 0x4c], ebp
// 007ba19b  7e16                 jle 0x7ba1b3
// 007ba19d  6a01                 push 1
// 007ba19f  50                   push eax
// 007ba1a0  8d4c2454             lea ecx, [esp + 0x54]
// 007ba1a4  e8775eccff           call 0x480020
// 007ba1a9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ba1ad  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 007ba1b1  eb06                 jmp 0x7ba1b9
// 007ba1b3  33f6                 xor esi, esi
// 007ba1b5  8974244c             mov dword ptr [esp + 0x4c], esi
// 007ba1b9  8b9c24b0000000       mov ebx, dword ptr [esp + 0xb0]
// 007ba1c0  8d48ff               lea ecx, [eax - 1]
// 007ba1c3  6a01                 push 1
// 007ba1c5  894c2428             mov dword ptr [esp + 0x28], ecx
// 007ba1c9  50                   push eax
// 007ba1ca  8bcb                 mov ecx, ebx
// 007ba1cc  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 007ba1d4  e85732d9ff           call 0x54d430
// 007ba1d9  33d2                 xor edx, edx
// 007ba1db  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 007ba1df  7e6d                 jle 0x7ba24e
// 007ba1e1  33ff                 xor edi, edi
// 007ba1e3  eb0b                 jmp 0x7ba1f0
// 007ba1e5  8da42400000000       lea esp, [esp]
// 007ba1ec  8d642400             lea esp, [esp]
// 007ba1f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ba1f4  8b0d605d8700         mov ecx, dword ptr [0x875d60]
// 007ba1fa  394c0708             cmp dword ptr [edi + eax + 8], ecx
// 007ba1fe  7406                 je 0x7ba206
// 007ba200  394c070c             cmp dword ptr [edi + eax + 0xc], ecx
// 007ba204  750e                 jne 0x7ba214
// 007ba206  8b442424             mov eax, dword ptr [esp + 0x24]
// 007ba20a  890496               mov dword ptr [esi + edx*4], eax
// 007ba20d  48                   dec eax
// 007ba20e  89442424             mov dword ptr [esp + 0x24], eax
// 007ba212  eb04                 jmp 0x7ba218
// 007ba214  892c96               mov dword ptr [esi + edx*4], ebp
// 007ba217  45                   inc ebp
// 007ba218  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ba21c  8d0c07               lea ecx, [edi + eax]
// 007ba21f  8b0496               mov eax, dword ptr [esi + edx*4]
// 007ba222  c1e004               shl eax, 4
// 007ba225  0303                 add eax, dword ptr [ebx]
// 007ba227  8b19                 mov ebx, dword ptr [ecx]
// 007ba229  8918                 mov dword ptr [eax], ebx
// 007ba22b  8b5904               mov ebx, dword ptr [ecx + 4]
// 007ba22e  895804               mov dword ptr [eax + 4], ebx
// 007ba231  8b5908               mov ebx, dword ptr [ecx + 8]
// 007ba234  895808               mov dword ptr [eax + 8], ebx
// 007ba237  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007ba23a  8b9c24b0000000       mov ebx, dword ptr [esp + 0xb0]
// 007ba241  42                   inc edx
// 007ba242  89480c               mov dword ptr [eax + 0xc], ecx
// 007ba245  83c710               add edi, 0x10
// 007ba248  3b54242c             cmp edx, dword ptr [esp + 0x2c]
// 007ba24c  7ca2                 jl 0x7ba1f0
// 007ba24e  8bac24ac000000       mov ebp, dword ptr [esp + 0xac]
// 007ba255  8b4504               mov eax, dword ptr [ebp + 4]
// 007ba258  33ff                 xor edi, edi
// 007ba25a  85c0                 test eax, eax
// 007ba25c  7e53                 jle 0x7ba2b1
// 007ba25e  33d2                 xor edx, edx
// 007ba260  8b4500               mov eax, dword ptr [ebp]
// 007ba263  8b4c100c             mov ecx, dword ptr [eax + edx + 0xc]
// 007ba267  03c2                 add eax, edx
// 007ba269  85c9                 test ecx, ecx
// 007ba26b  7d09                 jge 0x7ba276
// 007ba26d  f7d1                 not ecx
// 007ba26f  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba272  f7d1                 not ecx
// 007ba274  eb03                 jmp 0x7ba279
// 007ba276  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba279  89480c               mov dword ptr [eax + 0xc], ecx
// 007ba27c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007ba27f  85c9                 test ecx, ecx
// 007ba281  7d09                 jge 0x7ba28c
// 007ba283  f7d1                 not ecx
// 007ba285  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba288  f7d1                 not ecx
// 007ba28a  eb03                 jmp 0x7ba28f
// 007ba28c  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba28f  894810               mov dword ptr [eax + 0x10], ecx
// 007ba292  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007ba295  85c9                 test ecx, ecx
// 007ba297  7d09                 jge 0x7ba2a2
// 007ba299  f7d1                 not ecx
// 007ba29b  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba29e  f7d1                 not ecx
// 007ba2a0  eb03                 jmp 0x7ba2a5
// 007ba2a2  8b0c8e               mov ecx, dword ptr [esi + ecx*4]
// 007ba2a5  47                   inc edi
// 007ba2a6  894814               mov dword ptr [eax + 0x14], ecx
// 007ba2a9  83c218               add edx, 0x18
// 007ba2ac  3b7d04               cmp edi, dword ptr [ebp + 4]
// 007ba2af  7caf                 jl 0x7ba260
// 007ba2b1  56                   push esi
// 007ba2b2  c68424a000000001     mov byte ptr [esp + 0xa0], 1
// 007ba2ba  e861dad4ff           call 0x507d20
// 007ba2bf  83c404               add esp, 4
// 007ba2c2  837d0400             cmp dword ptr [ebp + 4], 0
// 007ba2c6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007ba2ce  7e62                 jle 0x7ba332
// 007ba2d0  33ff                 xor edi, edi
// 007ba2d2  8b4d00               mov ecx, dword ptr [ebp]
// 007ba2d5  8b44390c             mov eax, dword ptr [ecx + edi + 0xc]
// 007ba2d9  8b743910             mov esi, dword ptr [ecx + edi + 0x10]
// 007ba2dd  8b13                 mov edx, dword ptr [ebx]
// 007ba2df  03cf                 add ecx, edi
// 007ba2e1  85c0                 test eax, eax
// 007ba2e3  7d0a                 jge 0x7ba2ef
// 007ba2e5  f7d0                 not eax
// 007ba2e7  c1e004               shl eax, 4
// 007ba2ea  8b0410               mov eax, dword ptr [eax + edx]
// 007ba2ed  eb07                 jmp 0x7ba2f6
// 007ba2ef  c1e004               shl eax, 4
// 007ba2f2  8b441004             mov eax, dword ptr [eax + edx + 4]
// 007ba2f6  8bde                 mov ebx, esi
// 007ba2f8  85f6                 test esi, esi
// 007ba2fa  7d0b                 jge 0x7ba307
// 007ba2fc  f7d3                 not ebx
// 007ba2fe  c1e304               shl ebx, 4
// 007ba301  8b541304             mov edx, dword ptr [ebx + edx + 4]
// 007ba305  eb06                 jmp 0x7ba30d
// 007ba307  c1e304               shl ebx, 4
// 007ba30a  8b1413               mov edx, dword ptr [ebx + edx]
// 007ba30d  3bc2                 cmp eax, edx
// 007ba30f  7409                 je 0x7ba31a
// 007ba311  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007ba314  894110               mov dword ptr [ecx + 0x10], eax
// 007ba317  897114               mov dword ptr [ecx + 0x14], esi
// 007ba31a  8b442424             mov eax, dword ptr [esp + 0x24]
// 007ba31e  8b9c24b0000000       mov ebx, dword ptr [esp + 0xb0]
// 007ba325  40                   inc eax
// 007ba326  83c718               add edi, 0x18
// 007ba329  3b4504               cmp eax, dword ptr [ebp + 4]
// 007ba32c  89442424             mov dword ptr [esp + 0x24], eax
// 007ba330  7ca0                 jl 0x7ba2d2
// 007ba332  33ed                 xor ebp, ebp
// 007ba334  396b04               cmp dword ptr [ebx + 4], ebp
// 007ba337  0f8eea000000         jle 0x7ba427
// 007ba33d  896c2410             mov dword ptr [esp + 0x10], ebp
// 007ba341  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 007ba348  8b3a                 mov edi, dword ptr [edx]
// 007ba34a  037c2410             add edi, dword ptr [esp + 0x10]
// 007ba34e  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007ba355  8b07                 mov eax, dword ptr [edi]
// 007ba357  8b11                 mov edx, dword ptr [ecx]
// 007ba359  8d0440               lea eax, [eax + eax*2]
// 007ba35c  8b0cc2               mov ecx, dword ptr [edx + eax*8]
// 007ba35f  8d34c2               lea esi, [edx + eax*8]
// 007ba362  8b4604               mov eax, dword ptr [esi + 4]
// 007ba365  3b4608               cmp eax, dword ptr [esi + 8]
// 007ba368  7d0e                 jge 0x7ba378
// 007ba36a  8d0481               lea eax, [ecx + eax*4]
// 007ba36d  85c0                 test eax, eax
// 007ba36f  7402                 je 0x7ba373
// 007ba371  8928                 mov dword ptr [eax], ebp
// 007ba373  ff4604               inc dword ptr [esi + 4]
// 007ba376  eb35                 jmp 0x7ba3ad
// 007ba378  8d542420             lea edx, [esp + 0x20]
// 007ba37c  3bd1                 cmp edx, ecx
// 007ba37e  7219                 jb 0x7ba399
// 007ba380  8d0c81               lea ecx, [ecx + eax*4]
// 007ba383  3bd1                 cmp edx, ecx
// 007ba385  7312                 jae 0x7ba399
// 007ba387  8d442420             lea eax, [esp + 0x20]
// 007ba38b  50                   push eax
// 007ba38c  8bce                 mov ecx, esi
// 007ba38e  896c2424             mov dword ptr [esp + 0x24], ebp
// 007ba392  e8d909d9ff           call 0x54ad70
// 007ba397  eb14                 jmp 0x7ba3ad
// 007ba399  6a00                 push 0
// 007ba39b  40                   inc eax
// 007ba39c  50                   push eax
// 007ba39d  8bce                 mov ecx, esi
// 007ba39f  e87c5cccff           call 0x480020
// 007ba3a4  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ba3a7  8b16                 mov edx, dword ptr [esi]
// 007ba3a9  896c8afc             mov dword ptr [edx + ecx*4 - 4], ebp
// 007ba3ad  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007ba3b4  8b7f04               mov edi, dword ptr [edi + 4]
// 007ba3b7  8b11                 mov edx, dword ptr [ecx]
// 007ba3b9  8d047f               lea eax, [edi + edi*2]
// 007ba3bc  8b0cc2               mov ecx, dword ptr [edx + eax*8]
// 007ba3bf  8d34c2               lea esi, [edx + eax*8]
// 007ba3c2  8b4604               mov eax, dword ptr [esi + 4]
// 007ba3c5  3b4608               cmp eax, dword ptr [esi + 8]
// 007ba3c8  8bdd                 mov ebx, ebp
// 007ba3ca  f7d3                 not ebx
// 007ba3cc  7d0e                 jge 0x7ba3dc
// 007ba3ce  8d0481               lea eax, [ecx + eax*4]
// 007ba3d1  85c0                 test eax, eax
// 007ba3d3  7402                 je 0x7ba3d7
// 007ba3d5  8918                 mov dword ptr [eax], ebx
// 007ba3d7  ff4604               inc dword ptr [esi + 4]
// 007ba3da  eb35                 jmp 0x7ba411
// 007ba3dc  8d542420             lea edx, [esp + 0x20]
// 007ba3e0  3bd1                 cmp edx, ecx
// 007ba3e2  7219                 jb 0x7ba3fd
// 007ba3e4  8d0c81               lea ecx, [ecx + eax*4]
// 007ba3e7  3bd1                 cmp edx, ecx
// 007ba3e9  7312                 jae 0x7ba3fd
// 007ba3eb  8d442420             lea eax, [esp + 0x20]
// 007ba3ef  50                   push eax
// 007ba3f0  8bce                 mov ecx, esi
// 007ba3f2  895c2424             mov dword ptr [esp + 0x24], ebx
// 007ba3f6  e87509d9ff           call 0x54ad70
// 007ba3fb  eb14                 jmp 0x7ba411
// 007ba3fd  6a00                 push 0
// 007ba3ff  40                   inc eax
// 007ba400  50                   push eax
// 007ba401  8bce                 mov ecx, esi
// 007ba403  e8185cccff           call 0x480020
// 007ba408  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ba40b  8b16                 mov edx, dword ptr [esi]
// 007ba40d  895c8afc             mov dword ptr [edx + ecx*4 - 4], ebx
// 007ba411  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007ba418  8344241010           add dword ptr [esp + 0x10], 0x10
// 007ba41d  45                   inc ebp
// 007ba41e  3b6804               cmp ebp, dword ptr [eax + 4]
// 007ba421  0f8c1affffff         jl 0x7ba341
// 007ba427  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ba42b  51                   push ecx
// 007ba42c  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 007ba434  e8e7d8d4ff           call 0x507d20
// 007ba439  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007ba43d  33c0                 xor eax, eax
// 007ba43f  52                   push edx
// 007ba440  89442430             mov dword ptr [esp + 0x30], eax
// 007ba444  89442434             mov dword ptr [esp + 0x34], eax
// 007ba448  89442438             mov dword ptr [esp + 0x38], eax
// 007ba44c  c78424a4000000ffffffff mov dword ptr [esp + 0xa4], 0xffffffff
// 007ba457  e8c4d8d4ff           call 0x507d20
// 007ba45c  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007ba463  83c408               add esp, 8
// 007ba466  5f                   pop edi
// 007ba467  5e                   pop esi
// 007ba468  5d                   pop ebp
// 007ba469  5b                   pop ebx
// 007ba46a  64890d00000000       mov dword ptr fs:[0], ecx
// 007ba471  81c490000000         add esp, 0x90
// 007ba477  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?computeAdjacency@MeshAlg@G3D@@SAXABV?$Array@VVector3@G3D@@@2@ABV?$Array@H@2@AAV?$Array@VFace@MeshAlg@G3D@@@2@AAV?$Array@VEdge@MeshAlg@G3D@@@2@AAV?$Array@VVertex@MeshAlg@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
