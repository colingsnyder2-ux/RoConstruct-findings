// roc 2011-06 007ff820  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ff820
//
// 007ff820  55                   push ebp
// 007ff821  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007ff825  396c2408             cmp dword ptr [esp + 8], ebp
// 007ff829  746b                 je 0x7ff896
// 007ff82b  53                   push ebx
// 007ff82c  56                   push esi
// 007ff82d  57                   push edi
// 007ff82e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007ff832  8b45f8               mov eax, dword ptr [ebp - 8]
// 007ff835  83ed08               sub ebp, 8
// 007ff838  83ef08               sub edi, 8
// 007ff83b  8907                 mov dword ptr [edi], eax
// 007ff83d  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007ff840  3b5f04               cmp ebx, dword ptr [edi + 4]
// 007ff843  7444                 je 0x7ff889
// 007ff845  85db                 test ebx, ebx
// 007ff847  740c                 je 0x7ff855
// 007ff849  8d4b04               lea ecx, [ebx + 4]
// 007ff84c  ba01000000           mov edx, 1
// 007ff851  f00fc111             lock xadd dword ptr [ecx], edx
// 007ff855  8b7704               mov esi, dword ptr [edi + 4]
// 007ff858  85f6                 test esi, esi
// 007ff85a  742a                 je 0x7ff886
// 007ff85c  8d4604               lea eax, [esi + 4]
// 007ff85f  83c9ff               or ecx, 0xffffffff
// 007ff862  f00fc108             lock xadd dword ptr [eax], ecx
// 007ff866  751e                 jne 0x7ff886
// 007ff868  8b16                 mov edx, dword ptr [esi]
// 007ff86a  8b4204               mov eax, dword ptr [edx + 4]
// 007ff86d  8bce                 mov ecx, esi
// 007ff86f  ffd0                 call eax
// 007ff871  8d4e08               lea ecx, [esi + 8]
// 007ff874  83caff               or edx, 0xffffffff
// 007ff877  f00fc111             lock xadd dword ptr [ecx], edx
// 007ff87b  7509                 jne 0x7ff886
// 007ff87d  8b06                 mov eax, dword ptr [esi]
// 007ff87f  8b5008               mov edx, dword ptr [eax + 8]
// 007ff882  8bce                 mov ecx, esi
// 007ff884  ffd2                 call edx
// 007ff886  895f04               mov dword ptr [edi + 4], ebx
// 007ff889  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 007ff88d  75a3                 jne 0x7ff832
// 007ff88f  8bc7                 mov eax, edi
// 007ff891  5f                   pop edi
// 007ff892  5e                   pop esi
// 007ff893  5b                   pop ebx
// 007ff894  5d                   pop ebp
// 007ff895  c3                   ret 
// 007ff896  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ff89a  5d                   pop ebp
// 007ff89b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
