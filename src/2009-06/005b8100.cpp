// roc 2009-06 005b8100  unit: seg_005b0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8100
//
// 005b8100  55                   push ebp
// 005b8101  8bec                 mov ebp, esp
// 005b8103  51                   push ecx
// 005b8104  8d450c               lea eax, [ebp + 0xc]
// 005b8107  50                   push eax
// 005b8108  8d4d08               lea ecx, [ebp + 8]
// 005b810b  51                   push ecx
// 005b810c  e8af150000           call 0x5b96c0
// 005b8111  83c408               add esp, 8
// 005b8114  8845ff               mov byte ptr [ebp - 1], al
// 005b8117  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005b811b  52                   push edx
// 005b811c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b811f  50                   push eax
// 005b8120  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b8123  51                   push ecx
// 005b8124  8b5508               mov edx, dword ptr [ebp + 8]
// 005b8127  52                   push edx
// 005b8128  e803160000           call 0x5b9730
// 005b812d  83c410               add esp, 0x10
// 005b8130  8be5                 mov esp, ebp
// 005b8132  5d                   pop ebp
// 005b8133  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy_range@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@0AAV?$allocator@VFace@?$ConvexClipper@M@Wml@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp