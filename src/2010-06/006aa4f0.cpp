// roc 2010-06 006aa4f0  unit: RBX::BaseThreadPool::PoolData  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa4f0
//
// 006aa4f0  55                   push ebp
// 006aa4f1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006aa4f5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 006aa4f9  746b                 je 0x6aa566
// 006aa4fb  53                   push ebx
// 006aa4fc  56                   push esi
// 006aa4fd  57                   push edi
// 006aa4fe  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006aa502  8b4500               mov eax, dword ptr [ebp]
// 006aa505  8907                 mov dword ptr [edi], eax
// 006aa507  8b5d04               mov ebx, dword ptr [ebp + 4]
// 006aa50a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 006aa50d  7444                 je 0x6aa553
// 006aa50f  85db                 test ebx, ebx
// 006aa511  740c                 je 0x6aa51f
// 006aa513  8d4b04               lea ecx, [ebx + 4]
// 006aa516  ba01000000           mov edx, 1
// 006aa51b  f00fc111             lock xadd dword ptr [ecx], edx
// 006aa51f  8b7704               mov esi, dword ptr [edi + 4]
// 006aa522  85f6                 test esi, esi
// 006aa524  742a                 je 0x6aa550
// 006aa526  8d4604               lea eax, [esi + 4]
// 006aa529  83c9ff               or ecx, 0xffffffff
// 006aa52c  f00fc108             lock xadd dword ptr [eax], ecx
// 006aa530  751e                 jne 0x6aa550
// 006aa532  8b16                 mov edx, dword ptr [esi]
// 006aa534  8b4204               mov eax, dword ptr [edx + 4]
// 006aa537  8bce                 mov ecx, esi
// 006aa539  ffd0                 call eax
// 006aa53b  8d4e08               lea ecx, [esi + 8]
// 006aa53e  83caff               or edx, 0xffffffff
// 006aa541  f00fc111             lock xadd dword ptr [ecx], edx
// 006aa545  7509                 jne 0x6aa550
// 006aa547  8b06                 mov eax, dword ptr [esi]
// 006aa549  8b5008               mov edx, dword ptr [eax + 8]
// 006aa54c  8bce                 mov ecx, esi
// 006aa54e  ffd2                 call edx
// 006aa550  895f04               mov dword ptr [edi + 4], ebx
// 006aa553  83c508               add ebp, 8
// 006aa556  83c708               add edi, 8
// 006aa559  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 006aa55d  75a3                 jne 0x6aa502
// 006aa55f  8bc7                 mov eax, edi
// 006aa561  5f                   pop edi
// 006aa562  5e                   pop esi
// 006aa563  5b                   pop ebx
// 006aa564  5d                   pop ebp
// 006aa565  c3                   ret 
// 006aa566  8b442410             mov eax, dword ptr [esp + 0x10]
// 006aa56a  5d                   pop ebp
// 006aa56b  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
