// roc 2009-06 005b60d0  unit: seg_005b0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b60d0
//
// 005b60d0  55                   push ebp
// 005b60d1  8bec                 mov ebp, esp
// 005b60d3  51                   push ecx
// 005b60d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b60d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b60da  50                   push eax
// 005b60db  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005b60de  51                   push ecx
// 005b60df  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b60e2  e8e9e0ffff           call 0x5b41d0
// 005b60e7  8b4508               mov eax, dword ptr [ebp + 8]
// 005b60ea  8be5                 mov esp, ebp
// 005b60ec  5d                   pop ebp
// 005b60ed  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Make_iter@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp