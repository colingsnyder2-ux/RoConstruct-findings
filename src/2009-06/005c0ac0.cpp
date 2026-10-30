// roc 2009-06 005c0ac0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0ac0
//
// 005c0ac0  55                   push ebp
// 005c0ac1  8bec                 mov ebp, esp
// 005c0ac3  83ec24               sub esp, 0x24
// 005c0ac6  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005c0ac9  8d45f8               lea eax, [ebp - 8]
// 005c0acc  50                   push eax
// 005c0acd  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0ad0  e82b39ffff           call 0x5b4400
// 005c0ad5  50                   push eax
// 005c0ad6  8d4d0c               lea ecx, [ebp + 0xc]
// 005c0ad9  e8c2090000           call 0x5c14a0
// 005c0ade  0fb6c8               movzx ecx, al
// 005c0ae1  85c9                 test ecx, ecx
// 005c0ae3  7437                 je 0x5c0b1c
// 005c0ae5  8d55f0               lea edx, [ebp - 0x10]
// 005c0ae8  52                   push edx
// 005c0ae9  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0aec  e83f39ffff           call 0x5b4430
// 005c0af1  50                   push eax
// 005c0af2  8d4d14               lea ecx, [ebp + 0x14]
// 005c0af5  e8a6090000           call 0x5c14a0
// 005c0afa  0fb6c0               movzx eax, al
// 005c0afd  85c0                 test eax, eax
// 005c0aff  741b                 je 0x5c0b1c
// 005c0b01  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0b04  e8e7f0ffff           call 0x5bfbf0
// 005c0b09  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c0b0c  51                   push ecx
// 005c0b0d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0b10  e8eb38ffff           call 0x5b4400
// 005c0b15  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0b18  eb4f                 jmp 0x5c0b69
// 005c0b1a  eb4d                 jmp 0x5c0b69
// 005c0b1c  8d5514               lea edx, [ebp + 0x14]
// 005c0b1f  52                   push edx
// 005c0b20  8d4d0c               lea ecx, [ebp + 0xc]
// 005c0b23  e818f3ffff           call 0x5bfe40
// 005c0b28  0fb6c0               movzx eax, al
// 005c0b2b  85c0                 test eax, eax
// 005c0b2d  7423                 je 0x5c0b52
// 005c0b2f  6a00                 push 0
// 005c0b31  8d4de8               lea ecx, [ebp - 0x18]
// 005c0b34  51                   push ecx
// 005c0b35  8d4d0c               lea ecx, [ebp + 0xc]
// 005c0b38  e8c3dafeff           call 0x5ae600
// 005c0b3d  8b5004               mov edx, dword ptr [eax + 4]
// 005c0b40  52                   push edx
// 005c0b41  8b00                 mov eax, dword ptr [eax]
// 005c0b43  50                   push eax
// 005c0b44  8d4de0               lea ecx, [ebp - 0x20]
// 005c0b47  51                   push ecx
// 005c0b48  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0b4b  e8b0170000           call 0x5c2300
// 005c0b50  ebca                 jmp 0x5c0b1c
// 005c0b52  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c0b55  52                   push edx
// 005c0b56  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c0b59  50                   push eax
// 005c0b5a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c0b5d  51                   push ecx
// 005c0b5e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c0b61  e82ad0feff           call 0x5adb90
// 005c0b66  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0b69  8be5                 mov esp, ebp
// 005c0b6b  5d                   pop ebp
// 005c0b6c  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp