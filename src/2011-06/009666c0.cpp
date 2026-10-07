// roc 2011-06 009666c0  unit: Ogre::RbxCluster::RbxPartBinding  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009666c0
//
// 009666c0  55                   push ebp
// 009666c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 009666c5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 009666c9  746b                 je 0x966736
// 009666cb  53                   push ebx
// 009666cc  56                   push esi
// 009666cd  57                   push edi
// 009666ce  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009666d2  8b4500               mov eax, dword ptr [ebp]
// 009666d5  8907                 mov dword ptr [edi], eax
// 009666d7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 009666da  3b5f04               cmp ebx, dword ptr [edi + 4]
// 009666dd  7444                 je 0x966723
// 009666df  85db                 test ebx, ebx
// 009666e1  740c                 je 0x9666ef
// 009666e3  8d4b04               lea ecx, [ebx + 4]
// 009666e6  ba01000000           mov edx, 1
// 009666eb  f00fc111             lock xadd dword ptr [ecx], edx
// 009666ef  8b7704               mov esi, dword ptr [edi + 4]
// 009666f2  85f6                 test esi, esi
// 009666f4  742a                 je 0x966720
// 009666f6  8d4604               lea eax, [esi + 4]
// 009666f9  83c9ff               or ecx, 0xffffffff
// 009666fc  f00fc108             lock xadd dword ptr [eax], ecx
// 00966700  751e                 jne 0x966720
// 00966702  8b16                 mov edx, dword ptr [esi]
// 00966704  8b4204               mov eax, dword ptr [edx + 4]
// 00966707  8bce                 mov ecx, esi
// 00966709  ffd0                 call eax
// 0096670b  8d4e08               lea ecx, [esi + 8]
// 0096670e  83caff               or edx, 0xffffffff
// 00966711  f00fc111             lock xadd dword ptr [ecx], edx
// 00966715  7509                 jne 0x966720
// 00966717  8b06                 mov eax, dword ptr [esi]
// 00966719  8b5008               mov edx, dword ptr [eax + 8]
// 0096671c  8bce                 mov ecx, esi
// 0096671e  ffd2                 call edx
// 00966720  895f04               mov dword ptr [edi + 4], ebx
// 00966723  83c508               add ebp, 8
// 00966726  83c708               add edi, 8
// 00966729  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0096672d  75a3                 jne 0x9666d2
// 0096672f  8bc7                 mov eax, edi
// 00966731  5f                   pop edi
// 00966732  5e                   pop esi
// 00966733  5b                   pop ebx
// 00966734  5d                   pop ebp
// 00966735  c3                   ret 
// 00966736  8b442410             mov eax, dword ptr [esp + 0x10]
// 0096673a  5d                   pop ebp
// 0096673b  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
