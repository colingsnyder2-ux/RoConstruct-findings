// roc 2009-06 005c8460  unit: seg_005c0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8460
//
// 005c8460  55                   push ebp
// 005c8461  8bec                 mov ebp, esp
// 005c8463  51                   push ecx
// 005c8464  33c0                 xor eax, eax
// 005c8466  8845ff               mov byte ptr [ebp - 1], al
// 005c8469  8d4d10               lea ecx, [ebp + 0x10]
// 005c846c  51                   push ecx
// 005c846d  e84e12ffff           call 0x5b96c0
// 005c8472  83c404               add esp, 4
// 005c8475  8845fe               mov byte ptr [ebp - 2], al
// 005c8478  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c847c  52                   push edx
// 005c847d  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005c8481  50                   push eax
// 005c8482  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c8485  51                   push ecx
// 005c8486  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c8489  52                   push edx
// 005c848a  8d450c               lea eax, [ebp + 0xc]
// 005c848d  50                   push eax
// 005c848e  e85d24ffff           call 0x5ba8f0
// 005c8493  83c404               add esp, 4
// 005c8496  50                   push eax
// 005c8497  8d4d08               lea ecx, [ebp + 8]
// 005c849a  51                   push ecx
// 005c849b  e85024ffff           call 0x5ba8f0
// 005c84a0  83c404               add esp, 4
// 005c84a3  50                   push eax
// 005c84a4  e8c7030000           call 0x5c8870
// 005c84a9  83c418               add esp, 0x18
// 005c84ac  8be5                 mov esp, ebp
// 005c84ae  5d                   pop ebp
// 005c84af  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_uninitialized_move@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp