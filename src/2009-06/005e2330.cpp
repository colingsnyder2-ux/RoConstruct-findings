// roc 2009-06 005e2330  unit: boost::Vthread::?$sp_counted_impl_p  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2330
//
// 005e2330  55                   push ebp
// 005e2331  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005e2335  396c2408             cmp dword ptr [esp + 8], ebp
// 005e2339  746b                 je 0x5e23a6
// 005e233b  53                   push ebx
// 005e233c  56                   push esi
// 005e233d  57                   push edi
// 005e233e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e2342  8b45f8               mov eax, dword ptr [ebp - 8]
// 005e2345  83ed08               sub ebp, 8
// 005e2348  83ef08               sub edi, 8
// 005e234b  8907                 mov dword ptr [edi], eax
// 005e234d  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005e2350  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005e2353  7444                 je 0x5e2399
// 005e2355  85db                 test ebx, ebx
// 005e2357  740c                 je 0x5e2365
// 005e2359  8d4b04               lea ecx, [ebx + 4]
// 005e235c  ba01000000           mov edx, 1
// 005e2361  f00fc111             lock xadd dword ptr [ecx], edx
// 005e2365  8b7704               mov esi, dword ptr [edi + 4]
// 005e2368  85f6                 test esi, esi
// 005e236a  742a                 je 0x5e2396
// 005e236c  8d4604               lea eax, [esi + 4]
// 005e236f  83c9ff               or ecx, 0xffffffff
// 005e2372  f00fc108             lock xadd dword ptr [eax], ecx
// 005e2376  751e                 jne 0x5e2396
// 005e2378  8b16                 mov edx, dword ptr [esi]
// 005e237a  8b4204               mov eax, dword ptr [edx + 4]
// 005e237d  8bce                 mov ecx, esi
// 005e237f  ffd0                 call eax
// 005e2381  8d4e08               lea ecx, [esi + 8]
// 005e2384  83caff               or edx, 0xffffffff
// 005e2387  f00fc111             lock xadd dword ptr [ecx], edx
// 005e238b  7509                 jne 0x5e2396
// 005e238d  8b06                 mov eax, dword ptr [esi]
// 005e238f  8b5008               mov edx, dword ptr [eax + 8]
// 005e2392  8bce                 mov ecx, esi
// 005e2394  ffd2                 call edx
// 005e2396  895f04               mov dword ptr [edi + 4], ebx
// 005e2399  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005e239d  75a3                 jne 0x5e2342
// 005e239f  8bc7                 mov eax, edi
// 005e23a1  5f                   pop edi
// 005e23a2  5e                   pop esi
// 005e23a3  5b                   pop ebx
// 005e23a4  5d                   pop ebp
// 005e23a5  c3                   ret 
// 005e23a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e23aa  5d                   pop ebp
// 005e23ab  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
