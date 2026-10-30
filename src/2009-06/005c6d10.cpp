// roc 2009-06 005c6d10  unit: seg_005c0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6d10
//
// 005c6d10  55                   push ebp
// 005c6d11  8bec                 mov ebp, esp
// 005c6d13  51                   push ecx
// 005c6d14  894dfc               mov dword ptr [ebp - 4], ecx
// 005c6d17  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c6d1a  50                   push eax
// 005c6d1b  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c6d1e  51                   push ecx
// 005c6d1f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c6d22  e8c9e3ffff           call 0x5c50f0
// 005c6d27  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6d2a  8be5                 mov esp, ebp
// 005c6d2c  5d                   pop ebp
// 005c6d2d  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Make_iter@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp