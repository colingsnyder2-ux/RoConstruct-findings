// roc 2009-06 005c1c50  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1c50
//
// 005c1c50  55                   push ebp
// 005c1c51  8bec                 mov ebp, esp
// 005c1c53  83ec24               sub esp, 0x24
// 005c1c56  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005c1c59  8d45f8               lea eax, [ebp - 8]
// 005c1c5c  50                   push eax
// 005c1c5d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1c60  e89b27ffff           call 0x5b4400
// 005c1c65  50                   push eax
// 005c1c66  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1c69  e832f8ffff           call 0x5c14a0
// 005c1c6e  0fb6c8               movzx ecx, al
// 005c1c71  85c9                 test ecx, ecx
// 005c1c73  7437                 je 0x5c1cac
// 005c1c75  8d55f0               lea edx, [ebp - 0x10]
// 005c1c78  52                   push edx
// 005c1c79  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1c7c  e8af27ffff           call 0x5b4430
// 005c1c81  50                   push eax
// 005c1c82  8d4d14               lea ecx, [ebp + 0x14]
// 005c1c85  e816f8ffff           call 0x5c14a0
// 005c1c8a  0fb6c0               movzx eax, al
// 005c1c8d  85c0                 test eax, eax
// 005c1c8f  741b                 je 0x5c1cac
// 005c1c91  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1c94  e8371f0000           call 0x5c3bd0
// 005c1c99  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1c9c  51                   push ecx
// 005c1c9d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1ca0  e85b27ffff           call 0x5b4400
// 005c1ca5  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1ca8  eb4f                 jmp 0x5c1cf9
// 005c1caa  eb4d                 jmp 0x5c1cf9
// 005c1cac  8d5514               lea edx, [ebp + 0x14]
// 005c1caf  52                   push edx
// 005c1cb0  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1cb3  e888e1ffff           call 0x5bfe40
// 005c1cb8  0fb6c0               movzx eax, al
// 005c1cbb  85c0                 test eax, eax
// 005c1cbd  7423                 je 0x5c1ce2
// 005c1cbf  6a00                 push 0
// 005c1cc1  8d4de8               lea ecx, [ebp - 0x18]
// 005c1cc4  51                   push ecx
// 005c1cc5  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1cc8  e8d3260000           call 0x5c43a0
// 005c1ccd  8b5004               mov edx, dword ptr [eax + 4]
// 005c1cd0  52                   push edx
// 005c1cd1  8b00                 mov eax, dword ptr [eax]
// 005c1cd3  50                   push eax
// 005c1cd4  8d4de0               lea ecx, [ebp - 0x20]
// 005c1cd7  51                   push ecx
// 005c1cd8  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1cdb  e820170000           call 0x5c3400
// 005c1ce0  ebca                 jmp 0x5c1cac
// 005c1ce2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c1ce5  52                   push edx
// 005c1ce6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c1ce9  50                   push eax
// 005c1cea  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1ced  51                   push ecx
// 005c1cee  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005c1cf1  e89abefeff           call 0x5adb90
// 005c1cf6  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1cf9  8be5                 mov esp, ebp
// 005c1cfb  5d                   pop ebp
// 005c1cfc  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp