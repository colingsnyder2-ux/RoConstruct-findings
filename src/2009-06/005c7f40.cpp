// roc 2009-06 005c7f40  unit: seg_005c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7f40
//
// 005c7f40  55                   push ebp
// 005c7f41  8bec                 mov ebp, esp
// 005c7f43  51                   push ecx
// 005c7f44  33c0                 xor eax, eax
// 005c7f46  8845ff               mov byte ptr [ebp - 1], al
// 005c7f49  8d4d10               lea ecx, [ebp + 0x10]
// 005c7f4c  51                   push ecx
// 005c7f4d  8d5508               lea edx, [ebp + 8]
// 005c7f50  52                   push edx
// 005c7f51  e86a17ffff           call 0x5b96c0
// 005c7f56  83c408               add esp, 8
// 005c7f59  8845fe               mov byte ptr [ebp - 2], al
// 005c7f5c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c7f60  50                   push eax
// 005c7f61  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c7f65  51                   push ecx
// 005c7f66  0fb65514             movzx edx, byte ptr [ebp + 0x14]
// 005c7f6a  52                   push edx
// 005c7f6b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c7f6e  50                   push eax
// 005c7f6f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c7f72  51                   push ecx
// 005c7f73  8b5508               mov edx, dword ptr [ebp + 8]
// 005c7f76  52                   push edx
// 005c7f77  e844040000           call 0x5c83c0
// 005c7f7c  83c418               add esp, 0x18
// 005c7f7f  8be5                 mov esp, ebp
// 005c7f81  5d                   pop ebp
// 005c7f82  c3                   ret 
// copied from an identical function in another client (function ??$_Move_backward_opt@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@Urandom_access_iterator_tag@std@@U_Undefined_move_tag@5@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Undefined_move_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp