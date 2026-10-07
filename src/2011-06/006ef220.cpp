// roc 2011-06 006ef220  unit: RBX::VBillboardGui::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ef220
//
// 006ef220  56                   push esi
// 006ef221  8b742408             mov esi, dword ptr [esp + 8]
// 006ef225  57                   push edi
// 006ef226  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ef22a  3bf7                 cmp esi, edi
// 006ef22c  7423                 je 0x6ef251
// 006ef22e  8bff                 mov edi, edi
// 006ef230  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ef233  85c9                 test ecx, ecx
// 006ef235  7413                 je 0x6ef24a
// 006ef237  8d4108               lea eax, [ecx + 8]
// 006ef23a  83caff               or edx, 0xffffffff
// 006ef23d  f00fc110             lock xadd dword ptr [eax], edx
// 006ef241  7507                 jne 0x6ef24a
// 006ef243  8b01                 mov eax, dword ptr [ecx]
// 006ef245  8b5008               mov edx, dword ptr [eax + 8]
// 006ef248  ffd2                 call edx
// 006ef24a  83c608               add esi, 8
// 006ef24d  3bf7                 cmp esi, edi
// 006ef24f  75df                 jne 0x6ef230
// 006ef251  5f                   pop edi
// 006ef252  5e                   pop esi
// 006ef253  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
