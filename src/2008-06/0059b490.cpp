// from server: 100% by auto
// roc 2008-06 0059b490  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b490
//
// 0059b490  8b542408             mov edx, dword ptr [esp + 8]
// 0059b494  85d2                 test edx, edx
// 0059b496  7632                 jbe 0x59b4ca
// 0059b498  8b442404             mov eax, dword ptr [esp + 4]
// 0059b49c  56                   push esi
// 0059b49d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059b4a1  57                   push edi
// 0059b4a2  85c0                 test eax, eax
// 0059b4a4  741a                 je 0x59b4c0
// 0059b4a6  8b0e                 mov ecx, dword ptr [esi]
// 0059b4a8  8908                 mov dword ptr [eax], ecx
// 0059b4aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059b4ad  894804               mov dword ptr [eax + 4], ecx
// 0059b4b0  85c9                 test ecx, ecx
// 0059b4b2  740c                 je 0x59b4c0
// 0059b4b4  83c108               add ecx, 8
// 0059b4b7  bf01000000           mov edi, 1
// 0059b4bc  f00fc139             lock xadd dword ptr [ecx], edi
// 0059b4c0  4a                   dec edx
// 0059b4c1  83c008               add eax, 8
// 0059b4c4  85d2                 test edx, edx
// 0059b4c6  77da                 ja 0x59b4a2
// 0059b4c8  5f                   pop edi
// 0059b4c9  5e                   pop esi
// 0059b4ca  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
