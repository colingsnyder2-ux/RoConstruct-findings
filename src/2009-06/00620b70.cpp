// roc 2009-06 00620b70  unit: TextXmlParser  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620b70
//
// 00620b70  56                   push esi
// 00620b71  8b742408             mov esi, dword ptr [esp + 8]
// 00620b75  57                   push edi
// 00620b76  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00620b7a  3bf7                 cmp esi, edi
// 00620b7c  7423                 je 0x620ba1
// 00620b7e  8bff                 mov edi, edi
// 00620b80  8b4e04               mov ecx, dword ptr [esi + 4]
// 00620b83  85c9                 test ecx, ecx
// 00620b85  7413                 je 0x620b9a
// 00620b87  8d4108               lea eax, [ecx + 8]
// 00620b8a  83caff               or edx, 0xffffffff
// 00620b8d  f00fc110             lock xadd dword ptr [eax], edx
// 00620b91  7507                 jne 0x620b9a
// 00620b93  8b01                 mov eax, dword ptr [ecx]
// 00620b95  8b5008               mov edx, dword ptr [eax + 8]
// 00620b98  ffd2                 call edx
// 00620b9a  83c608               add esi, 8
// 00620b9d  3bf7                 cmp esi, edi
// 00620b9f  75df                 jne 0x620b80
// 00620ba1  5f                   pop edi
// 00620ba2  5e                   pop esi
// 00620ba3  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
