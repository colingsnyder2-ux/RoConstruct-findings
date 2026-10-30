// roc 2009-06 005c8700  unit: seg_005c0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8700
//
// 005c8700  55                   push ebp
// 005c8701  8bec                 mov ebp, esp
// 005c8703  51                   push ecx
// 005c8704  33c0                 xor eax, eax
// 005c8706  8845ff               mov byte ptr [ebp - 1], al
// 005c8709  8d4d10               lea ecx, [ebp + 0x10]
// 005c870c  51                   push ecx
// 005c870d  8d5508               lea edx, [ebp + 8]
// 005c8710  52                   push edx
// 005c8711  e8aa0fffff           call 0x5b96c0
// 005c8716  83c408               add esp, 8
// 005c8719  8845fe               mov byte ptr [ebp - 2], al
// 005c871c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c8720  50                   push eax
// 005c8721  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c8725  51                   push ecx
// 005c8726  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c8729  52                   push edx
// 005c872a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c872d  50                   push eax
// 005c872e  8d4d0c               lea ecx, [ebp + 0xc]
// 005c8731  51                   push ecx
// 005c8732  e8b921ffff           call 0x5ba8f0
// 005c8737  83c404               add esp, 4
// 005c873a  50                   push eax
// 005c873b  8d5508               lea edx, [ebp + 8]
// 005c873e  52                   push edx
// 005c873f  e8ac21ffff           call 0x5ba8f0
// 005c8744  83c404               add esp, 4
// 005c8747  50                   push eax
// 005c8748  e893010000           call 0x5c88e0
// 005c874d  83c418               add esp, 0x18
// 005c8750  8be5                 mov esp, ebp
// 005c8752  5d                   pop ebp
// 005c8753  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp