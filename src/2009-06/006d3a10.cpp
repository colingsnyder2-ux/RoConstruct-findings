// roc 2009-06 006d3a10  unit: RBX::Block  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d3a10
//
// 006d3a10  83ec14               sub esp, 0x14
// 006d3a13  56                   push esi
// 006d3a14  8bf1                 mov esi, ecx
// 006d3a16  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 006d3a1a  57                   push edi
// 006d3a1b  7521                 jne 0x6d3a3e
// 006d3a1d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d3a21  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006d3a24  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d3a28  50                   push eax
// 006d3a29  51                   push ecx
// 006d3a2a  6a01                 push 1
// 006d3a2c  57                   push edi
// 006d3a2d  8bce                 mov ecx, esi
// 006d3a2f  e87cf8ffff           call 0x6d32b0
// 006d3a34  8bc7                 mov eax, edi
// 006d3a36  5f                   pop edi
// 006d3a37  5e                   pop esi
// 006d3a38  83c414               add esp, 0x14
// 006d3a3b  c21000               ret 0x10
// 006d3a3e  8b5618               mov edx, dword ptr [esi + 0x18]
// 006d3a41  8b3a                 mov edi, dword ptr [edx]
// 006d3a43  8b06                 mov eax, dword ptr [esi]
// 006d3a45  55                   push ebp
// 006d3a46  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006d3a4a  85ed                 test ebp, ebp
// 006d3a4c  7404                 je 0x6d3a52
// 006d3a4e  3be8                 cmp ebp, eax
// 006d3a50  740a                 je 0x6d3a5c
// 006d3a52  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3a58  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006d3a5c  53                   push ebx
// 006d3a5d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006d3a61  3bdf                 cmp ebx, edi
// 006d3a63  7535                 jne 0x6d3a9a
// 006d3a65  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006d3a69  8d430c               lea eax, [ebx + 0xc]
// 006d3a6c  50                   push eax
// 006d3a6d  57                   push edi
// 006d3a6e  8d4e08               lea ecx, [esi + 8]
// 006d3a71  e80aebffff           call 0x6d2580
// 006d3a76  84c0                 test al, al
// 006d3a78  0f848b010000         je 0x6d3c09
// 006d3a7e  57                   push edi
// 006d3a7f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006d3a83  53                   push ebx
// 006d3a84  6a01                 push 1
// 006d3a86  57                   push edi
// 006d3a87  8bce                 mov ecx, esi
// 006d3a89  e822f8ffff           call 0x6d32b0
// 006d3a8e  5b                   pop ebx
// 006d3a8f  5d                   pop ebp
// 006d3a90  8bc7                 mov eax, edi
// 006d3a92  5f                   pop edi
// 006d3a93  5e                   pop esi
// 006d3a94  83c414               add esp, 0x14
// 006d3a97  c21000               ret 0x10
// 006d3a9a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006d3a9d  8b06                 mov eax, dword ptr [esi]
// 006d3a9f  85ed                 test ebp, ebp
// 006d3aa1  7404                 je 0x6d3aa7
// 006d3aa3  3be8                 cmp ebp, eax
// 006d3aa5  740e                 je 0x6d3ab5
// 006d3aa7  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3aad  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006d3ab1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006d3ab5  3bdf                 cmp ebx, edi
// 006d3ab7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006d3abb  7537                 jne 0x6d3af4
// 006d3abd  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006d3ac0  8b5908               mov ebx, dword ptr [ecx + 8]
// 006d3ac3  57                   push edi
// 006d3ac4  8d530c               lea edx, [ebx + 0xc]
// 006d3ac7  52                   push edx
// 006d3ac8  8d4e08               lea ecx, [esi + 8]
// 006d3acb  e8b0eaffff           call 0x6d2580
// 006d3ad0  84c0                 test al, al
// 006d3ad2  0f8431010000         je 0x6d3c09
// 006d3ad8  57                   push edi
// 006d3ad9  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006d3add  53                   push ebx
// 006d3ade  6a00                 push 0
// 006d3ae0  57                   push edi
// 006d3ae1  8bce                 mov ecx, esi
// 006d3ae3  e8c8f7ffff           call 0x6d32b0
// 006d3ae8  5b                   pop ebx
// 006d3ae9  5d                   pop ebp
// 006d3aea  8bc7                 mov eax, edi
// 006d3aec  5f                   pop edi
// 006d3aed  5e                   pop esi
// 006d3aee  83c414               add esp, 0x14
// 006d3af1  c21000               ret 0x10
// 006d3af4  8d430c               lea eax, [ebx + 0xc]
// 006d3af7  50                   push eax
// 006d3af8  8d4e08               lea ecx, [esi + 8]
// 006d3afb  57                   push edi
// 006d3afc  e87feaffff           call 0x6d2580
// 006d3b01  84c0                 test al, al
// 006d3b03  746c                 je 0x6d3b71
// 006d3b05  8d4c2410             lea ecx, [esp + 0x10]
// 006d3b09  896c2410             mov dword ptr [esp + 0x10], ebp
// 006d3b0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d3b11  e8eaf4ffff           call 0x6d3000
// 006d3b16  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d3b1a  57                   push edi
// 006d3b1b  8d4b0c               lea ecx, [ebx + 0xc]
// 006d3b1e  51                   push ecx
// 006d3b1f  8d4e08               lea ecx, [esi + 8]
// 006d3b22  e859eaffff           call 0x6d2580
// 006d3b27  84c0                 test al, al
// 006d3b29  743e                 je 0x6d3b69
// 006d3b2b  8b5308               mov edx, dword ptr [ebx + 8]
// 006d3b2e  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 006d3b32  57                   push edi
// 006d3b33  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006d3b37  8bce                 mov ecx, esi
// 006d3b39  7415                 je 0x6d3b50
// 006d3b3b  53                   push ebx
// 006d3b3c  6a00                 push 0
// 006d3b3e  57                   push edi
// 006d3b3f  e86cf7ffff           call 0x6d32b0
// 006d3b44  5b                   pop ebx
// 006d3b45  5d                   pop ebp
// 006d3b46  8bc7                 mov eax, edi
// 006d3b48  5f                   pop edi
// 006d3b49  5e                   pop esi
// 006d3b4a  83c414               add esp, 0x14
// 006d3b4d  c21000               ret 0x10
// 006d3b50  8b442434             mov eax, dword ptr [esp + 0x34]
// 006d3b54  50                   push eax
// 006d3b55  6a01                 push 1
// 006d3b57  57                   push edi
// 006d3b58  e853f7ffff           call 0x6d32b0
// 006d3b5d  5b                   pop ebx
// 006d3b5e  5d                   pop ebp
// 006d3b5f  8bc7                 mov eax, edi
// 006d3b61  5f                   pop edi
// 006d3b62  5e                   pop esi
// 006d3b63  83c414               add esp, 0x14
// 006d3b66  c21000               ret 0x10
// 006d3b69  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 006d3b6d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006d3b71  57                   push edi
// 006d3b72  8d4b0c               lea ecx, [ebx + 0xc]
// 006d3b75  51                   push ecx
// 006d3b76  8d4e08               lea ecx, [esi + 8]
// 006d3b79  e802eaffff           call 0x6d2580
// 006d3b7e  84c0                 test al, al
// 006d3b80  0f8483000000         je 0x6d3c09
// 006d3b86  8b5618               mov edx, dword ptr [esi + 0x18]
// 006d3b89  8b06                 mov eax, dword ptr [esi]
// 006d3b8b  8d4c2410             lea ecx, [esp + 0x10]
// 006d3b8f  896c2410             mov dword ptr [esp + 0x10], ebp
// 006d3b93  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d3b97  8954241c             mov dword ptr [esp + 0x1c], edx
// 006d3b9b  89442418             mov dword ptr [esp + 0x18], eax
// 006d3b9f  e89cf3ffff           call 0x6d2f40
// 006d3ba4  8d4c2418             lea ecx, [esp + 0x18]
// 006d3ba8  51                   push ecx
// 006d3ba9  8d4c2414             lea ecx, [esp + 0x14]
// 006d3bad  e8eef8f6ff           call 0x6434a0
// 006d3bb2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d3bb6  84c0                 test al, al
// 006d3bb8  7511                 jne 0x6d3bcb
// 006d3bba  8d530c               lea edx, [ebx + 0xc]
// 006d3bbd  52                   push edx
// 006d3bbe  57                   push edi
// 006d3bbf  8d4e08               lea ecx, [esi + 8]
// 006d3bc2  e8b9e9ffff           call 0x6d2580
// 006d3bc7  84c0                 test al, al
// 006d3bc9  743e                 je 0x6d3c09
// 006d3bcb  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d3bcf  8b4808               mov ecx, dword ptr [eax + 8]
// 006d3bd2  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 006d3bd6  57                   push edi
// 006d3bd7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006d3bdb  8bce                 mov ecx, esi
// 006d3bdd  7415                 je 0x6d3bf4
// 006d3bdf  50                   push eax
// 006d3be0  6a00                 push 0
// 006d3be2  57                   push edi
// 006d3be3  e8c8f6ffff           call 0x6d32b0
// 006d3be8  5b                   pop ebx
// 006d3be9  5d                   pop ebp
// 006d3bea  8bc7                 mov eax, edi
// 006d3bec  5f                   pop edi
// 006d3bed  5e                   pop esi
// 006d3bee  83c414               add esp, 0x14
// 006d3bf1  c21000               ret 0x10
// 006d3bf4  53                   push ebx
// 006d3bf5  6a01                 push 1
// 006d3bf7  57                   push edi
// 006d3bf8  e8b3f6ffff           call 0x6d32b0
// 006d3bfd  5b                   pop ebx
// 006d3bfe  5d                   pop ebp
// 006d3bff  8bc7                 mov eax, edi
// 006d3c01  5f                   pop edi
// 006d3c02  5e                   pop esi
// 006d3c03  83c414               add esp, 0x14
// 006d3c06  c21000               ret 0x10
// 006d3c09  57                   push edi
// 006d3c0a  8d54241c             lea edx, [esp + 0x1c]
// 006d3c0e  52                   push edx
// 006d3c0f  8bce                 mov ecx, esi
// 006d3c11  e86afbffff           call 0x6d3780
// 006d3c16  8b10                 mov edx, dword ptr [eax]
// 006d3c18  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006d3c1c  5b                   pop ebx
// 006d3c1d  5d                   pop ebp
// 006d3c1e  8911                 mov dword ptr [ecx], edx
// 006d3c20  8b4004               mov eax, dword ptr [eax + 4]
// 006d3c23  5f                   pop edi
// 006d3c24  894104               mov dword ptr [ecx + 4], eax
// 006d3c27  8bc1                 mov eax, ecx
// 006d3c29  5e                   pop esi
// 006d3c2a  83c414               add esp, 0x14
// 006d3c2d  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
