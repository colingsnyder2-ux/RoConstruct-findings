// roc 2009-06 005baf40  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005baf40
//
// 005baf40  55                   push ebp
// 005baf41  8bec                 mov ebp, esp
// 005baf43  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005baf46  50                   push eax
// 005baf47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005baf4a  51                   push ecx
// 005baf4b  e8d0050000           call 0x5bb520
// 005baf50  83c408               add esp, 8
// 005baf53  5d                   pop ebp
// 005baf54  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp