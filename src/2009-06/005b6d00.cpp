// roc 2009-06 005b6d00  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6d00
//
// 005b6d00  55                   push ebp
// 005b6d01  8bec                 mov ebp, esp
// 005b6d03  83ec18               sub esp, 0x18
// 005b6d06  894de8               mov dword ptr [ebp - 0x18], ecx
// 005b6d09  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b6d0c  50                   push eax
// 005b6d0d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b6d10  51                   push ecx
// 005b6d11  8d55f8               lea edx, [ebp - 8]
// 005b6d14  52                   push edx
// 005b6d15  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b6d18  e8b3f3ffff           call 0x5b60d0
// 005b6d1d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005b6d20  50                   push eax
// 005b6d21  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005b6d24  51                   push ecx
// 005b6d25  8d55f0               lea edx, [ebp - 0x10]
// 005b6d28  52                   push edx
// 005b6d29  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b6d2c  e89ff3ffff           call 0x5b60d0
// 005b6d31  8d45f0               lea eax, [ebp - 0x10]
// 005b6d34  50                   push eax
// 005b6d35  8d4df8               lea ecx, [ebp - 8]
// 005b6d38  e883010000           call 0x5b6ec0
// 005b6d3d  0fb6c8               movzx ecx, al
// 005b6d40  85c9                 test ecx, ecx
// 005b6d42  7436                 je 0x5b6d7a
// 005b6d44  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b6d47  52                   push edx
// 005b6d48  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b6d4b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005b6d4e  51                   push ecx
// 005b6d4f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005b6d52  52                   push edx
// 005b6d53  e8a8ef0000           call 0x5c5d00
// 005b6d58  83c40c               add esp, 0xc
// 005b6d5b  8945ec               mov dword ptr [ebp - 0x14], eax
// 005b6d5e  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b6d61  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005b6d64  51                   push ecx
// 005b6d65  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005b6d68  52                   push edx
// 005b6d69  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b6d6c  e83fda0000           call 0x5c47b0
// 005b6d71  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b6d74  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005b6d77  894810               mov dword ptr [eax + 0x10], ecx
// 005b6d7a  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6d7d  8b45f8               mov eax, dword ptr [ebp - 8]
// 005b6d80  8902                 mov dword ptr [edx], eax
// 005b6d82  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6d85  894a04               mov dword ptr [edx + 4], ecx
// 005b6d88  8b4508               mov eax, dword ptr [ebp + 8]
// 005b6d8b  8be5                 mov esp, ebp
// 005b6d8d  5d                   pop ebp
// 005b6d8e  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp