// roc 2009-06 005c8440  unit: seg_005c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8440
//
// 005c8440  55                   push ebp
// 005c8441  8bec                 mov ebp, esp
// 005c8443  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c8446  50                   push eax
// 005c8447  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c844a  51                   push ecx
// 005c844b  8b5508               mov edx, dword ptr [ebp + 8]
// 005c844e  52                   push edx
// 005c844f  e8dc030000           call 0x5c8830
// 005c8454  83c40c               add esp, 0xc
// 005c8457  5d                   pop ebp
// 005c8458  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAHIHV?$allocator@H@std@@@std@@YAXPAHIABHAAV?$allocator@H@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp