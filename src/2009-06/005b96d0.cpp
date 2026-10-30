// roc 2009-06 005b96d0  unit: seg_005b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b96d0
//
// 005b96d0  55                   push ebp
// 005b96d1  8bec                 mov ebp, esp
// 005b96d3  83ec08               sub esp, 8
// 005b96d6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b96d9  2b4508               sub eax, dword ptr [ebp + 8]
// 005b96dc  99                   cdq 
// 005b96dd  b948000000           mov ecx, 0x48
// 005b96e2  f7f9                 idiv ecx
// 005b96e4  6bc048               imul eax, eax, 0x48
// 005b96e7  034510               add eax, dword ptr [ebp + 0x10]
// 005b96ea  8945fc               mov dword ptr [ebp - 4], eax
// 005b96ed  33d2                 xor edx, edx
// 005b96ef  8855fb               mov byte ptr [ebp - 5], dl
// 005b96f2  33c0                 xor eax, eax
// 005b96f4  8845fa               mov byte ptr [ebp - 6], al
// 005b96f7  0fb64dfb             movzx ecx, byte ptr [ebp - 5]
// 005b96fb  51                   push ecx
// 005b96fc  0fb655fa             movzx edx, byte ptr [ebp - 6]
// 005b9700  52                   push edx
// 005b9701  0fb645f9             movzx eax, byte ptr [ebp - 7]
// 005b9705  50                   push eax
// 005b9706  8d4d10               lea ecx, [ebp + 0x10]
// 005b9709  51                   push ecx
// 005b970a  e8e1110000           call 0x5ba8f0
// 005b970f  83c404               add esp, 4
// 005b9712  50                   push eax
// 005b9713  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005b9716  52                   push edx
// 005b9717  8b4508               mov eax, dword ptr [ebp + 8]
// 005b971a  50                   push eax
// 005b971b  e8500f0000           call 0x5ba670
// 005b9720  83c418               add esp, 0x18
// 005b9723  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b9726  8be5                 mov esp, ebp
// 005b9728  5d                   pop ebp
// 005b9729  c3                   ret 
// copied from an identical function in another client (function ??$_Copy_opt@PAVFace@?$ConvexClipper@N@Wml@@PAV123@@std@@YAPAVFace@?$ConvexClipper@N@Wml@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp