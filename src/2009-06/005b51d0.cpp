// roc 2009-06 005b51d0  unit: seg_005b0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b51d0
//
// 005b51d0  55                   push ebp
// 005b51d1  8bec                 mov ebp, esp
// 005b51d3  83ec0c               sub esp, 0xc
// 005b51d6  894df4               mov dword ptr [ebp - 0xc], ecx
// 005b51d9  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005b51dc  8b08                 mov ecx, dword ptr [eax]
// 005b51de  8b5004               mov edx, dword ptr [eax + 4]
// 005b51e1  894df8               mov dword ptr [ebp - 8], ecx
// 005b51e4  8955fc               mov dword ptr [ebp - 4], edx
// 005b51e7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b51ea  50                   push eax
// 005b51eb  8d4df8               lea ecx, [ebp - 8]
// 005b51ee  e8ad0f0000           call 0x5b61a0
// 005b51f3  8b08                 mov ecx, dword ptr [eax]
// 005b51f5  8b5004               mov edx, dword ptr [eax + 4]
// 005b51f8  8b4508               mov eax, dword ptr [ebp + 8]
// 005b51fb  8908                 mov dword ptr [eax], ecx
// 005b51fd  895004               mov dword ptr [eax + 4], edx
// 005b5200  8b4508               mov eax, dword ptr [ebp + 8]
// 005b5203  8be5                 mov esp, ebp
// 005b5205  5d                   pop ebp
// 005b5206  c20800               ret 8
// copied from an identical function in another client (function ??H?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBE?AV01@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp