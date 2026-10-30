// roc 2009-06 005c0b90  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0b90
//
// 005c0b90  55                   push ebp
// 005c0b91  8bec                 mov ebp, esp
// 005c0b93  83ec08               sub esp, 8
// 005c0b96  894df8               mov dword ptr [ebp - 8], ecx
// 005c0b99  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0b9c  8945fc               mov dword ptr [ebp - 4], eax
// 005c0b9f  eb06                 jmp 0x5c0ba7
// 005c0ba1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c0ba4  894d08               mov dword ptr [ebp + 8], ecx
// 005c0ba7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c0baa  52                   push edx
// 005c0bab  e850c5feff           call 0x5ad100
// 005c0bb0  83c404               add esp, 4
// 005c0bb3  0fbe00               movsx eax, byte ptr [eax]
// 005c0bb6  85c0                 test eax, eax
// 005c0bb8  754a                 jne 0x5c0c04
// 005c0bba  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c0bbd  51                   push ecx
// 005c0bbe  e8ad0e0000           call 0x5c1a70
// 005c0bc3  83c404               add esp, 4
// 005c0bc6  8b10                 mov edx, dword ptr [eax]
// 005c0bc8  52                   push edx
// 005c0bc9  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c0bcc  e8bfffffff           call 0x5c0b90
// 005c0bd1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c0bd4  50                   push eax
// 005c0bd5  e8760e0000           call 0x5c1a50
// 005c0bda  83c404               add esp, 4
// 005c0bdd  8b08                 mov ecx, dword ptr [eax]
// 005c0bdf  894dfc               mov dword ptr [ebp - 4], ecx
// 005c0be2  8b5508               mov edx, dword ptr [ebp + 8]
// 005c0be5  52                   push edx
// 005c0be6  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c0be9  83c10c               add ecx, 0xc
// 005c0bec  e80f230000           call 0x5c2f00
// 005c0bf1  6a01                 push 1
// 005c0bf3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0bf6  50                   push eax
// 005c0bf7  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c0bfa  83c10c               add ecx, 0xc
// 005c0bfd  e89ed2ffff           call 0x5bdea0
// 005c0c02  eb9d                 jmp 0x5c0ba1
// 005c0c04  8be5                 mov esp, ebp
// 005c0c06  5d                   pop ebp
// 005c0c07  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp