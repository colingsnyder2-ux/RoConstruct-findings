// from server: 100% by auto
// roc 2012-06 00863750  unit: VWiniInetRequest_source::?$stream_buffer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00863750
//
// 00863750  55                   push ebp
// 00863751  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00863755  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 00863759  746b                 je 0x8637c6
// 0086375b  53                   push ebx
// 0086375c  56                   push esi
// 0086375d  57                   push edi
// 0086375e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00863762  8b4500               mov eax, dword ptr [ebp]
// 00863765  8907                 mov dword ptr [edi], eax
// 00863767  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0086376a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0086376d  7444                 je 0x8637b3
// 0086376f  85db                 test ebx, ebx
// 00863771  740c                 je 0x86377f
// 00863773  8d4b04               lea ecx, [ebx + 4]
// 00863776  ba01000000           mov edx, 1
// 0086377b  f00fc111             lock xadd dword ptr [ecx], edx
// 0086377f  8b7704               mov esi, dword ptr [edi + 4]
// 00863782  85f6                 test esi, esi
// 00863784  742a                 je 0x8637b0
// 00863786  8d4604               lea eax, [esi + 4]
// 00863789  83c9ff               or ecx, 0xffffffff
// 0086378c  f00fc108             lock xadd dword ptr [eax], ecx
// 00863790  751e                 jne 0x8637b0
// 00863792  8b16                 mov edx, dword ptr [esi]
// 00863794  8b4204               mov eax, dword ptr [edx + 4]
// 00863797  8bce                 mov ecx, esi
// 00863799  ffd0                 call eax
// 0086379b  8d4e08               lea ecx, [esi + 8]
// 0086379e  83caff               or edx, 0xffffffff
// 008637a1  f00fc111             lock xadd dword ptr [ecx], edx
// 008637a5  7509                 jne 0x8637b0
// 008637a7  8b06                 mov eax, dword ptr [esi]
// 008637a9  8b5008               mov edx, dword ptr [eax + 8]
// 008637ac  8bce                 mov ecx, esi
// 008637ae  ffd2                 call edx
// 008637b0  895f04               mov dword ptr [edi + 4], ebx
// 008637b3  83c508               add ebp, 8
// 008637b6  83c708               add edi, 8
// 008637b9  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 008637bd  75a3                 jne 0x863762
// 008637bf  8bc7                 mov eax, edi
// 008637c1  5f                   pop edi
// 008637c2  5e                   pop esi
// 008637c3  5b                   pop ebx
// 008637c4  5d                   pop ebp
// 008637c5  c3                   ret 
// 008637c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008637ca  5d                   pop ebp
// 008637cb  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
