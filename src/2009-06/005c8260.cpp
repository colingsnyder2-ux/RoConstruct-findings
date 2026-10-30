// roc 2009-06 005c8260  unit: seg_005c0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8260
//
// 005c8260  55                   push ebp
// 005c8261  8bec                 mov ebp, esp
// 005c8263  51                   push ecx
// 005c8264  33c0                 xor eax, eax
// 005c8266  8845ff               mov byte ptr [ebp - 1], al
// 005c8269  8d4d10               lea ecx, [ebp + 0x10]
// 005c826c  51                   push ecx
// 005c826d  8d5508               lea edx, [ebp + 8]
// 005c8270  52                   push edx
// 005c8271  e84a14ffff           call 0x5b96c0
// 005c8276  83c408               add esp, 8
// 005c8279  8845fe               mov byte ptr [ebp - 2], al
// 005c827c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c8280  50                   push eax
// 005c8281  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c8285  51                   push ecx
// 005c8286  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c8289  52                   push edx
// 005c828a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c828d  50                   push eax
// 005c828e  8d4d0c               lea ecx, [ebp + 0xc]
// 005c8291  51                   push ecx
// 005c8292  e85926ffff           call 0x5ba8f0
// 005c8297  83c404               add esp, 4
// 005c829a  50                   push eax
// 005c829b  8d5508               lea edx, [ebp + 8]
// 005c829e  52                   push edx
// 005c829f  e84c26ffff           call 0x5ba8f0
// 005c82a4  83c404               add esp, 4
// 005c82a7  50                   push eax
// 005c82a8  e883020000           call 0x5c8530
// 005c82ad  83c418               add esp, 0x18
// 005c82b0  8be5                 mov esp, ebp
// 005c82b2  5d                   pop ebp
// 005c82b3  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp