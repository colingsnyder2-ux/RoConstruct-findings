// roc 2008-06 00648bf0  unit: RBX::Block  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648bf0
//
// 00648bf0  83ec14               sub esp, 0x14
// 00648bf3  56                   push esi
// 00648bf4  8bf1                 mov esi, ecx
// 00648bf6  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00648bfa  57                   push edi
// 00648bfb  7521                 jne 0x648c1e
// 00648bfd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00648c01  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00648c04  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00648c08  50                   push eax
// 00648c09  51                   push ecx
// 00648c0a  6a01                 push 1
// 00648c0c  57                   push edi
// 00648c0d  8bce                 mov ecx, esi
// 00648c0f  e87cf8ffff           call 0x648490
// 00648c14  8bc7                 mov eax, edi
// 00648c16  5f                   pop edi
// 00648c17  5e                   pop esi
// 00648c18  83c414               add esp, 0x14
// 00648c1b  c21000               ret 0x10
// 00648c1e  8b5618               mov edx, dword ptr [esi + 0x18]
// 00648c21  8b3a                 mov edi, dword ptr [edx]
// 00648c23  8b06                 mov eax, dword ptr [esi]
// 00648c25  55                   push ebp
// 00648c26  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00648c2a  85ed                 test ebp, ebp
// 00648c2c  7404                 je 0x648c32
// 00648c2e  3be8                 cmp ebp, eax
// 00648c30  740a                 je 0x648c3c
// 00648c32  ff1590288000         call dword ptr [0x802890]
// 00648c38  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00648c3c  53                   push ebx
// 00648c3d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00648c41  3bdf                 cmp ebx, edi
// 00648c43  7535                 jne 0x648c7a
// 00648c45  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00648c49  8d430c               lea eax, [ebx + 0xc]
// 00648c4c  50                   push eax
// 00648c4d  57                   push edi
// 00648c4e  8d4e08               lea ecx, [esi + 8]
// 00648c51  e80aebffff           call 0x647760
// 00648c56  84c0                 test al, al
// 00648c58  0f848b010000         je 0x648de9
// 00648c5e  57                   push edi
// 00648c5f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00648c63  53                   push ebx
// 00648c64  6a01                 push 1
// 00648c66  57                   push edi
// 00648c67  8bce                 mov ecx, esi
// 00648c69  e822f8ffff           call 0x648490
// 00648c6e  5b                   pop ebx
// 00648c6f  5d                   pop ebp
// 00648c70  8bc7                 mov eax, edi
// 00648c72  5f                   pop edi
// 00648c73  5e                   pop esi
// 00648c74  83c414               add esp, 0x14
// 00648c77  c21000               ret 0x10
// 00648c7a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00648c7d  8b06                 mov eax, dword ptr [esi]
// 00648c7f  85ed                 test ebp, ebp
// 00648c81  7404                 je 0x648c87
// 00648c83  3be8                 cmp ebp, eax
// 00648c85  740e                 je 0x648c95
// 00648c87  ff1590288000         call dword ptr [0x802890]
// 00648c8d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00648c91  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00648c95  3bdf                 cmp ebx, edi
// 00648c97  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00648c9b  7537                 jne 0x648cd4
// 00648c9d  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00648ca0  8b5908               mov ebx, dword ptr [ecx + 8]
// 00648ca3  57                   push edi
// 00648ca4  8d530c               lea edx, [ebx + 0xc]
// 00648ca7  52                   push edx
// 00648ca8  8d4e08               lea ecx, [esi + 8]
// 00648cab  e8b0eaffff           call 0x647760
// 00648cb0  84c0                 test al, al
// 00648cb2  0f8431010000         je 0x648de9
// 00648cb8  57                   push edi
// 00648cb9  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00648cbd  53                   push ebx
// 00648cbe  6a00                 push 0
// 00648cc0  57                   push edi
// 00648cc1  8bce                 mov ecx, esi
// 00648cc3  e8c8f7ffff           call 0x648490
// 00648cc8  5b                   pop ebx
// 00648cc9  5d                   pop ebp
// 00648cca  8bc7                 mov eax, edi
// 00648ccc  5f                   pop edi
// 00648ccd  5e                   pop esi
// 00648cce  83c414               add esp, 0x14
// 00648cd1  c21000               ret 0x10
// 00648cd4  8d430c               lea eax, [ebx + 0xc]
// 00648cd7  50                   push eax
// 00648cd8  8d4e08               lea ecx, [esi + 8]
// 00648cdb  57                   push edi
// 00648cdc  e87feaffff           call 0x647760
// 00648ce1  84c0                 test al, al
// 00648ce3  746c                 je 0x648d51
// 00648ce5  8d4c2410             lea ecx, [esp + 0x10]
// 00648ce9  896c2410             mov dword ptr [esp + 0x10], ebp
// 00648ced  895c2414             mov dword ptr [esp + 0x14], ebx
// 00648cf1  e8eaf4ffff           call 0x6481e0
// 00648cf6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00648cfa  57                   push edi
// 00648cfb  8d4b0c               lea ecx, [ebx + 0xc]
// 00648cfe  51                   push ecx
// 00648cff  8d4e08               lea ecx, [esi + 8]
// 00648d02  e859eaffff           call 0x647760
// 00648d07  84c0                 test al, al
// 00648d09  743e                 je 0x648d49
// 00648d0b  8b5308               mov edx, dword ptr [ebx + 8]
// 00648d0e  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00648d12  57                   push edi
// 00648d13  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00648d17  8bce                 mov ecx, esi
// 00648d19  7415                 je 0x648d30
// 00648d1b  53                   push ebx
// 00648d1c  6a00                 push 0
// 00648d1e  57                   push edi
// 00648d1f  e86cf7ffff           call 0x648490
// 00648d24  5b                   pop ebx
// 00648d25  5d                   pop ebp
// 00648d26  8bc7                 mov eax, edi
// 00648d28  5f                   pop edi
// 00648d29  5e                   pop esi
// 00648d2a  83c414               add esp, 0x14
// 00648d2d  c21000               ret 0x10
// 00648d30  8b442434             mov eax, dword ptr [esp + 0x34]
// 00648d34  50                   push eax
// 00648d35  6a01                 push 1
// 00648d37  57                   push edi
// 00648d38  e853f7ffff           call 0x648490
// 00648d3d  5b                   pop ebx
// 00648d3e  5d                   pop ebp
// 00648d3f  8bc7                 mov eax, edi
// 00648d41  5f                   pop edi
// 00648d42  5e                   pop esi
// 00648d43  83c414               add esp, 0x14
// 00648d46  c21000               ret 0x10
// 00648d49  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00648d4d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00648d51  57                   push edi
// 00648d52  8d4b0c               lea ecx, [ebx + 0xc]
// 00648d55  51                   push ecx
// 00648d56  8d4e08               lea ecx, [esi + 8]
// 00648d59  e802eaffff           call 0x647760
// 00648d5e  84c0                 test al, al
// 00648d60  0f8483000000         je 0x648de9
// 00648d66  8b5618               mov edx, dword ptr [esi + 0x18]
// 00648d69  8b06                 mov eax, dword ptr [esi]
// 00648d6b  8d4c2410             lea ecx, [esp + 0x10]
// 00648d6f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00648d73  895c2414             mov dword ptr [esp + 0x14], ebx
// 00648d77  8954241c             mov dword ptr [esp + 0x1c], edx
// 00648d7b  89442418             mov dword ptr [esp + 0x18], eax
// 00648d7f  e89cf3ffff           call 0x648120
// 00648d84  8d4c2418             lea ecx, [esp + 0x18]
// 00648d88  51                   push ecx
// 00648d89  8d4c2414             lea ecx, [esp + 0x14]
// 00648d8d  e80e3ffaff           call 0x5ecca0
// 00648d92  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00648d96  84c0                 test al, al
// 00648d98  7511                 jne 0x648dab
// 00648d9a  8d530c               lea edx, [ebx + 0xc]
// 00648d9d  52                   push edx
// 00648d9e  57                   push edi
// 00648d9f  8d4e08               lea ecx, [esi + 8]
// 00648da2  e8b9e9ffff           call 0x647760
// 00648da7  84c0                 test al, al
// 00648da9  743e                 je 0x648de9
// 00648dab  8b442430             mov eax, dword ptr [esp + 0x30]
// 00648daf  8b4808               mov ecx, dword ptr [eax + 8]
// 00648db2  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00648db6  57                   push edi
// 00648db7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00648dbb  8bce                 mov ecx, esi
// 00648dbd  7415                 je 0x648dd4
// 00648dbf  50                   push eax
// 00648dc0  6a00                 push 0
// 00648dc2  57                   push edi
// 00648dc3  e8c8f6ffff           call 0x648490
// 00648dc8  5b                   pop ebx
// 00648dc9  5d                   pop ebp
// 00648dca  8bc7                 mov eax, edi
// 00648dcc  5f                   pop edi
// 00648dcd  5e                   pop esi
// 00648dce  83c414               add esp, 0x14
// 00648dd1  c21000               ret 0x10
// 00648dd4  53                   push ebx
// 00648dd5  6a01                 push 1
// 00648dd7  57                   push edi
// 00648dd8  e8b3f6ffff           call 0x648490
// 00648ddd  5b                   pop ebx
// 00648dde  5d                   pop ebp
// 00648ddf  8bc7                 mov eax, edi
// 00648de1  5f                   pop edi
// 00648de2  5e                   pop esi
// 00648de3  83c414               add esp, 0x14
// 00648de6  c21000               ret 0x10
// 00648de9  57                   push edi
// 00648dea  8d54241c             lea edx, [esp + 0x1c]
// 00648dee  52                   push edx
// 00648def  8bce                 mov ecx, esi
// 00648df1  e86afbffff           call 0x648960
// 00648df6  8b10                 mov edx, dword ptr [eax]
// 00648df8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00648dfc  5b                   pop ebx
// 00648dfd  5d                   pop ebp
// 00648dfe  8911                 mov dword ptr [ecx], edx
// 00648e00  8b4004               mov eax, dword ptr [eax + 4]
// 00648e03  5f                   pop edi
// 00648e04  894104               mov dword ptr [ecx + 4], eax
// 00648e07  8bc1                 mov eax, ecx
// 00648e09  5e                   pop esi
// 00648e0a  83c414               add esp, 0x14
// 00648e0d  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
