// roc 2009-06 005c5b50  unit: seg_005c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5b50
//
// 005c5b50  55                   push ebp
// 005c5b51  8bec                 mov ebp, esp
// 005c5b53  51                   push ecx
// 005c5b54  33c0                 xor eax, eax
// 005c5b56  8845ff               mov byte ptr [ebp - 1], al
// 005c5b59  8d4d10               lea ecx, [ebp + 0x10]
// 005c5b5c  51                   push ecx
// 005c5b5d  e85e3bffff           call 0x5b96c0
// 005c5b62  83c404               add esp, 4
// 005c5b65  8845fe               mov byte ptr [ebp - 2], al
// 005c5b68  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c5b6c  52                   push edx
// 005c5b6d  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005c5b71  50                   push eax
// 005c5b72  8d4d10               lea ecx, [ebp + 0x10]
// 005c5b75  51                   push ecx
// 005c5b76  8d5508               lea edx, [ebp + 8]
// 005c5b79  52                   push edx
// 005c5b7a  8d45fd               lea eax, [ebp - 3]
// 005c5b7d  50                   push eax
// 005c5b7e  e8dd210000           call 0x5c7d60
// 005c5b83  83c40c               add esp, 0xc
// 005c5b86  0fb608               movzx ecx, byte ptr [eax]
// 005c5b89  51                   push ecx
// 005c5b8a  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c5b8d  52                   push edx
// 005c5b8e  8d450c               lea eax, [ebp + 0xc]
// 005c5b91  50                   push eax
// 005c5b92  e8594dffff           call 0x5ba8f0
// 005c5b97  83c404               add esp, 4
// 005c5b9a  50                   push eax
// 005c5b9b  8d4d08               lea ecx, [ebp + 8]
// 005c5b9e  51                   push ecx
// 005c5b9f  e84c4dffff           call 0x5ba8f0
// 005c5ba4  83c404               add esp, 4
// 005c5ba7  50                   push eax
// 005c5ba8  e893230000           call 0x5c7f40
// 005c5bad  83c418               add esp, 0x18
// 005c5bb0  8be5                 mov esp, ebp
// 005c5bb2  5d                   pop ebp
// 005c5bb3  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_move_backward@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp