// roc 2009-06 005c5bd0  unit: seg_005c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5bd0
//
// 005c5bd0  55                   push ebp
// 005c5bd1  8bec                 mov ebp, esp
// 005c5bd3  51                   push ecx
// 005c5bd4  8d450c               lea eax, [ebp + 0xc]
// 005c5bd7  50                   push eax
// 005c5bd8  8d4d08               lea ecx, [ebp + 8]
// 005c5bdb  51                   push ecx
// 005c5bdc  e8df3affff           call 0x5b96c0
// 005c5be1  83c408               add esp, 8
// 005c5be4  8845ff               mov byte ptr [ebp - 1], al
// 005c5be7  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c5beb  52                   push edx
// 005c5bec  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c5bef  50                   push eax
// 005c5bf0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c5bf3  51                   push ecx
// 005c5bf4  8b5508               mov edx, dword ptr [ebp + 8]
// 005c5bf7  52                   push edx
// 005c5bf8  e893230000           call 0x5c7f90
// 005c5bfd  83c410               add esp, 0x10
// 005c5c00  8be5                 mov esp, ebp
// 005c5c02  5d                   pop ebp
// 005c5c03  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy_range@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@0AAV?$allocator@VFace@?$ConvexClipper@M@Wml@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp