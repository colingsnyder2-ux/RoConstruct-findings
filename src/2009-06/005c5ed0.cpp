// roc 2009-06 005c5ed0  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5ed0
//
// 005c5ed0  55                   push ebp
// 005c5ed1  8bec                 mov ebp, esp
// 005c5ed3  51                   push ecx
// 005c5ed4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c5ed7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c5eda  83c108               add ecx, 8
// 005c5edd  e8fe070000           call 0x5c66e0
// 005c5ee2  8be5                 mov esp, ebp
// 005c5ee4  5d                   pop ebp
// 005c5ee5  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp