// roc 2007-08 00474d00  unit: G3D::VARArea  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474d00
//
// 00474d00  83ec2c               sub esp, 0x2c
// 00474d03  53                   push ebx
// 00474d04  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00474d08  55                   push ebp
// 00474d09  56                   push esi
// 00474d0a  57                   push edi
// 00474d0b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00474d0f  8bf1                 mov esi, ecx
// 00474d11  83467801             add dword ptr [esi + 0x78], 1
// 00474d15  85ff                 test edi, edi
// 00474d17  8dab00400000         lea ebp, [ebx + 0x4000]
// 00474d1d  7535                 jne 0x474d54
// 00474d1f  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00474d27  7507                 jne 0x474d30
// 00474d29  807c244800           cmp byte ptr [esp + 0x48], 0
// 00474d2e  7416                 je 0x474d46
// 00474d30  c68433a003000000     mov byte ptr [ebx + esi + 0x3a0], 0
// 00474d38  55                   push ebp
// 00474d39  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474d40  ff154ceb7700         call dword ptr [0x77eb4c]
// 00474d46  83467001             add dword ptr [esi + 0x70], 1
// 00474d4a  5f                   pop edi
// 00474d4b  5e                   pop esi
// 00474d4c  5d                   pop ebp
// 00474d4d  5b                   pop ebx
// 00474d4e  83c42c               add esp, 0x2c
// 00474d51  c20c00               ret 0xc
// 00474d54  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00474d5c  7407                 je 0x474d65
// 00474d5e  807c244800           cmp byte ptr [esp + 0x48], 0
// 00474d63  7416                 je 0x474d7b
// 00474d65  55                   push ebp
// 00474d66  ff1554eb7700         call dword ptr [0x77eb54]
// 00474d6c  c68433a003000001     mov byte ptr [ebx + esi + 0x3a0], 1
// 00474d74  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474d7b  8d049b               lea eax, [ebx + ebx*4]
// 00474d7e  c1e004               shl eax, 4
// 00474d81  8d9c3020010000       lea ebx, [eax + esi + 0x120]
// 00474d88  57                   push edi
// 00474d89  8bcb                 mov ecx, ebx
// 00474d8b  e8d05d0900           call 0x50ab60
// 00474d90  84c0                 test al, al
// 00474d92  750a                 jne 0x474d9e
// 00474d94  38442448             cmp byte ptr [esp + 0x48], al
// 00474d98  0f8463010000         je 0x474f01
// 00474d9e  57                   push edi
// 00474d9f  8bcb                 mov ecx, ebx
// 00474da1  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474da8  e823e7ffff           call 0x4734d0
// 00474dad  d9ee                 fldz 
// 00474daf  83467001             add dword ptr [esi + 0x70], 1
// 00474db3  d954241c             fst dword ptr [esp + 0x1c]
// 00474db7  d9542420             fst dword ptr [esp + 0x20]
// 00474dbb  51                   push ecx
// 00474dbc  d95c2428             fstp dword ptr [esp + 0x28]
// 00474dc0  8d4c2414             lea ecx, [esp + 0x14]
// 00474dc4  d9e8                 fld1 
// 00474dc6  d95c242c             fstp dword ptr [esp + 0x2c]
// 00474dca  dd4610               fld qword ptr [esi + 0x10]
// 00474dcd  d95c244c             fstp dword ptr [esp + 0x4c]
// 00474dd1  d944244c             fld dword ptr [esp + 0x4c]
// 00474dd5  d91c24               fstp dword ptr [esp]
// 00474dd8  51                   push ecx
// 00474dd9  8d4f40               lea ecx, [edi + 0x40]
// 00474ddc  e80f660900           call 0x50b3f0
// 00474de1  d900                 fld dword ptr [eax]
// 00474de3  d95c242c             fstp dword ptr [esp + 0x2c]
// 00474de7  68a00b0000           push 0xba0
// 00474dec  d94004               fld dword ptr [eax + 4]
// 00474def  d95c2434             fstp dword ptr [esp + 0x34]
// 00474df3  d94008               fld dword ptr [eax + 8]
// 00474df6  d95c2438             fstp dword ptr [esp + 0x38]
// 00474dfa  d9e8                 fld1 
// 00474dfc  d95c243c             fstp dword ptr [esp + 0x3c]
// 00474e00  e88bb60000           call 0x480490
// 00474e05  83c404               add esp, 4
// 00474e08  6800170000           push 0x1700
// 00474e0d  89442444             mov dword ptr [esp + 0x44], eax
// 00474e11  ff1564eb7700         call dword ptr [0x77eb64]
// 00474e17  ff1598ea7700         call dword ptr [0x77ea98]
// 00474e1d  ff1568eb7700         call dword ptr [0x77eb68]
// 00474e23  81c608080000         add esi, 0x808
// 00474e29  56                   push esi
// 00474e2a  e8c1b20000           call 0x4800f0
// 00474e2f  8b359cea7700         mov esi, dword ptr [0x77ea9c]
// 00474e35  83c404               add esp, 4
// 00474e38  57                   push edi
// 00474e39  6803120000           push 0x1203
// 00474e3e  55                   push ebp
// 00474e3f  ffd6                 call esi
// 00474e41  8d5710               lea edx, [edi + 0x10]
// 00474e44  52                   push edx
// 00474e45  6804120000           push 0x1204
// 00474e4a  55                   push ebp
// 00474e4b  ffd6                 call esi
// 00474e4d  dd4720               fld qword ptr [edi + 0x20]
// 00474e50  8b1da0ea7700         mov ebx, dword ptr [0x77eaa0]
// 00474e56  d95c2448             fstp dword ptr [esp + 0x48]
// 00474e5a  d9442448             fld dword ptr [esp + 0x48]
// 00474e5e  51                   push ecx
// 00474e5f  d91c24               fstp dword ptr [esp]
// 00474e62  6806120000           push 0x1206
// 00474e67  55                   push ebp
// 00474e68  ffd3                 call ebx
// 00474e6a  8d44241c             lea eax, [esp + 0x1c]
// 00474e6e  50                   push eax
// 00474e6f  6800120000           push 0x1200
// 00474e74  55                   push ebp
// 00474e75  ffd6                 call esi
// 00474e77  807f4e00             cmp byte ptr [edi + 0x4e], 0
// 00474e7b  7407                 je 0x474e84
// 00474e7d  8d4c242c             lea ecx, [esp + 0x2c]
// 00474e81  51                   push ecx
// 00474e82  eb05                 jmp 0x474e89
// 00474e84  8d54241c             lea edx, [esp + 0x1c]
// 00474e88  52                   push edx
// 00474e89  6801120000           push 0x1201
// 00474e8e  55                   push ebp
// 00474e8f  ffd6                 call esi
// 00474e91  807f4d00             cmp byte ptr [edi + 0x4d], 0
// 00474e95  7407                 je 0x474e9e
// 00474e97  8d44242c             lea eax, [esp + 0x2c]
// 00474e9b  50                   push eax
// 00474e9c  eb05                 jmp 0x474ea3
// 00474e9e  8d4c241c             lea ecx, [esp + 0x1c]
// 00474ea2  51                   push ecx
// 00474ea3  6802120000           push 0x1202
// 00474ea8  55                   push ebp
// 00474ea9  ffd6                 call esi
// 00474eab  dd4728               fld qword ptr [edi + 0x28]
// 00474eae  d95c2448             fstp dword ptr [esp + 0x48]
// 00474eb2  51                   push ecx
// 00474eb3  d944244c             fld dword ptr [esp + 0x4c]
// 00474eb7  d91c24               fstp dword ptr [esp]
// 00474eba  6807120000           push 0x1207
// 00474ebf  55                   push ebp
// 00474ec0  ffd3                 call ebx
// 00474ec2  dd4730               fld qword ptr [edi + 0x30]
// 00474ec5  d95c2448             fstp dword ptr [esp + 0x48]
// 00474ec9  51                   push ecx
// 00474eca  d944244c             fld dword ptr [esp + 0x4c]
// 00474ece  d91c24               fstp dword ptr [esp]
// 00474ed1  6808120000           push 0x1208
// 00474ed6  55                   push ebp
// 00474ed7  ffd3                 call ebx
// 00474ed9  dd4738               fld qword ptr [edi + 0x38]
// 00474edc  d95c2448             fstp dword ptr [esp + 0x48]
// 00474ee0  51                   push ecx
// 00474ee1  d944244c             fld dword ptr [esp + 0x4c]
// 00474ee5  d91c24               fstp dword ptr [esp]
// 00474ee8  6809120000           push 0x1209
// 00474eed  55                   push ebp
// 00474eee  ffd3                 call ebx
// 00474ef0  ff15a4ea7700         call dword ptr [0x77eaa4]
// 00474ef6  8b542440             mov edx, dword ptr [esp + 0x40]
// 00474efa  52                   push edx
// 00474efb  ff1564eb7700         call dword ptr [0x77eb64]
// 00474f01  5f                   pop edi
// 00474f02  5e                   pop esi
// 00474f03  5d                   pop ebp
// 00474f04  5b                   pop ebx
// 00474f05  83c42c               add esp, 0x2c
// 00474f08  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setLight@RenderDevice@G3D@@AAEXHPBVGLight@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
