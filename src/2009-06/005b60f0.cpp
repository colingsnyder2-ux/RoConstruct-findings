// roc 2009-06 005b60f0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b60f0
//
// 005b60f0  55                   push ebp
// 005b60f1  8bec                 mov ebp, esp
// 005b60f3  51                   push ecx
// 005b60f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005b60f7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b60fa  83c108               add ecx, 8
// 005b60fd  e83e080000           call 0x5b6940
// 005b6102  8be5                 mov esp, ebp
// 005b6104  5d                   pop ebp
// 005b6105  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp