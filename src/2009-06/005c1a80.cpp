// roc 2009-06 005c1a80  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1a80
//
// 005c1a80  55                   push ebp
// 005c1a81  8bec                 mov ebp, esp
// 005c1a83  83ec4c               sub esp, 0x4c
// 005c1a86  894db8               mov dword ptr [ebp - 0x48], ecx
// 005c1a89  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1a8c  e80ff6ffff           call 0x5c10a0
// 005c1a91  8b00                 mov eax, dword ptr [eax]
// 005c1a93  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c1a96  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1a99  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c1a9c  8955f8               mov dword ptr [ebp - 8], edx
// 005c1a9f  c645ff01             mov byte ptr [ebp - 1], 1
// 005c1aa3  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c1aa6  50                   push eax
// 005c1aa7  e894ffffff           call 0x5c1a40
// 005c1aac  83c404               add esp, 4
// 005c1aaf  0fbe08               movsx ecx, byte ptr [eax]
// 005c1ab2  85c9                 test ecx, ecx
// 005c1ab4  7562                 jne 0x5c1b18
// 005c1ab6  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c1ab9  8955f8               mov dword ptr [ebp - 8], edx
// 005c1abc  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c1abf  50                   push eax
// 005c1ac0  e84bacfeff           call 0x5ac710
// 005c1ac5  83c404               add esp, 4
// 005c1ac8  50                   push eax
// 005c1ac9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c1acc  51                   push ecx
// 005c1acd  e87effffff           call 0x5c1a50
// 005c1ad2  83c404               add esp, 4
// 005c1ad5  50                   push eax
// 005c1ad6  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1ad9  83c108               add ecx, 8
// 005c1adc  e84fefffff           call 0x5c0a30
// 005c1ae1  8845ff               mov byte ptr [ebp - 1], al
// 005c1ae4  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c1ae8  85d2                 test edx, edx
// 005c1aea  7413                 je 0x5c1aff
// 005c1aec  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c1aef  50                   push eax
// 005c1af0  e85bffffff           call 0x5c1a50
// 005c1af5  83c404               add esp, 4
// 005c1af8  8b08                 mov ecx, dword ptr [eax]
// 005c1afa  894db4               mov dword ptr [ebp - 0x4c], ecx
// 005c1afd  eb11                 jmp 0x5c1b10
// 005c1aff  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c1b02  52                   push edx
// 005c1b03  e868ffffff           call 0x5c1a70
// 005c1b08  83c404               add esp, 4
// 005c1b0b  8b00                 mov eax, dword ptr [eax]
// 005c1b0d  8945b4               mov dword ptr [ebp - 0x4c], eax
// 005c1b10  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 005c1b13  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c1b16  eb8b                 jmp 0x5c1aa3
// 005c1b18  33d2                 xor edx, edx
// 005c1b1a  7437                 je 0x5c1b53
// 005c1b1c  c645eb01             mov byte ptr [ebp - 0x15], 1
// 005c1b20  8d45eb               lea eax, [ebp - 0x15]
// 005c1b23  50                   push eax
// 005c1b24  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c1b27  51                   push ecx
// 005c1b28  8b55f8               mov edx, dword ptr [ebp - 8]
// 005c1b2b  52                   push edx
// 005c1b2c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c1b30  50                   push eax
// 005c1b31  8d4de0               lea ecx, [ebp - 0x20]
// 005c1b34  51                   push ecx
// 005c1b35  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1b38  e833020000           call 0x5c1d70
// 005c1b3d  50                   push eax
// 005c1b3e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1b41  e87a46ffff           call 0x5b61c0
// 005c1b46  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1b49  e9ed000000           jmp 0x5c1c3b
// 005c1b4e  e9e8000000           jmp 0x5c1c3b
// 005c1b53  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 005c1b56  52                   push edx
// 005c1b57  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c1b5a  50                   push eax
// 005c1b5b  8d4dec               lea ecx, [ebp - 0x14]
// 005c1b5e  e88df9ffff           call 0x5c14f0
// 005c1b63  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005c1b67  85c9                 test ecx, ecx
// 005c1b69  7502                 jne 0x5c1b6d
// 005c1b6b  eb55                 jmp 0x5c1bc2
// 005c1b6d  8d55d8               lea edx, [ebp - 0x28]
// 005c1b70  52                   push edx
// 005c1b71  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1b74  e88728ffff           call 0x5b4400
// 005c1b79  50                   push eax
// 005c1b7a  8d4dec               lea ecx, [ebp - 0x14]
// 005c1b7d  e81ef9ffff           call 0x5c14a0
// 005c1b82  0fb6c0               movzx eax, al
// 005c1b85  85c0                 test eax, eax
// 005c1b87  7431                 je 0x5c1bba
// 005c1b89  c645d701             mov byte ptr [ebp - 0x29], 1
// 005c1b8d  8d4dd7               lea ecx, [ebp - 0x29]
// 005c1b90  51                   push ecx
// 005c1b91  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c1b94  52                   push edx
// 005c1b95  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c1b98  50                   push eax
// 005c1b99  6a01                 push 1
// 005c1b9b  8d4dcc               lea ecx, [ebp - 0x34]
// 005c1b9e  51                   push ecx
// 005c1b9f  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1ba2  e8c9010000           call 0x5c1d70
// 005c1ba7  50                   push eax
// 005c1ba8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1bab  e81046ffff           call 0x5b61c0
// 005c1bb0  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1bb3  e983000000           jmp 0x5c1c3b
// 005c1bb8  eb08                 jmp 0x5c1bc2
// 005c1bba  8d4dec               lea ecx, [ebp - 0x14]
// 005c1bbd  e8be270000           call 0x5c4380
// 005c1bc2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c1bc5  52                   push edx
// 005c1bc6  e885feffff           call 0x5c1a50
// 005c1bcb  83c404               add esp, 4
// 005c1bce  50                   push eax
// 005c1bcf  8d4dec               lea ecx, [ebp - 0x14]
// 005c1bd2  e859a1feff           call 0x5abd30
// 005c1bd7  50                   push eax
// 005c1bd8  e833abfeff           call 0x5ac710
// 005c1bdd  83c404               add esp, 4
// 005c1be0  50                   push eax
// 005c1be1  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1be4  83c108               add ecx, 8
// 005c1be7  e844eeffff           call 0x5c0a30
// 005c1bec  0fb6c0               movzx eax, al
// 005c1bef  85c0                 test eax, eax
// 005c1bf1  7431                 je 0x5c1c24
// 005c1bf3  c645cb01             mov byte ptr [ebp - 0x35], 1
// 005c1bf7  8d4dcb               lea ecx, [ebp - 0x35]
// 005c1bfa  51                   push ecx
// 005c1bfb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c1bfe  52                   push edx
// 005c1bff  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c1c02  50                   push eax
// 005c1c03  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005c1c07  51                   push ecx
// 005c1c08  8d55c0               lea edx, [ebp - 0x40]
// 005c1c0b  52                   push edx
// 005c1c0c  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005c1c0f  e85c010000           call 0x5c1d70
// 005c1c14  50                   push eax
// 005c1c15  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1c18  e8a345ffff           call 0x5b61c0
// 005c1c1d  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1c20  eb19                 jmp 0x5c1c3b
// 005c1c22  eb17                 jmp 0x5c1c3b
// 005c1c24  c645bf00             mov byte ptr [ebp - 0x41], 0
// 005c1c28  8d45bf               lea eax, [ebp - 0x41]
// 005c1c2b  50                   push eax
// 005c1c2c  8d4dec               lea ecx, [ebp - 0x14]
// 005c1c2f  51                   push ecx
// 005c1c30  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1c33  e88845ffff           call 0x5b61c0
// 005c1c38  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1c3b  8be5                 mov esp, ebp
// 005c1c3d  5d                   pop ebp
// 005c1c3e  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@_N@2@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp