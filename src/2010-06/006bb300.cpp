// roc 2010-06 006bb300  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bb300
//
// 006bb300  56                   push esi
// 006bb301  8b742408             mov esi, dword ptr [esp + 8]
// 006bb305  57                   push edi
// 006bb306  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006bb30a  3bf7                 cmp esi, edi
// 006bb30c  7423                 je 0x6bb331
// 006bb30e  8bff                 mov edi, edi
// 006bb310  8b4e04               mov ecx, dword ptr [esi + 4]
// 006bb313  85c9                 test ecx, ecx
// 006bb315  7413                 je 0x6bb32a
// 006bb317  8d4108               lea eax, [ecx + 8]
// 006bb31a  83caff               or edx, 0xffffffff
// 006bb31d  f00fc110             lock xadd dword ptr [eax], edx
// 006bb321  7507                 jne 0x6bb32a
// 006bb323  8b01                 mov eax, dword ptr [ecx]
// 006bb325  8b5008               mov edx, dword ptr [eax + 8]
// 006bb328  ffd2                 call edx
// 006bb32a  83c608               add esi, 8
// 006bb32d  3bf7                 cmp esi, edi
// 006bb32f  75df                 jne 0x6bb310
// 006bb331  5f                   pop edi
// 006bb332  5e                   pop esi
// 006bb333  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
