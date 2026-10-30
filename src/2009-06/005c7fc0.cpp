// roc 2009-06 005c7fc0  unit: seg_005c0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7fc0
//
// 005c7fc0  55                   push ebp
// 005c7fc1  8bec                 mov ebp, esp
// 005c7fc3  51                   push ecx
// 005c7fc4  33c0                 xor eax, eax
// 005c7fc6  8845ff               mov byte ptr [ebp - 1], al
// 005c7fc9  8d4d10               lea ecx, [ebp + 0x10]
// 005c7fcc  51                   push ecx
// 005c7fcd  e8ee16ffff           call 0x5b96c0
// 005c7fd2  83c404               add esp, 4
// 005c7fd5  8845fe               mov byte ptr [ebp - 2], al
// 005c7fd8  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c7fdc  52                   push edx
// 005c7fdd  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005c7fe1  50                   push eax
// 005c7fe2  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c7fe5  51                   push ecx
// 005c7fe6  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c7fe9  52                   push edx
// 005c7fea  8d450c               lea eax, [ebp + 0xc]
// 005c7fed  50                   push eax
// 005c7fee  e8fd28ffff           call 0x5ba8f0
// 005c7ff3  83c404               add esp, 4
// 005c7ff6  50                   push eax
// 005c7ff7  8d4d08               lea ecx, [ebp + 8]
// 005c7ffa  51                   push ecx
// 005c7ffb  e8f028ffff           call 0x5ba8f0
// 005c8000  83c404               add esp, 4
// 005c8003  50                   push eax
// 005c8004  e817040000           call 0x5c8420
// 005c8009  83c418               add esp, 0x18
// 005c800c  8be5                 mov esp, ebp
// 005c800e  5d                   pop ebp
// 005c800f  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_uninitialized_move@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp