// roc 2010-06 00541890  unit: RBX::AggregatingSceneManager  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541890
//
// 00541890  83ec14               sub esp, 0x14
// 00541893  56                   push esi
// 00541894  8bf1                 mov esi, ecx
// 00541896  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0054189a  57                   push edi
// 0054189b  7521                 jne 0x5418be
// 0054189d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005418a1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005418a4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005418a8  50                   push eax
// 005418a9  51                   push ecx
// 005418aa  6a01                 push 1
// 005418ac  57                   push edi
// 005418ad  8bce                 mov ecx, esi
// 005418af  e8ccf0ffff           call 0x540980
// 005418b4  8bc7                 mov eax, edi
// 005418b6  5f                   pop edi
// 005418b7  5e                   pop esi
// 005418b8  83c414               add esp, 0x14
// 005418bb  c21000               ret 0x10
// 005418be  8b5618               mov edx, dword ptr [esi + 0x18]
// 005418c1  8b3a                 mov edi, dword ptr [edx]
// 005418c3  8b06                 mov eax, dword ptr [esi]
// 005418c5  55                   push ebp
// 005418c6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005418ca  85ed                 test ebp, ebp
// 005418cc  7404                 je 0x5418d2
// 005418ce  3be8                 cmp ebp, eax
// 005418d0  740a                 je 0x5418dc
// 005418d2  ff150ca99e00         call dword ptr [0x9ea90c]
// 005418d8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005418dc  53                   push ebx
// 005418dd  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005418e1  3bdf                 cmp ebx, edi
// 005418e3  7535                 jne 0x54191a
// 005418e5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005418e9  8d430c               lea eax, [ebx + 0xc]
// 005418ec  50                   push eax
// 005418ed  57                   push edi
// 005418ee  8d4e08               lea ecx, [esi + 8]
// 005418f1  e8dae0ffff           call 0x53f9d0
// 005418f6  84c0                 test al, al
// 005418f8  0f848b010000         je 0x541a89
// 005418fe  57                   push edi
// 005418ff  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00541903  53                   push ebx
// 00541904  6a01                 push 1
// 00541906  57                   push edi
// 00541907  8bce                 mov ecx, esi
// 00541909  e872f0ffff           call 0x540980
// 0054190e  5b                   pop ebx
// 0054190f  5d                   pop ebp
// 00541910  8bc7                 mov eax, edi
// 00541912  5f                   pop edi
// 00541913  5e                   pop esi
// 00541914  83c414               add esp, 0x14
// 00541917  c21000               ret 0x10
// 0054191a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0054191d  8b06                 mov eax, dword ptr [esi]
// 0054191f  85ed                 test ebp, ebp
// 00541921  7404                 je 0x541927
// 00541923  3be8                 cmp ebp, eax
// 00541925  740e                 je 0x541935
// 00541927  ff150ca99e00         call dword ptr [0x9ea90c]
// 0054192d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00541931  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00541935  3bdf                 cmp ebx, edi
// 00541937  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0054193b  7537                 jne 0x541974
// 0054193d  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00541940  8b5908               mov ebx, dword ptr [ecx + 8]
// 00541943  57                   push edi
// 00541944  8d530c               lea edx, [ebx + 0xc]
// 00541947  52                   push edx
// 00541948  8d4e08               lea ecx, [esi + 8]
// 0054194b  e880e0ffff           call 0x53f9d0
// 00541950  84c0                 test al, al
// 00541952  0f8431010000         je 0x541a89
// 00541958  57                   push edi
// 00541959  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0054195d  53                   push ebx
// 0054195e  6a00                 push 0
// 00541960  57                   push edi
// 00541961  8bce                 mov ecx, esi
// 00541963  e818f0ffff           call 0x540980
// 00541968  5b                   pop ebx
// 00541969  5d                   pop ebp
// 0054196a  8bc7                 mov eax, edi
// 0054196c  5f                   pop edi
// 0054196d  5e                   pop esi
// 0054196e  83c414               add esp, 0x14
// 00541971  c21000               ret 0x10
// 00541974  8d430c               lea eax, [ebx + 0xc]
// 00541977  50                   push eax
// 00541978  8d4e08               lea ecx, [esi + 8]
// 0054197b  57                   push edi
// 0054197c  e84fe0ffff           call 0x53f9d0
// 00541981  84c0                 test al, al
// 00541983  746c                 je 0x5419f1
// 00541985  8d4c2410             lea ecx, [esp + 0x10]
// 00541989  896c2410             mov dword ptr [esp + 0x10], ebp
// 0054198d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00541991  e8ca9b2100           call 0x75b560
// 00541996  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0054199a  57                   push edi
// 0054199b  8d4b0c               lea ecx, [ebx + 0xc]
// 0054199e  51                   push ecx
// 0054199f  8d4e08               lea ecx, [esi + 8]
// 005419a2  e829e0ffff           call 0x53f9d0
// 005419a7  84c0                 test al, al
// 005419a9  743e                 je 0x5419e9
// 005419ab  8b5308               mov edx, dword ptr [ebx + 8]
// 005419ae  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005419b2  57                   push edi
// 005419b3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005419b7  8bce                 mov ecx, esi
// 005419b9  7415                 je 0x5419d0
// 005419bb  53                   push ebx
// 005419bc  6a00                 push 0
// 005419be  57                   push edi
// 005419bf  e8bcefffff           call 0x540980
// 005419c4  5b                   pop ebx
// 005419c5  5d                   pop ebp
// 005419c6  8bc7                 mov eax, edi
// 005419c8  5f                   pop edi
// 005419c9  5e                   pop esi
// 005419ca  83c414               add esp, 0x14
// 005419cd  c21000               ret 0x10
// 005419d0  8b442434             mov eax, dword ptr [esp + 0x34]
// 005419d4  50                   push eax
// 005419d5  6a01                 push 1
// 005419d7  57                   push edi
// 005419d8  e8a3efffff           call 0x540980
// 005419dd  5b                   pop ebx
// 005419de  5d                   pop ebp
// 005419df  8bc7                 mov eax, edi
// 005419e1  5f                   pop edi
// 005419e2  5e                   pop esi
// 005419e3  83c414               add esp, 0x14
// 005419e6  c21000               ret 0x10
// 005419e9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005419ed  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005419f1  57                   push edi
// 005419f2  8d4b0c               lea ecx, [ebx + 0xc]
// 005419f5  51                   push ecx
// 005419f6  8d4e08               lea ecx, [esi + 8]
// 005419f9  e8d2dfffff           call 0x53f9d0
// 005419fe  84c0                 test al, al
// 00541a00  0f8483000000         je 0x541a89
// 00541a06  8b5618               mov edx, dword ptr [esi + 0x18]
// 00541a09  8b06                 mov eax, dword ptr [esi]
// 00541a0b  8d4c2410             lea ecx, [esp + 0x10]
// 00541a0f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00541a13  895c2414             mov dword ptr [esp + 0x14], ebx
// 00541a17  8954241c             mov dword ptr [esp + 0x1c], edx
// 00541a1b  89442418             mov dword ptr [esp + 0x18], eax
// 00541a1f  e8acc80400           call 0x58e2d0
// 00541a24  8d4c2418             lea ecx, [esp + 0x18]
// 00541a28  51                   push ecx
// 00541a29  8d4c2414             lea ecx, [esp + 0x14]
// 00541a2d  e84e55f2ff           call 0x466f80
// 00541a32  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00541a36  84c0                 test al, al
// 00541a38  7511                 jne 0x541a4b
// 00541a3a  8d530c               lea edx, [ebx + 0xc]
// 00541a3d  52                   push edx
// 00541a3e  57                   push edi
// 00541a3f  8d4e08               lea ecx, [esi + 8]
// 00541a42  e889dfffff           call 0x53f9d0
// 00541a47  84c0                 test al, al
// 00541a49  743e                 je 0x541a89
// 00541a4b  8b442430             mov eax, dword ptr [esp + 0x30]
// 00541a4f  8b4808               mov ecx, dword ptr [eax + 8]
// 00541a52  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00541a56  57                   push edi
// 00541a57  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00541a5b  8bce                 mov ecx, esi
// 00541a5d  7415                 je 0x541a74
// 00541a5f  50                   push eax
// 00541a60  6a00                 push 0
// 00541a62  57                   push edi
// 00541a63  e818efffff           call 0x540980
// 00541a68  5b                   pop ebx
// 00541a69  5d                   pop ebp
// 00541a6a  8bc7                 mov eax, edi
// 00541a6c  5f                   pop edi
// 00541a6d  5e                   pop esi
// 00541a6e  83c414               add esp, 0x14
// 00541a71  c21000               ret 0x10
// 00541a74  53                   push ebx
// 00541a75  6a01                 push 1
// 00541a77  57                   push edi
// 00541a78  e803efffff           call 0x540980
// 00541a7d  5b                   pop ebx
// 00541a7e  5d                   pop ebp
// 00541a7f  8bc7                 mov eax, edi
// 00541a81  5f                   pop edi
// 00541a82  5e                   pop esi
// 00541a83  83c414               add esp, 0x14
// 00541a86  c21000               ret 0x10
// 00541a89  57                   push edi
// 00541a8a  8d54241c             lea edx, [esp + 0x1c]
// 00541a8e  52                   push edx
// 00541a8f  8bce                 mov ecx, esi
// 00541a91  e8aaf4ffff           call 0x540f40
// 00541a96  8b10                 mov edx, dword ptr [eax]
// 00541a98  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00541a9c  5b                   pop ebx
// 00541a9d  5d                   pop ebp
// 00541a9e  8911                 mov dword ptr [ecx], edx
// 00541aa0  8b4004               mov eax, dword ptr [eax + 4]
// 00541aa3  5f                   pop edi
// 00541aa4  894104               mov dword ptr [ecx + 4], eax
// 00541aa7  8bc1                 mov eax, ecx
// 00541aa9  5e                   pop esi
// 00541aaa  83c414               add esp, 0x14
// 00541aad  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
