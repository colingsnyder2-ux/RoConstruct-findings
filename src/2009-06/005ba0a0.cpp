// roc 2009-06 005ba0a0  unit: seg_005b0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba0a0
//
// 005ba0a0  55                   push ebp
// 005ba0a1  8bec                 mov ebp, esp
// 005ba0a3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ba0a6  e8851cffff           call 0x5abd30
// 005ba0ab  5d                   pop ebp
// 005ba0ac  c3                   ret 
// copied from an identical function in another client (function ??$_Checked_base@V?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@std@@U_Different_checked_iterator_base_type_tag@2@@std@@YAPAVEdgePlus@?$ConvexClipper@M@Wml@@AAV?$_Vector_iterator@VEdgePlus@?$ConvexClipper@M@Wml@@V?$allocator@VEdgePlus@?$ConvexClipper@M@Wml@@@std@@@0@U_Different_checked_iterator_base_type_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp