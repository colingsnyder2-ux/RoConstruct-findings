// roc 2012-06 008af100  unit: RBX::Flag  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af100
//
// 008af100  56                   push esi
// 008af101  8b742408             mov esi, dword ptr [esp + 8]
// 008af105  57                   push edi
// 008af106  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008af10a  3bf7                 cmp esi, edi
// 008af10c  7423                 je 0x8af131
// 008af10e  8bff                 mov edi, edi
// 008af110  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af113  85c9                 test ecx, ecx
// 008af115  7413                 je 0x8af12a
// 008af117  8d4108               lea eax, [ecx + 8]
// 008af11a  83caff               or edx, 0xffffffff
// 008af11d  f00fc110             lock xadd dword ptr [eax], edx
// 008af121  7507                 jne 0x8af12a
// 008af123  8b01                 mov eax, dword ptr [ecx]
// 008af125  8b5008               mov edx, dword ptr [eax + 8]
// 008af128  ffd2                 call edx
// 008af12a  83c608               add esi, 8
// 008af12d  3bf7                 cmp esi, edi
// 008af12f  75df                 jne 0x8af110
// 008af131  5f                   pop edi
// 008af132  5e                   pop esi
// 008af133  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
