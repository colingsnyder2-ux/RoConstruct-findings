// roc 2009-06 005bab20  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bab20
//
// 005bab20  55                   push ebp
// 005bab21  8bec                 mov ebp, esp
// 005bab23  51                   push ecx
// 005bab24  894dfc               mov dword ptr [ebp - 4], ecx
// 005bab27  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bab2a  83c108               add ecx, 8
// 005bab2d  e8fe11ffff           call 0x5abd30
// 005bab32  8be5                 mov esp, ebp
// 005bab34  5d                   pop ebp
// 005bab35  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp