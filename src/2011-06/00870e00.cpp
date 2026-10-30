// roc 2011-06 00870e00  unit: CXTColorDialog  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870e00
//
// 00870e00  6aff                 push -1
// 00870e02  688c77a000           push 0xa0778c
// 00870e07  64a100000000         mov eax, dword ptr fs:[0]
// 00870e0d  50                   push eax
// 00870e0e  81ec9c000000         sub esp, 0x9c
// 00870e14  a12058c900           mov eax, dword ptr [0xc95820]
// 00870e19  33c4                 xor eax, esp
// 00870e1b  89842498000000       mov dword ptr [esp + 0x98], eax
// 00870e22  55                   push ebp
// 00870e23  56                   push esi
// 00870e24  57                   push edi
// 00870e25  a12058c900           mov eax, dword ptr [0xc95820]
// 00870e2a  33c4                 xor eax, esp
// 00870e2c  50                   push eax
// 00870e2d  8d8424ac000000       lea eax, [esp + 0xac]
// 00870e34  64a300000000         mov dword ptr fs:[0], eax
// 00870e3a  8bf1                 mov esi, ecx
// 00870e3c  56                   push esi
// 00870e3d  8d4c2458             lea ecx, [esp + 0x58]
// 00870e41  e8a89bf9ff           call 0x80a9ee
// 00870e46  6a01                 push 1
// 00870e48  8d4c2458             lea ecx, [esp + 0x58]
// 00870e4c  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 00870e57  e892b71500           call 0x9cc5ee
// 00870e5c  e87f45fdff           call 0x8453e0
// 00870e61  6a08                 push 8
// 00870e63  8bc8                 mov ecx, eax
// 00870e65  e8463dfdff           call 0x844bb0
// 00870e6a  50                   push eax
// 00870e6b  8d4c2458             lea ecx, [esp + 0x58]
// 00870e6f  e822b81500           call 0x9cc696
// 00870e74  8b4620               mov eax, dword ptr [esi + 0x20]
// 00870e77  6a00                 push 0
// 00870e79  6a00                 push 0
// 00870e7b  6a31                 push 0x31
// 00870e7d  50                   push eax
// 00870e7e  ff15c019a400         call dword ptr [0xa419c0]
// 00870e84  50                   push eax
// 00870e85  e8de9cf9ff           call 0x80ab68
// 00870e8a  50                   push eax
// 00870e8b  8d4c2458             lea ecx, [esp + 0x58]
// 00870e8f  51                   push ecx
// 00870e90  8d4c244c             lea ecx, [esp + 0x4c]
// 00870e94  e887c2feff           call 0x85d120
// 00870e99  6a02                 push 2
// 00870e9b  8bce                 mov ecx, esi
// 00870e9d  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00870ea5  e8b4a0f9ff           call 0x80af5e
// 00870eaa  50                   push eax
// 00870eab  8d4c2438             lea ecx, [esp + 0x38]
// 00870eaf  e87cbefeff           call 0x85cd30
// 00870eb4  8d542434             lea edx, [esp + 0x34]
// 00870eb8  52                   push edx
// 00870eb9  8bce                 mov ecx, esi
// 00870ebb  e846a1f9ff           call 0x80b006
// 00870ec0  56                   push esi
// 00870ec1  8d4c2418             lea ecx, [esp + 0x18]
// 00870ec5  e8c6befeff           call 0x85cd90
// 00870eca  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00870ece  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00870ed2  8b2de41ba400         mov ebp, dword ptr [0xa41be4]
// 00870ed8  8944241c             mov dword ptr [esp + 0x1c], eax
// 00870edc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00870ee0  83e820               sub eax, 0x20
// 00870ee3  89442420             mov dword ptr [esp + 0x20], eax
// 00870ee7  83c0be               add eax, -0x42
// 00870eea  f686ac00000040       test byte ptr [esi + 0xac], 0x40
// 00870ef1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00870ef5  89442418             mov dword ptr [esp + 0x18], eax
// 00870ef9  746b                 je 0x870f66
// 00870efb  6a03                 push 3
// 00870efd  6a03                 push 3
// 00870eff  8d54241c             lea edx, [esp + 0x1c]
// 00870f03  52                   push edx
// 00870f04  ffd5                 call ebp
// 00870f06  e8d544fdff           call 0x8453e0
// 00870f0b  6a15                 push 0x15
// 00870f0d  8bc8                 mov ecx, eax
// 00870f0f  e89c3cfdff           call 0x844bb0
// 00870f14  8bf8                 mov edi, eax
// 00870f16  e8c544fdff           call 0x8453e0
// 00870f1b  57                   push edi
// 00870f1c  6a14                 push 0x14
// 00870f1e  8bc8                 mov ecx, eax
// 00870f20  e88b3cfdff           call 0x844bb0
// 00870f25  50                   push eax
// 00870f26  8d44241c             lea eax, [esp + 0x1c]
// 00870f2a  50                   push eax
// 00870f2b  8d4c2460             lea ecx, [esp + 0x60]
// 00870f2f  e8e69ef9ff           call 0x80ae1a
// 00870f34  6afd                 push -3
// 00870f36  6afd                 push -3
// 00870f38  8d4c241c             lea ecx, [esp + 0x1c]
// 00870f3c  51                   push ecx
// 00870f3d  ffd5                 call ebp
// 00870f3f  e89c44fdff           call 0x8453e0
// 00870f44  6a14                 push 0x14
// 00870f46  8bc8                 mov ecx, eax
// 00870f48  e8633cfdff           call 0x844bb0
// 00870f4d  8bf8                 mov edi, eax
// 00870f4f  e88c44fdff           call 0x8453e0
// 00870f54  57                   push edi
// 00870f55  6a10                 push 0x10
// 00870f57  8bc8                 mov ecx, eax
// 00870f59  e8523cfdff           call 0x844bb0
// 00870f5e  50                   push eax
// 00870f5f  8d54241c             lea edx, [esp + 0x1c]
// 00870f63  52                   push edx
// 00870f64  eb25                 jmp 0x870f8b
// 00870f66  e87544fdff           call 0x8453e0
// 00870f6b  6a06                 push 6
// 00870f6d  8bc8                 mov ecx, eax
// 00870f6f  e83c3cfdff           call 0x844bb0
// 00870f74  8bf8                 mov edi, eax
// 00870f76  e86544fdff           call 0x8453e0
// 00870f7b  57                   push edi
// 00870f7c  6a06                 push 6
// 00870f7e  8bc8                 mov ecx, eax
// 00870f80  e82b3cfdff           call 0x844bb0
// 00870f85  50                   push eax
// 00870f86  8d44241c             lea eax, [esp + 0x1c]
// 00870f8a  50                   push eax
// 00870f8b  8d4c2460             lea ecx, [esp + 0x60]
// 00870f8f  e8869ef9ff           call 0x80ae1a
// 00870f94  8b442418             mov eax, dword ptr [esp + 0x18]
// 00870f98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00870f9c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00870fa0  89442428             mov dword ptr [esp + 0x28], eax
// 00870fa4  894c2424             mov dword ptr [esp + 0x24], ecx
// 00870fa8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00870fac  83c0ea               add eax, -0x16
// 00870faf  894c2430             mov dword ptr [esp + 0x30], ecx
// 00870fb3  89442428             mov dword ptr [esp + 0x28], eax
// 00870fb7  83c016               add eax, 0x16
// 00870fba  8d4c2410             lea ecx, [esp + 0x10]
// 00870fbe  8954242c             mov dword ptr [esp + 0x2c], edx
// 00870fc2  89442430             mov dword ptr [esp + 0x30], eax
// 00870fc6  ff15b42da400         call dword ptr [0xa42db4]
// 00870fcc  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 00870fd4  e867ef0000           call 0x87ff40
// 00870fd9  8b10                 mov edx, dword ptr [eax]
// 00870fdb  8b5208               mov edx, dword ptr [edx + 8]
// 00870fde  6888240000           push 0x2488
// 00870fe3  8d4c2414             lea ecx, [esp + 0x14]
// 00870fe7  51                   push ecx
// 00870fe8  8bc8                 mov ecx, eax
// 00870fea  ffd2                 call edx
// 00870fec  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00870ff0  6a25                 push 0x25
// 00870ff2  8d442428             lea eax, [esp + 0x28]
// 00870ff6  50                   push eax
// 00870ff7  8d4c2418             lea ecx, [esp + 0x18]
// 00870ffb  83c770               add edi, 0x70
// 00870ffe  ff15a826a400         call dword ptr [0xa426a8]
// 00871004  50                   push eax
// 00871005  8d4c241c             lea ecx, [esp + 0x1c]
// 00871009  ff15c82da400         call dword ptr [0xa42dc8]
// 0087100f  8b17                 mov edx, dword ptr [edi]
// 00871011  50                   push eax
// 00871012  8d4c2464             lea ecx, [esp + 0x64]
// 00871016  ffd2                 call edx
// 00871018  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087101c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00871020  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00871024  89442424             mov dword ptr [esp + 0x24], eax
// 00871028  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087102c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00871030  89442430             mov dword ptr [esp + 0x30], eax
// 00871034  89442428             mov dword ptr [esp + 0x28], eax
// 00871038  83c016               add eax, 0x16
// 0087103b  8954242c             mov dword ptr [esp + 0x2c], edx
// 0087103f  89442430             mov dword ptr [esp + 0x30], eax
// 00871043  e8f8ee0000           call 0x87ff40
// 00871048  8b10                 mov edx, dword ptr [eax]
// 0087104a  8b5208               mov edx, dword ptr [edx + 8]
// 0087104d  6889240000           push 0x2489
// 00871052  8d4c2414             lea ecx, [esp + 0x14]
// 00871056  51                   push ecx
// 00871057  8bc8                 mov ecx, eax
// 00871059  ffd2                 call edx
// 0087105b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0087105f  6a25                 push 0x25
// 00871061  8d442428             lea eax, [esp + 0x28]
// 00871065  50                   push eax
// 00871066  8d4c2418             lea ecx, [esp + 0x18]
// 0087106a  83c770               add edi, 0x70
// 0087106d  ff15a826a400         call dword ptr [0xa426a8]
// 00871073  50                   push eax
// 00871074  8d4c241c             lea ecx, [esp + 0x1c]
// 00871078  ff15c82da400         call dword ptr [0xa42dc8]
// 0087107e  8b17                 mov edx, dword ptr [edi]
// 00871080  50                   push eax
// 00871081  8d4c2464             lea ecx, [esp + 0x64]
// 00871085  ffd2                 call edx
// 00871087  6aff                 push -1
// 00871089  6aff                 push -1
// 0087108b  8d44241c             lea eax, [esp + 0x1c]
// 0087108f  50                   push eax
// 00871090  ffd5                 call ebp
// 00871092  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00871096  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087109a  8bc5                 mov eax, ebp
// 0087109c  2bc1                 sub eax, ecx
// 0087109e  99                   cdq 
// 0087109f  2bc2                 sub eax, edx
// 008710a1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008710a5  899604010000         mov dword ptr [esi + 0x104], edx
// 008710ab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008710af  8bf8                 mov edi, eax
// 008710b1  8d8604010000         lea eax, [esi + 0x104]
// 008710b7  894804               mov dword ptr [eax + 4], ecx
// 008710ba  895008               mov dword ptr [eax + 8], edx
// 008710bd  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 008710c3  d1ff                 sar edi, 1
// 008710c5  03cf                 add ecx, edi
// 008710c7  89680c               mov dword ptr [eax + 0xc], ebp
// 008710ca  52                   push edx
// 008710cb  898e10010000         mov dword ptr [esi + 0x110], ecx
// 008710d1  50                   push eax
// 008710d2  8d4c245c             lea ecx, [esp + 0x5c]
// 008710d6  e8459df9ff           call 0x80ae20
// 008710db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008710df  8b542418             mov edx, dword ptr [esp + 0x18]
// 008710e3  898e14010000         mov dword ptr [esi + 0x114], ecx
// 008710e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008710ed  8d8614010000         lea eax, [esi + 0x114]
// 008710f3  895004               mov dword ptr [eax + 4], edx
// 008710f6  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 008710fc  894808               mov dword ptr [eax + 8], ecx
// 008710ff  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00871103  89480c               mov dword ptr [eax + 0xc], ecx
// 00871106  2bcf                 sub ecx, edi
// 00871108  52                   push edx
// 00871109  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0087110f  50                   push eax
// 00871110  8d4c245c             lea ecx, [esp + 0x5c]
// 00871114  e8079df9ff           call 0x80ae20
// 00871119  8d4c2410             lea ecx, [esp + 0x10]
// 0087111d  ff15082ea400         call dword ptr [0xa42e08]
// 00871123  8d4c2444             lea ecx, [esp + 0x44]
// 00871127  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0087112f  e86cc0feff           call 0x85d1a0
// 00871134  8d4c2454             lea ecx, [esp + 0x54]
// 00871138  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00871143  e8a098f9ff           call 0x80a9e8
// 00871148  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0087114f  64890d00000000       mov dword ptr fs:[0], ecx
// 00871156  59                   pop ecx
// 00871157  5f                   pop edi
// 00871158  5e                   pop esi
// 00871159  5d                   pop ebp
// 0087115a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00871161  33cc                 xor ecx, esp
// 00871163  e88fa7f9ff           call 0x80b8f7
// 00871168  81c4a8000000         add esp, 0xa8
// 0087116e  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorDialog@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorDialog.cpp