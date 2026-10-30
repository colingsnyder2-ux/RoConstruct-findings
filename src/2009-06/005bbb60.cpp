// roc 2009-06 005bbb60  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bbb60
//
// 005bbb60  55                   push ebp
// 005bbb61  8bec                 mov ebp, esp
// 005bbb63  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005bbb66  50                   push eax
// 005bbb67  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bbb6a  51                   push ecx
// 005bbb6b  e8b00d0000           call 0x5bc920
// 005bbb70  83c408               add esp, 8
// 005bbb73  5d                   pop ebp
// 005bbb74  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp