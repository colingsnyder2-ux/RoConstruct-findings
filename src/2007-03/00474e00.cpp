// roc 2007-03 00474e00  unit: seg_00470000  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474e00
//
// 00474e00  83ec2c               sub esp, 0x2c
// 00474e03  53                   push ebx
// 00474e04  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00474e08  55                   push ebp
// 00474e09  56                   push esi
// 00474e0a  57                   push edi
// 00474e0b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00474e0f  8bf1                 mov esi, ecx
// 00474e11  83467801             add dword ptr [esi + 0x78], 1
// 00474e15  85ff                 test edi, edi
// 00474e17  8dab00400000         lea ebp, [ebx + 0x4000]
// 00474e1d  7535                 jne 0x474e54
// 00474e1f  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00474e27  7507                 jne 0x474e30
// 00474e29  807c244800           cmp byte ptr [esp + 0x48], 0
// 00474e2e  7416                 je 0x474e46
// 00474e30  c68433a003000000     mov byte ptr [ebx + esi + 0x3a0], 0
// 00474e38  55                   push ebp
// 00474e39  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474e40  ff1574eb7700         call dword ptr [0x77eb74]
// 00474e46  83467001             add dword ptr [esi + 0x70], 1
// 00474e4a  5f                   pop edi
// 00474e4b  5e                   pop esi
// 00474e4c  5d                   pop ebp
// 00474e4d  5b                   pop ebx
// 00474e4e  83c42c               add esp, 0x2c
// 00474e51  c20c00               ret 0xc
// 00474e54  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00474e5c  7407                 je 0x474e65
// 00474e5e  807c244800           cmp byte ptr [esp + 0x48], 0
// 00474e63  7416                 je 0x474e7b
// 00474e65  55                   push ebp
// 00474e66  ff156ceb7700         call dword ptr [0x77eb6c]
// 00474e6c  c68433a003000001     mov byte ptr [ebx + esi + 0x3a0], 1
// 00474e74  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474e7b  8d049b               lea eax, [ebx + ebx*4]
// 00474e7e  c1e004               shl eax, 4
// 00474e81  8d9c3020010000       lea ebx, [eax + esi + 0x120]
// 00474e88  57                   push edi
// 00474e89  8bcb                 mov ecx, ebx
// 00474e8b  e810b40800           call 0x5002a0
// 00474e90  84c0                 test al, al
// 00474e92  750a                 jne 0x474e9e
// 00474e94  38442448             cmp byte ptr [esp + 0x48], al
// 00474e98  0f8463010000         je 0x475001
// 00474e9e  57                   push edi
// 00474e9f  8bcb                 mov ecx, ebx
// 00474ea1  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00474ea8  e813e7ffff           call 0x4735c0
// 00474ead  d9ee                 fldz 
// 00474eaf  83467001             add dword ptr [esi + 0x70], 1
// 00474eb3  d954241c             fst dword ptr [esp + 0x1c]
// 00474eb7  d9542420             fst dword ptr [esp + 0x20]
// 00474ebb  51                   push ecx
// 00474ebc  d95c2428             fstp dword ptr [esp + 0x28]
// 00474ec0  8d4c2414             lea ecx, [esp + 0x14]
// 00474ec4  d9e8                 fld1 
// 00474ec6  d95c242c             fstp dword ptr [esp + 0x2c]
// 00474eca  dd4610               fld qword ptr [esi + 0x10]
// 00474ecd  d95c244c             fstp dword ptr [esp + 0x4c]
// 00474ed1  d944244c             fld dword ptr [esp + 0x4c]
// 00474ed5  d91c24               fstp dword ptr [esp]
// 00474ed8  51                   push ecx
// 00474ed9  8d4f40               lea ecx, [edi + 0x40]
// 00474edc  e80fbc0800           call 0x500af0
// 00474ee1  d900                 fld dword ptr [eax]
// 00474ee3  d95c242c             fstp dword ptr [esp + 0x2c]
// 00474ee7  68a00b0000           push 0xba0
// 00474eec  d94004               fld dword ptr [eax + 4]
// 00474eef  d95c2434             fstp dword ptr [esp + 0x34]
// 00474ef3  d94008               fld dword ptr [eax + 8]
// 00474ef6  d95c2438             fstp dword ptr [esp + 0x38]
// 00474efa  d9e8                 fld1 
// 00474efc  d95c243c             fstp dword ptr [esp + 0x3c]
// 00474f00  e83b9a0000           call 0x47e940
// 00474f05  83c404               add esp, 4
// 00474f08  6800170000           push 0x1700
// 00474f0d  89442444             mov dword ptr [esp + 0x44], eax
// 00474f11  ff152ceb7700         call dword ptr [0x77eb2c]
// 00474f17  ff1524ec7700         call dword ptr [0x77ec24]
// 00474f1d  ff155ceb7700         call dword ptr [0x77eb5c]
// 00474f23  81c608080000         add esi, 0x808
// 00474f29  56                   push esi
// 00474f2a  e871960000           call 0x47e5a0
// 00474f2f  8b3520ec7700         mov esi, dword ptr [0x77ec20]
// 00474f35  83c404               add esp, 4
// 00474f38  57                   push edi
// 00474f39  6803120000           push 0x1203
// 00474f3e  55                   push ebp
// 00474f3f  ffd6                 call esi
// 00474f41  8d5710               lea edx, [edi + 0x10]
// 00474f44  52                   push edx
// 00474f45  6804120000           push 0x1204
// 00474f4a  55                   push ebp
// 00474f4b  ffd6                 call esi
// 00474f4d  dd4720               fld qword ptr [edi + 0x20]
// 00474f50  8b1d1cec7700         mov ebx, dword ptr [0x77ec1c]
// 00474f56  d95c2448             fstp dword ptr [esp + 0x48]
// 00474f5a  d9442448             fld dword ptr [esp + 0x48]
// 00474f5e  51                   push ecx
// 00474f5f  d91c24               fstp dword ptr [esp]
// 00474f62  6806120000           push 0x1206
// 00474f67  55                   push ebp
// 00474f68  ffd3                 call ebx
// 00474f6a  8d44241c             lea eax, [esp + 0x1c]
// 00474f6e  50                   push eax
// 00474f6f  6800120000           push 0x1200
// 00474f74  55                   push ebp
// 00474f75  ffd6                 call esi
// 00474f77  807f4e00             cmp byte ptr [edi + 0x4e], 0
// 00474f7b  7407                 je 0x474f84
// 00474f7d  8d4c242c             lea ecx, [esp + 0x2c]
// 00474f81  51                   push ecx
// 00474f82  eb05                 jmp 0x474f89
// 00474f84  8d54241c             lea edx, [esp + 0x1c]
// 00474f88  52                   push edx
// 00474f89  6801120000           push 0x1201
// 00474f8e  55                   push ebp
// 00474f8f  ffd6                 call esi
// 00474f91  807f4d00             cmp byte ptr [edi + 0x4d], 0
// 00474f95  7407                 je 0x474f9e
// 00474f97  8d44242c             lea eax, [esp + 0x2c]
// 00474f9b  50                   push eax
// 00474f9c  eb05                 jmp 0x474fa3
// 00474f9e  8d4c241c             lea ecx, [esp + 0x1c]
// 00474fa2  51                   push ecx
// 00474fa3  6802120000           push 0x1202
// 00474fa8  55                   push ebp
// 00474fa9  ffd6                 call esi
// 00474fab  dd4728               fld qword ptr [edi + 0x28]
// 00474fae  d95c2448             fstp dword ptr [esp + 0x48]
// 00474fb2  51                   push ecx
// 00474fb3  d944244c             fld dword ptr [esp + 0x4c]
// 00474fb7  d91c24               fstp dword ptr [esp]
// 00474fba  6807120000           push 0x1207
// 00474fbf  55                   push ebp
// 00474fc0  ffd3                 call ebx
// 00474fc2  dd4730               fld qword ptr [edi + 0x30]
// 00474fc5  d95c2448             fstp dword ptr [esp + 0x48]
// 00474fc9  51                   push ecx
// 00474fca  d944244c             fld dword ptr [esp + 0x4c]
// 00474fce  d91c24               fstp dword ptr [esp]
// 00474fd1  6808120000           push 0x1208
// 00474fd6  55                   push ebp
// 00474fd7  ffd3                 call ebx
// 00474fd9  dd4738               fld qword ptr [edi + 0x38]
// 00474fdc  d95c2448             fstp dword ptr [esp + 0x48]
// 00474fe0  51                   push ecx
// 00474fe1  d944244c             fld dword ptr [esp + 0x4c]
// 00474fe5  d91c24               fstp dword ptr [esp]
// 00474fe8  6809120000           push 0x1209
// 00474fed  55                   push ebp
// 00474fee  ffd3                 call ebx
// 00474ff0  ff1518ec7700         call dword ptr [0x77ec18]
// 00474ff6  8b542440             mov edx, dword ptr [esp + 0x40]
// 00474ffa  52                   push edx
// 00474ffb  ff152ceb7700         call dword ptr [0x77eb2c]
// 00475001  5f                   pop edi
// 00475002  5e                   pop esi
// 00475003  5d                   pop ebp
// 00475004  5b                   pop ebx
// 00475005  83c42c               add esp, 0x2c
// 00475008  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setLight@RenderDevice@G3D@@AAEXHPBVGLight@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
