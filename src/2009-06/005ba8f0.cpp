// roc 2009-06 005ba8f0  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba8f0
//
// 005ba8f0  55                   push ebp
// 005ba8f1  8bec                 mov ebp, esp
// 005ba8f3  51                   push ecx
// 005ba8f4  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005ba8f8  50                   push eax
// 005ba8f9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ba8fc  51                   push ecx
// 005ba8fd  e82efeffff           call 0x5ba730
// 005ba902  83c408               add esp, 8
// 005ba905  8be5                 mov esp, ebp
// 005ba907  5d                   pop ebp
// 005ba908  c3                   ret 
// copied from an identical function in another client (function ??$_Checked_base@V?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@@std@@YAPAVEdgePlus@?$ConvexClipper@M@Wml@@AAV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp