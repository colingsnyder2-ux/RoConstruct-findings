// roc 2009-06 005ba3a0  unit: seg_005b0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba3a0
//
// 005ba3a0  55                   push ebp
// 005ba3a1  8bec                 mov ebp, esp
// 005ba3a3  8d450c               lea eax, [ebp + 0xc]
// 005ba3a6  50                   push eax
// 005ba3a7  e844050000           call 0x5ba8f0
// 005ba3ac  83c404               add esp, 4
// 005ba3af  50                   push eax
// 005ba3b0  8d4d08               lea ecx, [ebp + 8]
// 005ba3b3  51                   push ecx
// 005ba3b4  e837050000           call 0x5ba8f0
// 005ba3b9  83c404               add esp, 4
// 005ba3bc  50                   push eax
// 005ba3bd  e82e0c0000           call 0x5baff0
// 005ba3c2  83c408               add esp, 8
// 005ba3c5  5d                   pop ebp
// 005ba3c6  c3                   ret 
// copied from an identical function in another client (function ??$sort_heap@PAVEdgePlus@?$ConvexClipper@M@Wml@@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp