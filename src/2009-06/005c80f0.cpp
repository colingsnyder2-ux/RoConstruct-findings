// roc 2009-06 005c80f0  unit: seg_005c0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c80f0
//
// 005c80f0  55                   push ebp
// 005c80f1  8bec                 mov ebp, esp
// 005c80f3  51                   push ecx
// 005c80f4  33c0                 xor eax, eax
// 005c80f6  8845ff               mov byte ptr [ebp - 1], al
// 005c80f9  8d4d08               lea ecx, [ebp + 8]
// 005c80fc  51                   push ecx
// 005c80fd  8d5508               lea edx, [ebp + 8]
// 005c8100  52                   push edx
// 005c8101  e8ba15ffff           call 0x5b96c0
// 005c8106  83c408               add esp, 8
// 005c8109  8845fe               mov byte ptr [ebp - 2], al
// 005c810c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c8110  50                   push eax
// 005c8111  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c8115  51                   push ecx
// 005c8116  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c8119  52                   push edx
// 005c811a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c811d  50                   push eax
// 005c811e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c8121  51                   push ecx
// 005c8122  8b5508               mov edx, dword ptr [ebp + 8]
// 005c8125  52                   push edx
// 005c8126  e815030000           call 0x5c8440
// 005c812b  83c418               add esp, 0x18
// 005c812e  8be5                 mov esp, ebp
// 005c8130  5d                   pop ebp
// 005c8131  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_fill_n@PAVVertex@?$ConvexClipper@M@Wml@@IV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAXPAVVertex@?$ConvexClipper@M@Wml@@IABV123@AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp