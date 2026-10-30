// roc 2009-06 005ba730  unit: seg_005b0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba730
//
// 005ba730  55                   push ebp
// 005ba731  8bec                 mov ebp, esp
// 005ba733  8b4508               mov eax, dword ptr [ebp + 8]
// 005ba736  8b00                 mov eax, dword ptr [eax]
// 005ba738  5d                   pop ebp
// 005ba739  c3                   ret 
// copied from an identical function in another client (function ??$_Checked_base@PAVVertex@?$ConvexClipper@M@Wml@@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@AAPAV123@U_Unchanged_checked_iterator_base_type_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp