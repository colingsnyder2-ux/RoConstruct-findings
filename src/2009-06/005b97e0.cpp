// roc 2009-06 005b97e0  unit: seg_005b0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b97e0
//
// 005b97e0  55                   push ebp
// 005b97e1  8bec                 mov ebp, esp
// 005b97e3  51                   push ecx
// 005b97e4  33c0                 xor eax, eax
// 005b97e6  8845ff               mov byte ptr [ebp - 1], al
// 005b97e9  8d4d10               lea ecx, [ebp + 0x10]
// 005b97ec  51                   push ecx
// 005b97ed  8d5508               lea edx, [ebp + 8]
// 005b97f0  52                   push edx
// 005b97f1  e8cafeffff           call 0x5b96c0
// 005b97f6  83c408               add esp, 8
// 005b97f9  8845fe               mov byte ptr [ebp - 2], al
// 005b97fc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005b9800  50                   push eax
// 005b9801  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005b9805  51                   push ecx
// 005b9806  0fb65514             movzx edx, byte ptr [ebp + 0x14]
// 005b980a  52                   push edx
// 005b980b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b980e  50                   push eax
// 005b980f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b9812  51                   push ecx
// 005b9813  8b5508               mov edx, dword ptr [ebp + 8]
// 005b9816  52                   push edx
// 005b9817  e8b40e0000           call 0x5ba6d0
// 005b981c  83c418               add esp, 0x18
// 005b981f  8be5                 mov esp, ebp
// 005b9821  5d                   pop ebp
// 005b9822  c3                   ret 
// copied from an identical function in another client (function ??$_Move_backward_opt@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@Urandom_access_iterator_tag@std@@U_Undefined_move_tag@5@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Undefined_move_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp