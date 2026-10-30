// roc 2009-06 005babd0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005babd0
//
// 005babd0  55                   push ebp
// 005babd1  8bec                 mov ebp, esp
// 005babd3  51                   push ecx
// 005babd4  894dfc               mov dword ptr [ebp - 4], ecx
// 005babd7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005babda  83c108               add ecx, 8
// 005babdd  e8ce170000           call 0x5bc3b0
// 005babe2  8be5                 mov esp, ebp
// 005babe4  5d                   pop ebp
// 005babe5  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp