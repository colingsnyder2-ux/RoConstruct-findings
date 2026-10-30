// roc 2009-06 005c5c60  unit: seg_005c0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5c60
//
// 005c5c60  55                   push ebp
// 005c5c61  8bec                 mov ebp, esp
// 005c5c63  6a00                 push 0
// 005c5c65  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c5c68  e8d3010000           call 0x5c5e40
// 005c5c6d  5d                   pop ebp
// 005c5c6e  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy@VFace@?$ConvexClipper@M@Wml@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp