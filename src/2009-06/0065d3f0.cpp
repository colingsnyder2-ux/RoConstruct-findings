// from server: 100% by auto
// roc 2009-06 0065d3f0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d3f0
//
// 0065d3f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065d3f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065d3f8  56                   push esi
// 0065d3f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d3fd  3bce                 cmp ecx, esi
// 0065d3ff  742a                 je 0x65d42b
// 0065d401  57                   push edi
// 0065d402  85c0                 test eax, eax
// 0065d404  741a                 je 0x65d420
// 0065d406  8b11                 mov edx, dword ptr [ecx]
// 0065d408  8910                 mov dword ptr [eax], edx
// 0065d40a  8b5104               mov edx, dword ptr [ecx + 4]
// 0065d40d  895004               mov dword ptr [eax + 4], edx
// 0065d410  85d2                 test edx, edx
// 0065d412  740c                 je 0x65d420
// 0065d414  83c208               add edx, 8
// 0065d417  bf01000000           mov edi, 1
// 0065d41c  f00fc13a             lock xadd dword ptr [edx], edi
// 0065d420  83c108               add ecx, 8
// 0065d423  83c008               add eax, 8
// 0065d426  3bce                 cmp ecx, esi
// 0065d428  75d8                 jne 0x65d402
// 0065d42a  5f                   pop edi
// 0065d42b  5e                   pop esi
// 0065d42c  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Uninit_copy@PBV?$weak_ptr@UT@@@boost@@PAV12@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@YAPAV?$weak_ptr@UT@@@boost@@PBV12@0PAV12@AAV?$allocator@V?$weak_ptr@UT@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
