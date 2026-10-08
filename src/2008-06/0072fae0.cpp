// from server: 100% by auto
// roc 2008-06 0072fae0  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072fae0
//
// 0072fae0  81ec84000000         sub esp, 0x84
// 0072fae6  53                   push ebx
// 0072fae7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0072faee  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0072faf1  55                   push ebp
// 0072faf2  56                   push esi
// 0072faf3  57                   push edi
// 0072faf4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0072fafb  85c0                 test eax, eax
// 0072fafd  741d                 je 0x72fb1c
// 0072faff  83c9ff               or ecx, 0xffffffff
// 0072fb02  83783000             cmp dword ptr [eax + 0x30], 0
// 0072fb06  750b                 jne 0x72fb13
// 0072fb08  833800               cmp dword ptr [eax], 0
// 0072fb0b  7506                 jne 0x72fb13
// 0072fb0d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072fb11  eb14                 jmp 0x72fb27
// 0072fb13  8b4358               mov eax, dword ptr [ebx + 0x58]
// 0072fb16  89442410             mov dword ptr [esp + 0x10], eax
// 0072fb1a  eb0b                 jmp 0x72fb27
// 0072fb1c  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 0072fb1f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072fb27  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0072fb2a  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 0072fb2d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0072fb31  85d2                 test edx, edx
// 0072fb33  0f8eaf0b0000         jle 0x7306e8
// 0072fb39  8b4308               mov eax, dword ptr [ebx + 8]
// 0072fb3c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0072fb3f  2b4304               sub eax, dword ptr [ebx + 4]
// 0072fb42  40                   inc eax
// 0072fb43  85c0                 test eax, eax
// 0072fb45  7e14                 jle 0x72fb5b
// 0072fb47  8b13                 mov edx, dword ptr [ebx]
// 0072fb49  8b4204               mov eax, dword ptr [edx + 4]
// 0072fb4c  8bcb                 mov ecx, ebx
// 0072fb4e  ffd0                 call eax
// 0072fb50  85c0                 test eax, eax
// 0072fb52  7407                 je 0x72fb5b
// 0072fb54  bf01000000           mov edi, 1
// 0072fb59  eb02                 jmp 0x72fb5d
// 0072fb5b  33ff                 xor edi, edi
// 0072fb5d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0072fb60  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0072fb63  8bf1                 mov esi, ecx
// 0072fb65  2bf0                 sub esi, eax
// 0072fb67  2b4328               sub eax, dword ptr [ebx + 0x28]
// 0072fb6a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0072fb6e  85ff                 test edi, edi
// 0072fb70  7405                 je 0x72fb77
// 0072fb72  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 0072fb75  7e06                 jle 0x72fb7d
// 0072fb77  33f6                 xor esi, esi
// 0072fb79  8974244c             mov dword ptr [esp + 0x4c], esi
// 0072fb7d  8bcb                 mov ecx, ebx
// 0072fb7f  e83ceb0600           call 0x79e6c0
// 0072fb84  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0072fb88  89442448             mov dword ptr [esp + 0x48], eax
// 0072fb8c  0f84b1050000         je 0x730143
// 0072fb92  8d4b48               lea ecx, [ebx + 0x48]
// 0072fb95  51                   push ecx
// 0072fb96  8d942488000000       lea edx, [esp + 0x88]
// 0072fb9d  52                   push edx
// 0072fb9e  ff15702d8000         call dword ptr [0x802d70]
// 0072fba4  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 0072fba7  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0072fbae  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0072fbb1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0072fbb8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0072fbbc  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0072fbc3  896c2424             mov dword ptr [esp + 0x24], ebp
// 0072fbc7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0072fbcb  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0072fbcf  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0072fbd3  89542444             mov dword ptr [esp + 0x44], edx
// 0072fbd7  89542454             mov dword ptr [esp + 0x54], edx
// 0072fbdb  89542474             mov dword ptr [esp + 0x74], edx
// 0072fbdf  03d5                 add edx, ebp
// 0072fbe1  03f2                 add esi, edx
// 0072fbe3  89442438             mov dword ptr [esp + 0x38], eax
// 0072fbe7  89442418             mov dword ptr [esp + 0x18], eax
// 0072fbeb  89442450             mov dword ptr [esp + 0x50], eax
// 0072fbef  89442470             mov dword ptr [esp + 0x70], eax
// 0072fbf3  89442428             mov dword ptr [esp + 0x28], eax
// 0072fbf7  89442460             mov dword ptr [esp + 0x60], eax
// 0072fbfb  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072fbff  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072fc03  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0072fc0a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0072fc0e  8954242c             mov dword ptr [esp + 0x2c], edx
// 0072fc12  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072fc16  894c2440             mov dword ptr [esp + 0x40], ecx
// 0072fc1a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0072fc1e  894c2458             mov dword ptr [esp + 0x58], ecx
// 0072fc22  894c2478             mov dword ptr [esp + 0x78], ecx
// 0072fc26  894c2430             mov dword ptr [esp + 0x30], ecx
// 0072fc2a  89742434             mov dword ptr [esp + 0x34], esi
// 0072fc2e  89742464             mov dword ptr [esp + 0x64], esi
// 0072fc32  894c2468             mov dword ptr [esp + 0x68], ecx
// 0072fc36  8954246c             mov dword ptr [esp + 0x6c], edx
// 0072fc3a  83f803               cmp eax, 3
// 0072fc3d  0f85fc010000         jne 0x72fe3f
// 0072fc43  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0072fc4a  83c620               add esi, 0x20
// 0072fc4d  8bce                 mov ecx, esi
// 0072fc4f  e8dc87feff           call 0x718430
// 0072fc54  85c0                 test eax, eax
// 0072fc56  0f8443030000         je 0x72ff9f
// 0072fc5c  85ff                 test edi, edi
// 0072fc5e  7505                 jne 0x72fc65
// 0072fc60  8d4f04               lea ecx, [edi + 4]
// 0072fc63  eb1a                 jmp 0x72fc7f
// 0072fc65  b83c000000           mov eax, 0x3c
// 0072fc6a  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fc6e  7505                 jne 0x72fc75
// 0072fc70  8d48c7               lea ecx, [eax - 0x39]
// 0072fc73  eb0a                 jmp 0x72fc7f
// 0072fc75  33c9                 xor ecx, ecx
// 0072fc77  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fc7b  0f94c1               sete cl
// 0072fc7e  41                   inc ecx
// 0072fc7f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 0072fc86  85db                 test ebx, ebx
// 0072fc88  7504                 jne 0x72fc8e
// 0072fc8a  33c0                 xor eax, eax
// 0072fc8c  eb03                 jmp 0x72fc91
// 0072fc8e  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fc91  6a00                 push 0
// 0072fc93  8d54243c             lea edx, [esp + 0x3c]
// 0072fc97  52                   push edx
// 0072fc98  51                   push ecx
// 0072fc99  6a01                 push 1
// 0072fc9b  50                   push eax
// 0072fc9c  8bce                 mov ecx, esi
// 0072fc9e  e80d84feff           call 0x7180b0
// 0072fca3  85ff                 test edi, edi
// 0072fca5  7505                 jne 0x72fcac
// 0072fca7  8d4f08               lea ecx, [edi + 8]
// 0072fcaa  eb1c                 jmp 0x72fcc8
// 0072fcac  b83d000000           mov eax, 0x3d
// 0072fcb1  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fcb5  7505                 jne 0x72fcbc
// 0072fcb7  8d48ca               lea ecx, [eax - 0x36]
// 0072fcba  eb0c                 jmp 0x72fcc8
// 0072fcbc  33c9                 xor ecx, ecx
// 0072fcbe  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fcc2  0f94c1               sete cl
// 0072fcc5  83c105               add ecx, 5
// 0072fcc8  85db                 test ebx, ebx
// 0072fcca  7504                 jne 0x72fcd0
// 0072fccc  33c0                 xor eax, eax
// 0072fcce  eb03                 jmp 0x72fcd3
// 0072fcd0  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fcd3  6a00                 push 0
// 0072fcd5  8d54241c             lea edx, [esp + 0x1c]
// 0072fcd9  52                   push edx
// 0072fcda  51                   push ecx
// 0072fcdb  6a01                 push 1
// 0072fcdd  50                   push eax
// 0072fcde  8bce                 mov ecx, esi
// 0072fce0  e8cb83feff           call 0x7180b0
// 0072fce5  8b2d6c2d8000         mov ebp, dword ptr [0x802d6c]
// 0072fceb  8d442450             lea eax, [esp + 0x50]
// 0072fcef  50                   push eax
// 0072fcf0  ffd5                 call ebp
// 0072fcf2  85c0                 test eax, eax
// 0072fcf4  0f85ee090000         jne 0x7306e8
// 0072fcfa  8d4c2470             lea ecx, [esp + 0x70]
// 0072fcfe  51                   push ecx
// 0072fcff  ffd5                 call ebp
// 0072fd01  85c0                 test eax, eax
// 0072fd03  7540                 jne 0x72fd45
// 0072fd05  85ff                 test edi, edi
// 0072fd07  7505                 jne 0x72fd0e
// 0072fd09  8d4804               lea ecx, [eax + 4]
// 0072fd0c  eb1a                 jmp 0x72fd28
// 0072fd0e  b83e000000           mov eax, 0x3e
// 0072fd13  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fd17  7505                 jne 0x72fd1e
// 0072fd19  8d48c5               lea ecx, [eax - 0x3b]
// 0072fd1c  eb0a                 jmp 0x72fd28
// 0072fd1e  33c9                 xor ecx, ecx
// 0072fd20  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fd24  0f94c1               sete cl
// 0072fd27  41                   inc ecx
// 0072fd28  85db                 test ebx, ebx
// 0072fd2a  7504                 jne 0x72fd30
// 0072fd2c  33c0                 xor eax, eax
// 0072fd2e  eb03                 jmp 0x72fd33
// 0072fd30  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fd33  6a00                 push 0
// 0072fd35  8d542474             lea edx, [esp + 0x74]
// 0072fd39  52                   push edx
// 0072fd3a  51                   push ecx
// 0072fd3b  6a06                 push 6
// 0072fd3d  50                   push eax
// 0072fd3e  8bce                 mov ecx, esi
// 0072fd40  e86b83feff           call 0x7180b0
// 0072fd45  8d442428             lea eax, [esp + 0x28]
// 0072fd49  50                   push eax
// 0072fd4a  ffd5                 call ebp
// 0072fd4c  85c0                 test eax, eax
// 0072fd4e  0f858f000000         jne 0x72fde3
// 0072fd54  b840000000           mov eax, 0x40
// 0072fd59  85ff                 test edi, edi
// 0072fd5b  7505                 jne 0x72fd62
// 0072fd5d  8d48c4               lea ecx, [eax - 0x3c]
// 0072fd60  eb17                 jmp 0x72fd79
// 0072fd62  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fd66  7507                 jne 0x72fd6f
// 0072fd68  b903000000           mov ecx, 3
// 0072fd6d  eb0a                 jmp 0x72fd79
// 0072fd6f  33c9                 xor ecx, ecx
// 0072fd71  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fd75  0f94c1               sete cl
// 0072fd78  41                   inc ecx
// 0072fd79  85db                 test ebx, ebx
// 0072fd7b  7504                 jne 0x72fd81
// 0072fd7d  33c0                 xor eax, eax
// 0072fd7f  eb03                 jmp 0x72fd84
// 0072fd81  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fd84  6a00                 push 0
// 0072fd86  8d54242c             lea edx, [esp + 0x2c]
// 0072fd8a  52                   push edx
// 0072fd8b  51                   push ecx
// 0072fd8c  6a03                 push 3
// 0072fd8e  50                   push eax
// 0072fd8f  8bce                 mov ecx, esi
// 0072fd91  e81a83feff           call 0x7180b0
// 0072fd96  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072fd9a  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0072fd9e  83f80d               cmp eax, 0xd
// 0072fda1  7e40                 jle 0x72fde3
// 0072fda3  85ff                 test edi, edi
// 0072fda5  7505                 jne 0x72fdac
// 0072fda7  8d4f04               lea ecx, [edi + 4]
// 0072fdaa  eb1a                 jmp 0x72fdc6
// 0072fdac  b840000000           mov eax, 0x40
// 0072fdb1  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fdb5  7505                 jne 0x72fdbc
// 0072fdb7  8d48c3               lea ecx, [eax - 0x3d]
// 0072fdba  eb0a                 jmp 0x72fdc6
// 0072fdbc  33c9                 xor ecx, ecx
// 0072fdbe  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fdc2  0f94c1               sete cl
// 0072fdc5  41                   inc ecx
// 0072fdc6  85db                 test ebx, ebx
// 0072fdc8  7504                 jne 0x72fdce
// 0072fdca  33c0                 xor eax, eax
// 0072fdcc  eb03                 jmp 0x72fdd1
// 0072fdce  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fdd1  6a00                 push 0
// 0072fdd3  8d54242c             lea edx, [esp + 0x2c]
// 0072fdd7  52                   push edx
// 0072fdd8  51                   push ecx
// 0072fdd9  6a09                 push 9
// 0072fddb  50                   push eax
// 0072fddc  8bce                 mov ecx, esi
// 0072fdde  e8cd82feff           call 0x7180b0
// 0072fde3  8d442460             lea eax, [esp + 0x60]
// 0072fde7  50                   push eax
// 0072fde8  ffd5                 call ebp
// 0072fdea  85c0                 test eax, eax
// 0072fdec  0f85f6080000         jne 0x7306e8
// 0072fdf2  85ff                 test edi, edi
// 0072fdf4  7505                 jne 0x72fdfb
// 0072fdf6  8d4804               lea ecx, [eax + 4]
// 0072fdf9  eb1a                 jmp 0x72fe15
// 0072fdfb  b83f000000           mov eax, 0x3f
// 0072fe00  39442410             cmp dword ptr [esp + 0x10], eax
// 0072fe04  7505                 jne 0x72fe0b
// 0072fe06  8d48c4               lea ecx, [eax - 0x3c]
// 0072fe09  eb0a                 jmp 0x72fe15
// 0072fe0b  33c9                 xor ecx, ecx
// 0072fe0d  39442414             cmp dword ptr [esp + 0x14], eax
// 0072fe11  0f94c1               sete cl
// 0072fe14  41                   inc ecx
// 0072fe15  85db                 test ebx, ebx
// 0072fe17  7504                 jne 0x72fe1d
// 0072fe19  33c0                 xor eax, eax
// 0072fe1b  eb03                 jmp 0x72fe20
// 0072fe1d  8b4304               mov eax, dword ptr [ebx + 4]
// 0072fe20  6a00                 push 0
// 0072fe22  8d542464             lea edx, [esp + 0x64]
// 0072fe26  52                   push edx
// 0072fe27  51                   push ecx
// 0072fe28  6a07                 push 7
// 0072fe2a  50                   push eax
// 0072fe2b  8bce                 mov ecx, esi
// 0072fe2d  e87e82feff           call 0x7180b0
// 0072fe32  5f                   pop edi
// 0072fe33  5e                   pop esi
// 0072fe34  5d                   pop ebp
// 0072fe35  5b                   pop ebx
// 0072fe36  81c484000000         add esp, 0x84
// 0072fe3c  c20800               ret 8
// 0072fe3f  83f802               cmp eax, 2
// 0072fe42  0f8557010000         jne 0x72ff9f
// 0072fe48  e8f3fefaff           call 0x6dfd40
// 0072fe4d  6a0f                 push 0xf
// 0072fe4f  8bc8                 mov ecx, eax
// 0072fe51  e8caf6faff           call 0x6df520
// 0072fe56  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0072fe5d  50                   push eax
// 0072fe5e  8d44243c             lea eax, [esp + 0x3c]
// 0072fe62  50                   push eax
// 0072fe63  8bce                 mov ecx, esi
// 0072fe65  e8f414f7ff           call 0x6a135e
// 0072fe6a  85ff                 test edi, edi
// 0072fe6c  742e                 je 0x72fe9c
// 0072fe6e  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0072fe73  7527                 jne 0x72fe9c
// 0072fe75  e8c6fefaff           call 0x6dfd40
// 0072fe7a  6a14                 push 0x14
// 0072fe7c  8bc8                 mov ecx, eax
// 0072fe7e  e89df6faff           call 0x6df520
// 0072fe83  8be8                 mov ebp, eax
// 0072fe85  e8b6fefaff           call 0x6dfd40
// 0072fe8a  6a10                 push 0x10
// 0072fe8c  8bc8                 mov ecx, eax
// 0072fe8e  e88df6faff           call 0x6df520
// 0072fe93  55                   push ebp
// 0072fe94  50                   push eax
// 0072fe95  8d4c2440             lea ecx, [esp + 0x40]
// 0072fe99  51                   push ecx
// 0072fe9a  eb25                 jmp 0x72fec1
// 0072fe9c  e89ffefaff           call 0x6dfd40
// 0072fea1  6a10                 push 0x10
// 0072fea3  8bc8                 mov ecx, eax
// 0072fea5  e876f6faff           call 0x6df520
// 0072feaa  8be8                 mov ebp, eax
// 0072feac  e88ffefaff           call 0x6dfd40
// 0072feb1  6a14                 push 0x14
// 0072feb3  8bc8                 mov ecx, eax
// 0072feb5  e866f6faff           call 0x6df520
// 0072feba  55                   push ebp
// 0072febb  50                   push eax
// 0072febc  8d542440             lea edx, [esp + 0x40]
// 0072fec0  52                   push edx
// 0072fec1  8bce                 mov ecx, esi
// 0072fec3  e89014f7ff           call 0x6a1358
// 0072fec8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072fecc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072fed0  57                   push edi
// 0072fed1  6a01                 push 1
// 0072fed3  6a00                 push 0
// 0072fed5  83ec10               sub esp, 0x10
// 0072fed8  8bc4                 mov eax, esp
// 0072feda  8908                 mov dword ptr [eax], ecx
// 0072fedc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0072fee0  895004               mov dword ptr [eax + 4], edx
// 0072fee3  8b542460             mov edx, dword ptr [esp + 0x60]
// 0072fee7  894808               mov dword ptr [eax + 8], ecx
// 0072feea  56                   push esi
// 0072feeb  89500c               mov dword ptr [eax + 0xc], edx
// 0072feee  e8bdfaffff           call 0x72f9b0
// 0072fef3  83c420               add esp, 0x20
// 0072fef6  e845fefaff           call 0x6dfd40
// 0072fefb  6a0f                 push 0xf
// 0072fefd  8bc8                 mov ecx, eax
// 0072feff  e81cf6faff           call 0x6df520
// 0072ff04  50                   push eax
// 0072ff05  8d44241c             lea eax, [esp + 0x1c]
// 0072ff09  50                   push eax
// 0072ff0a  8bce                 mov ecx, esi
// 0072ff0c  e84d14f7ff           call 0x6a135e
// 0072ff11  85ff                 test edi, edi
// 0072ff13  742e                 je 0x72ff43
// 0072ff15  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0072ff1a  7527                 jne 0x72ff43
// 0072ff1c  e81ffefaff           call 0x6dfd40
// 0072ff21  6a14                 push 0x14
// 0072ff23  8bc8                 mov ecx, eax
// 0072ff25  e8f6f5faff           call 0x6df520
// 0072ff2a  8be8                 mov ebp, eax
// 0072ff2c  e80ffefaff           call 0x6dfd40
// 0072ff31  6a10                 push 0x10
// 0072ff33  8bc8                 mov ecx, eax
// 0072ff35  e8e6f5faff           call 0x6df520
// 0072ff3a  55                   push ebp
// 0072ff3b  50                   push eax
// 0072ff3c  8d4c2420             lea ecx, [esp + 0x20]
// 0072ff40  51                   push ecx
// 0072ff41  eb25                 jmp 0x72ff68
// 0072ff43  e8f8fdfaff           call 0x6dfd40
// 0072ff48  6a10                 push 0x10
// 0072ff4a  8bc8                 mov ecx, eax
// 0072ff4c  e8cff5faff           call 0x6df520
// 0072ff51  8be8                 mov ebp, eax
// 0072ff53  e8e8fdfaff           call 0x6dfd40
// 0072ff58  6a14                 push 0x14
// 0072ff5a  8bc8                 mov ecx, eax
// 0072ff5c  e8bff5faff           call 0x6df520
// 0072ff61  55                   push ebp
// 0072ff62  50                   push eax
// 0072ff63  8d542420             lea edx, [esp + 0x20]
// 0072ff67  52                   push edx
// 0072ff68  8bce                 mov ecx, esi
// 0072ff6a  e8e913f7ff           call 0x6a1358
// 0072ff6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072ff73  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072ff77  57                   push edi
// 0072ff78  6a00                 push 0
// 0072ff7a  6a00                 push 0
// 0072ff7c  83ec10               sub esp, 0x10
// 0072ff7f  8bc4                 mov eax, esp
// 0072ff81  8908                 mov dword ptr [eax], ecx
// 0072ff83  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072ff87  895004               mov dword ptr [eax + 4], edx
// 0072ff8a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0072ff8e  894808               mov dword ptr [eax + 8], ecx
// 0072ff91  56                   push esi
// 0072ff92  89500c               mov dword ptr [eax + 0xc], edx
// 0072ff95  e816faffff           call 0x72f9b0
// 0072ff9a  83c420               add esp, 0x20
// 0072ff9d  eb72                 jmp 0x730011
// 0072ff9f  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0072ffa6  85f6                 test esi, esi
// 0072ffa8  7504                 jne 0x72ffae
// 0072ffaa  33c0                 xor eax, eax
// 0072ffac  eb03                 jmp 0x72ffb1
// 0072ffae  8b4604               mov eax, dword ptr [esi + 4]
// 0072ffb1  f7df                 neg edi
// 0072ffb3  1bff                 sbb edi, edi
// 0072ffb5  8b2d402d8000         mov ebp, dword ptr [0x802d40]
// 0072ffbb  33c9                 xor ecx, ecx
// 0072ffbd  81e700ffffff         and edi, 0xffffff00
// 0072ffc3  81c700010000         add edi, 0x100
// 0072ffc9  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0072ffce  8d542438             lea edx, [esp + 0x38]
// 0072ffd2  0f95c1               setne cl
// 0072ffd5  49                   dec ecx
// 0072ffd6  81e100020000         and ecx, 0x200
// 0072ffdc  0bcf                 or ecx, edi
// 0072ffde  51                   push ecx
// 0072ffdf  6a03                 push 3
// 0072ffe1  52                   push edx
// 0072ffe2  50                   push eax
// 0072ffe3  ffd5                 call ebp
// 0072ffe5  85f6                 test esi, esi
// 0072ffe7  7504                 jne 0x72ffed
// 0072ffe9  33c0                 xor eax, eax
// 0072ffeb  eb03                 jmp 0x72fff0
// 0072ffed  8b4604               mov eax, dword ptr [esi + 4]
// 0072fff0  33c9                 xor ecx, ecx
// 0072fff2  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0072fff7  8d542418             lea edx, [esp + 0x18]
// 0072fffb  0f95c1               setne cl
// 0072fffe  49                   dec ecx
// 0072ffff  81e100020000         and ecx, 0x200
// 00730005  0bcf                 or ecx, edi
// 00730007  83c901               or ecx, 1
// 0073000a  51                   push ecx
// 0073000b  6a03                 push 3
// 0073000d  52                   push edx
// 0073000e  50                   push eax
// 0073000f  ffd5                 call ebp
// 00730011  8b03                 mov eax, dword ptr [ebx]
// 00730013  8b5008               mov edx, dword ptr [eax + 8]
// 00730016  8bcb                 mov ecx, ebx
// 00730018  ffd2                 call edx
// 0073001a  85c0                 test eax, eax
// 0073001c  7504                 jne 0x730022
// 0073001e  33d2                 xor edx, edx
// 00730020  eb03                 jmp 0x730025
// 00730022  8b5020               mov edx, dword ptr [eax + 0x20]
// 00730025  85f6                 test esi, esi
// 00730027  7504                 jne 0x73002d
// 00730029  33c9                 xor ecx, ecx
// 0073002b  eb03                 jmp 0x730030
// 0073002d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00730030  85c0                 test eax, eax
// 00730032  7403                 je 0x730037
// 00730034  8b4020               mov eax, dword ptr [eax + 0x20]
// 00730037  52                   push edx
// 00730038  51                   push ecx
// 00730039  6837010000           push 0x137
// 0073003e  50                   push eax
// 0073003f  ff15c42d8000         call dword ptr [0x802dc4]
// 00730045  85f6                 test esi, esi
// 00730047  7504                 jne 0x73004d
// 00730049  33c9                 xor ecx, ecx
// 0073004b  eb03                 jmp 0x730050
// 0073004d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00730050  50                   push eax
// 00730051  8d442454             lea eax, [esp + 0x54]
// 00730055  50                   push eax
// 00730056  51                   push ecx
// 00730057  ff15e02b8000         call dword ptr [0x802be0]
// 0073005d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00730061  8b2d402b8000         mov ebp, dword ptr [0x802b40]
// 00730067  83fb3e               cmp ebx, 0x3e
// 0073006a  7513                 jne 0x73007f
// 0073006c  85f6                 test esi, esi
// 0073006e  7504                 jne 0x730074
// 00730070  33c0                 xor eax, eax
// 00730072  eb03                 jmp 0x730077
// 00730074  8b4604               mov eax, dword ptr [esi + 4]
// 00730077  8d4c2470             lea ecx, [esp + 0x70]
// 0073007b  51                   push ecx
// 0073007c  50                   push eax
// 0073007d  ffd5                 call ebp
// 0073007f  8b3d6c2d8000         mov edi, dword ptr [0x802d6c]
// 00730085  8d542450             lea edx, [esp + 0x50]
// 00730089  52                   push edx
// 0073008a  ffd7                 call edi
// 0073008c  85c0                 test eax, eax
// 0073008e  7579                 jne 0x730109
// 00730090  8d442428             lea eax, [esp + 0x28]
// 00730094  50                   push eax
// 00730095  ffd7                 call edi
// 00730097  85c0                 test eax, eax
// 00730099  756e                 jne 0x730109
// 0073009b  e8a0fcfaff           call 0x6dfd40
// 007300a0  6a0f                 push 0xf
// 007300a2  8bc8                 mov ecx, eax
// 007300a4  e877f4faff           call 0x6df520
// 007300a9  50                   push eax
// 007300aa  8d4c242c             lea ecx, [esp + 0x2c]
// 007300ae  51                   push ecx
// 007300af  8bce                 mov ecx, esi
// 007300b1  e8a812f7ff           call 0x6a135e
// 007300b6  837c244802           cmp dword ptr [esp + 0x48], 2
// 007300bb  752e                 jne 0x7300eb
// 007300bd  e87efcfaff           call 0x6dfd40
// 007300c2  6a10                 push 0x10
// 007300c4  8bc8                 mov ecx, eax
// 007300c6  e855f4faff           call 0x6df520
// 007300cb  8bf8                 mov edi, eax
// 007300cd  e86efcfaff           call 0x6dfd40
// 007300d2  6a14                 push 0x14
// 007300d4  8bc8                 mov ecx, eax
// 007300d6  e845f4faff           call 0x6df520
// 007300db  57                   push edi
// 007300dc  50                   push eax
// 007300dd  8d542430             lea edx, [esp + 0x30]
// 007300e1  52                   push edx
// 007300e2  8bce                 mov ecx, esi
// 007300e4  e86f12f7ff           call 0x6a1358
// 007300e9  eb1e                 jmp 0x730109
// 007300eb  85f6                 test esi, esi
// 007300ed  7504                 jne 0x7300f3
// 007300ef  33c0                 xor eax, eax
// 007300f1  eb03                 jmp 0x7300f6
// 007300f3  8b4604               mov eax, dword ptr [esi + 4]
// 007300f6  680f200000           push 0x200f
// 007300fb  6a05                 push 5
// 007300fd  8d4c2430             lea ecx, [esp + 0x30]
// 00730101  51                   push ecx
// 00730102  50                   push eax
// 00730103  ff15402c8000         call dword ptr [0x802c40]
// 00730109  83fb3f               cmp ebx, 0x3f
// 0073010c  0f85d6050000         jne 0x7306e8
// 00730112  85f6                 test esi, esi
// 00730114  7515                 jne 0x73012b
// 00730116  8d542460             lea edx, [esp + 0x60]
// 0073011a  52                   push edx
// 0073011b  56                   push esi
// 0073011c  ffd5                 call ebp
// 0073011e  5f                   pop edi
// 0073011f  5e                   pop esi
// 00730120  5d                   pop ebp
// 00730121  5b                   pop ebx
// 00730122  81c484000000         add esp, 0x84
// 00730128  c20800               ret 8
// 0073012b  8b7604               mov esi, dword ptr [esi + 4]
// 0073012e  8d542460             lea edx, [esp + 0x60]
// 00730132  52                   push edx
// 00730133  56                   push esi
// 00730134  ffd5                 call ebp
// 00730136  5f                   pop edi
// 00730137  5e                   pop esi
// 00730138  5d                   pop ebp
// 00730139  5b                   pop ebx
// 0073013a  81c484000000         add esp, 0x84
// 00730140  c20800               ret 8
// 00730143  8d4348               lea eax, [ebx + 0x48]
// 00730146  50                   push eax
// 00730147  8d8c2488000000       lea ecx, [esp + 0x88]
// 0073014e  51                   push ecx
// 0073014f  ff15702d8000         call dword ptr [0x802d70]
// 00730155  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 00730158  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0073015f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00730166  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0073016d  896c2418             mov dword ptr [esp + 0x18], ebp
// 00730171  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00730178  896c2420             mov dword ptr [esp + 0x20], ebp
// 0073017c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00730180  89542428             mov dword ptr [esp + 0x28], edx
// 00730184  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00730187  8944242c             mov dword ptr [esp + 0x2c], eax
// 0073018b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073018f  89442454             mov dword ptr [esp + 0x54], eax
// 00730193  89442464             mov dword ptr [esp + 0x64], eax
// 00730197  8944243c             mov dword ptr [esp + 0x3c], eax
// 0073019b  89442474             mov dword ptr [esp + 0x74], eax
// 0073019f  8b442418             mov eax, dword ptr [esp + 0x18]
// 007301a3  896c2458             mov dword ptr [esp + 0x58], ebp
// 007301a7  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 007301ab  89542430             mov dword ptr [esp + 0x30], edx
// 007301af  89542450             mov dword ptr [esp + 0x50], edx
// 007301b3  89542460             mov dword ptr [esp + 0x60], edx
// 007301b7  03d5                 add edx, ebp
// 007301b9  03f2                 add esi, edx
// 007301bb  89442478             mov dword ptr [esp + 0x78], eax
// 007301bf  8b442448             mov eax, dword ptr [esp + 0x48]
// 007301c3  894c2434             mov dword ptr [esp + 0x34], ecx
// 007301c7  894c2424             mov dword ptr [esp + 0x24], ecx
// 007301cb  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007301cf  89542468             mov dword ptr [esp + 0x68], edx
// 007301d3  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007301d7  89542438             mov dword ptr [esp + 0x38], edx
// 007301db  89742440             mov dword ptr [esp + 0x40], esi
// 007301df  894c2444             mov dword ptr [esp + 0x44], ecx
// 007301e3  89742470             mov dword ptr [esp + 0x70], esi
// 007301e7  894c247c             mov dword ptr [esp + 0x7c], ecx
// 007301eb  83f803               cmp eax, 3
// 007301ee  0f85fe010000         jne 0x7303f2
// 007301f4  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 007301fb  83c620               add esi, 0x20
// 007301fe  8bce                 mov ecx, esi
// 00730200  e82b82feff           call 0x718430
// 00730205  85c0                 test eax, eax
// 00730207  0f8445030000         je 0x730552
// 0073020d  85ff                 test edi, edi
// 0073020f  7505                 jne 0x730216
// 00730211  8d4f0c               lea ecx, [edi + 0xc]
// 00730214  eb1c                 jmp 0x730232
// 00730216  b83c000000           mov eax, 0x3c
// 0073021b  39442410             cmp dword ptr [esp + 0x10], eax
// 0073021f  7505                 jne 0x730226
// 00730221  8d48cf               lea ecx, [eax - 0x31]
// 00730224  eb0c                 jmp 0x730232
// 00730226  33c9                 xor ecx, ecx
// 00730228  39442414             cmp dword ptr [esp + 0x14], eax
// 0073022c  0f94c1               sete cl
// 0073022f  83c109               add ecx, 9
// 00730232  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00730239  85ed                 test ebp, ebp
// 0073023b  7504                 jne 0x730241
// 0073023d  33c0                 xor eax, eax
// 0073023f  eb03                 jmp 0x730244
// 00730241  8b4504               mov eax, dword ptr [ebp + 4]
// 00730244  6a00                 push 0
// 00730246  8d54242c             lea edx, [esp + 0x2c]
// 0073024a  52                   push edx
// 0073024b  51                   push ecx
// 0073024c  6a01                 push 1
// 0073024e  50                   push eax
// 0073024f  8bce                 mov ecx, esi
// 00730251  e85a7efeff           call 0x7180b0
// 00730256  85ff                 test edi, edi
// 00730258  7505                 jne 0x73025f
// 0073025a  8d4f10               lea ecx, [edi + 0x10]
// 0073025d  eb1c                 jmp 0x73027b
// 0073025f  b83d000000           mov eax, 0x3d
// 00730264  39442410             cmp dword ptr [esp + 0x10], eax
// 00730268  7505                 jne 0x73026f
// 0073026a  8d48d2               lea ecx, [eax - 0x2e]
// 0073026d  eb0c                 jmp 0x73027b
// 0073026f  33c9                 xor ecx, ecx
// 00730271  39442414             cmp dword ptr [esp + 0x14], eax
// 00730275  0f94c1               sete cl
// 00730278  83c10d               add ecx, 0xd
// 0073027b  85ed                 test ebp, ebp
// 0073027d  7504                 jne 0x730283
// 0073027f  33c0                 xor eax, eax
// 00730281  eb03                 jmp 0x730286
// 00730283  8b4504               mov eax, dword ptr [ebp + 4]
// 00730286  6a00                 push 0
// 00730288  8d54241c             lea edx, [esp + 0x1c]
// 0073028c  52                   push edx
// 0073028d  51                   push ecx
// 0073028e  6a01                 push 1
// 00730290  50                   push eax
// 00730291  8bce                 mov ecx, esi
// 00730293  e8187efeff           call 0x7180b0
// 00730298  8b1d6c2d8000         mov ebx, dword ptr [0x802d6c]
// 0073029e  8d442450             lea eax, [esp + 0x50]
// 007302a2  50                   push eax
// 007302a3  ffd3                 call ebx
// 007302a5  85c0                 test eax, eax
// 007302a7  0f853b040000         jne 0x7306e8
// 007302ad  8d4c2460             lea ecx, [esp + 0x60]
// 007302b1  51                   push ecx
// 007302b2  ffd3                 call ebx
// 007302b4  85c0                 test eax, eax
// 007302b6  7540                 jne 0x7302f8
// 007302b8  85ff                 test edi, edi
// 007302ba  7505                 jne 0x7302c1
// 007302bc  8d4804               lea ecx, [eax + 4]
// 007302bf  eb1a                 jmp 0x7302db
// 007302c1  b83e000000           mov eax, 0x3e
// 007302c6  39442410             cmp dword ptr [esp + 0x10], eax
// 007302ca  7505                 jne 0x7302d1
// 007302cc  8d48c5               lea ecx, [eax - 0x3b]
// 007302cf  eb0a                 jmp 0x7302db
// 007302d1  33c9                 xor ecx, ecx
// 007302d3  39442414             cmp dword ptr [esp + 0x14], eax
// 007302d7  0f94c1               sete cl
// 007302da  41                   inc ecx
// 007302db  85ed                 test ebp, ebp
// 007302dd  7504                 jne 0x7302e3
// 007302df  33c0                 xor eax, eax
// 007302e1  eb03                 jmp 0x7302e6
// 007302e3  8b4504               mov eax, dword ptr [ebp + 4]
// 007302e6  6a00                 push 0
// 007302e8  8d542464             lea edx, [esp + 0x64]
// 007302ec  52                   push edx
// 007302ed  51                   push ecx
// 007302ee  6a04                 push 4
// 007302f0  50                   push eax
// 007302f1  8bce                 mov ecx, esi
// 007302f3  e8b87dfeff           call 0x7180b0
// 007302f8  8d442438             lea eax, [esp + 0x38]
// 007302fc  50                   push eax
// 007302fd  ffd3                 call ebx
// 007302ff  85c0                 test eax, eax
// 00730301  0f858f000000         jne 0x730396
// 00730307  b840000000           mov eax, 0x40
// 0073030c  85ff                 test edi, edi
// 0073030e  7505                 jne 0x730315
// 00730310  8d48c4               lea ecx, [eax - 0x3c]
// 00730313  eb17                 jmp 0x73032c
// 00730315  39442410             cmp dword ptr [esp + 0x10], eax
// 00730319  7507                 jne 0x730322
// 0073031b  b903000000           mov ecx, 3
// 00730320  eb0a                 jmp 0x73032c
// 00730322  33c9                 xor ecx, ecx
// 00730324  39442414             cmp dword ptr [esp + 0x14], eax
// 00730328  0f94c1               sete cl
// 0073032b  41                   inc ecx
// 0073032c  85ed                 test ebp, ebp
// 0073032e  7504                 jne 0x730334
// 00730330  33c0                 xor eax, eax
// 00730332  eb03                 jmp 0x730337
// 00730334  8b4504               mov eax, dword ptr [ebp + 4]
// 00730337  6a00                 push 0
// 00730339  8d54243c             lea edx, [esp + 0x3c]
// 0073033d  52                   push edx
// 0073033e  51                   push ecx
// 0073033f  6a02                 push 2
// 00730341  50                   push eax
// 00730342  8bce                 mov ecx, esi
// 00730344  e8677dfeff           call 0x7180b0
// 00730349  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073034d  2b442438             sub eax, dword ptr [esp + 0x38]
// 00730351  83f80d               cmp eax, 0xd
// 00730354  7e40                 jle 0x730396
// 00730356  85ff                 test edi, edi
// 00730358  7505                 jne 0x73035f
// 0073035a  8d4f04               lea ecx, [edi + 4]
// 0073035d  eb1a                 jmp 0x730379
// 0073035f  b840000000           mov eax, 0x40
// 00730364  39442410             cmp dword ptr [esp + 0x10], eax
// 00730368  7505                 jne 0x73036f
// 0073036a  8d48c3               lea ecx, [eax - 0x3d]
// 0073036d  eb0a                 jmp 0x730379
// 0073036f  33c9                 xor ecx, ecx
// 00730371  39442414             cmp dword ptr [esp + 0x14], eax
// 00730375  0f94c1               sete cl
// 00730378  41                   inc ecx
// 00730379  85ed                 test ebp, ebp
// 0073037b  7504                 jne 0x730381
// 0073037d  33c0                 xor eax, eax
// 0073037f  eb03                 jmp 0x730384
// 00730381  8b4504               mov eax, dword ptr [ebp + 4]
// 00730384  6a00                 push 0
// 00730386  8d54243c             lea edx, [esp + 0x3c]
// 0073038a  52                   push edx
// 0073038b  51                   push ecx
// 0073038c  6a08                 push 8
// 0073038e  50                   push eax
// 0073038f  8bce                 mov ecx, esi
// 00730391  e81a7dfeff           call 0x7180b0
// 00730396  8d442470             lea eax, [esp + 0x70]
// 0073039a  50                   push eax
// 0073039b  ffd3                 call ebx
// 0073039d  85c0                 test eax, eax
// 0073039f  0f8543030000         jne 0x7306e8
// 007303a5  85ff                 test edi, edi
// 007303a7  7505                 jne 0x7303ae
// 007303a9  8d4804               lea ecx, [eax + 4]
// 007303ac  eb1a                 jmp 0x7303c8
// 007303ae  b83f000000           mov eax, 0x3f
// 007303b3  39442410             cmp dword ptr [esp + 0x10], eax
// 007303b7  7505                 jne 0x7303be
// 007303b9  8d48c4               lea ecx, [eax - 0x3c]
// 007303bc  eb0a                 jmp 0x7303c8
// 007303be  33c9                 xor ecx, ecx
// 007303c0  39442414             cmp dword ptr [esp + 0x14], eax
// 007303c4  0f94c1               sete cl
// 007303c7  41                   inc ecx
// 007303c8  85ed                 test ebp, ebp
// 007303ca  7504                 jne 0x7303d0
// 007303cc  33c0                 xor eax, eax
// 007303ce  eb03                 jmp 0x7303d3
// 007303d0  8b4504               mov eax, dword ptr [ebp + 4]
// 007303d3  6a00                 push 0
// 007303d5  8d542474             lea edx, [esp + 0x74]
// 007303d9  52                   push edx
// 007303da  51                   push ecx
// 007303db  6a05                 push 5
// 007303dd  50                   push eax
// 007303de  8bce                 mov ecx, esi
// 007303e0  e8cb7cfeff           call 0x7180b0
// 007303e5  5f                   pop edi
// 007303e6  5e                   pop esi
// 007303e7  5d                   pop ebp
// 007303e8  5b                   pop ebx
// 007303e9  81c484000000         add esp, 0x84
// 007303ef  c20800               ret 8
// 007303f2  83f802               cmp eax, 2
// 007303f5  0f8557010000         jne 0x730552
// 007303fb  e840f9faff           call 0x6dfd40
// 00730400  6a0f                 push 0xf
// 00730402  8bc8                 mov ecx, eax
// 00730404  e817f1faff           call 0x6df520
// 00730409  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00730410  50                   push eax
// 00730411  8d44242c             lea eax, [esp + 0x2c]
// 00730415  50                   push eax
// 00730416  8bce                 mov ecx, esi
// 00730418  e8410ff7ff           call 0x6a135e
// 0073041d  85ff                 test edi, edi
// 0073041f  742e                 je 0x73044f
// 00730421  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00730426  7527                 jne 0x73044f
// 00730428  e813f9faff           call 0x6dfd40
// 0073042d  6a14                 push 0x14
// 0073042f  8bc8                 mov ecx, eax
// 00730431  e8eaf0faff           call 0x6df520
// 00730436  8be8                 mov ebp, eax
// 00730438  e803f9faff           call 0x6dfd40
// 0073043d  6a10                 push 0x10
// 0073043f  8bc8                 mov ecx, eax
// 00730441  e8daf0faff           call 0x6df520
// 00730446  55                   push ebp
// 00730447  50                   push eax
// 00730448  8d4c2430             lea ecx, [esp + 0x30]
// 0073044c  51                   push ecx
// 0073044d  eb25                 jmp 0x730474
// 0073044f  e8ecf8faff           call 0x6dfd40
// 00730454  6a10                 push 0x10
// 00730456  8bc8                 mov ecx, eax
// 00730458  e8c3f0faff           call 0x6df520
// 0073045d  8be8                 mov ebp, eax
// 0073045f  e8dcf8faff           call 0x6dfd40
// 00730464  6a14                 push 0x14
// 00730466  8bc8                 mov ecx, eax
// 00730468  e8b3f0faff           call 0x6df520
// 0073046d  55                   push ebp
// 0073046e  50                   push eax
// 0073046f  8d542430             lea edx, [esp + 0x30]
// 00730473  52                   push edx
// 00730474  8bce                 mov ecx, esi
// 00730476  e8dd0ef7ff           call 0x6a1358
// 0073047b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073047f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00730483  57                   push edi
// 00730484  6a01                 push 1
// 00730486  6a01                 push 1
// 00730488  83ec10               sub esp, 0x10
// 0073048b  8bc4                 mov eax, esp
// 0073048d  8908                 mov dword ptr [eax], ecx
// 0073048f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00730493  895004               mov dword ptr [eax + 4], edx
// 00730496  8b542450             mov edx, dword ptr [esp + 0x50]
// 0073049a  894808               mov dword ptr [eax + 8], ecx
// 0073049d  56                   push esi
// 0073049e  89500c               mov dword ptr [eax + 0xc], edx
// 007304a1  e80af5ffff           call 0x72f9b0
// 007304a6  83c420               add esp, 0x20
// 007304a9  e892f8faff           call 0x6dfd40
// 007304ae  6a0f                 push 0xf
// 007304b0  8bc8                 mov ecx, eax
// 007304b2  e869f0faff           call 0x6df520
// 007304b7  50                   push eax
// 007304b8  8d44241c             lea eax, [esp + 0x1c]
// 007304bc  50                   push eax
// 007304bd  8bce                 mov ecx, esi
// 007304bf  e89a0ef7ff           call 0x6a135e
// 007304c4  85ff                 test edi, edi
// 007304c6  742e                 je 0x7304f6
// 007304c8  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 007304cd  7527                 jne 0x7304f6
// 007304cf  e86cf8faff           call 0x6dfd40
// 007304d4  6a14                 push 0x14
// 007304d6  8bc8                 mov ecx, eax
// 007304d8  e843f0faff           call 0x6df520
// 007304dd  8be8                 mov ebp, eax
// 007304df  e85cf8faff           call 0x6dfd40
// 007304e4  6a10                 push 0x10
// 007304e6  8bc8                 mov ecx, eax
// 007304e8  e833f0faff           call 0x6df520
// 007304ed  55                   push ebp
// 007304ee  50                   push eax
// 007304ef  8d4c2420             lea ecx, [esp + 0x20]
// 007304f3  51                   push ecx
// 007304f4  eb25                 jmp 0x73051b
// 007304f6  e845f8faff           call 0x6dfd40
// 007304fb  6a10                 push 0x10
// 007304fd  8bc8                 mov ecx, eax
// 007304ff  e81cf0faff           call 0x6df520
// 00730504  8be8                 mov ebp, eax
// 00730506  e835f8faff           call 0x6dfd40
// 0073050b  6a14                 push 0x14
// 0073050d  8bc8                 mov ecx, eax
// 0073050f  e80cf0faff           call 0x6df520
// 00730514  55                   push ebp
// 00730515  50                   push eax
// 00730516  8d542420             lea edx, [esp + 0x20]
// 0073051a  52                   push edx
// 0073051b  8bce                 mov ecx, esi
// 0073051d  e8360ef7ff           call 0x6a1358
// 00730522  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00730526  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073052a  57                   push edi
// 0073052b  6a00                 push 0
// 0073052d  6a01                 push 1
// 0073052f  83ec10               sub esp, 0x10
// 00730532  8bc4                 mov eax, esp
// 00730534  8908                 mov dword ptr [eax], ecx
// 00730536  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073053a  895004               mov dword ptr [eax + 4], edx
// 0073053d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00730541  894808               mov dword ptr [eax + 8], ecx
// 00730544  56                   push esi
// 00730545  89500c               mov dword ptr [eax + 0xc], edx
// 00730548  e863f4ffff           call 0x72f9b0
// 0073054d  83c420               add esp, 0x20
// 00730550  eb75                 jmp 0x7305c7
// 00730552  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00730559  85f6                 test esi, esi
// 0073055b  7504                 jne 0x730561
// 0073055d  33c0                 xor eax, eax
// 0073055f  eb03                 jmp 0x730564
// 00730561  8b4604               mov eax, dword ptr [esi + 4]
// 00730564  f7df                 neg edi
// 00730566  1bff                 sbb edi, edi
// 00730568  33c9                 xor ecx, ecx
// 0073056a  8b2d402d8000         mov ebp, dword ptr [0x802d40]
// 00730570  81e700ffffff         and edi, 0xffffff00
// 00730576  81c700010000         add edi, 0x100
// 0073057c  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00730581  8d542428             lea edx, [esp + 0x28]
// 00730585  0f95c1               setne cl
// 00730588  49                   dec ecx
// 00730589  81e100020000         and ecx, 0x200
// 0073058f  0bcf                 or ecx, edi
// 00730591  83c902               or ecx, 2
// 00730594  51                   push ecx
// 00730595  6a03                 push 3
// 00730597  52                   push edx
// 00730598  50                   push eax
// 00730599  ffd5                 call ebp
// 0073059b  85f6                 test esi, esi
// 0073059d  7504                 jne 0x7305a3
// 0073059f  33c0                 xor eax, eax
// 007305a1  eb03                 jmp 0x7305a6
// 007305a3  8b4604               mov eax, dword ptr [esi + 4]
// 007305a6  33c9                 xor ecx, ecx
// 007305a8  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 007305ad  8d542418             lea edx, [esp + 0x18]
// 007305b1  0f95c1               setne cl
// 007305b4  49                   dec ecx
// 007305b5  81e100020000         and ecx, 0x200
// 007305bb  0bcf                 or ecx, edi
// 007305bd  83c903               or ecx, 3
// 007305c0  51                   push ecx
// 007305c1  6a03                 push 3
// 007305c3  52                   push edx
// 007305c4  50                   push eax
// 007305c5  ffd5                 call ebp
// 007305c7  8b03                 mov eax, dword ptr [ebx]
// 007305c9  8b5008               mov edx, dword ptr [eax + 8]
// 007305cc  8bcb                 mov ecx, ebx
// 007305ce  ffd2                 call edx
// 007305d0  85c0                 test eax, eax
// 007305d2  7504                 jne 0x7305d8
// 007305d4  33d2                 xor edx, edx
// 007305d6  eb03                 jmp 0x7305db
// 007305d8  8b5020               mov edx, dword ptr [eax + 0x20]
// 007305db  85f6                 test esi, esi
// 007305dd  7504                 jne 0x7305e3
// 007305df  33c9                 xor ecx, ecx
// 007305e1  eb03                 jmp 0x7305e6
// 007305e3  8b4e04               mov ecx, dword ptr [esi + 4]
// 007305e6  85c0                 test eax, eax
// 007305e8  7403                 je 0x7305ed
// 007305ea  8b4020               mov eax, dword ptr [eax + 0x20]
// 007305ed  52                   push edx
// 007305ee  51                   push ecx
// 007305ef  6837010000           push 0x137
// 007305f4  50                   push eax
// 007305f5  ff15c42d8000         call dword ptr [0x802dc4]
// 007305fb  85f6                 test esi, esi
// 007305fd  7504                 jne 0x730603
// 007305ff  33c9                 xor ecx, ecx
// 00730601  eb03                 jmp 0x730606
// 00730603  8b4e04               mov ecx, dword ptr [esi + 4]
// 00730606  50                   push eax
// 00730607  8d442454             lea eax, [esp + 0x54]
// 0073060b  50                   push eax
// 0073060c  51                   push ecx
// 0073060d  ff15e02b8000         call dword ptr [0x802be0]
// 00730613  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00730617  8b2d402b8000         mov ebp, dword ptr [0x802b40]
// 0073061d  83fb3e               cmp ebx, 0x3e
// 00730620  7513                 jne 0x730635
// 00730622  85f6                 test esi, esi
// 00730624  7504                 jne 0x73062a
// 00730626  33c0                 xor eax, eax
// 00730628  eb03                 jmp 0x73062d
// 0073062a  8b4604               mov eax, dword ptr [esi + 4]
// 0073062d  8d4c2460             lea ecx, [esp + 0x60]
// 00730631  51                   push ecx
// 00730632  50                   push eax
// 00730633  ffd5                 call ebp
// 00730635  8b3d6c2d8000         mov edi, dword ptr [0x802d6c]
// 0073063b  8d542450             lea edx, [esp + 0x50]
// 0073063f  52                   push edx
// 00730640  ffd7                 call edi
// 00730642  85c0                 test eax, eax
// 00730644  7579                 jne 0x7306bf
// 00730646  8d442438             lea eax, [esp + 0x38]
// 0073064a  50                   push eax
// 0073064b  ffd7                 call edi
// 0073064d  85c0                 test eax, eax
// 0073064f  756e                 jne 0x7306bf
// 00730651  e8eaf6faff           call 0x6dfd40
// 00730656  6a0f                 push 0xf
// 00730658  8bc8                 mov ecx, eax
// 0073065a  e8c1eefaff           call 0x6df520
// 0073065f  50                   push eax
// 00730660  8d4c243c             lea ecx, [esp + 0x3c]
// 00730664  51                   push ecx
// 00730665  8bce                 mov ecx, esi
// 00730667  e8f20cf7ff           call 0x6a135e
// 0073066c  837c244802           cmp dword ptr [esp + 0x48], 2
// 00730671  752e                 jne 0x7306a1
// 00730673  e8c8f6faff           call 0x6dfd40
// 00730678  6a10                 push 0x10
// 0073067a  8bc8                 mov ecx, eax
// 0073067c  e89feefaff           call 0x6df520
// 00730681  8bf8                 mov edi, eax
// 00730683  e8b8f6faff           call 0x6dfd40
// 00730688  6a14                 push 0x14
// 0073068a  8bc8                 mov ecx, eax
// 0073068c  e88feefaff           call 0x6df520
// 00730691  57                   push edi
// 00730692  50                   push eax
// 00730693  8d542440             lea edx, [esp + 0x40]
// 00730697  52                   push edx
// 00730698  8bce                 mov ecx, esi
// 0073069a  e8b90cf7ff           call 0x6a1358
// 0073069f  eb1e                 jmp 0x7306bf
// 007306a1  85f6                 test esi, esi
// 007306a3  7504                 jne 0x7306a9
// 007306a5  33c0                 xor eax, eax
// 007306a7  eb03                 jmp 0x7306ac
// 007306a9  8b4604               mov eax, dword ptr [esi + 4]
// 007306ac  680f200000           push 0x200f
// 007306b1  6a05                 push 5
// 007306b3  8d4c2440             lea ecx, [esp + 0x40]
// 007306b7  51                   push ecx
// 007306b8  50                   push eax
// 007306b9  ff15402c8000         call dword ptr [0x802c40]
// 007306bf  83fb3f               cmp ebx, 0x3f
// 007306c2  7524                 jne 0x7306e8
// 007306c4  85f6                 test esi, esi
// 007306c6  7515                 jne 0x7306dd
// 007306c8  8d542470             lea edx, [esp + 0x70]
// 007306cc  52                   push edx
// 007306cd  56                   push esi
// 007306ce  ffd5                 call ebp
// 007306d0  5f                   pop edi
// 007306d1  5e                   pop esi
// 007306d2  5d                   pop ebp
// 007306d3  5b                   pop ebx
// 007306d4  81c484000000         add esp, 0x84
// 007306da  c20800               ret 8
// 007306dd  8b7604               mov esi, dword ptr [esi + 4]
// 007306e0  8d542470             lea edx, [esp + 0x70]
// 007306e4  52                   push edx
// 007306e5  56                   push esi
// 007306e6  ffd5                 call ebp
// 007306e8  5f                   pop edi
// 007306e9  5e                   pop esi
// 007306ea  5d                   pop ebp
// 007306eb  5b                   pop ebx
// 007306ec  81c484000000         add esp, 0x84
// 007306f2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
