// roc 2009-06 005ba6d0  unit: seg_005b0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba6d0
//
// 005ba6d0  55                   push ebp
// 005ba6d1  8bec                 mov ebp, esp
// 005ba6d3  83ec08               sub esp, 8
// 005ba6d6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ba6d9  2b4508               sub eax, dword ptr [ebp + 8]
// 005ba6dc  99                   cdq 
// 005ba6dd  b948000000           mov ecx, 0x48
// 005ba6e2  f7f9                 idiv ecx
// 005ba6e4  6bc048               imul eax, eax, 0x48
// 005ba6e7  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005ba6ea  2bd0                 sub edx, eax
// 005ba6ec  8955fc               mov dword ptr [ebp - 4], edx
// 005ba6ef  33c0                 xor eax, eax
// 005ba6f1  8845fb               mov byte ptr [ebp - 5], al
// 005ba6f4  33c9                 xor ecx, ecx
// 005ba6f6  884dfa               mov byte ptr [ebp - 6], cl
// 005ba6f9  0fb655fb             movzx edx, byte ptr [ebp - 5]
// 005ba6fd  52                   push edx
// 005ba6fe  0fb645fa             movzx eax, byte ptr [ebp - 6]
// 005ba702  50                   push eax
// 005ba703  0fb64df9             movzx ecx, byte ptr [ebp - 7]
// 005ba707  51                   push ecx
// 005ba708  8d5510               lea edx, [ebp + 0x10]
// 005ba70b  52                   push edx
// 005ba70c  e8df010000           call 0x5ba8f0
// 005ba711  83c404               add esp, 4
// 005ba714  50                   push eax
// 005ba715  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ba718  50                   push eax
// 005ba719  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ba71c  51                   push ecx
// 005ba71d  e8de0c0000           call 0x5bb400
// 005ba722  83c418               add esp, 0x18
// 005ba725  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ba728  8be5                 mov esp, ebp
// 005ba72a  5d                   pop ebp
// 005ba72b  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_backward_opt@PAVFace@?$ConvexClipper@N@Wml@@PAV123@@std@@YAPAVFace@?$ConvexClipper@N@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp