// from server: 100% by auto
// roc 2008-06 0060dd80  unit: RBX::BlockBlockContact  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dd80
//
// 0060dd80  55                   push ebp
// 0060dd81  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0060dd85  57                   push edi
// 0060dd86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060dd8a  3bfd                 cmp edi, ebp
// 0060dd8c  744b                 je 0x60ddd9
// 0060dd8e  53                   push ebx
// 0060dd8f  56                   push esi
// 0060dd90  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0060dd94  8b07                 mov eax, dword ptr [edi]
// 0060dd96  8906                 mov dword ptr [esi], eax
// 0060dd98  8b5f04               mov ebx, dword ptr [edi + 4]
// 0060dd9b  85db                 test ebx, ebx
// 0060dd9d  740c                 je 0x60ddab
// 0060dd9f  8d4b08               lea ecx, [ebx + 8]
// 0060dda2  ba01000000           mov edx, 1
// 0060dda7  f00fc111             lock xadd dword ptr [ecx], edx
// 0060ddab  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060ddae  85c9                 test ecx, ecx
// 0060ddb0  7413                 je 0x60ddc5
// 0060ddb2  8d4108               lea eax, [ecx + 8]
// 0060ddb5  83caff               or edx, 0xffffffff
// 0060ddb8  f00fc110             lock xadd dword ptr [eax], edx
// 0060ddbc  7507                 jne 0x60ddc5
// 0060ddbe  8b01                 mov eax, dword ptr [ecx]
// 0060ddc0  8b5008               mov edx, dword ptr [eax + 8]
// 0060ddc3  ffd2                 call edx
// 0060ddc5  895e04               mov dword ptr [esi + 4], ebx
// 0060ddc8  83c708               add edi, 8
// 0060ddcb  83c608               add esi, 8
// 0060ddce  3bfd                 cmp edi, ebp
// 0060ddd0  75c2                 jne 0x60dd94
// 0060ddd2  8bc6                 mov eax, esi
// 0060ddd4  5e                   pop esi
// 0060ddd5  5b                   pop ebx
// 0060ddd6  5f                   pop edi
// 0060ddd7  5d                   pop ebp
// 0060ddd8  c3                   ret 
// 0060ddd9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060dddd  5f                   pop edi
// 0060ddde  5d                   pop ebp
// 0060dddf  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Copy_opt@PAV?$weak_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
