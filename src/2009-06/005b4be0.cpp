// roc 2009-06 005b4be0  unit: seg_005b0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4be0
//
// 005b4be0  55                   push ebp
// 005b4be1  8bec                 mov ebp, esp
// 005b4be3  83ec18               sub esp, 0x18
// 005b4be6  894de8               mov dword ptr [ebp - 0x18], ecx
// 005b4be9  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b4bec  50                   push eax
// 005b4bed  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b4bf0  51                   push ecx
// 005b4bf1  8d55f8               lea edx, [ebp - 8]
// 005b4bf4  52                   push edx
// 005b4bf5  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b4bf8  e8d3140000           call 0x5b60d0
// 005b4bfd  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005b4c00  50                   push eax
// 005b4c01  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005b4c04  51                   push ecx
// 005b4c05  8d55f0               lea edx, [ebp - 0x10]
// 005b4c08  52                   push edx
// 005b4c09  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b4c0c  e8bf140000           call 0x5b60d0
// 005b4c11  8d45f0               lea eax, [ebp - 0x10]
// 005b4c14  50                   push eax
// 005b4c15  8d4df8               lea ecx, [ebp - 8]
// 005b4c18  e8a3220000           call 0x5b6ec0
// 005b4c1d  0fb6c8               movzx ecx, al
// 005b4c20  85c9                 test ecx, ecx
// 005b4c22  7436                 je 0x5b4c5a
// 005b4c24  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4c27  52                   push edx
// 005b4c28  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b4c2b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005b4c2e  51                   push ecx
// 005b4c2f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005b4c32  52                   push edx
// 005b4c33  e858340000           call 0x5b8090
// 005b4c38  83c40c               add esp, 0xc
// 005b4c3b  8945ec               mov dword ptr [ebp - 0x14], eax
// 005b4c3e  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b4c41  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005b4c44  51                   push ecx
// 005b4c45  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005b4c48  52                   push edx
// 005b4c49  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005b4c4c  e8af000000           call 0x5b4d00
// 005b4c51  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005b4c54  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005b4c57  894810               mov dword ptr [eax + 0x10], ecx
// 005b4c5a  8b5508               mov edx, dword ptr [ebp + 8]
// 005b4c5d  8b45f8               mov eax, dword ptr [ebp - 8]
// 005b4c60  8902                 mov dword ptr [edx], eax
// 005b4c62  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4c65  894a04               mov dword ptr [edx + 4], ecx
// 005b4c68  8b4508               mov eax, dword ptr [ebp + 8]
// 005b4c6b  8be5                 mov esp, ebp
// 005b4c6d  5d                   pop ebp
// 005b4c6e  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp