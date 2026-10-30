// roc 2009-06 005bde70  unit: RBX::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bde70
//
// 005bde70  55                   push ebp
// 005bde71  8bec                 mov ebp, esp
// 005bde73  51                   push ecx
// 005bde74  894dfc               mov dword ptr [ebp - 4], ecx
// 005bde77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bde7a  83c008               add eax, 8
// 005bde7d  50                   push eax
// 005bde7e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bde81  51                   push ecx
// 005bde82  8b5508               mov edx, dword ptr [ebp + 8]
// 005bde85  52                   push edx
// 005bde86  e885000000           call 0x5bdf10
// 005bde8b  83c40c               add esp, 0xc
// 005bde8e  8be5                 mov esp, ebp
// 005bde90  5d                   pop ebp
// 005bde91  c20800               ret 8
// copied from an identical function in another client (function ?_Destroy@?$vector@VFace@?$ConvexClipper@M@Wml@@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@IAEXPAVFace@?$ConvexClipper@M@Wml@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp