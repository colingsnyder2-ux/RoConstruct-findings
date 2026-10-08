// from server: 100% by auto
// roc 2009-06 0065d990  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d990
//
// 0065d990  8b542408             mov edx, dword ptr [esp + 8]
// 0065d994  85d2                 test edx, edx
// 0065d996  7632                 jbe 0x65d9ca
// 0065d998  8b442404             mov eax, dword ptr [esp + 4]
// 0065d99c  56                   push esi
// 0065d99d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065d9a1  57                   push edi
// 0065d9a2  85c0                 test eax, eax
// 0065d9a4  741a                 je 0x65d9c0
// 0065d9a6  8b0e                 mov ecx, dword ptr [esi]
// 0065d9a8  8908                 mov dword ptr [eax], ecx
// 0065d9aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065d9ad  894804               mov dword ptr [eax + 4], ecx
// 0065d9b0  85c9                 test ecx, ecx
// 0065d9b2  740c                 je 0x65d9c0
// 0065d9b4  83c108               add ecx, 8
// 0065d9b7  bf01000000           mov edi, 1
// 0065d9bc  f00fc139             lock xadd dword ptr [ecx], edi
// 0065d9c0  4a                   dec edx
// 0065d9c1  83c008               add eax, 8
// 0065d9c4  85d2                 test edx, edx
// 0065d9c6  77da                 ja 0x65d9a2
// 0065d9c8  5f                   pop edi
// 0065d9c9  5e                   pop esi
// 0065d9ca  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
