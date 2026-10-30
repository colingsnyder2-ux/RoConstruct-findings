// roc 2009-06 005b8210  unit: seg_005b0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8210
//
// 005b8210  55                   push ebp
// 005b8211  8bec                 mov ebp, esp
// 005b8213  51                   push ecx
// 005b8214  33c0                 xor eax, eax
// 005b8216  8845ff               mov byte ptr [ebp - 1], al
// 005b8219  8d4d08               lea ecx, [ebp + 8]
// 005b821c  51                   push ecx
// 005b821d  8d5508               lea edx, [ebp + 8]
// 005b8220  52                   push edx
// 005b8221  e89a140000           call 0x5b96c0
// 005b8226  83c408               add esp, 8
// 005b8229  8845fe               mov byte ptr [ebp - 2], al
// 005b822c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005b8230  50                   push eax
// 005b8231  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005b8235  51                   push ecx
// 005b8236  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005b8239  52                   push edx
// 005b823a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b823d  50                   push eax
// 005b823e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b8241  51                   push ecx
// 005b8242  8b5508               mov edx, dword ptr [ebp + 8]
// 005b8245  52                   push edx
// 005b8246  e8e5150000           call 0x5b9830
// 005b824b  83c418               add esp, 0x18
// 005b824e  8be5                 mov esp, ebp
// 005b8250  5d                   pop ebp
// 005b8251  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_uninitialized_fill_n@PAVVertex@?$ConvexClipper@M@Wml@@IV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAXPAVVertex@?$ConvexClipper@M@Wml@@IABV123@AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp