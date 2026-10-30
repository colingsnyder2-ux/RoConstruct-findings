// roc 2009-06 005baf60  unit: seg_005b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005baf60
//
// 005baf60  55                   push ebp
// 005baf61  8bec                 mov ebp, esp
// 005baf63  33c0                 xor eax, eax
// 005baf65  5d                   pop ebp
// 005baf66  c3                   ret 
// copied from an identical function in another client (function ??$_Dist_type@PAVEdgePlus@?$ConvexClipper@M@Wml@@@std@@YAPAHPAVEdgePlus@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp