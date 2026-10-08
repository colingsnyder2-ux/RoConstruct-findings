// from server: 100% by auto
// roc 2008-06 00411a50  unit: ChatEnter  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411a50
//
// 00411a50  55                   push ebp
// 00411a51  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00411a55  396c2408             cmp dword ptr [esp + 8], ebp
// 00411a59  746b                 je 0x411ac6
// 00411a5b  53                   push ebx
// 00411a5c  56                   push esi
// 00411a5d  57                   push edi
// 00411a5e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00411a62  8b45f8               mov eax, dword ptr [ebp - 8]
// 00411a65  83ed08               sub ebp, 8
// 00411a68  83ef08               sub edi, 8
// 00411a6b  8907                 mov dword ptr [edi], eax
// 00411a6d  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00411a70  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00411a73  7444                 je 0x411ab9
// 00411a75  85db                 test ebx, ebx
// 00411a77  740c                 je 0x411a85
// 00411a79  8d4b04               lea ecx, [ebx + 4]
// 00411a7c  ba01000000           mov edx, 1
// 00411a81  f00fc111             lock xadd dword ptr [ecx], edx
// 00411a85  8b7704               mov esi, dword ptr [edi + 4]
// 00411a88  85f6                 test esi, esi
// 00411a8a  742a                 je 0x411ab6
// 00411a8c  8d4604               lea eax, [esi + 4]
// 00411a8f  83c9ff               or ecx, 0xffffffff
// 00411a92  f00fc108             lock xadd dword ptr [eax], ecx
// 00411a96  751e                 jne 0x411ab6
// 00411a98  8b16                 mov edx, dword ptr [esi]
// 00411a9a  8b4204               mov eax, dword ptr [edx + 4]
// 00411a9d  8bce                 mov ecx, esi
// 00411a9f  ffd0                 call eax
// 00411aa1  8d4e08               lea ecx, [esi + 8]
// 00411aa4  83caff               or edx, 0xffffffff
// 00411aa7  f00fc111             lock xadd dword ptr [ecx], edx
// 00411aab  7509                 jne 0x411ab6
// 00411aad  8b06                 mov eax, dword ptr [esi]
// 00411aaf  8b5008               mov edx, dword ptr [eax + 8]
// 00411ab2  8bce                 mov ecx, esi
// 00411ab4  ffd2                 call edx
// 00411ab6  895f04               mov dword ptr [edi + 4], ebx
// 00411ab9  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00411abd  75a3                 jne 0x411a62
// 00411abf  8bc7                 mov eax, edi
// 00411ac1  5f                   pop edi
// 00411ac2  5e                   pop esi
// 00411ac3  5b                   pop ebx
// 00411ac4  5d                   pop ebp
// 00411ac5  c3                   ret 
// 00411ac6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00411aca  5d                   pop ebp
// 00411acb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
