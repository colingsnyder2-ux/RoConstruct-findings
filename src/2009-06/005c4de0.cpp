// roc 2009-06 005c4de0  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4de0
//
// 005c4de0  55                   push ebp
// 005c4de1  8bec                 mov ebp, esp
// 005c4de3  51                   push ecx
// 005c4de4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c4de7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c4dea  83c108               add ecx, 8
// 005c4ded  e85ef5ffff           call 0x5c4350
// 005c4df2  8be5                 mov esp, ebp
// 005c4df4  5d                   pop ebp
// 005c4df5  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp