// roc 2009-06 005c5da0  unit: seg_005c0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5da0
//
// 005c5da0  55                   push ebp
// 005c5da1  8bec                 mov ebp, esp
// 005c5da3  51                   push ecx
// 005c5da4  33c0                 xor eax, eax
// 005c5da6  8845ff               mov byte ptr [ebp - 1], al
// 005c5da9  8d4d08               lea ecx, [ebp + 8]
// 005c5dac  51                   push ecx
// 005c5dad  8d5508               lea edx, [ebp + 8]
// 005c5db0  52                   push edx
// 005c5db1  e80a39ffff           call 0x5b96c0
// 005c5db6  83c408               add esp, 8
// 005c5db9  8845fe               mov byte ptr [ebp - 2], al
// 005c5dbc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c5dc0  50                   push eax
// 005c5dc1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c5dc5  51                   push ecx
// 005c5dc6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c5dc9  52                   push edx
// 005c5dca  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c5dcd  50                   push eax
// 005c5dce  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c5dd1  51                   push ecx
// 005c5dd2  8b5508               mov edx, dword ptr [ebp + 8]
// 005c5dd5  52                   push edx
// 005c5dd6  e865220000           call 0x5c8040
// 005c5ddb  83c418               add esp, 0x18
// 005c5dde  8be5                 mov esp, ebp
// 005c5de0  5d                   pop ebp
// 005c5de1  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_fill_n@PAVVertex@?$ConvexClipper@M@Wml@@IV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAXPAVVertex@?$ConvexClipper@M@Wml@@IABV123@AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp