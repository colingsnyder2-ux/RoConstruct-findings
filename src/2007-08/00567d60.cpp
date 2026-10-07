// roc 2007-08 00567d60  unit: RBX::RootInstance  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567d60
//
// 00567d60  56                   push esi
// 00567d61  8b742408             mov esi, dword ptr [esp + 8]
// 00567d65  57                   push edi
// 00567d66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00567d6a  3bf7                 cmp esi, edi
// 00567d6c  7423                 je 0x567d91
// 00567d6e  8bff                 mov edi, edi
// 00567d70  8b4e04               mov ecx, dword ptr [esi + 4]
// 00567d73  85c9                 test ecx, ecx
// 00567d75  7413                 je 0x567d8a
// 00567d77  8d4108               lea eax, [ecx + 8]
// 00567d7a  83caff               or edx, 0xffffffff
// 00567d7d  f00fc110             lock xadd dword ptr [eax], edx
// 00567d81  7507                 jne 0x567d8a
// 00567d83  8b01                 mov eax, dword ptr [ecx]
// 00567d85  8b5008               mov edx, dword ptr [eax + 8]
// 00567d88  ffd2                 call edx
// 00567d8a  83c608               add esi, 8
// 00567d8d  3bf7                 cmp esi, edi
// 00567d8f  75df                 jne 0x567d70
// 00567d91  5f                   pop edi
// 00567d92  5e                   pop esi
// 00567d93  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
