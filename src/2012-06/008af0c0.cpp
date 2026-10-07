// roc 2012-06 008af0c0  unit: RBX::Flag  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af0c0
//
// 008af0c0  8b542408             mov edx, dword ptr [esp + 8]
// 008af0c4  85d2                 test edx, edx
// 008af0c6  7632                 jbe 0x8af0fa
// 008af0c8  8b442404             mov eax, dword ptr [esp + 4]
// 008af0cc  56                   push esi
// 008af0cd  8b742410             mov esi, dword ptr [esp + 0x10]
// 008af0d1  57                   push edi
// 008af0d2  85c0                 test eax, eax
// 008af0d4  741a                 je 0x8af0f0
// 008af0d6  8b0e                 mov ecx, dword ptr [esi]
// 008af0d8  8908                 mov dword ptr [eax], ecx
// 008af0da  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af0dd  894804               mov dword ptr [eax + 4], ecx
// 008af0e0  85c9                 test ecx, ecx
// 008af0e2  740c                 je 0x8af0f0
// 008af0e4  83c108               add ecx, 8
// 008af0e7  bf01000000           mov edi, 1
// 008af0ec  f00fc139             lock xadd dword ptr [ecx], edi
// 008af0f0  4a                   dec edx
// 008af0f1  83c008               add eax, 8
// 008af0f4  85d2                 test edx, edx
// 008af0f6  77da                 ja 0x8af0d2
// 008af0f8  5f                   pop edi
// 008af0f9  5e                   pop esi
// 008af0fa  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
