// roc 2007-08 0040d450  unit: ChatEnter  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d450
//
// 0040d450  55                   push ebp
// 0040d451  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0040d455  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0040d459  746b                 je 0x40d4c6
// 0040d45b  53                   push ebx
// 0040d45c  56                   push esi
// 0040d45d  57                   push edi
// 0040d45e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040d462  8b4500               mov eax, dword ptr [ebp]
// 0040d465  8907                 mov dword ptr [edi], eax
// 0040d467  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0040d46a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0040d46d  7444                 je 0x40d4b3
// 0040d46f  85db                 test ebx, ebx
// 0040d471  740c                 je 0x40d47f
// 0040d473  8d4b04               lea ecx, [ebx + 4]
// 0040d476  ba01000000           mov edx, 1
// 0040d47b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d47f  8b7704               mov esi, dword ptr [edi + 4]
// 0040d482  85f6                 test esi, esi
// 0040d484  742a                 je 0x40d4b0
// 0040d486  8d4604               lea eax, [esi + 4]
// 0040d489  83c9ff               or ecx, 0xffffffff
// 0040d48c  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d490  751e                 jne 0x40d4b0
// 0040d492  8b16                 mov edx, dword ptr [esi]
// 0040d494  8b4204               mov eax, dword ptr [edx + 4]
// 0040d497  8bce                 mov ecx, esi
// 0040d499  ffd0                 call eax
// 0040d49b  8d4e08               lea ecx, [esi + 8]
// 0040d49e  83caff               or edx, 0xffffffff
// 0040d4a1  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d4a5  7509                 jne 0x40d4b0
// 0040d4a7  8b06                 mov eax, dword ptr [esi]
// 0040d4a9  8b5008               mov edx, dword ptr [eax + 8]
// 0040d4ac  8bce                 mov ecx, esi
// 0040d4ae  ffd2                 call edx
// 0040d4b0  895f04               mov dword ptr [edi + 4], ebx
// 0040d4b3  83c508               add ebp, 8
// 0040d4b6  83c708               add edi, 8
// 0040d4b9  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0040d4bd  75a3                 jne 0x40d462
// 0040d4bf  8bc7                 mov eax, edi
// 0040d4c1  5f                   pop edi
// 0040d4c2  5e                   pop esi
// 0040d4c3  5b                   pop ebx
// 0040d4c4  5d                   pop ebp
// 0040d4c5  c3                   ret 
// 0040d4c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040d4ca  5d                   pop ebp
// 0040d4cb  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
