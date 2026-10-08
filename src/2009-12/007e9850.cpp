// roc 2009-12 007e9850  unit: RBX::Tasks::Barrier  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9850
//
// 007e9850  55                   push ebp
// 007e9851  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007e9855  396c2408             cmp dword ptr [esp + 8], ebp
// 007e9859  746b                 je 0x7e98c6
// 007e985b  53                   push ebx
// 007e985c  56                   push esi
// 007e985d  57                   push edi
// 007e985e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007e9862  8b45f8               mov eax, dword ptr [ebp - 8]
// 007e9865  83ed08               sub ebp, 8
// 007e9868  83ef08               sub edi, 8
// 007e986b  8907                 mov dword ptr [edi], eax
// 007e986d  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007e9870  3b5f04               cmp ebx, dword ptr [edi + 4]
// 007e9873  7444                 je 0x7e98b9
// 007e9875  85db                 test ebx, ebx
// 007e9877  740c                 je 0x7e9885
// 007e9879  8d4b04               lea ecx, [ebx + 4]
// 007e987c  ba01000000           mov edx, 1
// 007e9881  f00fc111             lock xadd dword ptr [ecx], edx
// 007e9885  8b7704               mov esi, dword ptr [edi + 4]
// 007e9888  85f6                 test esi, esi
// 007e988a  742a                 je 0x7e98b6
// 007e988c  8d4604               lea eax, [esi + 4]
// 007e988f  83c9ff               or ecx, 0xffffffff
// 007e9892  f00fc108             lock xadd dword ptr [eax], ecx
// 007e9896  751e                 jne 0x7e98b6
// 007e9898  8b16                 mov edx, dword ptr [esi]
// 007e989a  8b4204               mov eax, dword ptr [edx + 4]
// 007e989d  8bce                 mov ecx, esi
// 007e989f  ffd0                 call eax
// 007e98a1  8d4e08               lea ecx, [esi + 8]
// 007e98a4  83caff               or edx, 0xffffffff
// 007e98a7  f00fc111             lock xadd dword ptr [ecx], edx
// 007e98ab  7509                 jne 0x7e98b6
// 007e98ad  8b06                 mov eax, dword ptr [esi]
// 007e98af  8b5008               mov edx, dword ptr [eax + 8]
// 007e98b2  8bce                 mov ecx, esi
// 007e98b4  ffd2                 call edx
// 007e98b6  895f04               mov dword ptr [edi + 4], ebx
// 007e98b9  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 007e98bd  75a3                 jne 0x7e9862
// 007e98bf  8bc7                 mov eax, edi
// 007e98c1  5f                   pop edi
// 007e98c2  5e                   pop esi
// 007e98c3  5b                   pop ebx
// 007e98c4  5d                   pop ebp
// 007e98c5  c3                   ret 
// 007e98c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e98ca  5d                   pop ebp
// 007e98cb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
