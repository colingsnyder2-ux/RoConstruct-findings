// roc 2009-06 006ee830  unit: seg_006e0000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee830
//
// 006ee830  83ec1c               sub esp, 0x1c
// 006ee833  53                   push ebx
// 006ee834  55                   push ebp
// 006ee835  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006ee839  56                   push esi
// 006ee83a  8bf0                 mov esi, eax
// 006ee83c  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee83f  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006ee842  57                   push edi
// 006ee843  8b7e04               mov edi, dword ptr [esi + 4]
// 006ee846  897c2410             mov dword ptr [esp + 0x10], edi
// 006ee84a  83f828               cmp eax, 0x28
// 006ee84d  745b                 je 0x6ee8aa
// 006ee84f  83f87b               cmp eax, 0x7b
// 006ee852  7449                 je 0x6ee89d
// 006ee854  3d1e010000           cmp eax, 0x11e
// 006ee859  7416                 je 0x6ee871
// 006ee85b  6824df8e00           push 0x8edf24
// 006ee860  56                   push esi
// 006ee861  e88a2a0000           call 0x6f12f0
// 006ee866  83c408               add esp, 8
// 006ee869  5f                   pop edi
// 006ee86a  5e                   pop esi
// 006ee86b  5d                   pop ebp
// 006ee86c  5b                   pop ebx
// 006ee86d  83c41c               add esp, 0x1c
// 006ee870  c3                   ret 
// 006ee871  8b4618               mov eax, dword ptr [esi + 0x18]
// 006ee874  50                   push eax
// 006ee875  53                   push ebx
// 006ee876  e805b60000           call 0x6f9e80
// 006ee87b  83c9ff               or ecx, 0xffffffff
// 006ee87e  56                   push esi
// 006ee87f  894c2430             mov dword ptr [esp + 0x30], ecx
// 006ee883  894c2434             mov dword ptr [esp + 0x34], ecx
// 006ee887  c744242004000000     mov dword ptr [esp + 0x20], 4
// 006ee88f  89442428             mov dword ptr [esp + 0x28], eax
// 006ee893  e8483e0000           call 0x6f26e0
// 006ee898  83c40c               add esp, 0xc
// 006ee89b  eb69                 jmp 0x6ee906
// 006ee89d  8d442414             lea eax, [esp + 0x14]
// 006ee8a1  8bce                 mov ecx, esi
// 006ee8a3  e848faffff           call 0x6ee2f0
// 006ee8a8  eb5c                 jmp 0x6ee906
// 006ee8aa  3b7e08               cmp edi, dword ptr [esi + 8]
// 006ee8ad  740e                 je 0x6ee8bd
// 006ee8af  68f0de8e00           push 0x8edef0
// 006ee8b4  56                   push esi
// 006ee8b5  e8362a0000           call 0x6f12f0
// 006ee8ba  83c408               add esp, 8
// 006ee8bd  56                   push esi
// 006ee8be  e81d3e0000           call 0x6f26e0
// 006ee8c3  83c404               add esp, 4
// 006ee8c6  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 006ee8ca  750a                 jne 0x6ee8d6
// 006ee8cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006ee8d4  eb1b                 jmp 0x6ee8f1
// 006ee8d6  8d7c2414             lea edi, [esp + 0x14]
// 006ee8da  e811ffffff           call 0x6ee7f0
// 006ee8df  6aff                 push -1
// 006ee8e1  8bc7                 mov eax, edi
// 006ee8e3  50                   push eax
// 006ee8e4  53                   push ebx
// 006ee8e5  e8f6b50000           call 0x6f9ee0
// 006ee8ea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006ee8ee  83c40c               add esp, 0xc
// 006ee8f1  8bc7                 mov eax, edi
// 006ee8f3  6a28                 push 0x28
// 006ee8f5  bf29000000           mov edi, 0x29
// 006ee8fa  e891efffff           call 0x6ed890
// 006ee8ff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ee903  83c404               add esp, 4
// 006ee906  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ee90a  8b7508               mov esi, dword ptr [ebp + 8]
// 006ee90d  83f80d               cmp eax, 0xd
// 006ee910  741f                 je 0x6ee931
// 006ee912  83f80e               cmp eax, 0xe
// 006ee915  741a                 je 0x6ee931
// 006ee917  85c0                 test eax, eax
// 006ee919  740e                 je 0x6ee929
// 006ee91b  8d4c2414             lea ecx, [esp + 0x14]
// 006ee91f  51                   push ecx
// 006ee920  53                   push ebx
// 006ee921  e8babe0000           call 0x6fa7e0
// 006ee926  83c408               add esp, 8
// 006ee929  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006ee92c  2bc6                 sub eax, esi
// 006ee92e  48                   dec eax
// 006ee92f  eb03                 jmp 0x6ee934
// 006ee931  83c8ff               or eax, 0xffffffff
// 006ee934  6a02                 push 2
// 006ee936  40                   inc eax
// 006ee937  50                   push eax
// 006ee938  56                   push esi
// 006ee939  6a1c                 push 0x1c
// 006ee93b  53                   push ebx
// 006ee93c  e88fb80000           call 0x6fa1d0
// 006ee941  83c9ff               or ecx, 0xffffffff
// 006ee944  57                   push edi
// 006ee945  53                   push ebx
// 006ee946  894d10               mov dword ptr [ebp + 0x10], ecx
// 006ee949  894d14               mov dword ptr [ebp + 0x14], ecx
// 006ee94c  c745000d000000       mov dword ptr [ebp], 0xd
// 006ee953  894508               mov dword ptr [ebp + 8], eax
// 006ee956  e8b5b70000           call 0x6fa110
// 006ee95b  83c41c               add esp, 0x1c
// 006ee95e  46                   inc esi
// 006ee95f  5f                   pop edi
// 006ee960  897324               mov dword ptr [ebx + 0x24], esi
// 006ee963  5e                   pop esi
// 006ee964  5d                   pop ebp
// 006ee965  5b                   pop ebx
// 006ee966  83c41c               add esp, 0x1c
// 006ee969  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
