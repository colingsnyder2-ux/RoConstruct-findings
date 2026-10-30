// roc 2009-06 005c47b0  unit: seg_005c0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c47b0
//
// 005c47b0  55                   push ebp
// 005c47b1  8bec                 mov ebp, esp
// 005c47b3  51                   push ecx
// 005c47b4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c47b7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c47ba  83c008               add eax, 8
// 005c47bd  50                   push eax
// 005c47be  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c47c1  51                   push ecx
// 005c47c2  8b5508               mov edx, dword ptr [ebp + 8]
// 005c47c5  52                   push edx
// 005c47c6  e805140000           call 0x5c5bd0
// 005c47cb  83c40c               add esp, 0xc
// 005c47ce  8be5                 mov esp, ebp
// 005c47d0  5d                   pop ebp
// 005c47d1  c20800               ret 8
// copied from an identical function in another client (function ?_Destroy@?$vector@VFace@?$ConvexClipper@M@Wml@@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@IAEXPAVFace@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp