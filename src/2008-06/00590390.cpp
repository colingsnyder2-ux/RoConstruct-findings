// from server: 100% by auto
// roc 2008-06 00590390  unit: RBX::RootInstance  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590390
//
// 00590390  56                   push esi
// 00590391  8b742408             mov esi, dword ptr [esp + 8]
// 00590395  57                   push edi
// 00590396  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059039a  3bf7                 cmp esi, edi
// 0059039c  7423                 je 0x5903c1
// 0059039e  8bff                 mov edi, edi
// 005903a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005903a3  85c9                 test ecx, ecx
// 005903a5  7413                 je 0x5903ba
// 005903a7  8d4108               lea eax, [ecx + 8]
// 005903aa  83caff               or edx, 0xffffffff
// 005903ad  f00fc110             lock xadd dword ptr [eax], edx
// 005903b1  7507                 jne 0x5903ba
// 005903b3  8b01                 mov eax, dword ptr [ecx]
// 005903b5  8b5008               mov edx, dword ptr [eax + 8]
// 005903b8  ffd2                 call edx
// 005903ba  83c608               add esi, 8
// 005903bd  3bf7                 cmp esi, edi
// 005903bf  75df                 jne 0x5903a0
// 005903c1  5f                   pop edi
// 005903c2  5e                   pop esi
// 005903c3  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
