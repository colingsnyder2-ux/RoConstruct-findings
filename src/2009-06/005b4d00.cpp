// roc 2009-06 005b4d00  unit: seg_005b0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4d00
//
// 005b4d00  55                   push ebp
// 005b4d01  8bec                 mov ebp, esp
// 005b4d03  51                   push ecx
// 005b4d04  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4d07  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b4d0a  83c008               add eax, 8
// 005b4d0d  50                   push eax
// 005b4d0e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b4d11  51                   push ecx
// 005b4d12  8b5508               mov edx, dword ptr [ebp + 8]
// 005b4d15  52                   push edx
// 005b4d16  e8e5330000           call 0x5b8100
// 005b4d1b  83c40c               add esp, 0xc
// 005b4d1e  8be5                 mov esp, ebp
// 005b4d20  5d                   pop ebp
// 005b4d21  c20800               ret 8
// copied from an identical function in another client (function ?_Destroy@?$vector@VFace@?$ConvexClipper@M@Wml@@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@IAEXPAVFace@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp