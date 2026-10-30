// roc 2009-06 005b8300  unit: seg_005b0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8300
//
// 005b8300  55                   push ebp
// 005b8301  8bec                 mov ebp, esp
// 005b8303  6a00                 push 0
// 005b8305  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b8308  e843030000           call 0x5b8650
// 005b830d  5d                   pop ebp
// 005b830e  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy@VFace@?$ConvexClipper@M@Wml@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp