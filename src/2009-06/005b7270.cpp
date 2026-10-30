// roc 2009-06 005b7270  unit: seg_005b0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b7270
//
// 005b7270  55                   push ebp
// 005b7271  8bec                 mov ebp, esp
// 005b7273  8d4508               lea eax, [ebp + 8]
// 005b7276  50                   push eax
// 005b7277  8d4d10               lea ecx, [ebp + 0x10]
// 005b727a  e8e1160000           call 0x5b8960
// 005b727f  50                   push eax
// 005b7280  8d4d10               lea ecx, [ebp + 0x10]
// 005b7283  51                   push ecx
// 005b7284  e8b7410000           call 0x5bb440
// 005b7289  83c404               add esp, 4
// 005b728c  50                   push eax
// 005b728d  8d5508               lea edx, [ebp + 8]
// 005b7290  52                   push edx
// 005b7291  e8aa410000           call 0x5bb440
// 005b7296  83c404               add esp, 4
// 005b7299  50                   push eax
// 005b729a  e8b11d0000           call 0x5b9050
// 005b729f  83c40c               add esp, 0xc
// 005b72a2  5d                   pop ebp
// 005b72a3  c3                   ret 
// copied from an identical function in another client (function ??$sort@V?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@@std@@YAXV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@0@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp