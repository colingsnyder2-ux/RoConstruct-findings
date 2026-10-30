// roc 2011-06 00589f40  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00589f40
//
// 00589f40  55                   push ebp
// 00589f41  8bec                 mov ebp, esp
// 00589f43  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00589f46  50                   push eax
// 00589f47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00589f4a  51                   push ecx
// 00589f4b  e880000000           call 0x589fd0
// 00589f50  83c408               add esp, 8
// 00589f53  5d                   pop ebp
// 00589f54  c3                   ret 
// copied from an identical function in another client (function ??$iter_swap@PAVEdgePlus@?$ConvexClipper@M@Wml@@PAV123@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@0@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp