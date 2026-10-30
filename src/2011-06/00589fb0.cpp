// roc 2011-06 00589fb0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00589fb0
//
// 00589fb0  55                   push ebp
// 00589fb1  8bec                 mov ebp, esp
// 00589fb3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00589fb6  50                   push eax
// 00589fb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00589fba  51                   push ecx
// 00589fbb  e820020000           call 0x58a1e0
// 00589fc0  83c408               add esp, 8
// 00589fc3  5d                   pop ebp
// 00589fc4  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp