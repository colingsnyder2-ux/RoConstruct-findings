// roc 2009-06 005ba420  unit: seg_005b0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba420
//
// 005ba420  55                   push ebp
// 005ba421  8bec                 mov ebp, esp
// 005ba423  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ba426  50                   push eax
// 005ba427  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ba42a  51                   push ecx
// 005ba42b  e8000d0000           call 0x5bb130
// 005ba430  83c408               add esp, 8
// 005ba433  5d                   pop ebp
// 005ba434  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp