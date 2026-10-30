// roc 2009-06 005bbfd0  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bbfd0
//
// 005bbfd0  55                   push ebp
// 005bbfd1  8bec                 mov ebp, esp
// 005bbfd3  51                   push ecx
// 005bbfd4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bbfd7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bbfda  83c108               add ecx, 8
// 005bbfdd  e8fe020000           call 0x5bc2e0
// 005bbfe2  8be5                 mov esp, ebp
// 005bbfe4  5d                   pop ebp
// 005bbfe5  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp