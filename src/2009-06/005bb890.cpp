// roc 2009-06 005bb890  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb890
//
// 005bb890  55                   push ebp
// 005bb891  8bec                 mov ebp, esp
// 005bb893  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005bb896  50                   push eax
// 005bb897  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bb89a  51                   push ecx
// 005bb89b  e820100000           call 0x5bc8c0
// 005bb8a0  83c408               add esp, 8
// 005bb8a3  5d                   pop ebp
// 005bb8a4  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp