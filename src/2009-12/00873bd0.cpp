// roc 2009-12 00873bd0  unit: CXTPRibbonTheme  size: 2040 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00873bd0
//
// 00873bd0  6aff                 push -1
// 00873bd2  68f9ff9500           push 0x95fff9
// 00873bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00873bdd  50                   push eax
// 00873bde  81ec8c000000         sub esp, 0x8c
// 00873be4  53                   push ebx
// 00873be5  55                   push ebp
// 00873be6  56                   push esi
// 00873be7  57                   push edi
// 00873be8  a10052b600           mov eax, dword ptr [0xb65200]
// 00873bed  33c4                 xor eax, esp
// 00873bef  50                   push eax
// 00873bf0  8d8424a0000000       lea eax, [esp + 0xa0]
// 00873bf7  64a300000000         mov dword ptr fs:[0], eax
// 00873bfd  8bf9                 mov edi, ecx
// 00873bff  897c2438             mov dword ptr [esp + 0x38], edi
// 00873c03  e8689dfcff           call 0x83d970
// 00873c08  85c0                 test eax, eax
// 00873c0a  7548                 jne 0x873c54
// 00873c0c  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00873c13  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00873c1a  83ec10               sub esp, 0x10
// 00873c1d  8bc4                 mov eax, esp
// 00873c1f  8908                 mov dword ptr [eax], ecx
// 00873c21  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00873c28  895004               mov dword ptr [eax + 4], edx
// 00873c2b  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00873c32  894808               mov dword ptr [eax + 8], ecx
// 00873c35  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00873c3c  89500c               mov dword ptr [eax + 0xc], edx
// 00873c3f  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 00873c46  50                   push eax
// 00873c47  51                   push ecx
// 00873c48  8bcf                 mov ecx, edi
// 00873c4a  e851700100           call 0x88aca0
// 00873c4f  e9ef060000           jmp 0x874343
// 00873c54  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 00873c5b  8b13                 mov edx, dword ptr [ebx]
// 00873c5d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00873c60  8bcb                 mov ecx, ebx
// 00873c62  ffd0                 call eax
// 00873c64  8b13                 mov edx, dword ptr [ebx]
// 00873c66  89442414             mov dword ptr [esp + 0x14], eax
// 00873c6a  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00873c6d  8bcb                 mov ecx, ebx
// 00873c6f  ffd0                 call eax
// 00873c71  89442418             mov dword ptr [esp + 0x18], eax
// 00873c75  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 00873c7b  83f8ff               cmp eax, -1
// 00873c7e  750f                 jne 0x873c8f
// 00873c80  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 00873c86  85c9                 test ecx, ecx
// 00873c88  7405                 je 0x873c8f
// 00873c8a  e82129f8ff           call 0x7f65b0
// 00873c8f  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 00873c95  8944241c             mov dword ptr [esp + 0x1c], eax
// 00873c99  83f9ff               cmp ecx, -1
// 00873c9c  750d                 jne 0x873cab
// 00873c9e  8b835c010000         mov eax, dword ptr [ebx + 0x15c]
// 00873ca4  85c0                 test eax, eax
// 00873ca6  7403                 je 0x873cab
// 00873ca8  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00873cab  8b13                 mov edx, dword ptr [ebx]
// 00873cad  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00873cb3  894c2444             mov dword ptr [esp + 0x44], ecx
// 00873cb7  8bcb                 mov ecx, ebx
// 00873cb9  ffd0                 call eax
// 00873cbb  8bcb                 mov ecx, ebx
// 00873cbd  89442420             mov dword ptr [esp + 0x20], eax
// 00873cc1  e8ca1ff8ff           call 0x7f5c90
// 00873cc6  33c9                 xor ecx, ecx
// 00873cc8  83f804               cmp eax, 4
// 00873ccb  8b8358010000         mov eax, dword ptr [ebx + 0x158]
// 00873cd1  0f95c1               setne cl
// 00873cd4  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00873cdc  8bf1                 mov esi, ecx
// 00873cde  8974243c             mov dword ptr [esp + 0x3c], esi
// 00873ce2  85c0                 test eax, eax
// 00873ce4  0f8417010000         je 0x873e01
// 00873cea  83782400             cmp dword ptr [eax + 0x24], 0
// 00873cee  0f840d010000         je 0x873e01
// 00873cf4  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 00873cfb  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 00873d03  750d                 jne 0x873d12
// 00873d05  83bb9400000000       cmp dword ptr [ebx + 0x94], 0
// 00873d0c  7504                 jne 0x873d12
// 00873d0e  33ed                 xor ebp, ebp
// 00873d10  eb05                 jmp 0x873d17
// 00873d12  bd01000000           mov ebp, 1
// 00873d17  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00873d1d  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 00873d23  6a01                 push 1
// 00873d25  6a00                 push 0
// 00873d27  6a01                 push 1
// 00873d29  6a01                 push 1
// 00873d2b  50                   push eax
// 00873d2c  e89f17fdff           call 0x8454d0
// 00873d31  3b8380000000         cmp eax, dword ptr [ebx + 0x80]
// 00873d37  7e37                 jle 0x873d70
// 00873d39  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 00873d3f  85c0                 test eax, eax
// 00873d41  7c0f                 jl 0x873d52
// 00873d43  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00873d46  7d0a                 jge 0x873d52
// 00873d48  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00873d4b  8d1482               lea edx, [edx + eax*4]
// 00873d4e  8b12                 mov edx, dword ptr [edx]
// 00873d50  eb02                 jmp 0x873d54
// 00873d52  33d2                 xor edx, edx
// 00873d54  83ba9800000000       cmp dword ptr [edx + 0x98], 0
// 00873d5b  7513                 jne 0x873d70
// 00873d5d  50                   push eax
// 00873d5e  e8ed4ebbff           call 0x428c50
// 00873d63  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00873d6a  7504                 jne 0x873d70
// 00873d6c  33f6                 xor esi, esi
// 00873d6e  eb05                 jmp 0x873d75
// 00873d70  be01000000           mov esi, 1
// 00873d75  b88015a000           mov eax, 0xa01580
// 00873d7a  85ed                 test ebp, ebp
// 00873d7c  7505                 jne 0x873d83
// 00873d7e  b85c15a000           mov eax, 0xa0155c
// 00873d83  50                   push eax
// 00873d84  8d4c2444             lea ecx, [esp + 0x44]
// 00873d88  ff15b8de9800         call dword ptr [0x98deb8]
// 00873d8e  8d4c2440             lea ecx, [esp + 0x40]
// 00873d92  c78424a800000000000000 mov dword ptr [esp + 0xa8], 0
// 00873d9d  ff1580de9800         call dword ptr [0x98de80]
// 00873da3  50                   push eax
// 00873da4  8bcf                 mov ecx, edi
// 00873da6  e855af0000           call 0x87ed00
// 00873dab  8be8                 mov ebp, eax
// 00873dad  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00873db1  b83415a000           mov eax, 0xa01534
// 00873db6  85f6                 test esi, esi
// 00873db8  7505                 jne 0x873dbf
// 00873dba  b80815a000           mov eax, 0xa01508
// 00873dbf  50                   push eax
// 00873dc0  8d4c2444             lea ecx, [esp + 0x44]
// 00873dc4  ff155cde9800         call dword ptr [0x98de5c]
// 00873dca  8d4c2440             lea ecx, [esp + 0x40]
// 00873dce  ff1580de9800         call dword ptr [0x98de80]
// 00873dd4  50                   push eax
// 00873dd5  8bcf                 mov ecx, edi
// 00873dd7  e824af0000           call 0x87ed00
// 00873ddc  8bf0                 mov esi, eax
// 00873dde  8d4c2440             lea ecx, [esp + 0x40]
// 00873de2  89742448             mov dword ptr [esp + 0x48], esi
// 00873de6  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00873dee  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 00873df9  ff15c0de9800         call dword ptr [0x98dec0]
// 00873dff  eb38                 jmp 0x873e39
// 00873e01  b8f014a000           mov eax, 0xa014f0
// 00873e06  85f6                 test esi, esi
// 00873e08  7505                 jne 0x873e0f
// 00873e0a  b8d814a000           mov eax, 0xa014d8
// 00873e0f  50                   push eax
// 00873e10  8bcf                 mov ecx, edi
// 00873e12  e8e9ae0000           call 0x87ed00
// 00873e17  8be8                 mov ebp, eax
// 00873e19  8944244c             mov dword ptr [esp + 0x4c], eax
// 00873e1d  b8b814a000           mov eax, 0xa014b8
// 00873e22  85f6                 test esi, esi
// 00873e24  7505                 jne 0x873e2b
// 00873e26  b89814a000           mov eax, 0xa01498
// 00873e2b  50                   push eax
// 00873e2c  8bcf                 mov ecx, edi
// 00873e2e  e8cdae0000           call 0x87ed00
// 00873e33  8bf0                 mov esi, eax
// 00873e35  89442448             mov dword ptr [esp + 0x48], eax
// 00873e39  85ed                 test ebp, ebp
// 00873e3b  0f8402050000         je 0x874343
// 00873e41  85f6                 test esi, esi
// 00873e43  0f84fa040000         je 0x874343
// 00873e49  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00873e4d  e8eea0f8ff           call 0x7fdf40
// 00873e52  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00873e56  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 00873e5d  f7d9                 neg ecx
// 00873e5f  1bc9                 sbb ecx, ecx
// 00873e61  81e188b4fdff         and ecx, 0xfffdb488
// 00873e67  81c18d8d8d00         add ecx, 0x8d8d8d
// 00873e6d  8bf0                 mov esi, eax
// 00873e6f  8b07                 mov eax, dword ptr [edi]
// 00873e71  8b5038               mov edx, dword ptr [eax + 0x38]
// 00873e74  51                   push ecx
// 00873e75  8bcf                 mov ecx, edi
// 00873e77  ffd2                 call edx
// 00873e79  6a01                 push 1
// 00873e7b  8bcf                 mov ecx, edi
// 00873e7d  e80e260b00           call 0x926490
// 00873e82  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00873e87  7438                 je 0x873ec1
// 00873e89  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 00873e90  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00873e97  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 00873e9e  89442424             mov dword ptr [esp + 0x24], eax
// 00873ea2  8b442438             mov eax, dword ptr [esp + 0x38]
// 00873ea6  2b90c8000000         sub edx, dword ptr [eax + 0xc8]
// 00873eac  894c2428             mov dword ptr [esp + 0x28], ecx
// 00873eb0  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 00873eb7  8954242c             mov dword ptr [esp + 0x2c], edx
// 00873ebb  894c2430             mov dword ptr [esp + 0x30], ecx
// 00873ebf  eb2e                 jmp 0x873eef
// 00873ec1  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00873ec8  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00873ecf  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00873ed6  89542424             mov dword ptr [esp + 0x24], edx
// 00873eda  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 00873ee1  2bd6                 sub edx, esi
// 00873ee3  89442428             mov dword ptr [esp + 0x28], eax
// 00873ee7  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00873eeb  89542430             mov dword ptr [esp + 0x30], edx
// 00873eef  8d442424             lea eax, [esp + 0x24]
// 00873ef3  8b08                 mov ecx, dword ptr [eax]
// 00873ef5  8b5004               mov edx, dword ptr [eax + 4]
// 00873ef8  894c2470             mov dword ptr [esp + 0x70], ecx
// 00873efc  8b4808               mov ecx, dword ptr [eax + 8]
// 00873eff  89542474             mov dword ptr [esp + 0x74], edx
// 00873f03  8b500c               mov edx, dword ptr [eax + 0xc]
// 00873f06  8b442434             mov eax, dword ptr [esp + 0x34]
// 00873f0a  83c006               add eax, 6
// 00873f0d  50                   push eax
// 00873f0e  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00873f12  6a00                 push 0
// 00873f14  8d4c2458             lea ecx, [esp + 0x58]
// 00873f18  51                   push ecx
// 00873f19  8bcd                 mov ecx, ebp
// 00873f1b  89942488000000       mov dword ptr [esp + 0x88], edx
// 00873f22  e899c90600           call 0x8e08c0
// 00873f27  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00873f2c  742b                 je 0x873f59
// 00873f2e  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 00873f35  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00873f39  8bd0                 mov edx, eax
// 00873f3b  2b91c8000000         sub edx, dword ptr [ecx + 0xc8]
// 00873f41  8944242c             mov dword ptr [esp + 0x2c], eax
// 00873f45  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 00873f4c  89542424             mov dword ptr [esp + 0x24], edx
// 00873f50  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00873f57  eb21                 jmp 0x873f7a
// 00873f59  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00873f60  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 00873f67  894c2424             mov dword ptr [esp + 0x24], ecx
// 00873f6b  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00873f72  8bd0                 mov edx, eax
// 00873f74  2bd6                 sub edx, esi
// 00873f76  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00873f7a  89442430             mov dword ptr [esp + 0x30], eax
// 00873f7e  89542428             mov dword ptr [esp + 0x28], edx
// 00873f82  8d442424             lea eax, [esp + 0x24]
// 00873f86  8b4804               mov ecx, dword ptr [eax + 4]
// 00873f89  8b10                 mov edx, dword ptr [eax]
// 00873f8b  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00873f92  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00873f96  89942480000000       mov dword ptr [esp + 0x80], edx
// 00873f9d  8b5008               mov edx, dword ptr [eax + 8]
// 00873fa0  8b400c               mov eax, dword ptr [eax + 0xc]
// 00873fa3  83c105               add ecx, 5
// 00873fa6  51                   push ecx
// 00873fa7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00873fab  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00873fb2  6a00                 push 0
// 00873fb4  8d542468             lea edx, [esp + 0x68]
// 00873fb8  52                   push edx
// 00873fb9  89842498000000       mov dword ptr [esp + 0x98], eax
// 00873fc0  e8fbc80600           call 0x8e08c0
// 00873fc5  8b442418             mov eax, dword ptr [esp + 0x18]
// 00873fc9  33c9                 xor ecx, ecx
// 00873fcb  83ceff               or esi, 0xffffffff
// 00873fce  83f803               cmp eax, 3
// 00873fd1  0f94c1               sete cl
// 00873fd4  33d2                 xor edx, edx
// 00873fd6  83f804               cmp eax, 4
// 00873fd9  0f94c2               sete dl
// 00873fdc  837c241c04           cmp dword ptr [esp + 0x1c], 4
// 00873fe1  8bf9                 mov edi, ecx
// 00873fe3  8bea                 mov ebp, edx
// 00873fe5  7517                 jne 0x873ffe
// 00873fe7  85c0                 test eax, eax
// 00873fe9  750c                 jne 0x873ff7
// 00873feb  39442414             cmp dword ptr [esp + 0x14], eax
// 00873fef  7506                 jne 0x873ff7
// 00873ff1  39442420             cmp dword ptr [esp + 0x20], eax
// 00873ff5  7422                 je 0x874019
// 00873ff7  be04000000           mov esi, 4
// 00873ffc  eb7b                 jmp 0x874079
// 00873ffe  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00874003  7514                 jne 0x874019
// 00874005  50                   push eax
// 00874006  e8251af8ff           call 0x7f5a30
// 0087400b  83c404               add esp, 4
// 0087400e  85c0                 test eax, eax
// 00874010  7467                 je 0x874079
// 00874012  be05000000           mov esi, 5
// 00874017  eb60                 jmp 0x874079
// 00874019  837c244400           cmp dword ptr [esp + 0x44], 0
// 0087401e  0f8437010000         je 0x87415b
// 00874024  837c242000           cmp dword ptr [esp + 0x20], 0
// 00874029  7407                 je 0x874032
// 0087402b  be05000000           mov esi, 5
// 00874030  eb47                 jmp 0x874079
// 00874032  85c0                 test eax, eax
// 00874034  750b                 jne 0x874041
// 00874036  39442414             cmp dword ptr [esp + 0x14], eax
// 0087403a  7513                 jne 0x87404f
// 0087403c  8d7002               lea esi, [eax + 2]
// 0087403f  eb38                 jmp 0x874079
// 00874041  837c241400           cmp dword ptr [esp + 0x14], 0
// 00874046  7507                 jne 0x87404f
// 00874048  be03000000           mov esi, 3
// 0087404d  eb2a                 jmp 0x874079
// 0087404f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00874053  51                   push ecx
// 00874054  e8d719f8ff           call 0x7f5a30
// 00874059  83c404               add esp, 4
// 0087405c  85c0                 test eax, eax
// 0087405e  7514                 jne 0x874074
// 00874060  39442418             cmp dword ptr [esp + 0x18], eax
// 00874064  0f84dc000000         je 0x874146
// 0087406a  39442414             cmp dword ptr [esp + 0x14], eax
// 0087406e  0f8439010000         je 0x8741ad
// 00874074  be01000000           mov esi, 1
// 00874079  03742434             add esi, dword ptr [esp + 0x34]
// 0087407d  83feff               cmp esi, -1
// 00874080  0f848c000000         je 0x874112
// 00874086  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0087408a  2b442454             sub eax, dword ptr [esp + 0x54]
// 0087408e  8d4c2450             lea ecx, [esp + 0x50]
// 00874092  0fafc6               imul eax, esi
// 00874095  50                   push eax
// 00874096  6a00                 push 0
// 00874098  51                   push ecx
// 00874099  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087409f  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008740a5  8d542470             lea edx, [esp + 0x70]
// 008740a9  52                   push edx
// 008740aa  50                   push eax
// 008740ab  e8a0dcffff           call 0x871d50
// 008740b0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008740b4  83c408               add esp, 8
// 008740b7  f7d8                 neg eax
// 008740b9  1bc0                 sbb eax, eax
// 008740bb  f7d8                 neg eax
// 008740bd  50                   push eax
// 008740be  68ff00ff00           push 0xff00ff
// 008740c3  b902000000           mov ecx, 2
// 008740c8  8d44242c             lea eax, [esp + 0x2c]
// 008740cc  50                   push eax
// 008740cd  894c2430             mov dword ptr [esp + 0x30], ecx
// 008740d1  894c2434             mov dword ptr [esp + 0x34], ecx
// 008740d5  894c2438             mov dword ptr [esp + 0x38], ecx
// 008740d9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008740dd  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008740e1  83ec10               sub esp, 0x10
// 008740e4  8bc4                 mov eax, esp
// 008740e6  8908                 mov dword ptr [eax], ecx
// 008740e8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008740ec  895004               mov dword ptr [eax + 4], edx
// 008740ef  8b542478             mov edx, dword ptr [esp + 0x78]
// 008740f3  894808               mov dword ptr [eax + 8], ecx
// 008740f6  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008740fd  89500c               mov dword ptr [eax + 0xc], edx
// 00874100  8d84248c000000       lea eax, [esp + 0x8c]
// 00874107  50                   push eax
// 00874108  51                   push ecx
// 00874109  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087410d  e8bed10600           call 0x8e12d0
// 00874112  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00874116  83ceff               or esi, 0xffffffff
// 00874119  83f803               cmp eax, 3
// 0087411c  0f859c000000         jne 0x8741be
// 00874122  837c241800           cmp dword ptr [esp + 0x18], 0
// 00874127  7513                 jne 0x87413c
// 00874129  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087412e  750c                 jne 0x87413c
// 00874130  8b442420             mov eax, dword ptr [esp + 0x20]
// 00874134  85c0                 test eax, eax
// 00874136  0f84a2000000         je 0x8741de
// 0087413c  be03000000           mov esi, 3
// 00874141  e9e8000000           jmp 0x87422e
// 00874146  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087414b  0f8428ffffff         je 0x874079
// 00874151  be02000000           mov esi, 2
// 00874156  e91effffff           jmp 0x874079
// 0087415b  837c242000           cmp dword ptr [esp + 0x20], 0
// 00874160  740a                 je 0x87416c
// 00874162  be05000000           mov esi, 5
// 00874167  e90dffffff           jmp 0x874079
// 0087416c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00874170  52                   push edx
// 00874171  e8ba18f8ff           call 0x7f5a30
// 00874176  83c404               add esp, 4
// 00874179  85c0                 test eax, eax
// 0087417b  0f85f3feffff         jne 0x874074
// 00874181  39442418             cmp dword ptr [esp + 0x18], eax
// 00874185  741b                 je 0x8741a2
// 00874187  39442414             cmp dword ptr [esp + 0x14], eax
// 0087418b  0f85e3feffff         jne 0x874074
// 00874191  f7df                 neg edi
// 00874193  1bff                 sbb edi, edi
// 00874195  83e7fb               and edi, 0xfffffffb
// 00874198  83c705               add edi, 5
// 0087419b  8bf7                 mov esi, edi
// 0087419d  e9d7feffff           jmp 0x874079
// 008741a2  837c241400           cmp dword ptr [esp + 0x14], 0
// 008741a7  0f84ccfeffff         je 0x874079
// 008741ad  f7df                 neg edi
// 008741af  1bff                 sbb edi, edi
// 008741b1  83e7fb               and edi, 0xfffffffb
// 008741b4  83c705               add edi, 5
// 008741b7  8bf7                 mov esi, edi
// 008741b9  e9bbfeffff           jmp 0x874079
// 008741be  85c0                 test eax, eax
// 008741c0  7518                 jne 0x8741da
// 008741c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008741c6  52                   push edx
// 008741c7  e86418f8ff           call 0x7f5a30
// 008741cc  83c404               add esp, 4
// 008741cf  85c0                 test eax, eax
// 008741d1  745b                 je 0x87422e
// 008741d3  be04000000           mov esi, 4
// 008741d8  eb54                 jmp 0x87422e
// 008741da  8b442420             mov eax, dword ptr [esp + 0x20]
// 008741de  837c244400           cmp dword ptr [esp + 0x44], 0
// 008741e3  0f8484010000         je 0x87436d
// 008741e9  85c0                 test eax, eax
// 008741eb  7407                 je 0x8741f4
// 008741ed  be02000000           mov esi, 2
// 008741f2  eb3a                 jmp 0x87422e
// 008741f4  837c241800           cmp dword ptr [esp + 0x18], 0
// 008741f9  750e                 jne 0x874209
// 008741fb  837c241400           cmp dword ptr [esp + 0x14], 0
// 00874200  7507                 jne 0x874209
// 00874202  be02000000           mov esi, 2
// 00874207  eb25                 jmp 0x87422e
// 00874209  8b742414             mov esi, dword ptr [esp + 0x14]
// 0087420d  56                   push esi
// 0087420e  e81d18f8ff           call 0x7f5a30
// 00874213  83c404               add esp, 4
// 00874216  85c0                 test eax, eax
// 00874218  7512                 jne 0x87422c
// 0087421a  39442418             cmp dword ptr [esp + 0x18], eax
// 0087421e  0f843b010000         je 0x87435f
// 00874224  85f6                 test esi, esi
// 00874226  0f848b010000         je 0x8743b7
// 0087422c  33f6                 xor esi, esi
// 0087422e  03742434             add esi, dword ptr [esp + 0x34]
// 00874232  83feff               cmp esi, -1
// 00874235  0f84a4000000         je 0x8742df
// 0087423b  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0087423f  2b442464             sub eax, dword ptr [esp + 0x64]
// 00874243  8d4c2460             lea ecx, [esp + 0x60]
// 00874247  0fafc6               imul eax, esi
// 0087424a  50                   push eax
// 0087424b  6a00                 push 0
// 0087424d  51                   push ecx
// 0087424e  ff156ccc9800         call dword ptr [0x98cc6c]
// 00874254  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0087425a  8d942480000000       lea edx, [esp + 0x80]
// 00874261  52                   push edx
// 00874262  50                   push eax
// 00874263  e8e8daffff           call 0x871d50
// 00874268  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0087426c  83c408               add esp, 8
// 0087426f  f7d8                 neg eax
// 00874271  1bc0                 sbb eax, eax
// 00874273  f7d8                 neg eax
// 00874275  50                   push eax
// 00874276  68ff00ff00           push 0xff00ff
// 0087427b  b902000000           mov ecx, 2
// 00874280  8d842498000000       lea eax, [esp + 0x98]
// 00874287  50                   push eax
// 00874288  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 0087428f  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00874296  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0087429d  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 008742a4  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008742a8  83ec10               sub esp, 0x10
// 008742ab  8bc4                 mov eax, esp
// 008742ad  8908                 mov dword ptr [eax], ecx
// 008742af  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008742b6  895004               mov dword ptr [eax + 4], edx
// 008742b9  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008742c0  894808               mov dword ptr [eax + 8], ecx
// 008742c3  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008742ca  89500c               mov dword ptr [eax + 0xc], edx
// 008742cd  8d84249c000000       lea eax, [esp + 0x9c]
// 008742d4  50                   push eax
// 008742d5  51                   push ecx
// 008742d6  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008742da  e8f1cf0600           call 0x8e12d0
// 008742df  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008742e4  745d                 je 0x874343
// 008742e6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008742ea  83ff03               cmp edi, 3
// 008742ed  7502                 jne 0x8742f1
// 008742ef  33ff                 xor edi, edi
// 008742f1  8b742438             mov esi, dword ptr [esp + 0x38]
// 008742f5  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008742fb  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00874302  99                   cdq 
// 00874303  2bc2                 sub eax, edx
// 00874305  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 0087430c  d1f8                 sar eax, 1
// 0087430e  2bc8                 sub ecx, eax
// 00874310  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00874317  6a00                 push 0
// 00874319  57                   push edi
// 0087431a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087431e  03c2                 add eax, edx
// 00874320  99                   cdq 
// 00874321  57                   push edi
// 00874322  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00874326  2bc2                 sub eax, edx
// 00874328  8b16                 mov edx, dword ptr [esi]
// 0087432a  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 00874330  57                   push edi
// 00874331  d1f8                 sar eax, 1
// 00874333  50                   push eax
// 00874334  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 0087433b  49                   dec ecx
// 0087433c  51                   push ecx
// 0087433d  53                   push ebx
// 0087433e  50                   push eax
// 0087433f  8bce                 mov ecx, esi
// 00874341  ffd2                 call edx
// 00874343  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0087434a  64890d00000000       mov dword ptr fs:[0], ecx
// 00874351  59                   pop ecx
// 00874352  5f                   pop edi
// 00874353  5e                   pop esi
// 00874354  5d                   pop ebp
// 00874355  5b                   pop ebx
// 00874356  81c498000000         add esp, 0x98
// 0087435c  c21800               ret 0x18
// 0087435f  85f6                 test esi, esi
// 00874361  7554                 jne 0x8743b7
// 00874363  be04000000           mov esi, 4
// 00874368  e9c1feffff           jmp 0x87422e
// 0087436d  85c0                 test eax, eax
// 0087436f  740a                 je 0x87437b
// 00874371  be02000000           mov esi, 2
// 00874376  e9b3feffff           jmp 0x87422e
// 0087437b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0087437f  57                   push edi
// 00874380  e8ab16f8ff           call 0x7f5a30
// 00874385  83c404               add esp, 4
// 00874388  85c0                 test eax, eax
// 0087438a  0f859cfeffff         jne 0x87422c
// 00874390  39442418             cmp dword ptr [esp + 0x18], eax
// 00874394  7419                 je 0x8743af
// 00874396  85ff                 test edi, edi
// 00874398  0f858efeffff         jne 0x87422c
// 0087439e  f7dd                 neg ebp
// 008743a0  1bed                 sbb ebp, ebp
// 008743a2  83e5fc               and ebp, 0xfffffffc
// 008743a5  83c504               add ebp, 4
// 008743a8  8bf5                 mov esi, ebp
// 008743aa  e97ffeffff           jmp 0x87422e
// 008743af  85ff                 test edi, edi
// 008743b1  0f8477feffff         je 0x87422e
// 008743b7  f7dd                 neg ebp
// 008743b9  1bed                 sbb ebp, ebp
// 008743bb  83e5fc               and ebp, 0xfffffffc
// 008743be  83c504               add ebp, 4
// 008743c1  8bf5                 mov esi, ebp
// 008743c3  e966feffff           jmp 0x87422e
// copied from an identical function in another client (function ?DrawSplitButtonFrame@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp