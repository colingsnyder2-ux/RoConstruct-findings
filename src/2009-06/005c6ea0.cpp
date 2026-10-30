// roc 2009-06 005c6ea0  unit: seg_005c0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6ea0
//
// 005c6ea0  55                   push ebp
// 005c6ea1  8bec                 mov ebp, esp
// 005c6ea3  51                   push ecx
// 005c6ea4  894dfc               mov dword ptr [ebp - 4], ecx
// 005c6ea7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c6eaa  83c008               add eax, 8
// 005c6ead  50                   push eax
// 005c6eae  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c6eb1  51                   push ecx
// 005c6eb2  8b5508               mov edx, dword ptr [ebp + 8]
// 005c6eb5  52                   push edx
// 005c6eb6  e895120000           call 0x5c8150
// 005c6ebb  83c40c               add esp, 0xc
// 005c6ebe  8be5                 mov esp, ebp
// 005c6ec0  5d                   pop ebp
// 005c6ec1  c20800               ret 8
// copied from an identical function in another client (function ?_Destroy@?$vector@VFace@?$ConvexClipper@M@Wml@@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@IAEXPAVFace@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp