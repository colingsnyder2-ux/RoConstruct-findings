// roc 2008-06 0059a9a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a9a0
//
// 0059a9a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059a9a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059a9a8  56                   push esi
// 0059a9a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059a9ad  3bce                 cmp ecx, esi
// 0059a9af  742a                 je 0x59a9db
// 0059a9b1  57                   push edi
// 0059a9b2  85c0                 test eax, eax
// 0059a9b4  741a                 je 0x59a9d0
// 0059a9b6  8b11                 mov edx, dword ptr [ecx]
// 0059a9b8  8910                 mov dword ptr [eax], edx
// 0059a9ba  8b5104               mov edx, dword ptr [ecx + 4]
// 0059a9bd  895004               mov dword ptr [eax + 4], edx
// 0059a9c0  85d2                 test edx, edx
// 0059a9c2  740c                 je 0x59a9d0
// 0059a9c4  83c208               add edx, 8
// 0059a9c7  bf01000000           mov edi, 1
// 0059a9cc  f00fc13a             lock xadd dword ptr [edx], edi
// 0059a9d0  83c108               add ecx, 8
// 0059a9d3  83c008               add eax, 8
// 0059a9d6  3bce                 cmp ecx, esi
// 0059a9d8  75d8                 jne 0x59a9b2
// 0059a9da  5f                   pop edi
// 0059a9db  5e                   pop esi
// 0059a9dc  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
