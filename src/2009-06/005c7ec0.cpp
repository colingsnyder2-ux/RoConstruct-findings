// roc 2009-06 005c7ec0  unit: seg_005c0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7ec0
//
// 005c7ec0  55                   push ebp
// 005c7ec1  8bec                 mov ebp, esp
// 005c7ec3  51                   push ecx
// 005c7ec4  33c0                 xor eax, eax
// 005c7ec6  8845ff               mov byte ptr [ebp - 1], al
// 005c7ec9  8d4d10               lea ecx, [ebp + 0x10]
// 005c7ecc  51                   push ecx
// 005c7ecd  e8ee17ffff           call 0x5b96c0
// 005c7ed2  83c404               add esp, 4
// 005c7ed5  8845fe               mov byte ptr [ebp - 2], al
// 005c7ed8  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c7edc  52                   push edx
// 005c7edd  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005c7ee1  50                   push eax
// 005c7ee2  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c7ee5  51                   push ecx
// 005c7ee6  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c7ee9  52                   push edx
// 005c7eea  8d450c               lea eax, [ebp + 0xc]
// 005c7eed  50                   push eax
// 005c7eee  e8fd29ffff           call 0x5ba8f0
// 005c7ef3  83c404               add esp, 4
// 005c7ef6  50                   push eax
// 005c7ef7  8d4d08               lea ecx, [ebp + 8]
// 005c7efa  51                   push ecx
// 005c7efb  e8f029ffff           call 0x5ba8f0
// 005c7f00  83c404               add esp, 4
// 005c7f03  50                   push eax
// 005c7f04  e897040000           call 0x5c83a0
// 005c7f09  83c418               add esp, 0x18
// 005c7f0c  8be5                 mov esp, ebp
// 005c7f0e  5d                   pop ebp
// 005c7f0f  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_uninitialized_move@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp