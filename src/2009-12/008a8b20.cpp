// roc 2009-12 008a8b20  unit: CXTPDockingPaneLayout  size: 811 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8b20
//
// 008a8b20  6aff                 push -1
// 008a8b22  68bc289600           push 0x9628bc
// 008a8b27  64a100000000         mov eax, dword ptr fs:[0]
// 008a8b2d  50                   push eax
// 008a8b2e  81ec38010000         sub esp, 0x138
// 008a8b34  a10052b600           mov eax, dword ptr [0xb65200]
// 008a8b39  33c4                 xor eax, esp
// 008a8b3b  89842434010000       mov dword ptr [esp + 0x134], eax
// 008a8b42  53                   push ebx
// 008a8b43  55                   push ebp
// 008a8b44  56                   push esi
// 008a8b45  57                   push edi
// 008a8b46  a10052b600           mov eax, dword ptr [0xb65200]
// 008a8b4b  33c4                 xor eax, esp
// 008a8b4d  50                   push eax
// 008a8b4e  8d84244c010000       lea eax, [esp + 0x14c]
// 008a8b55  64a300000000         mov dword ptr fs:[0], eax
// 008a8b5b  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 008a8b62  8b06                 mov eax, dword ptr [esi]
// 008a8b64  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 008a8b6a  8bf9                 mov edi, ecx
// 008a8b6c  8bce                 mov ecx, esi
// 008a8b6e  897c2420             mov dword ptr [esp + 0x20], edi
// 008a8b72  ffd2                 call edx
// 008a8b74  85c0                 test eax, eax
// 008a8b76  0f84a3020000         je 0x8a8e1f
// 008a8b7c  8bcf                 mov ecx, edi
// 008a8b7e  e8ddf9ffff           call 0x8a8560
// 008a8b83  8b06                 mov eax, dword ptr [esi]
// 008a8b85  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a8b88  68d862a000           push 0xa062d8
// 008a8b8d  8bce                 mov ecx, esi
// 008a8b8f  ffd2                 call edx
// 008a8b91  8bd8                 mov ebx, eax
// 008a8b93  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008a8b97  8d442414             lea eax, [esp + 0x14]
// 008a8b9b  50                   push eax
// 008a8b9c  33ed                 xor ebp, ebp
// 008a8b9e  68d062a000           push 0xa062d0
// 008a8ba3  53                   push ebx
// 008a8ba4  89ac2460010000       mov dword ptr [esp + 0x160], ebp
// 008a8bab  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a8baf  e81c7efaff           call 0x8509d0
// 008a8bb4  83c40c               add esp, 0xc
// 008a8bb7  837c241402           cmp dword ptr [esp + 0x14], 2
// 008a8bbc  7d1a                 jge 0x8a8bd8
// 008a8bbe  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 008a8bc9  3bdd                 cmp ebx, ebp
// 008a8bcb  0f844e020000         je 0x8a8e1f
// 008a8bd1  8bcb                 mov ecx, ebx
// 008a8bd3  e942020000           jmp 0x8a8e1a
// 008a8bd8  8bcb                 mov ecx, ebx
// 008a8bda  e8718efaff           call 0x851a50
// 008a8bdf  6a0a                 push 0xa
// 008a8be1  8d4c2430             lea ecx, [esp + 0x30]
// 008a8be5  e8a6f7ffff           call 0x8a8390
// 008a8bea  bb01000000           mov ebx, 1
// 008a8bef  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008a8bf3  c684245401000001     mov byte ptr [esp + 0x154], 1
// 008a8bfb  0f8c9e000000         jl 0x8a8c9f
// 008a8c01  53                   push ebx
// 008a8c02  8d4c244c             lea ecx, [esp + 0x4c]
// 008a8c06  68c862a000           push 0xa062c8
// 008a8c0b  51                   push ecx
// 008a8c0c  ff1520cb9800         call dword ptr [0x98cb20]
// 008a8c12  8b16                 mov edx, dword ptr [esi]
// 008a8c14  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a8c17  83c40c               add esp, 0xc
// 008a8c1a  8d442448             lea eax, [esp + 0x48]
// 008a8c1e  50                   push eax
// 008a8c1f  8bce                 mov ecx, esi
// 008a8c21  ffd2                 call edx
// 008a8c23  8be8                 mov ebp, eax
// 008a8c25  896c2428             mov dword ptr [esp + 0x28], ebp
// 008a8c29  6aff                 push -1
// 008a8c2b  8d442428             lea eax, [esp + 0x28]
// 008a8c2f  50                   push eax
// 008a8c30  68d02c9a00           push 0x9a2cd0
// 008a8c35  55                   push ebp
// 008a8c36  c684246401000002     mov byte ptr [esp + 0x164], 2
// 008a8c3e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008a8c46  e8b57dfaff           call 0x850a00
// 008a8c4b  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 008a8c51  8b11                 mov edx, dword ptr [ecx]
// 008a8c53  8b442434             mov eax, dword ptr [esp + 0x34]
// 008a8c57  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008a8c5d  83c410               add esp, 0x10
// 008a8c60  57                   push edi
// 008a8c61  50                   push eax
// 008a8c62  ffd2                 call edx
// 008a8c64  8bf8                 mov edi, eax
// 008a8c66  85ff                 test edi, edi
// 008a8c68  0f84df000000         je 0x8a8d4d
// 008a8c6e  53                   push ebx
// 008a8c6f  8d4c2430             lea ecx, [esp + 0x30]
// 008a8c73  895f34               mov dword ptr [edi + 0x34], ebx
// 008a8c76  e805b5feff           call 0x894180
// 008a8c7b  8938                 mov dword ptr [eax], edi
// 008a8c7d  c684245401000001     mov byte ptr [esp + 0x154], 1
// 008a8c85  85ed                 test ebp, ebp
// 008a8c87  7407                 je 0x8a8c90
// 008a8c89  8bcd                 mov ecx, ebp
// 008a8c8b  e84cb1f4ff           call 0x7f3ddc
// 008a8c90  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008a8c94  43                   inc ebx
// 008a8c95  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 008a8c99  0f8e62ffffff         jle 0x8a8c01
// 008a8c9f  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 008a8ca2  85ed                 test ebp, ebp
// 008a8ca4  7467                 je 0x8a8d0d
// 008a8ca6  8bc5                 mov eax, ebp
// 008a8ca8  8b7808               mov edi, dword ptr [eax + 8]
// 008a8cab  8b4734               mov eax, dword ptr [edi + 0x34]
// 008a8cae  8b6d00               mov ebp, dword ptr [ebp]
// 008a8cb1  50                   push eax
// 008a8cb2  8d4c244c             lea ecx, [esp + 0x4c]
// 008a8cb6  68c862a000           push 0xa062c8
// 008a8cbb  51                   push ecx
// 008a8cbc  ff1520cb9800         call dword ptr [0x98cb20]
// 008a8cc2  8b16                 mov edx, dword ptr [esi]
// 008a8cc4  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a8cc7  83c40c               add esp, 0xc
// 008a8cca  8d442448             lea eax, [esp + 0x48]
// 008a8cce  50                   push eax
// 008a8ccf  8bce                 mov ecx, esi
// 008a8cd1  ffd2                 call edx
// 008a8cd3  8bd8                 mov ebx, eax
// 008a8cd5  895c2428             mov dword ptr [esp + 0x28], ebx
// 008a8cd9  8d44242c             lea eax, [esp + 0x2c]
// 008a8cdd  894320               mov dword ptr [ebx + 0x20], eax
// 008a8ce0  8b17                 mov edx, dword ptr [edi]
// 008a8ce2  8b4240               mov eax, dword ptr [edx + 0x40]
// 008a8ce5  53                   push ebx
// 008a8ce6  8bcf                 mov ecx, edi
// 008a8ce8  c684245801000003     mov byte ptr [esp + 0x158], 3
// 008a8cf0  ffd0                 call eax
// 008a8cf2  c684245401000001     mov byte ptr [esp + 0x154], 1
// 008a8cfa  8bcb                 mov ecx, ebx
// 008a8cfc  85c0                 test eax, eax
// 008a8cfe  745b                 je 0x8a8d5b
// 008a8d00  e8d7b0f4ff           call 0x7f3ddc
// 008a8d05  85ed                 test ebp, ebp
// 008a8d07  759d                 jne 0x8a8ca6
// 008a8d09  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008a8d0d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008a8d11  8d4c2418             lea ecx, [esp + 0x18]
// 008a8d15  51                   push ecx
// 008a8d16  68a463a000           push 0xa063a4
// 008a8d1b  56                   push esi
// 008a8d1c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008a8d24  e8a77cfaff           call 0x8509d0
// 008a8d29  83c40c               add esp, 0xc
// 008a8d2c  8d4c242c             lea ecx, [esp + 0x2c]
// 008a8d30  85c0                 test eax, eax
// 008a8d32  0f84c4000000         je 0x8a8dfc
// 008a8d38  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a8d3c  52                   push edx
// 008a8d3d  e83eb4feff           call 0x894180
// 008a8d42  8b00                 mov eax, dword ptr [eax]
// 008a8d44  85c0                 test eax, eax
// 008a8d46  7445                 je 0x8a8d8d
// 008a8d48  83c0e0               add eax, -0x20
// 008a8d4b  eb42                 jmp 0x8a8d8f
// 008a8d4d  c684245401000001     mov byte ptr [esp + 0x154], 1
// 008a8d55  85ed                 test ebp, ebp
// 008a8d57  7407                 je 0x8a8d60
// 008a8d59  8bcd                 mov ecx, ebp
// 008a8d5b  e87cb0f4ff           call 0x7f3ddc
// 008a8d60  8d4c242c             lea ecx, [esp + 0x2c]
// 008a8d64  c684245401000000     mov byte ptr [esp + 0x154], 0
// 008a8d6c  e84ff6ffff           call 0x8a83c0
// 008a8d71  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a8d75  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 008a8d80  85c9                 test ecx, ecx
// 008a8d82  0f8497000000         je 0x8a8e1f
// 008a8d88  e98d000000           jmp 0x8a8e1a
// 008a8d8d  33c0                 xor eax, eax
// 008a8d8f  894720               mov dword ptr [edi + 0x20], eax
// 008a8d92  85c0                 test eax, eax
// 008a8d94  7462                 je 0x8a8df8
// 008a8d96  8d442418             lea eax, [esp + 0x18]
// 008a8d9a  50                   push eax
// 008a8d9b  689c63a000           push 0xa0639c
// 008a8da0  56                   push esi
// 008a8da1  e82a7cfaff           call 0x8509d0
// 008a8da6  83c40c               add esp, 0xc
// 008a8da9  85c0                 test eax, eax
// 008a8dab  744b                 je 0x8a8df8
// 008a8dad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a8db1  51                   push ecx
// 008a8db2  8d4c2430             lea ecx, [esp + 0x30]
// 008a8db6  e8c5b3feff           call 0x894180
// 008a8dbb  8b00                 mov eax, dword ptr [eax]
// 008a8dbd  894724               mov dword ptr [edi + 0x24], eax
// 008a8dc0  85c0                 test eax, eax
// 008a8dc2  7434                 je 0x8a8df8
// 008a8dc4  83781804             cmp dword ptr [eax + 0x18], 4
// 008a8dc8  752e                 jne 0x8a8df8
// 008a8dca  8d4c242c             lea ecx, [esp + 0x2c]
// 008a8dce  c684245401000000     mov byte ptr [esp + 0x154], 0
// 008a8dd6  e8e5f5ffff           call 0x8a83c0
// 008a8ddb  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 008a8de6  85f6                 test esi, esi
// 008a8de8  7407                 je 0x8a8df1
// 008a8dea  8bce                 mov ecx, esi
// 008a8dec  e8ebaff4ff           call 0x7f3ddc
// 008a8df1  b801000000           mov eax, 1
// 008a8df6  eb29                 jmp 0x8a8e21
// 008a8df8  8d4c242c             lea ecx, [esp + 0x2c]
// 008a8dfc  c684245401000000     mov byte ptr [esp + 0x154], 0
// 008a8e04  e8b7f5ffff           call 0x8a83c0
// 008a8e09  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 008a8e14  85f6                 test esi, esi
// 008a8e16  7407                 je 0x8a8e1f
// 008a8e18  8bce                 mov ecx, esi
// 008a8e1a  e8bdaff4ff           call 0x7f3ddc
// 008a8e1f  33c0                 xor eax, eax
// 008a8e21  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 008a8e28  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8e2f  59                   pop ecx
// 008a8e30  5f                   pop edi
// 008a8e31  5e                   pop esi
// 008a8e32  5d                   pop ebp
// 008a8e33  5b                   pop ebx
// 008a8e34  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 008a8e3b  33cc                 xor ecx, esp
// 008a8e3d  e858c5f4ff           call 0x7f539a
// 008a8e42  81c444010000         add esp, 0x144
// 008a8e48  c20400               ret 4
// copied from an identical function in another client (function ?_Load@CXTPDockingPaneLayout@@AAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp