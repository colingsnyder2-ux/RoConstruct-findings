// roc 2010-06 004a1e50  unit: seg_004a0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a1e50
//
// 004a1e50  55                   push ebp
// 004a1e51  8bec                 mov ebp, esp
// 004a1e53  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004a1e56  50                   push eax
// 004a1e57  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a1e5a  51                   push ecx
// 004a1e5b  e820020000           call 0x4a2080
// 004a1e60  83c408               add esp, 8
// 004a1e63  5d                   pop ebp
// 004a1e64  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp