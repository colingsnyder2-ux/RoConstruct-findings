// roc 2009-06 005bb1c0  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb1c0
//
// 005bb1c0  55                   push ebp
// 005bb1c1  8bec                 mov ebp, esp
// 005bb1c3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005bb1c6  50                   push eax
// 005bb1c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bb1ca  51                   push ecx
// 005bb1cb  e8b0050000           call 0x5bb780
// 005bb1d0  83c408               add esp, 8
// 005bb1d3  5d                   pop ebp
// 005bb1d4  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp