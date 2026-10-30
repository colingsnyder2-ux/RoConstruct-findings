// roc 2009-06 005bc500  unit: seg_005b0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bc500
//
// 005bc500  55                   push ebp
// 005bc501  8bec                 mov ebp, esp
// 005bc503  51                   push ecx
// 005bc504  894dfc               mov dword ptr [ebp - 4], ecx
// 005bc507  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bc50a  83c108               add ecx, 8
// 005bc50d  e88e000000           call 0x5bc5a0
// 005bc512  8be5                 mov esp, ebp
// 005bc514  5d                   pop ebp
// 005bc515  c3                   ret 
// copied from an identical function in another client (function ?max_size@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBEIXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp