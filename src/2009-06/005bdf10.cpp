// roc 2009-06 005bdf10  unit: RBX::AggregateChunk  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdf10
//
// 005bdf10  55                   push ebp
// 005bdf11  8bec                 mov ebp, esp
// 005bdf13  51                   push ecx
// 005bdf14  8d450c               lea eax, [ebp + 0xc]
// 005bdf17  50                   push eax
// 005bdf18  8d4d08               lea ecx, [ebp + 8]
// 005bdf1b  51                   push ecx
// 005bdf1c  e89fb7ffff           call 0x5b96c0
// 005bdf21  83c408               add esp, 8
// 005bdf24  8845ff               mov byte ptr [ebp - 1], al
// 005bdf27  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005bdf2b  52                   push edx
// 005bdf2c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005bdf2f  50                   push eax
// 005bdf30  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bdf33  51                   push ecx
// 005bdf34  8b5508               mov edx, dword ptr [ebp + 8]
// 005bdf37  52                   push edx
// 005bdf38  e8a3000000           call 0x5bdfe0
// 005bdf3d  83c410               add esp, 0x10
// 005bdf40  8be5                 mov esp, ebp
// 005bdf42  5d                   pop ebp
// 005bdf43  c3                   ret 
// copied from an identical function in another client (function ??$_Destroy_range@V?$allocator@VFace@?$ConvexClipper@M@Wml@@@std@@@std@@YAXPAVFace@?$ConvexClipper@M@Wml@@0AAV?$allocator@VFace@?$ConvexClipper@M@Wml@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp