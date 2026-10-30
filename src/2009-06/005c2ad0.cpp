// roc 2009-06 005c2ad0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2ad0
//
// 005c2ad0  55                   push ebp
// 005c2ad1  8bec                 mov ebp, esp
// 005c2ad3  83ec24               sub esp, 0x24
// 005c2ad6  894de0               mov dword ptr [ebp - 0x20], ecx
// 005c2ad9  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2adc  e8bfe5ffff           call 0x5c10a0
// 005c2ae1  8b00                 mov eax, dword ptr [eax]
// 005c2ae3  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c2ae6  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2ae9  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c2aec  8955f0               mov dword ptr [ebp - 0x10], edx
// 005c2aef  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 005c2af2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c2af5  894de4               mov dword ptr [ebp - 0x1c], ecx
// 005c2af8  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2afb  52                   push edx
// 005c2afc  e8ffa5feff           call 0x5ad100
// 005c2b01  83c404               add esp, 4
// 005c2b04  0fbe00               movsx eax, byte ptr [eax]
// 005c2b07  85c0                 test eax, eax
// 005c2b09  0f858e000000         jne 0x5c2b9d
// 005c2b0f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c2b12  51                   push ecx
// 005c2b13  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2b16  52                   push edx
// 005c2b17  e8f49bfeff           call 0x5ac710
// 005c2b1c  83c404               add esp, 4
// 005c2b1f  50                   push eax
// 005c2b20  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2b23  83c108               add ecx, 8
// 005c2b26  e865e6ffff           call 0x5c1190
// 005c2b2b  0fb6c0               movzx eax, al
// 005c2b2e  85c0                 test eax, eax
// 005c2b30  7413                 je 0x5c2b45
// 005c2b32  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c2b35  51                   push ecx
// 005c2b36  e835efffff           call 0x5c1a70
// 005c2b3b  83c404               add esp, 4
// 005c2b3e  8b10                 mov edx, dword ptr [eax]
// 005c2b40  8955f4               mov dword ptr [ebp - 0xc], edx
// 005c2b43  eb53                 jmp 0x5c2b98
// 005c2b45  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005c2b48  50                   push eax
// 005c2b49  e8b2a5feff           call 0x5ad100
// 005c2b4e  83c404               add esp, 4
// 005c2b51  0fbe08               movsx ecx, byte ptr [eax]
// 005c2b54  85c9                 test ecx, ecx
// 005c2b56  7429                 je 0x5c2b81
// 005c2b58  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2b5b  52                   push edx
// 005c2b5c  e8af9bfeff           call 0x5ac710
// 005c2b61  83c404               add esp, 4
// 005c2b64  50                   push eax
// 005c2b65  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c2b68  50                   push eax
// 005c2b69  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2b6c  83c108               add ecx, 8
// 005c2b6f  e81ce6ffff           call 0x5c1190
// 005c2b74  0fb6c8               movzx ecx, al
// 005c2b77  85c9                 test ecx, ecx
// 005c2b79  7406                 je 0x5c2b81
// 005c2b7b  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2b7e  8955e4               mov dword ptr [ebp - 0x1c], edx
// 005c2b81  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c2b84  8945f0               mov dword ptr [ebp - 0x10], eax
// 005c2b87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c2b8a  51                   push ecx
// 005c2b8b  e8c0eeffff           call 0x5c1a50
// 005c2b90  83c404               add esp, 4
// 005c2b93  8b10                 mov edx, dword ptr [eax]
// 005c2b95  8955f4               mov dword ptr [ebp - 0xc], edx
// 005c2b98  e95bffffff           jmp 0x5c2af8
// 005c2b9d  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005c2ba0  50                   push eax
// 005c2ba1  e85aa5feff           call 0x5ad100
// 005c2ba6  83c404               add esp, 4
// 005c2ba9  0fbe08               movsx ecx, byte ptr [eax]
// 005c2bac  85c9                 test ecx, ecx
// 005c2bae  740f                 je 0x5c2bbf
// 005c2bb0  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2bb3  e8e8e4ffff           call 0x5c10a0
// 005c2bb8  8b10                 mov edx, dword ptr [eax]
// 005c2bba  8955dc               mov dword ptr [ebp - 0x24], edx
// 005c2bbd  eb11                 jmp 0x5c2bd0
// 005c2bbf  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005c2bc2  50                   push eax
// 005c2bc3  e888eeffff           call 0x5c1a50
// 005c2bc8  83c404               add esp, 4
// 005c2bcb  8b08                 mov ecx, dword ptr [eax]
// 005c2bcd  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005c2bd0  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 005c2bd3  8955f4               mov dword ptr [ebp - 0xc], edx
// 005c2bd6  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c2bd9  50                   push eax
// 005c2bda  e821a5feff           call 0x5ad100
// 005c2bdf  83c404               add esp, 4
// 005c2be2  0fbe08               movsx ecx, byte ptr [eax]
// 005c2be5  85c9                 test ecx, ecx
// 005c2be7  754f                 jne 0x5c2c38
// 005c2be9  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2bec  52                   push edx
// 005c2bed  e81e9bfeff           call 0x5ac710
// 005c2bf2  83c404               add esp, 4
// 005c2bf5  50                   push eax
// 005c2bf6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c2bf9  50                   push eax
// 005c2bfa  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2bfd  83c108               add ecx, 8
// 005c2c00  e88be5ffff           call 0x5c1190
// 005c2c05  0fb6c8               movzx ecx, al
// 005c2c08  85c9                 test ecx, ecx
// 005c2c0a  7419                 je 0x5c2c25
// 005c2c0c  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2c0f  8955e4               mov dword ptr [ebp - 0x1c], edx
// 005c2c12  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c2c15  50                   push eax
// 005c2c16  e835eeffff           call 0x5c1a50
// 005c2c1b  83c404               add esp, 4
// 005c2c1e  8b08                 mov ecx, dword ptr [eax]
// 005c2c20  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c2c23  eb11                 jmp 0x5c2c36
// 005c2c25  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c2c28  52                   push edx
// 005c2c29  e842eeffff           call 0x5c1a70
// 005c2c2e  83c404               add esp, 4
// 005c2c31  8b00                 mov eax, dword ptr [eax]
// 005c2c33  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c2c36  eb9e                 jmp 0x5c2bd6
// 005c2c38  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005c2c3b  51                   push ecx
// 005c2c3c  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 005c2c3f  52                   push edx
// 005c2c40  8d4df8               lea ecx, [ebp - 8]
// 005c2c43  e8a8e8ffff           call 0x5c14f0
// 005c2c48  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 005c2c4b  50                   push eax
// 005c2c4c  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c2c4f  51                   push ecx
// 005c2c50  8d4de8               lea ecx, [ebp - 0x18]
// 005c2c53  e898e8ffff           call 0x5c14f0
// 005c2c58  8d55e8               lea edx, [ebp - 0x18]
// 005c2c5b  52                   push edx
// 005c2c5c  8d45f8               lea eax, [ebp - 8]
// 005c2c5f  50                   push eax
// 005c2c60  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2c63  e8781b0000           call 0x5c47e0
// 005c2c68  8b4508               mov eax, dword ptr [ebp + 8]
// 005c2c6b  8be5                 mov esp, ebp
// 005c2c6d  5d                   pop ebp
// 005c2c6e  c20800               ret 8
// copied from an identical function in another client (function ?_Eqrange@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@V123@@2@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp