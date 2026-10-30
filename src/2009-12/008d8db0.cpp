// roc 2009-12 008d8db0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8db0
//
// 008d8db0  6aff                 push -1
// 008d8db2  6838549600           push 0x965438
// 008d8db7  64a100000000         mov eax, dword ptr fs:[0]
// 008d8dbd  50                   push eax
// 008d8dbe  83ec2c               sub esp, 0x2c
// 008d8dc1  53                   push ebx
// 008d8dc2  55                   push ebp
// 008d8dc3  56                   push esi
// 008d8dc4  57                   push edi
// 008d8dc5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d8dca  33c4                 xor eax, esp
// 008d8dcc  50                   push eax
// 008d8dcd  8d442440             lea eax, [esp + 0x40]
// 008d8dd1  64a300000000         mov dword ptr fs:[0], eax
// 008d8dd7  8bf1                 mov esi, ecx
// 008d8dd9  89742414             mov dword ptr [esp + 0x14], esi
// 008d8ddd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8de0  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d8de6  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008d8de9  83f8ff               cmp eax, -1
// 008d8dec  7503                 jne 0x8d8df1
// 008d8dee  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008d8df1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 008d8df5  50                   push eax
// 008d8df6  8d4c245c             lea ecx, [esp + 0x5c]
// 008d8dfa  51                   push ecx
// 008d8dfb  8bcd                 mov ecx, ebp
// 008d8dfd  e8fcb7f1ff           call 0x7f45fe
// 008d8e02  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008d8e06  8b13                 mov edx, dword ptr [ebx]
// 008d8e08  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d8e0b  8bcb                 mov ecx, ebx
// 008d8e0d  ffd0                 call eax
// 008d8e0f  50                   push eax
// 008d8e10  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8e13  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d8e16  83c050               add eax, 0x50
// 008d8e19  83ec10               sub esp, 0x10
// 008d8e1c  8bcc                 mov ecx, esp
// 008d8e1e  8911                 mov dword ptr [ecx], edx
// 008d8e20  8b5004               mov edx, dword ptr [eax + 4]
// 008d8e23  895104               mov dword ptr [ecx + 4], edx
// 008d8e26  8b5008               mov edx, dword ptr [eax + 8]
// 008d8e29  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d8e2c  895108               mov dword ptr [ecx + 8], edx
// 008d8e2f  89410c               mov dword ptr [ecx + 0xc], eax
// 008d8e32  8d4c246c             lea ecx, [esp + 0x6c]
// 008d8e36  51                   push ecx
// 008d8e37  e844b9ffff           call 0x8d4780
// 008d8e3c  33ff                 xor edi, edi
// 008d8e3e  83c418               add esp, 0x18
// 008d8e41  897c241c             mov dword ptr [esp + 0x1c], edi
// 008d8e45  c7442418f82a9f00     mov dword ptr [esp + 0x18], 0x9f2af8
// 008d8e4d  8d542458             lea edx, [esp + 0x58]
// 008d8e51  52                   push edx
// 008d8e52  897c244c             mov dword ptr [esp + 0x4c], edi
// 008d8e56  ff15c4b09800         call dword ptr [0x98b0c4]
// 008d8e5c  50                   push eax
// 008d8e5d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d8e61  e8c4aff1ff           call 0x7f3e2a
// 008d8e66  8d442418             lea eax, [esp + 0x18]
// 008d8e6a  50                   push eax
// 008d8e6b  8bcd                 mov ecx, ebp
// 008d8e6d  e8f2d70400           call 0x926664
// 008d8e72  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8e75  83783802             cmp dword ptr [eax + 0x38], 2
// 008d8e79  743e                 je 0x8d8eb9
// 008d8e7b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d8e81  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d8e84  83f9ff               cmp ecx, -1
// 008d8e87  7503                 jne 0x8d8e8c
// 008d8e89  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d8e8c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d8e8f  83faff               cmp edx, -1
// 008d8e92  7513                 jne 0x8d8ea7
// 008d8e94  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d8e97  51                   push ecx
// 008d8e98  50                   push eax
// 008d8e99  8d4c2460             lea ecx, [esp + 0x60]
// 008d8e9d  51                   push ecx
// 008d8e9e  8bcd                 mov ecx, ebp
// 008d8ea0  e853b7f1ff           call 0x7f45f8
// 008d8ea5  eb48                 jmp 0x8d8eef
// 008d8ea7  51                   push ecx
// 008d8ea8  8bc2                 mov eax, edx
// 008d8eaa  50                   push eax
// 008d8eab  8d4c2460             lea ecx, [esp + 0x60]
// 008d8eaf  51                   push ecx
// 008d8eb0  8bcd                 mov ecx, ebp
// 008d8eb2  e841b7f1ff           call 0x7f45f8
// 008d8eb7  eb36                 jmp 0x8d8eef
// 008d8eb9  397b5c               cmp dword ptr [ebx + 0x5c], edi
// 008d8ebc  7e31                 jle 0x8d8eef
// 008d8ebe  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d8ec4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d8ec7  83f9ff               cmp ecx, -1
// 008d8eca  7503                 jne 0x8d8ecf
// 008d8ecc  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d8ecf  8b442460             mov eax, dword ptr [esp + 0x60]
// 008d8ed3  8b542458             mov edx, dword ptr [esp + 0x58]
// 008d8ed7  2bc2                 sub eax, edx
// 008d8ed9  83f9ff               cmp ecx, -1
// 008d8edc  7411                 je 0x8d8eef
// 008d8ede  51                   push ecx
// 008d8edf  6a01                 push 1
// 008d8ee1  50                   push eax
// 008d8ee2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008d8ee6  50                   push eax
// 008d8ee7  52                   push edx
// 008d8ee8  8bcd                 mov ecx, ebp
// 008d8eea  e8a7d50400           call 0x926496
// 008d8eef  6a01                 push 1
// 008d8ef1  8bcd                 mov ecx, ebp
// 008d8ef3  e898d50400           call 0x926490
// 008d8ef8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d8efb  8d78ff               lea edi, [eax - 1]
// 008d8efe  85ff                 test edi, edi
// 008d8f00  7c6c                 jl 0x8d8f6e
// 008d8f02  85ff                 test edi, edi
// 008d8f04  7c10                 jl 0x8d8f16
// 008d8f06  3b7b5c               cmp edi, dword ptr [ebx + 0x5c]
// 008d8f09  7d0b                 jge 0x8d8f16
// 008d8f0b  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 008d8f0e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 008d8f11  8d04b9               lea eax, [ecx + edi*4]
// 008d8f14  eb02                 jmp 0x8d8f18
// 008d8f16  33f6                 xor esi, esi
// 008d8f18  8b5644               mov edx, dword ptr [esi + 0x44]
// 008d8f1b  89542420             mov dword ptr [esp + 0x20], edx
// 008d8f1f  8b4648               mov eax, dword ptr [esi + 0x48]
// 008d8f22  89442424             mov dword ptr [esp + 0x24], eax
// 008d8f26  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008d8f29  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d8f2d  8b5650               mov edx, dword ptr [esi + 0x50]
// 008d8f30  8d442420             lea eax, [esp + 0x20]
// 008d8f34  50                   push eax
// 008d8f35  8d4c245c             lea ecx, [esp + 0x5c]
// 008d8f39  89542430             mov dword ptr [esp + 0x30], edx
// 008d8f3d  51                   push ecx
// 008d8f3e  8d542438             lea edx, [esp + 0x38]
// 008d8f42  52                   push edx
// 008d8f43  ff15dcca9800         call dword ptr [0x98cadc]
// 008d8f49  85c0                 test eax, eax
// 008d8f4b  741c                 je 0x8d8f69
// 008d8f4d  8d442420             lea eax, [esp + 0x20]
// 008d8f51  50                   push eax
// 008d8f52  ff1568cc9800         call dword ptr [0x98cc68]
// 008d8f58  85c0                 test eax, eax
// 008d8f5a  750d                 jne 0x8d8f69
// 008d8f5c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8f60  8b11                 mov edx, dword ptr [ecx]
// 008d8f62  8b4234               mov eax, dword ptr [edx + 0x34]
// 008d8f65  56                   push esi
// 008d8f66  55                   push ebp
// 008d8f67  ffd0                 call eax
// 008d8f69  83ef01               sub edi, 1
// 008d8f6c  7994                 jns 0x8d8f02
// 008d8f6e  6a00                 push 0
// 008d8f70  8bcd                 mov ecx, ebp
// 008d8f72  e8edd60400           call 0x926664
// 008d8f77  8d4c2418             lea ecx, [esp + 0x18]
// 008d8f7b  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008d8f83  c7442418f82a9f00     mov dword ptr [esp + 0x18], 0x9f2af8
// 008d8f8b  e8a062b3ff           call 0x40f230
// 008d8f90  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d8f94  64890d00000000       mov dword ptr fs:[0], ecx
// 008d8f9b  59                   pop ecx
// 008d8f9c  5f                   pop edi
// 008d8f9d  5e                   pop esi
// 008d8f9e  5d                   pop ebp
// 008d8f9f  5b                   pop ebx
// 008d8fa0  83c438               add esp, 0x38
// 008d8fa3  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp