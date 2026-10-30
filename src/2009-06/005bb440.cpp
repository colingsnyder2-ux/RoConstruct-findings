// roc 2009-06 005bb440  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb440
//
// 005bb440  55                   push ebp
// 005bb441  8bec                 mov ebp, esp
// 005bb443  51                   push ecx
// 005bb444  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005bb448  50                   push eax
// 005bb449  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bb44c  51                   push ecx
// 005bb44d  e84eecffff           call 0x5ba0a0
// 005bb452  83c408               add esp, 8
// 005bb455  8be5                 mov esp, ebp
// 005bb457  5d                   pop ebp
// 005bb458  c3                   ret 
// copied from an identical function in another client (function ??$_Checked_base@V?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@@std@@YAPAVEdgePlus@?$ConvexClipper@M@Wml@@AAV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp