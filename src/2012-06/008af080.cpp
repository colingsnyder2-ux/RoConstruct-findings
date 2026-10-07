// roc 2012-06 008af080  unit: RBX::Flag  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af080
//
// 008af080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008af084  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008af088  56                   push esi
// 008af089  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008af08d  3bce                 cmp ecx, esi
// 008af08f  742a                 je 0x8af0bb
// 008af091  57                   push edi
// 008af092  85c0                 test eax, eax
// 008af094  741a                 je 0x8af0b0
// 008af096  8b11                 mov edx, dword ptr [ecx]
// 008af098  8910                 mov dword ptr [eax], edx
// 008af09a  8b5104               mov edx, dword ptr [ecx + 4]
// 008af09d  895004               mov dword ptr [eax + 4], edx
// 008af0a0  85d2                 test edx, edx
// 008af0a2  740c                 je 0x8af0b0
// 008af0a4  83c208               add edx, 8
// 008af0a7  bf01000000           mov edi, 1
// 008af0ac  f00fc13a             lock xadd dword ptr [edx], edi
// 008af0b0  83c108               add ecx, 8
// 008af0b3  83c008               add eax, 8
// 008af0b6  3bce                 cmp ecx, esi
// 008af0b8  75d8                 jne 0x8af092
// 008af0ba  5f                   pop edi
// 008af0bb  5e                   pop esi
// 008af0bc  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
