// roc 2009-06 005bb3a0  unit: seg_005b0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb3a0
//
// 005bb3a0  55                   push ebp
// 005bb3a1  8bec                 mov ebp, esp
// 005bb3a3  51                   push ecx
// 005bb3a4  33c0                 xor eax, eax
// 005bb3a6  8845ff               mov byte ptr [ebp - 1], al
// 005bb3a9  8d4d10               lea ecx, [ebp + 0x10]
// 005bb3ac  51                   push ecx
// 005bb3ad  8d5508               lea edx, [ebp + 8]
// 005bb3b0  52                   push edx
// 005bb3b1  e80ae3ffff           call 0x5b96c0
// 005bb3b6  83c408               add esp, 8
// 005bb3b9  8845fe               mov byte ptr [ebp - 2], al
// 005bb3bc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005bb3c0  50                   push eax
// 005bb3c1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005bb3c5  51                   push ecx
// 005bb3c6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005bb3c9  52                   push edx
// 005bb3ca  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005bb3cd  50                   push eax
// 005bb3ce  8d4d0c               lea ecx, [ebp + 0xc]
// 005bb3d1  51                   push ecx
// 005bb3d2  e819f5ffff           call 0x5ba8f0
// 005bb3d7  83c404               add esp, 4
// 005bb3da  50                   push eax
// 005bb3db  8d5508               lea edx, [ebp + 8]
// 005bb3de  52                   push edx
// 005bb3df  e80cf5ffff           call 0x5ba8f0
// 005bb3e4  83c404               add esp, 4
// 005bb3e7  50                   push eax
// 005bb3e8  e893070000           call 0x5bbb80
// 005bb3ed  83c418               add esp, 0x18
// 005bb3f0  8be5                 mov esp, ebp
// 005bb3f2  5d                   pop ebp
// 005bb3f3  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp