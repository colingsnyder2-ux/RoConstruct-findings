// from server: 100% by auto
// roc 2007-08 005761c0  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005761c0
//
// 005761c0  8b542408             mov edx, dword ptr [esp + 8]
// 005761c4  85d2                 test edx, edx
// 005761c6  7634                 jbe 0x5761fc
// 005761c8  8b442404             mov eax, dword ptr [esp + 4]
// 005761cc  56                   push esi
// 005761cd  8b742410             mov esi, dword ptr [esp + 0x10]
// 005761d1  57                   push edi
// 005761d2  85c0                 test eax, eax
// 005761d4  741a                 je 0x5761f0
// 005761d6  8b0e                 mov ecx, dword ptr [esi]
// 005761d8  8908                 mov dword ptr [eax], ecx
// 005761da  8b4e04               mov ecx, dword ptr [esi + 4]
// 005761dd  85c9                 test ecx, ecx
// 005761df  894804               mov dword ptr [eax + 4], ecx
// 005761e2  740c                 je 0x5761f0
// 005761e4  83c108               add ecx, 8
// 005761e7  bf01000000           mov edi, 1
// 005761ec  f00fc139             lock xadd dword ptr [ecx], edi
// 005761f0  83ea01               sub edx, 1
// 005761f3  83c008               add eax, 8
// 005761f6  85d2                 test edx, edx
// 005761f8  77d8                 ja 0x5761d2
// 005761fa  5f                   pop edi
// 005761fb  5e                   pop esi
// 005761fc  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_fill_n@PAV?$weak_ptr@UT@@@boost@@IV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@UT@@@boost@@IABV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
