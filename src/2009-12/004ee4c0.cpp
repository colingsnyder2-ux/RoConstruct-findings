// roc 2009-12 004ee4c0  unit: seg_004e0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ee4c0
//
// 004ee4c0  55                   push ebp
// 004ee4c1  8bec                 mov ebp, esp
// 004ee4c3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004ee4c6  50                   push eax
// 004ee4c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ee4ca  51                   push ecx
// 004ee4cb  e8f0000000           call 0x4ee5c0
// 004ee4d0  83c408               add esp, 8
// 004ee4d3  5d                   pop ebp
// 004ee4d4  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp