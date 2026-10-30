// roc 2009-06 005c8790  unit: seg_005c0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8790
//
// 005c8790  55                   push ebp
// 005c8791  8bec                 mov ebp, esp
// 005c8793  51                   push ecx
// 005c8794  33c0                 xor eax, eax
// 005c8796  8845ff               mov byte ptr [ebp - 1], al
// 005c8799  8d4d10               lea ecx, [ebp + 0x10]
// 005c879c  51                   push ecx
// 005c879d  8d5508               lea edx, [ebp + 8]
// 005c87a0  52                   push edx
// 005c87a1  e81a0fffff           call 0x5b96c0
// 005c87a6  83c408               add esp, 8
// 005c87a9  8845fe               mov byte ptr [ebp - 2], al
// 005c87ac  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c87b0  50                   push eax
// 005c87b1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c87b5  51                   push ecx
// 005c87b6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c87b9  52                   push edx
// 005c87ba  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c87bd  50                   push eax
// 005c87be  8d4d0c               lea ecx, [ebp + 0xc]
// 005c87c1  51                   push ecx
// 005c87c2  e82921ffff           call 0x5ba8f0
// 005c87c7  83c404               add esp, 4
// 005c87ca  50                   push eax
// 005c87cb  8d5508               lea edx, [ebp + 8]
// 005c87ce  52                   push edx
// 005c87cf  e81c21ffff           call 0x5ba8f0
// 005c87d4  83c404               add esp, 4
// 005c87d7  50                   push eax
// 005c87d8  e8b3010000           call 0x5c8990
// 005c87dd  83c418               add esp, 0x18
// 005c87e0  8be5                 mov esp, ebp
// 005c87e2  5d                   pop ebp
// 005c87e3  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp