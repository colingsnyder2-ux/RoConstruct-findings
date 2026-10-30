// roc 2009-06 005ba3d0  unit: seg_005b0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba3d0
//
// 005ba3d0  55                   push ebp
// 005ba3d1  8bec                 mov ebp, esp
// 005ba3d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005ba3d6  50                   push eax
// 005ba3d7  e8840b0000           call 0x5baf60
// 005ba3dc  83c404               add esp, 4
// 005ba3df  50                   push eax
// 005ba3e0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ba3e3  51                   push ecx
// 005ba3e4  8b5508               mov edx, dword ptr [ebp + 8]
// 005ba3e7  52                   push edx
// 005ba3e8  e8430c0000           call 0x5bb030
// 005ba3ed  83c40c               add esp, 0xc
// 005ba3f0  5d                   pop ebp
// 005ba3f1  c3                   ret 
// copied from an identical function in another client (function ??$_Insertion_sort@PAVEdgePlus@?$ConvexClipper@M@Wml@@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp