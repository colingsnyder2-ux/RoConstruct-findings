// roc 2009-06 005c8150  unit: seg_005c0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8150
//
// 005c8150  55                   push ebp
// 005c8151  8bec                 mov ebp, esp
// 005c8153  51                   push ecx
// 005c8154  8d450c               lea eax, [ebp + 0xc]
// 005c8157  50                   push eax
// 005c8158  8d4d08               lea ecx, [ebp + 8]
// 005c815b  51                   push ecx
// 005c815c  e85f15ffff           call 0x5b96c0
// 005c8161  83c408               add esp, 8
// 005c8164  8845ff               mov byte ptr [ebp - 1], al
// 005c8167  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c816b  52                   push edx
// 005c816c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c816f  50                   push eax
// 005c8170  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c8173  51                   push ecx
// 005c8174  8b5508               mov edx, dword ptr [ebp + 8]
// 005c8177  52                   push edx
// 005c8178  e823d2feff           call 0x5b53a0
// 005c817d  83c410               add esp, 0x10
// 005c8180  8be5                 mov esp, ebp
// 005c8182  5d                   pop ebp
// 005c8183  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy_range@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@0AAV?$allocator@VFace@?$ConvexClipper@M@Wml@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp