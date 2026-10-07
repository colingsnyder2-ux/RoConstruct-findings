// roc 2007-08 00614af0  unit: seg_00610000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614af0
//
// 00614af0  83ec1c               sub esp, 0x1c
// 00614af3  53                   push ebx
// 00614af4  55                   push ebp
// 00614af5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00614af9  56                   push esi
// 00614afa  8bf0                 mov esi, eax
// 00614afc  8b4610               mov eax, dword ptr [esi + 0x10]
// 00614aff  83f828               cmp eax, 0x28
// 00614b02  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 00614b05  57                   push edi
// 00614b06  8b7e04               mov edi, dword ptr [esi + 4]
// 00614b09  897c2410             mov dword ptr [esp + 0x10], edi
// 00614b0d  745b                 je 0x614b6a
// 00614b0f  83f87b               cmp eax, 0x7b
// 00614b12  7449                 je 0x614b5d
// 00614b14  3d1e010000           cmp eax, 0x11e
// 00614b19  7416                 je 0x614b31
// 00614b1b  68dc347c00           push 0x7c34dc
// 00614b20  56                   push esi
// 00614b21  e89a2a0000           call 0x6175c0
// 00614b26  83c408               add esp, 8
// 00614b29  5f                   pop edi
// 00614b2a  5e                   pop esi
// 00614b2b  5d                   pop ebp
// 00614b2c  5b                   pop ebx
// 00614b2d  83c41c               add esp, 0x1c
// 00614b30  c3                   ret 
// 00614b31  8b4618               mov eax, dword ptr [esi + 0x18]
// 00614b34  50                   push eax
// 00614b35  53                   push ebx
// 00614b36  e8b53e0100           call 0x6289f0
// 00614b3b  83c9ff               or ecx, 0xffffffff
// 00614b3e  56                   push esi
// 00614b3f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00614b43  894c2434             mov dword ptr [esp + 0x34], ecx
// 00614b47  c744242004000000     mov dword ptr [esp + 0x20], 4
// 00614b4f  89442428             mov dword ptr [esp + 0x28], eax
// 00614b53  e8983e0000           call 0x6189f0
// 00614b58  83c40c               add esp, 0xc
// 00614b5b  eb69                 jmp 0x614bc6
// 00614b5d  8d442414             lea eax, [esp + 0x14]
// 00614b61  8bce                 mov ecx, esi
// 00614b63  e848faffff           call 0x6145b0
// 00614b68  eb5c                 jmp 0x614bc6
// 00614b6a  3b7e08               cmp edi, dword ptr [esi + 8]
// 00614b6d  740e                 je 0x614b7d
// 00614b6f  68a8347c00           push 0x7c34a8
// 00614b74  56                   push esi
// 00614b75  e8462a0000           call 0x6175c0
// 00614b7a  83c408               add esp, 8
// 00614b7d  56                   push esi
// 00614b7e  e86d3e0000           call 0x6189f0
// 00614b83  83c404               add esp, 4
// 00614b86  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 00614b8a  750a                 jne 0x614b96
// 00614b8c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00614b94  eb1b                 jmp 0x614bb1
// 00614b96  8d7c2414             lea edi, [esp + 0x14]
// 00614b9a  e811ffffff           call 0x614ab0
// 00614b9f  6aff                 push -1
// 00614ba1  8bc7                 mov eax, edi
// 00614ba3  50                   push eax
// 00614ba4  53                   push ebx
// 00614ba5  e8e63e0100           call 0x628a90
// 00614baa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00614bae  83c40c               add esp, 0xc
// 00614bb1  8bc7                 mov eax, edi
// 00614bb3  6a28                 push 0x28
// 00614bb5  bf29000000           mov edi, 0x29
// 00614bba  e861efffff           call 0x613b20
// 00614bbf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00614bc3  83c404               add esp, 4
// 00614bc6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00614bca  83f80d               cmp eax, 0xd
// 00614bcd  8b7508               mov esi, dword ptr [ebp + 8]
// 00614bd0  7421                 je 0x614bf3
// 00614bd2  83f80e               cmp eax, 0xe
// 00614bd5  741c                 je 0x614bf3
// 00614bd7  85c0                 test eax, eax
// 00614bd9  740e                 je 0x614be9
// 00614bdb  8d4c2414             lea ecx, [esp + 0x14]
// 00614bdf  51                   push ecx
// 00614be0  53                   push ebx
// 00614be1  e8aa470100           call 0x629390
// 00614be6  83c408               add esp, 8
// 00614be9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00614bec  2bc6                 sub eax, esi
// 00614bee  83e801               sub eax, 1
// 00614bf1  eb03                 jmp 0x614bf6
// 00614bf3  83c8ff               or eax, 0xffffffff
// 00614bf6  6a02                 push 2
// 00614bf8  83c001               add eax, 1
// 00614bfb  50                   push eax
// 00614bfc  56                   push esi
// 00614bfd  6a1c                 push 0x1c
// 00614bff  53                   push ebx
// 00614c00  e87b410100           call 0x628d80
// 00614c05  83c9ff               or ecx, 0xffffffff
// 00614c08  57                   push edi
// 00614c09  53                   push ebx
// 00614c0a  894d10               mov dword ptr [ebp + 0x10], ecx
// 00614c0d  894d14               mov dword ptr [ebp + 0x14], ecx
// 00614c10  c745000d000000       mov dword ptr [ebp], 0xd
// 00614c17  894508               mov dword ptr [ebp + 8], eax
// 00614c1a  e8a1400100           call 0x628cc0
// 00614c1f  83c41c               add esp, 0x1c
// 00614c22  83c601               add esi, 1
// 00614c25  5f                   pop edi
// 00614c26  897324               mov dword ptr [ebx + 0x24], esi
// 00614c29  5e                   pop esi
// 00614c2a  5d                   pop ebp
// 00614c2b  5b                   pop ebx
// 00614c2c  83c41c               add esp, 0x1c
// 00614c2f  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
