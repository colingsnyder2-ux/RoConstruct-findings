// roc 2009-06 005c01c0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c01c0
//
// 005c01c0  55                   push ebp
// 005c01c1  8bec                 mov ebp, esp
// 005c01c3  83ec18               sub esp, 0x18
// 005c01c6  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c01c9  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c01cc  50                   push eax
// 005c01cd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c01d0  51                   push ecx
// 005c01d1  8d55f8               lea edx, [ebp - 8]
// 005c01d4  52                   push edx
// 005c01d5  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c01d8  e8334f0000           call 0x5c5110
// 005c01dd  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005c01e0  50                   push eax
// 005c01e1  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c01e4  51                   push ecx
// 005c01e5  8d55f0               lea edx, [ebp - 0x10]
// 005c01e8  52                   push edx
// 005c01e9  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c01ec  e81f4f0000           call 0x5c5110
// 005c01f1  8d45f0               lea eax, [ebp - 0x10]
// 005c01f4  50                   push eax
// 005c01f5  8d4df8               lea ecx, [ebp - 8]
// 005c01f8  e843fcffff           call 0x5bfe40
// 005c01fd  0fb6c8               movzx ecx, al
// 005c0200  85c9                 test ecx, ecx
// 005c0202  7436                 je 0x5c023a
// 005c0204  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c0207  52                   push edx
// 005c0208  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c020b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c020e  51                   push ecx
// 005c020f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c0212  52                   push edx
// 005c0213  e8d8570000           call 0x5c59f0
// 005c0218  83c40c               add esp, 0xc
// 005c021b  8945ec               mov dword ptr [ebp - 0x14], eax
// 005c021e  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c0221  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c0224  51                   push ecx
// 005c0225  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005c0228  52                   push edx
// 005c0229  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c022c  e83fdcffff           call 0x5bde70
// 005c0231  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c0234  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005c0237  894810               mov dword ptr [eax + 0x10], ecx
// 005c023a  8b5508               mov edx, dword ptr [ebp + 8]
// 005c023d  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c0240  8902                 mov dword ptr [edx], eax
// 005c0242  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c0245  894a04               mov dword ptr [edx + 4], ecx
// 005c0248  8b4508               mov eax, dword ptr [ebp + 8]
// 005c024b  8be5                 mov esp, ebp
// 005c024d  5d                   pop ebp
// 005c024e  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp