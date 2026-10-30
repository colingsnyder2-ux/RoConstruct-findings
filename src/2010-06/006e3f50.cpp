// from server: 100% by auto
// roc 2010-06 006e3f50  unit: RBX::VLuaDragger::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e3f50
//
// 006e3f50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e3f54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e3f58  56                   push esi
// 006e3f59  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e3f5d  3bce                 cmp ecx, esi
// 006e3f5f  742a                 je 0x6e3f8b
// 006e3f61  57                   push edi
// 006e3f62  85c0                 test eax, eax
// 006e3f64  741a                 je 0x6e3f80
// 006e3f66  8b11                 mov edx, dword ptr [ecx]
// 006e3f68  8910                 mov dword ptr [eax], edx
// 006e3f6a  8b5104               mov edx, dword ptr [ecx + 4]
// 006e3f6d  895004               mov dword ptr [eax + 4], edx
// 006e3f70  85d2                 test edx, edx
// 006e3f72  740c                 je 0x6e3f80
// 006e3f74  83c208               add edx, 8
// 006e3f77  bf01000000           mov edi, 1
// 006e3f7c  f00fc13a             lock xadd dword ptr [edx], edi
// 006e3f80  83c108               add ecx, 8
// 006e3f83  83c008               add eax, 8
// 006e3f86  3bce                 cmp ecx, esi
// 006e3f88  75d8                 jne 0x6e3f62
// 006e3f8a  5f                   pop edi
// 006e3f8b  5e                   pop esi
// 006e3f8c  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
