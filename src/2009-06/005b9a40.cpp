// roc 2009-06 005b9a40  unit: seg_005b0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9a40
//
// 005b9a40  55                   push ebp
// 005b9a41  8bec                 mov ebp, esp
// 005b9a43  51                   push ecx
// 005b9a44  33c0                 xor eax, eax
// 005b9a46  8845ff               mov byte ptr [ebp - 1], al
// 005b9a49  8d4d10               lea ecx, [ebp + 0x10]
// 005b9a4c  51                   push ecx
// 005b9a4d  8d5508               lea edx, [ebp + 8]
// 005b9a50  52                   push edx
// 005b9a51  e86afcffff           call 0x5b96c0
// 005b9a56  83c408               add esp, 8
// 005b9a59  8845fe               mov byte ptr [ebp - 2], al
// 005b9a5c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005b9a60  50                   push eax
// 005b9a61  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005b9a65  51                   push ecx
// 005b9a66  0fb65514             movzx edx, byte ptr [ebp + 0x14]
// 005b9a6a  52                   push edx
// 005b9a6b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b9a6e  50                   push eax
// 005b9a6f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b9a72  51                   push ecx
// 005b9a73  8b5508               mov edx, dword ptr [ebp + 8]
// 005b9a76  52                   push edx
// 005b9a77  e8040d0000           call 0x5ba780
// 005b9a7c  83c418               add esp, 0x18
// 005b9a7f  8be5                 mov esp, ebp
// 005b9a81  5d                   pop ebp
// 005b9a82  c3                   ret 
// copied from an identical function in another client (function ??$_Move_backward_opt@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@Urandom_access_iterator_tag@std@@U_Undefined_move_tag@5@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Undefined_move_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp