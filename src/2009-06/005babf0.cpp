// roc 2009-06 005babf0  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005babf0
//
// 005babf0  55                   push ebp
// 005babf1  8bec                 mov ebp, esp
// 005babf3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005babf6  50                   push eax
// 005babf7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005babfa  51                   push ecx
// 005babfb  e820faffff           call 0x5ba620
// 005bac00  83c408               add esp, 8
// 005bac03  5d                   pop ebp
// 005bac04  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp