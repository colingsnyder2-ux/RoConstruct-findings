// roc 2009-06 005bc2e0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bc2e0
//
// 005bc2e0  55                   push ebp
// 005bc2e1  8bec                 mov ebp, esp
// 005bc2e3  51                   push ecx
// 005bc2e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bc2e7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bc2ea  83c108               add ecx, 8
// 005bc2ed  e8de000000           call 0x5bc3d0
// 005bc2f2  8be5                 mov esp, ebp
// 005bc2f4  5d                   pop ebp
// 005bc2f5  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp