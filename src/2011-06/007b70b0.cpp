// roc 2011-06 007b70b0  unit: RBX::SpatialFilter  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b70b0
//
// 007b70b0  8b542408             mov edx, dword ptr [esp + 8]
// 007b70b4  85d2                 test edx, edx
// 007b70b6  7632                 jbe 0x7b70ea
// 007b70b8  8b442404             mov eax, dword ptr [esp + 4]
// 007b70bc  56                   push esi
// 007b70bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b70c1  57                   push edi
// 007b70c2  85c0                 test eax, eax
// 007b70c4  741a                 je 0x7b70e0
// 007b70c6  8b0e                 mov ecx, dword ptr [esi]
// 007b70c8  8908                 mov dword ptr [eax], ecx
// 007b70ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b70cd  894804               mov dword ptr [eax + 4], ecx
// 007b70d0  85c9                 test ecx, ecx
// 007b70d2  740c                 je 0x7b70e0
// 007b70d4  83c108               add ecx, 8
// 007b70d7  bf01000000           mov edi, 1
// 007b70dc  f00fc139             lock xadd dword ptr [ecx], edi
// 007b70e0  4a                   dec edx
// 007b70e1  83c008               add eax, 8
// 007b70e4  85d2                 test edx, edx
// 007b70e6  77da                 ja 0x7b70c2
// 007b70e8  5f                   pop edi
// 007b70e9  5e                   pop esi
// 007b70ea  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
