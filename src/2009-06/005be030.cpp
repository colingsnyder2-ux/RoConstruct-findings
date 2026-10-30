// roc 2009-06 005be030  unit: RBX::AggregateChunk  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005be030
//
// 005be030  55                   push ebp
// 005be031  8bec                 mov ebp, esp
// 005be033  6a00                 push 0
// 005be035  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005be038  e8832bfaff           call 0x560bc0
// 005be03d  5d                   pop ebp
// 005be03e  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy@VFace@?$ConvexClipper@M@Wml@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp