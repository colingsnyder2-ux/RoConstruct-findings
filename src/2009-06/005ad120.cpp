// roc 2009-06 005ad120  unit: RBX::Mesh  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ad120
//
// 005ad120  55                   push ebp
// 005ad121  8bec                 mov ebp, esp
// 005ad123  83ec4c               sub esp, 0x4c
// 005ad126  894db8               mov dword ptr [ebp - 0x48], ecx
// 005ad129  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad12c  e86f3f0100           call 0x5c10a0
// 005ad131  8b00                 mov eax, dword ptr [eax]
// 005ad133  8945f4               mov dword ptr [ebp - 0xc], eax
// 005ad136  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad139  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005ad13c  8955f8               mov dword ptr [ebp - 8], edx
// 005ad13f  c645ff01             mov byte ptr [ebp - 1], 1
// 005ad143  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005ad146  50                   push eax
// 005ad147  e8b4ffffff           call 0x5ad100
// 005ad14c  83c404               add esp, 4
// 005ad14f  0fbe08               movsx ecx, byte ptr [eax]
// 005ad152  85c9                 test ecx, ecx
// 005ad154  7562                 jne 0x5ad1b8
// 005ad156  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005ad159  8955f8               mov dword ptr [ebp - 8], edx
// 005ad15c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005ad15f  50                   push eax
// 005ad160  e8abf5ffff           call 0x5ac710
// 005ad165  83c404               add esp, 4
// 005ad168  50                   push eax
// 005ad169  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ad16c  51                   push ecx
// 005ad16d  e8de480100           call 0x5c1a50
// 005ad172  83c404               add esp, 4
// 005ad175  50                   push eax
// 005ad176  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad179  83c108               add ecx, 8
// 005ad17c  e89f02eaff           call 0x44d420
// 005ad181  8845ff               mov byte ptr [ebp - 1], al
// 005ad184  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005ad188  85d2                 test edx, edx
// 005ad18a  7413                 je 0x5ad19f
// 005ad18c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005ad18f  50                   push eax
// 005ad190  e8bb480100           call 0x5c1a50
// 005ad195  83c404               add esp, 4
// 005ad198  8b08                 mov ecx, dword ptr [eax]
// 005ad19a  894db4               mov dword ptr [ebp - 0x4c], ecx
// 005ad19d  eb11                 jmp 0x5ad1b0
// 005ad19f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005ad1a2  52                   push edx
// 005ad1a3  e8c8480100           call 0x5c1a70
// 005ad1a8  83c404               add esp, 4
// 005ad1ab  8b00                 mov eax, dword ptr [eax]
// 005ad1ad  8945b4               mov dword ptr [ebp - 0x4c], eax
// 005ad1b0  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 005ad1b3  894df4               mov dword ptr [ebp - 0xc], ecx
// 005ad1b6  eb8b                 jmp 0x5ad143
// 005ad1b8  33d2                 xor edx, edx
// 005ad1ba  7437                 je 0x5ad1f3
// 005ad1bc  c645eb01             mov byte ptr [ebp - 0x15], 1
// 005ad1c0  8d45eb               lea eax, [ebp - 0x15]
// 005ad1c3  50                   push eax
// 005ad1c4  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ad1c7  51                   push ecx
// 005ad1c8  8b55f8               mov edx, dword ptr [ebp - 8]
// 005ad1cb  52                   push edx
// 005ad1cc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005ad1d0  50                   push eax
// 005ad1d1  8d4de0               lea ecx, [ebp - 0x20]
// 005ad1d4  51                   push ecx
// 005ad1d5  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad1d8  e8c3010000           call 0x5ad3a0
// 005ad1dd  50                   push eax
// 005ad1de  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad1e1  e8da8f0000           call 0x5b61c0
// 005ad1e6  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad1e9  e9ed000000           jmp 0x5ad2db
// 005ad1ee  e9e8000000           jmp 0x5ad2db
// 005ad1f3  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 005ad1f6  52                   push edx
// 005ad1f7  8b45f8               mov eax, dword ptr [ebp - 8]
// 005ad1fa  50                   push eax
// 005ad1fb  8d4dec               lea ecx, [ebp - 0x14]
// 005ad1fe  e8ed420100           call 0x5c14f0
// 005ad203  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005ad207  85c9                 test ecx, ecx
// 005ad209  7502                 jne 0x5ad20d
// 005ad20b  eb55                 jmp 0x5ad262
// 005ad20d  8d55d8               lea edx, [ebp - 0x28]
// 005ad210  52                   push edx
// 005ad211  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad214  e8e7710000           call 0x5b4400
// 005ad219  50                   push eax
// 005ad21a  8d4dec               lea ecx, [ebp - 0x14]
// 005ad21d  e87e420100           call 0x5c14a0
// 005ad222  0fb6c0               movzx eax, al
// 005ad225  85c0                 test eax, eax
// 005ad227  7431                 je 0x5ad25a
// 005ad229  c645d701             mov byte ptr [ebp - 0x29], 1
// 005ad22d  8d4dd7               lea ecx, [ebp - 0x29]
// 005ad230  51                   push ecx
// 005ad231  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ad234  52                   push edx
// 005ad235  8b45f8               mov eax, dword ptr [ebp - 8]
// 005ad238  50                   push eax
// 005ad239  6a01                 push 1
// 005ad23b  8d4dcc               lea ecx, [ebp - 0x34]
// 005ad23e  51                   push ecx
// 005ad23f  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad242  e859010000           call 0x5ad3a0
// 005ad247  50                   push eax
// 005ad248  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad24b  e8708f0000           call 0x5b61c0
// 005ad250  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad253  e983000000           jmp 0x5ad2db
// 005ad258  eb08                 jmp 0x5ad262
// 005ad25a  8d4dec               lea ecx, [ebp - 0x14]
// 005ad25d  e8ae420100           call 0x5c1510
// 005ad262  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ad265  52                   push edx
// 005ad266  e8e5470100           call 0x5c1a50
// 005ad26b  83c404               add esp, 4
// 005ad26e  50                   push eax
// 005ad26f  8d4dec               lea ecx, [ebp - 0x14]
// 005ad272  e8b9eaffff           call 0x5abd30
// 005ad277  50                   push eax
// 005ad278  e893f4ffff           call 0x5ac710
// 005ad27d  83c404               add esp, 4
// 005ad280  50                   push eax
// 005ad281  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad284  83c108               add ecx, 8
// 005ad287  e89401eaff           call 0x44d420
// 005ad28c  0fb6c0               movzx eax, al
// 005ad28f  85c0                 test eax, eax
// 005ad291  7431                 je 0x5ad2c4
// 005ad293  c645cb01             mov byte ptr [ebp - 0x35], 1
// 005ad297  8d4dcb               lea ecx, [ebp - 0x35]
// 005ad29a  51                   push ecx
// 005ad29b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ad29e  52                   push edx
// 005ad29f  8b45f8               mov eax, dword ptr [ebp - 8]
// 005ad2a2  50                   push eax
// 005ad2a3  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005ad2a7  51                   push ecx
// 005ad2a8  8d55c0               lea edx, [ebp - 0x40]
// 005ad2ab  52                   push edx
// 005ad2ac  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005ad2af  e8ec000000           call 0x5ad3a0
// 005ad2b4  50                   push eax
// 005ad2b5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad2b8  e8038f0000           call 0x5b61c0
// 005ad2bd  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad2c0  eb19                 jmp 0x5ad2db
// 005ad2c2  eb17                 jmp 0x5ad2db
// 005ad2c4  c645bf00             mov byte ptr [ebp - 0x41], 0
// 005ad2c8  8d45bf               lea eax, [ebp - 0x41]
// 005ad2cb  50                   push eax
// 005ad2cc  8d4dec               lea ecx, [ebp - 0x14]
// 005ad2cf  51                   push ecx
// 005ad2d0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad2d3  e8e88e0000           call 0x5b61c0
// 005ad2d8  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad2db  8be5                 mov esp, ebp
// 005ad2dd  5d                   pop ebp
// 005ad2de  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@_N@2@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp