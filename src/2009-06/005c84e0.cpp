// roc 2009-06 005c84e0  unit: seg_005c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c84e0
//
// 005c84e0  55                   push ebp
// 005c84e1  8bec                 mov ebp, esp
// 005c84e3  51                   push ecx
// 005c84e4  33c0                 xor eax, eax
// 005c84e6  8845ff               mov byte ptr [ebp - 1], al
// 005c84e9  8d4d10               lea ecx, [ebp + 0x10]
// 005c84ec  51                   push ecx
// 005c84ed  8d5508               lea edx, [ebp + 8]
// 005c84f0  52                   push edx
// 005c84f1  e8ca11ffff           call 0x5b96c0
// 005c84f6  83c408               add esp, 8
// 005c84f9  8845fe               mov byte ptr [ebp - 2], al
// 005c84fc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c8500  50                   push eax
// 005c8501  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c8505  51                   push ecx
// 005c8506  0fb65514             movzx edx, byte ptr [ebp + 0x14]
// 005c850a  52                   push edx
// 005c850b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c850e  50                   push eax
// 005c850f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c8512  51                   push ecx
// 005c8513  8b5508               mov edx, dword ptr [ebp + 8]
// 005c8516  52                   push edx
// 005c8517  e874030000           call 0x5c8890
// 005c851c  83c418               add esp, 0x18
// 005c851f  8be5                 mov esp, ebp
// 005c8521  5d                   pop ebp
// 005c8522  c3                   ret 
// copied from an identical function in another client (function ??$_Move_backward_opt@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@Urandom_access_iterator_tag@std@@U_Undefined_move_tag@5@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Undefined_move_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp